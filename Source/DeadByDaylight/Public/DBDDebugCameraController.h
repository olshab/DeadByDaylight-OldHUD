#pragma once

#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "DBDDebugCameraController.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDDebugCameraController : public ADebugCameraController
{
	GENERATED_BODY()

public:
	ADBDDebugCameraController();
};

FORCEINLINE uint32 GetTypeHash(const ADBDDebugCameraController) { return 0; }
