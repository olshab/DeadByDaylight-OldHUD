#pragma once

#include "CoreMinimal.h"
#include "ForAllSurvivorsStatusEffectImposer.h"
#include "Perk.h"
#include "NurseCalling.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UNurseCalling : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _auraRevealDistance;

	UPROPERTY(EditDefaultsOnly)
	FForAllSurvivorsStatusEffectImposer _nurseCallingEffectImposer;

public:
	UNurseCalling();
};

FORCEINLINE uint32 GetTypeHash(const UNurseCalling) { return 0; }
