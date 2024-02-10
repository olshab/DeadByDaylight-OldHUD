#pragma once

#include "CoreMinimal.h"
#include "CharacterTool.h"
#include "ScreenshotTool.generated.h"

UCLASS()
class AScreenshotTool : public ACharacterTool
{
	GENERATED_BODY()

public:
	AScreenshotTool();
};

FORCEINLINE uint32 GetTypeHash(const AScreenshotTool) { return 0; }
