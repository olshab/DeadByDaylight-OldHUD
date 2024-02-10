#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MultipleLightsFader.generated.h"

class ULightComponent;

UCLASS(Abstract)
class AMultipleLightsFader : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Export)
	TArray<ULightComponent*> _affectedLights;

	UPROPERTY(BlueprintReadOnly)
	TArray<float> _lightOriginalIntensities;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _timeMultiplier;

public:
	UFUNCTION(BlueprintCallable)
	void SetAffectedLights(const TArray<ULightComponent*>& affectedLights);

public:
	AMultipleLightsFader();
};

FORCEINLINE uint32 GetTypeHash(const AMultipleLightsFader) { return 0; }
