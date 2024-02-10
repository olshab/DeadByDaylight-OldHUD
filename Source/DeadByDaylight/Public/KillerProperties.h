#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayElementSubstitutions.h"
#include "EKillerAbilities.h"
#include "KillerProperties.generated.h"

USTRUCT(BlueprintType)
struct FKillerProperties: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerAbilities KillerAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayElementSubstitutions> SubstitutionElements;

public:
	DEADBYDAYLIGHT_API FKillerProperties();
};

FORCEINLINE uint32 GetTypeHash(const FKillerProperties) { return 0; }
