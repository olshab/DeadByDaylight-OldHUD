#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "DBDTunableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "SteamPipeResetSwitch.generated.h"

class UDBDSkeletalMeshComponentBudgeted;
class USteamPipeManagerComponent;
class UChargeableComponent;

UCLASS()
class DBDGAMEPLAY_API ASteamPipeResetSwitch : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDBDTunableRowHandle _resetSoundDistance;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USteamPipeManagerComponent> _managerComponentClass;

	UPROPERTY(ReplicatedUsing=OnRep_SharedChargeableComponent, Export)
	UChargeableComponent* _sharedChargeableComponent;

	UPROPERTY(ReplicatedUsing=OnRep_IsOnCooldown)
	bool _isOnCooldown;

	UPROPERTY(ReplicatedUsing=OnRep_NumberOfDisabledSteamPipes)
	int32 _numberOfDisabledSteamPipes;

	UPROPERTY()
	int32 _totalSteamPipesInLevel;

	UPROPERTY(Transient, Export)
	TWeakObjectPtr<USteamPipeManagerComponent> _steamPipeManagerComponent;

	UPROPERTY(Replicated)
	bool _canUseResetSwitch;

private:
	UFUNCTION()
	void OnRep_SharedChargeableComponent();

	UFUNCTION()
	void OnRep_NumberOfDisabledSteamPipes();

	UFUNCTION()
	void OnRep_IsOnCooldown();

public:
	UFUNCTION(BlueprintPure)
	int32 GetTotalSteamPipesInLevel() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTotalSteamPipesInLevelChanged(const int32 totalSteamPipesInLevel);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSwitchTriggered(float cooldownTime);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCooldownDone();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_NumberOfDisabledSteamPipesChanged(const int32 numberOfDisabledSteamPipes);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASteamPipeResetSwitch();
};

FORCEINLINE uint32 GetTypeHash(const ASteamPipeResetSwitch) { return 0; }
