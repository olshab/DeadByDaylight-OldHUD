#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31PowerCosmeticHelper.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31PowerCosmeticHelper : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_IsOnPowerCooldownUpdatedEvent(bool isPowerOnCooldown);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DoesRadarDetectAnySurvivorsUpdatedEvent(bool doesRadarDetectAnySurvivors);

public:
	UK31PowerCosmeticHelper();
};

FORCEINLINE uint32 GetTypeHash(const UK31PowerCosmeticHelper) { return 0; }
