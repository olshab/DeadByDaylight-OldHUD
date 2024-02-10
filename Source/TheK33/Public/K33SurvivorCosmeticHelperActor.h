#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "UObject/NoExportTypes.h"
#include "K33SurvivorCosmeticHelperActor.generated.h"

class AK33Turret;

UCLASS()
class AK33SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	AK33Turret* GetCarriedTurret() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateTurretLaserPlacement(const FVector& placementLocation, const FRotator& placementRotation);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretPlacementVisualFeedbackActivationChanged(const bool activated, const bool isPlacementValid);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretPlacementValidityChanged(const bool isPlacementValid);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_InitializeTurretPlacementVisualFeedback(const FName& socketName);

public:
	AK33SurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK33SurvivorCosmeticHelperActor) { return 0; }
