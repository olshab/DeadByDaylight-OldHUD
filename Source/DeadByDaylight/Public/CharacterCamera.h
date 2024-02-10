#pragma once

#include "CoreMinimal.h"
#include "SimpleCharacterDropdown.h"
#include "CharacterCamera.generated.h"

USTRUCT(BlueprintType)
struct FCharacterCamera
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FSimpleCharacterDropdown Data;

public:
	DEADBYDAYLIGHT_API FCharacterCamera();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCamera) { return 0; }
