#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "UObject/SoftObjectPtr.h"
#include "Templates/SubclassOf.h"
#include "ELeanState.h"
#include "GhostStalkPowerComponent.generated.h"

class UStalkerComponent;
class UStatusEffect;
class UGhostStalkedComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEGHOSTFACE_API UGhostStalkPowerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UStalkerComponent* _stalkerComponent;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UGhostStalkedComponent> _ghostStalkedComponentClassPtr;

	UPROPERTY(EditAnywhere)
	float _crouchAttackRequiredTimeSeconds;

	UPROPERTY(EditAnywhere)
	bool _debugMode;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _ghostStalkSpeedStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxStalkPointsPerSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _survivorMaximumSightDistance;

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void RefreshSurvivorMaximumSightDistance() const;

private:
	UFUNCTION()
	void OnLeanStateChanged(ELeanState leanState);

	UFUNCTION()
	void OnIsCrouchedChanged(bool isCrouched);

	UFUNCTION()
	void Authority_OnStalkModeChanged(bool isInStalkMode);

public:
	UGhostStalkPowerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGhostStalkPowerComponent) { return 0; }
