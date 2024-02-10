#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "K31StatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UK31StatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EffectProgressPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsClawTrapped;

public:
	UK31StatusData();
};

FORCEINLINE uint32 GetTypeHash(const UK31StatusData) { return 0; }
