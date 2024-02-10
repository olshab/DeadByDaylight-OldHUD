#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FrameHikeMonitor.generated.h"

UCLASS()
class TICKUTILITIES_API UFrameHikeMonitor : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFrameHikeMonitor();
};

FORCEINLINE uint32 GetTypeHash(const UFrameHikeMonitor) { return 0; }
