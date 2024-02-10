#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "TrailOfTorment.generated.h"

class UStatusEffect;
class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTrailOfTorment : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _trailOfTormentEffect;

private:
	UPROPERTY(EditDefaultsOnly)
	float _cooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	int32 _highlightPriority;

	UPROPERTY(ReplicatedUsing=OnRep_HighlightGenerator, Transient)
	AGenerator* _highlightedGenerator;

	UPROPERTY(Transient, Export)
	UStatusEffect* _statusEffect;

private:
	UFUNCTION()
	void OnRep_HighlightGenerator(const AGenerator* oldHighlightedGenerator) const;

public:
	UFUNCTION(BlueprintPure)
	float GetCooldownDurationAtLevel() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTrailOfTorment();
};

FORCEINLINE uint32 GetTypeHash(const UTrailOfTorment) { return 0; }
