#pragma once

#include "CoreMinimal.h"
#include "KillerVaultDefinition.h"
#include "K29KillerVaultInteractionDefinition.generated.h"

class AActor;
class ACamperPlayer;
class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29KillerVaultInteractionDefinition : public UKillerVaultDefinition
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	bool IsVaultingToLeftSide(AActor* killer) const;

	UFUNCTION(BlueprintPure)
	TArray<ACamperPlayer*> GetOverlappingSurvivorsOnSide(bool isUsingLeftSide) const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetClosestSurvivorToPalletFromOverlap(const ADBDPlayer* player, const TArray<ACamperPlayer*>& survivorsOnSide) const;

public:
	UK29KillerVaultInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK29KillerVaultInteractionDefinition) { return 0; }
