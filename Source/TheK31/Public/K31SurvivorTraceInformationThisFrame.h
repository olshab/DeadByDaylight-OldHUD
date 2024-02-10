#pragma once

#include "CoreMinimal.h"
#include "K31SurvivorTraceInformationThisFrame.generated.h"

USTRUCT()
struct FK31SurvivorTraceInformationThisFrame
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	int32 TotalTraces;

	UPROPERTY(Transient)
	int32 CompletedTraces;

	UPROPERTY(Transient)
	int32 CompletedTracesWithLoS;

public:
	THEK31_API FK31SurvivorTraceInformationThisFrame();
};

FORCEINLINE uint32 GetTypeHash(const FK31SurvivorTraceInformationThisFrame) { return 0; }
