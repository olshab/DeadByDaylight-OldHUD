#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETrapBombState.h"
#include "TrapChemicalBomb.generated.h"

class APallet;
class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API ATrapChemicalBomb : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_CurrentState)
	ETrapBombState _currentState;

	UPROPERTY(Transient)
	ADBDPlayer* _trapPlacer;

	UPROPERTY(Transient)
	APallet* _placedPallet;

private:
	UFUNCTION()
	void OnRep_CurrentState();

public:
	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetTrapPlacer() const;

	UFUNCTION(BlueprintPure)
	ETrapBombState GetState() const;

	UFUNCTION(BlueprintPure)
	APallet* GetPallet() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ATrapChemicalBomb();
};

FORCEINLINE uint32 GetTypeHash(const ATrapChemicalBomb) { return 0; }
