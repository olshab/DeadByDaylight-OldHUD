#pragma once

#include "CoreMinimal.h"
#include "K31DroneActionRequest.h"
#include "EK31DroneActionResponse.h"
#include "K31DroneActionResponse.generated.h"

USTRUCT()
struct FK31DroneActionResponse
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FK31DroneActionRequest Request;

	UPROPERTY()
	float Timestamp;

	UPROPERTY()
	EK31DroneActionResponse Response;

public:
	THEK31_API FK31DroneActionResponse();
};

FORCEINLINE uint32 GetTypeHash(const FK31DroneActionResponse) { return 0; }
