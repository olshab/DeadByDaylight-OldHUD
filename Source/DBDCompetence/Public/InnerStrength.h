#pragma once

#include "CoreMinimal.h"
#include "PerkUtilitiesInterface.h"
#include "EImmobilizedState.h"
#include "Perk.h"
#include "InnerStrength.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UInnerStrength : public UPerk, public IPerkUtilitiesInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _hideDuration;

private:
	UFUNCTION(BlueprintPure)
	float GetHideDuration() const;

	UFUNCTION()
	void Authority_OnPlayerImmobilizeStateChanged(const EImmobilizedState oldImmobilizeState, const EImmobilizedState newImmobilizeState);

public:
	UInnerStrength();
};

FORCEINLINE uint32 GetTypeHash(const UInnerStrength) { return 0; }
