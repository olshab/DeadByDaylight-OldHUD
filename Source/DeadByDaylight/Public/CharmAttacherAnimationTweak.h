#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "CharmAttacherAnimationTweak.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FCharmAttacherAnimationTweak
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAnimInstance> OverrideAnimInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector AttachPointTranslation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator AttachPointRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ConstraintType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MagicTweakingFloat;

public:
	DEADBYDAYLIGHT_API FCharmAttacherAnimationTweak();
};

FORCEINLINE uint32 GetTypeHash(const FCharmAttacherAnimationTweak) { return 0; }
