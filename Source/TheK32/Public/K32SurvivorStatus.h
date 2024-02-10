#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32SurvivorStatus.generated.h"

class ACamperPlayer;

USTRUCT()
struct FK32SurvivorStatus
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	ACamperPlayer* OwningSurvivor;

	UPROPERTY(Transient)
	bool IsAssimilated;

	UPROPERTY(Transient)
	TArray<FVector> RecentLocations;

	UPROPERTY(NotReplicated, Transient)
	TMap<ACamperPlayer*, float> Authority_CrossAssimilationStartedTime;

	UPROPERTY(NotReplicated, Transient)
	bool Authority_IsBeingCrossAssimilated;

	UPROPERTY(NotReplicated, Transient)
	bool Authority_CanBeAffectedByPower;

	UPROPERTY(NotReplicated, Transient)
	float Authority_LastTimeCanBeAffectedByPowerEnabled;

public:
	THEK32_API FK32SurvivorStatus();
};

FORCEINLINE uint32 GetTypeHash(const FK32SurvivorStatus) { return 0; }
