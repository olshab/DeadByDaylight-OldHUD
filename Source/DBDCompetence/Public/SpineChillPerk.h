#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "SpineChillPerk.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class USpineChillPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _spineChillEffectClass;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _actionSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _lingerDuration;

	UPROPERTY(EditDefaultsOnly)
	float _range;

	UPROPERTY(EditDefaultsOnly)
	float _precisionAngleDegrees;

	UPROPERTY(Replicated)
	bool _isInRange;

public:
	UFUNCTION(BlueprintPure)
	bool IsLookingTowards() const;

	UFUNCTION(BlueprintPure)
	bool IsInRange() const;

	UFUNCTION(BlueprintPure)
	bool HasLineOfSight() const;

	UFUNCTION(BlueprintPure)
	float GetRange() const;

	UFUNCTION(BlueprintPure)
	float GetLingerDuration() const;

private:
	UFUNCTION()
	void Authority_OnIsLookingTowardsChanged(const bool isLookingTowards);

	UFUNCTION()
	void Authority_OnIsInLineOfSightChanged(const bool isInLineOfSight);

	UFUNCTION()
	void Authority_OnInRangeChanged(const bool inRange);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USpineChillPerk();
};

FORCEINLINE uint32 GetTypeHash(const USpineChillPerk) { return 0; }
