#pragma once

#include "CoreMinimal.h"
#include "EDirection.h"
#include "BorderElements2.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBorderElements2
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDirection Direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> Elements;

public:
	DEADBYDAYLIGHT_API FBorderElements2();
};

FORCEINLINE uint32 GetTypeHash(const FBorderElements2) { return 0; }
