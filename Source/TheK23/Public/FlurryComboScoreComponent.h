#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "FlurryComboScoreComponent.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UFlurryComboScoreComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_ComboScore)
	float _comboScore;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeAddedByComboRank;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _timeForCombo;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _consecutiveHitsRequiredScore;

	UPROPERTY(EditDefaultsOnly)
	TArray<float> _thresholds;

	UPROPERTY(EditDefaultsOnly)
	TArray<float> _thresholdsScoreForAudio;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _comboScoreEvents;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _comboExtendSuperModeStatusEffectClass;

private:
	UFUNCTION()
	void OnRep_ComboScore() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFlurryComboScoreComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFlurryComboScoreComponent) { return 0; }
