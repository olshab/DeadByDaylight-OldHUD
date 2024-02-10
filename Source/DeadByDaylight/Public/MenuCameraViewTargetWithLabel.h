#pragma once

#include "CoreMinimal.h"
#include "CharacterViewTarget.h"
#include "MenuCameraViewTargetWithLabel.generated.h"

USTRUCT()
struct FMenuCameraViewTargetWithLabel
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FCharacterViewTarget Dropdown;

public:
	DEADBYDAYLIGHT_API FMenuCameraViewTargetWithLabel();
};

FORCEINLINE uint32 GetTypeHash(const FMenuCameraViewTargetWithLabel) { return 0; }
