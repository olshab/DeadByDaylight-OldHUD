#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SecondaryInteractionProperties.h"
#include "RepressedAlliance.generated.h"

class AGenerator;
class UInteractionDefinition;

UCLASS(meta=(BlueprintSpawnableComponent))
class URepressedAlliance : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _repairTimesNeededToActivate;

	UPROPERTY(EditDefaultsOnly)
	float _generatorBlockDuration;

	UPROPERTY(EditDefaultsOnly)
	FSecondaryInteractionProperties _secondaryActionProperties;

	UPROPERTY(ReplicatedUsing=OnRep_CurrentRepairInteractionWithAbility, Transient, Export)
	UInteractionDefinition* _currentRepairInteractionWithAbility;

	UPROPERTY(ReplicatedUsing=OnRep_BlockedGenerator, Transient)
	AGenerator* _blockedGenerator;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_OnActionInputPressed(AGenerator* generator);

	UFUNCTION()
	void OnRep_CurrentRepairInteractionWithAbility(UInteractionDefinition* oldRepairInteraction);

	UFUNCTION()
	void OnRep_BlockedGenerator(AGenerator* oldGenerator);

	UFUNCTION(BlueprintPure)
	float GetRepairTimesNeededToActivateAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetGeneratorBlockDuration() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	URepressedAlliance();
};

FORCEINLINE uint32 GetTypeHash(const URepressedAlliance) { return 0; }
