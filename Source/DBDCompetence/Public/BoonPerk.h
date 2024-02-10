#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TotemBoundPerk.h"
#include "BoonPerk.generated.h"

class UBlessedStatusEffect;
class ACamperPlayer;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBoonPerk : public UTotemBoundPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UBlessedStatusEffect> _blessedStatusEffectClass;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UBlessedStatusEffect* _blessedStatusEffect;

private:
	UFUNCTION()
	void Authority_OnSurvivorRemoved(ACamperPlayer* survivor);

public:
	UBoonPerk();
};

FORCEINLINE uint32 GetTypeHash(const UBoonPerk) { return 0; }
