#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GenericTeamAgentInterface.h"
#include "AIUnclearNoiseEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAIUnclearNoiseEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector NoiseLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Loudness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Instigator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Tag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGenericTeamId TeamIdentifier;

public:
	DEADBYDAYLIGHT_API FAIUnclearNoiseEvent();
};

FORCEINLINE uint32 GetTypeHash(const FAIUnclearNoiseEvent) { return 0; }
