#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "EInventoryType.h"
#include "Templates/SubclassOf.h"
#include "CharacterInventoryComponent.generated.h"

class ACollectable;
class UItemAddon;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCharacterInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _tagsPreventingItemVisibility;

private:
	UPROPERTY(ReplicatedUsing=OnRep_Inventory, Transient)
	TArray<ACollectable*> _inventory;

	UPROPERTY(ReplicatedUsing=OnRep_GeneralAddons, Transient, Export)
	TArray<UItemAddon*> _generalAddons;

	UPROPERTY(ReplicatedUsing=OnRep_BackpackInventory, Transient)
	TArray<ACollectable*> _backpackInventory;

	UPROPERTY(Transient)
	TArray<ACollectable*> _localInventory;

	UPROPERTY(Transient)
	TArray<ACollectable*> _localBackpackInventory;

	UPROPERTY(Transient, Export)
	TArray<UItemAddon*> _allAddons;

public:
	UFUNCTION(BlueprintCallable)
	void StoreItem();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	ACollectable* SpawnAndCollectItem(FName itemID);

private:
	UFUNCTION()
	void OnRep_Inventory();

	UFUNCTION()
	void OnRep_GeneralAddons();

	UFUNCTION()
	void OnRep_BackpackInventory();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RemoveFromInventory(ACollectable* item, EInventoryType inventoryType);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_MoveItemToOtherSlot(ACollectable* itemBeingMoved, EInventoryType targetInventoryType);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ClearAndDestroyInventory();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_AddToInventory(ACollectable* item, EInventoryType inventoryType);

public:
	UFUNCTION(BlueprintPure)
	bool IsUsingAimItem() const;

	UFUNCTION(BlueprintPure)
	bool HasStoredItem() const;

	UFUNCTION(BlueprintPure)
	bool HasMaximumItemCount(const ACollectable* item) const;

	UFUNCTION(BlueprintPure)
	bool HasItem(EInventoryType inventoryType) const;

	UFUNCTION(BlueprintPure)
	bool HasInInventory(TSubclassOf<ACollectable> item, EInventoryType inventoryType);

	UFUNCTION(BlueprintPure)
	bool HasEquippedItem() const;

	UFUNCTION(BlueprintPure)
	FName GetItemID(EInventoryType inventoryType) const;

	UFUNCTION(BlueprintPure)
	int32 GetItemCountByID(FName itemID) const;

	UFUNCTION(BlueprintPure)
	int32 GetItemCount() const;

	UFUNCTION(BlueprintPure)
	ACollectable* GetItem(EInventoryType inventoryType) const;

	UFUNCTION(BlueprintPure)
	ACollectable* GetFirstItemFromInventory(TSubclassOf<ACollectable> item, EInventoryType inventoryType);

	UFUNCTION(BlueprintCallable)
	TArray<UItemAddon*> GetAddons();

	UFUNCTION(BlueprintCallable)
	UItemAddon* GetAddon(FName addonId);

	UFUNCTION(BlueprintCallable)
	void EquipItem();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_UseInventoryItem();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RemoveFromInventory(ACollectable* item, EInventoryType inventoryType);

	UFUNCTION(BlueprintCallable)
	void Authority_Collect(ACollectable* item, EInventoryType inventoryType);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ClearAndDestroyInventory();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddToInventory(ACollectable* item, EInventoryType inventoryType);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCharacterInventoryComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterInventoryComponent) { return 0; }
