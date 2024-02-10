#pragma once

#include "CoreMinimal.h"
#include "ECharacterCameraViewType.h"
#include "CharacterViewTarget.generated.h"

USTRUCT()
struct FCharacterViewTarget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	ECharacterCameraViewType Type;

	UPROPERTY(EditAnywhere)
	FString RawData;

public:
	DEADBYDAYLIGHT_API FCharacterViewTarget();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterViewTarget) { return 0; }
