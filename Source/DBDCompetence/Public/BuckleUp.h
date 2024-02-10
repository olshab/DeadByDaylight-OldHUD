#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "BuckleUp.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBuckleUp : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _perkDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealKillerStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _enduranceStatusEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkDurationAtLevel() const;

public:
	UBuckleUp();
};

FORCEINLINE uint32 GetTypeHash(const UBuckleUp) { return 0; }
