#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.generated.h"

USTRUCT(BlueprintType)
struct FAITunableParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float DefaultValue;

	UPROPERTY(EditAnywhere)
	FName TunableName;

public:
	DEADBYDAYLIGHT_API FAITunableParameter();
};

FORCEINLINE uint32 GetTypeHash(const FAITunableParameter) { return 0; }
