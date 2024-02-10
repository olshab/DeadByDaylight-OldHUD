#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "StandDisplayable.h"
#include "ECustomizationCategory.h"
#include "DBDBasePlayer.h"
#include "CharmAttachable.h"
#include "OnItemEquipped.h"
#include "EItemHandPosition.h"
#include "EGameFlowStep.h"
#include "DBDMenuPlayer.generated.h"

class UAnimInstance;
class ADBDMenuPlayer;
class UCharmSpawnerComponent;
class UMaterialInterface;
class UCustomizedSkeletalMesh;
class UDBDSkeletalMeshComponentBudgeted;
class UMaterialHelper;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API ADBDMenuPlayer : public ADBDBasePlayer, public IStandDisplayable, public ICharmAttachable
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool RoleSelected;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool IsOnline;

	UPROPERTY(BlueprintAssignable)
	FOnItemEquipped OnItemEquipped;

protected:
	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<UAnimInstance> MoriPreviewAnimClass;

private:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UMaterialInterface> DarkMaterial;

	UPROPERTY()
	EItemHandPosition _handPosition;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* ItemMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMaterialHelper* MaterialHelper;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UCustomizedSkeletalMesh* _customizedSkeletalMeshComponent;

	UPROPERTY()
	FName _equippedItemName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _blockRotationDuringSpawnAnimationDuration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _isLocalPlayerCharacter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _isReady;

private:
	UFUNCTION()
	void WrappedOnDestroyed(AActor* DestroyedActor);

public:
	UFUNCTION(BlueprintPure)
	bool ShouldShowSpawnAnimation() const;

	UFUNCTION(BlueprintPure)
	bool ShouldApplyPositionOffset() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void RestartInSequence_Internal();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void PlayCharacterLevelUpVFX();

	UFUNCTION(BlueprintImplementableEvent)
	void OnPlayerMaxPrestige();

	UFUNCTION(BlueprintImplementableEvent)
	void OnLocalPlayerSpawned();

	UFUNCTION(BlueprintImplementableEvent)
	void OnLocalPlayerReadyChanged(bool isReady);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnIsReadyChanged(bool isReady);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnGuestPlayerSpawned(ADBDMenuPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnGuestPlayerReadyChanged(ADBDMenuPlayer* player, bool isReady);

	UFUNCTION(BlueprintImplementableEvent)
	void OnGuestPlayerDespawned(ADBDMenuPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnCustomizationTransactionCompleted(ECustomizationCategory category);

	UFUNCTION(BlueprintImplementableEvent)
	void OnAllPlayersReadyInOnlineLobby();

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	bool IsInMenuPlayer();

	UFUNCTION(BlueprintCallable)
	bool HasSameCharacterInLobby();

	UFUNCTION(BlueprintPure)
	bool GetIsReady() const;

	UFUNCTION(BlueprintPure)
	bool GetIsLocalPlayerCharacter() const;

	UFUNCTION(BlueprintPure)
	EItemHandPosition GetHandPosition() const;

protected:
	UFUNCTION(BlueprintPure)
	EGameFlowStep GetCurrentMenu() const;

	UFUNCTION(BlueprintNativeEvent)
	UCharmSpawnerComponent* GetCharmSpawnerComponent();

public:
	UFUNCTION(BlueprintPure)
	float GetBlockRotationAfterSpawningTime() const;

	UFUNCTION(BlueprintCallable)
	void BlockCharacterRotation(bool shouldBlock);

protected:
	UFUNCTION(BlueprintNativeEvent)
	void BeginDestroySequence_Internal();

	UFUNCTION(BlueprintImplementableEvent)
	void BeginCreateSequence();

public:
	ADBDMenuPlayer();
};

FORCEINLINE uint32 GetTypeHash(const ADBDMenuPlayer) { return 0; }
