#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Fixated.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UFixated : public UPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _fixatedStatusEffect;

public:
	UFixated();
};

FORCEINLINE uint32 GetTypeHash(const UFixated) { return 0; }
