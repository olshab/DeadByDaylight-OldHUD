#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K31P01.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _hasteEffectMovementSpeedIncrease;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _hasteEffectDurationSeconds;

	UPROPERTY(Transient, Export)
	UStatusEffect* _authority_hasteStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hasteEffectClass;

	UPROPERTY(Replicated)
	bool _isPerkActive;

public:
	UFUNCTION(BlueprintPure)
	float GetHasteEffectMovementSpeedIncrease() const;

	UFUNCTION(BlueprintPure)
	float GetHasteEffectDurationAtLevel() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31P01();
};

FORCEINLINE uint32 GetTypeHash(const UK31P01) { return 0; }
