#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "K32StatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UK32StatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAssimilated;

public:
	UK32StatusData();
};

FORCEINLINE uint32 GetTypeHash(const UK32StatusData) { return 0; }
