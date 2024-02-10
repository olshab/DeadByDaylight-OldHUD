#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "Tile2DataRetrievalSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UTile2DataRetrievalSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()

public:
	UTile2DataRetrievalSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UTile2DataRetrievalSubsystem) { return 0; }
