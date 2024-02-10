#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimationDropdown.h"
#include "CharacterRoleAnimation.generated.h"

USTRUCT()
struct FCharacterRoleAnimation
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FCharacterAnimationDropdown Data;

public:
	DEADBYDAYLIGHT_API FCharacterRoleAnimation();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterRoleAnimation) { return 0; }
