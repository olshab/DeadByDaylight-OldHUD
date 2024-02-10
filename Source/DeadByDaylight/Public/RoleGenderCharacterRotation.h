#pragma once

#include "CoreMinimal.h"
#include "RoleDropdown.h"
#include "RoleGenderCharacterRotation.generated.h"

USTRUCT(BlueprintType)
struct FRoleGenderCharacterRotation
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FRoleDropdown Role;

	UPROPERTY(EditAnywhere)
	float Rotation;

public:
	DEADBYDAYLIGHT_API FRoleGenderCharacterRotation();
};

FORCEINLINE uint32 GetTypeHash(const FRoleGenderCharacterRotation) { return 0; }
