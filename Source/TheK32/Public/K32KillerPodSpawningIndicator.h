#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K32KillerPodSpawningIndicatorSettings.h"
#include "K32KillerPodSpawningIndicator.generated.h"

UCLASS()
class AK32KillerPodSpawningIndicator : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FK32KillerPodSpawningIndicatorSettings _settings;

protected:
	UFUNCTION(BlueprintPure)
	FK32KillerPodSpawningIndicatorSettings GetSettings() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSettingsChanged(FK32KillerPodSpawningIndicatorSettings previousSettings, FK32KillerPodSpawningIndicatorSettings settings);

public:
	AK32KillerPodSpawningIndicator();
};

FORCEINLINE uint32 GetTypeHash(const AK32KillerPodSpawningIndicator) { return 0; }
