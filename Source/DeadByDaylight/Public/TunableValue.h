#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowBase.h"
#include "TunableValue.generated.h"

USTRUCT(BlueprintType)
struct FTunableValue: public FDBDTunableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

public:
	DEADBYDAYLIGHT_API FTunableValue();
};

FORCEINLINE uint32 GetTypeHash(const FTunableValue) { return 0; }
