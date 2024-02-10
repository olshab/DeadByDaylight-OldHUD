#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LullabyKillerData.generated.h"

USTRUCT()
struct FLullabyKillerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag KillerPresenceTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag KillerLullabyActivationState;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag SurvivorLullabyActivationState;

	UPROPERTY(EditDefaultsOnly)
	float KillerLullabyDistance;

public:
	DBDGAMEPLAY_API FLullabyKillerData();
};

FORCEINLINE uint32 GetTypeHash(const FLullabyKillerData) { return 0; }
