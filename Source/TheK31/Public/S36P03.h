#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S36P03.generated.h"

class ACamperPlayer;
class US36P03Effect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API US36P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsStatusEffectActiveOnOwningSurvivor)
	bool _isStatusEffectActiveOnOwningSurvivor;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _cooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	float _perkRange;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<US36P03Effect> _noScratchMarksEffectClass;

	UPROPERTY(Transient)
	TArray<ACamperPlayer*> _healersAffected;

private:
	UFUNCTION()
	void OnRep_IsStatusEffectActiveOnOwningSurvivor();

public:
	UFUNCTION(BlueprintPure)
	float GetPerkRange() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownDurationAtLevel() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US36P03();
};

FORCEINLINE uint32 GetTypeHash(const US36P03) { return 0; }
