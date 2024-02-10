#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K32KillerPodTargetIndicatorSettings.h"
#include "K32KillerPodTargetIndicator.generated.h"

UCLASS()
class AK32KillerPodTargetIndicator : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FK32KillerPodTargetIndicatorSettings _settings;

protected:
	UFUNCTION(BlueprintPure)
	FK32KillerPodTargetIndicatorSettings GetSettings() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSettingsChanged(FK32KillerPodTargetIndicatorSettings previousSettings, FK32KillerPodTargetIndicatorSettings settings);

public:
	AK32KillerPodTargetIndicator();
};

FORCEINLINE uint32 GetTypeHash(const AK32KillerPodTargetIndicator) { return 0; }
