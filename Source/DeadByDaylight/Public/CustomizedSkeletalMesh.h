#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECustomizationCategory.h"
#include "CosmeticPieceMeshLoadingData.h"
#include "CustomizedSkeletalMesh.generated.h"

class UCustomizedSkeletalMesh;
class USkinnedMeshComponent;
class USkeletalMeshComponent;
class AItemVfx;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCustomizedSkeletalMesh : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMeshSwitchEventBP, ECustomizationCategory, category, USkeletalMeshComponent*, mesh);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCustomizationReadyBP);

public:
	UPROPERTY(BlueprintAssignable)
	FOnMeshSwitchEventBP OnMeshSwitchBP;

	UPROPERTY(BlueprintAssignable)
	FOnCustomizationReadyBP OnCustomizationReady;

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	USkinnedMeshComponent* _meshOwner;

private:
	UPROPERTY(EditDefaultsOnly)
	TSet<ECustomizationCategory> _ignoredItemCategories;

	UPROPERTY(VisibleInstanceOnly, Transient, Export)
	TArray<USkeletalMeshComponent*> _cosmeticPiecesMesh;

	UPROPERTY(Transient, Export)
	TMap<ECustomizationCategory, USkeletalMeshComponent*> _cosmeticPiecesMeshPerCategory;

	UPROPERTY(VisibleInstanceOnly, Transient, Export)
	TArray<USkeletalMeshComponent*> _slaves;

	UPROPERTY(VisibleInstanceOnly, Transient)
	TMap<ECustomizationCategory, AItemVfx*> _itemVfxs;

	UPROPERTY(EditAnywhere)
	int32 _characterIdOverride;

	UPROPERTY()
	TMap<ECustomizationCategory, FCosmeticPieceMeshLoadingData> _cosmeticPieceMeshesBeingLoaded;

public:
	UFUNCTION(BlueprintCallable)
	void SetVfxsVisibility(ECustomizationCategory category, bool visible);

	UFUNCTION(BlueprintCallable)
	void SetMeshVisibility(bool visible);

	UFUNCTION(BlueprintCallable)
	void SetMeshOwner(USkinnedMeshComponent* mesh);

	UFUNCTION(BlueprintCallable)
	void SetCastShadow(bool castShadow);

	UFUNCTION(BlueprintCallable)
	void SetAllVfxsVisibility(bool visible);

	UFUNCTION(BlueprintCallable)
	void SetAllAccessoriesVisibility(bool visible);

	UFUNCTION(BlueprintPure)
	bool HasValidCustomization() const;

	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetSkeletalMesh(ECustomizationCategory category) const;

	UFUNCTION(BlueprintCallable)
	USkinnedMeshComponent* GetMeshOwner();

	UFUNCTION(BlueprintPure)
	TArray<FName> GetCurrentCustomizationItems() const;

	UFUNCTION(BlueprintPure)
	TArray<USkeletalMeshComponent*> GetComponents() const;

	UFUNCTION(BlueprintCallable)
	void CopyCustomization(const UCustomizedSkeletalMesh* copyFrom);

	UFUNCTION(BlueprintPure)
	bool Contains(TArray<FName> itemIds) const;

	UFUNCTION(BlueprintCallable)
	void ClearAllVfxs();

public:
	UCustomizedSkeletalMesh();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizedSkeletalMesh) { return 0; }
