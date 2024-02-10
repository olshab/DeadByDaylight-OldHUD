#pragma once

#include "CoreMinimal.h"
#include "HudEventProgression2023ViewData.generated.h"

USTRUCT(BlueprintType)
struct FHudEventProgression2023ViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInVoidZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsChannelingHaunt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EnergyProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HauntTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInitialized;

public:
	DBDUIVIEWINTERFACES_API FHudEventProgression2023ViewData();
};

FORCEINLINE uint32 GetTypeHash(const FHudEventProgression2023ViewData) { return 0; }
