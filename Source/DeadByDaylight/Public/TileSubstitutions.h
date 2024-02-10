#pragma once

#include "CoreMinimal.h"
#include "SubstitutionElements.h"
#include "TileSubstitutions.generated.h"

USTRUCT(BlueprintType)
struct FTileSubstitutions
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TArray<FSubstitutionElements> _replacements;

public:
	DEADBYDAYLIGHT_API FTileSubstitutions();
};

FORCEINLINE uint32 GetTypeHash(const FTileSubstitutions) { return 0; }
