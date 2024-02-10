#pragma once

#include "CoreMinimal.h"
#include "EBarrelType.h"
#include "BarrelCharmInfo.generated.h"

USTRUCT()
struct FBarrelCharmInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	EBarrelType BarrelType;

	UPROPERTY(Transient)
	FString RewardId;

public:
	BARREL2023_API FBarrelCharmInfo();
};

FORCEINLINE uint32 GetTypeHash(const FBarrelCharmInfo) { return 0; }
