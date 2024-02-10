#pragma once

#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDBaseMatchGameMode.generated.h"

class UEscapeRequirementTracker;
class UEndGameComponent;
class ANetworkFenceActor;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDBaseMatchGameMode : public ADBDBaseGameMode
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Export)
	UEndGameComponent* _endGameComponent;

	UPROPERTY(Transient)
	UEscapeRequirementTracker* _escapeRequirementTracker;

	UPROPERTY(Transient)
	ANetworkFenceActor* _theFence;

public:
	UFUNCTION(BlueprintPure)
	UEndGameComponent* GetEndGameComponent() const;

public:
	ADBDBaseMatchGameMode();
};

FORCEINLINE uint32 GetTypeHash(const ADBDBaseMatchGameMode) { return 0; }
