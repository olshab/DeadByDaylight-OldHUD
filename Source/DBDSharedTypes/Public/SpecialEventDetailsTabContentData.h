#pragma once

#include "CoreMinimal.h"
#include "EPlayerTeam.h"
#include "SpecialEventDetailsTabContentData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventDetailsTabContentData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EPlayerTeam Role;

public:
	DBDSHAREDTYPES_API FSpecialEventDetailsTabContentData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventDetailsTabContentData) { return 0; }
