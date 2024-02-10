#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "ECamperDamageState.h"
#include "Diversion.generated.h"

class UThrowRockInteraction;
class UInteractionAttacherComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class THESPIRIT_API UDiversion : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _diversionActivationTimePerLevel;

	UPROPERTY(EditDefaultsOnly)
	float _throwPebbleDistance;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UThrowRockInteraction> _throwPebbleInteraction;

	UPROPERTY(Transient, Export)
	UInteractionAttacherComponent* _interactionAttacherComponent;

private:
	UFUNCTION()
	void Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	UDiversion();
};

FORCEINLINE uint32 GetTypeHash(const UDiversion) { return 0; }
