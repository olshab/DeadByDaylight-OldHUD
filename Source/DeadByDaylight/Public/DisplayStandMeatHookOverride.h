#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "EDisplayStandMeatHookOverrideType.h"
#include "DisplayStandMeatHookOverride.generated.h"

class AMenuMeatHook;

USTRUCT()
struct FDisplayStandMeatHookOverride: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString OverrideId;

	UPROPERTY(EditAnywhere)
	EDisplayStandMeatHookOverrideType OverrideType;

	UPROPERTY(EditAnywhere)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere)
	FName EventName;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<AMenuMeatHook> HookToUse;

public:
	DEADBYDAYLIGHT_API FDisplayStandMeatHookOverride();
};

FORCEINLINE uint32 GetTypeHash(const FDisplayStandMeatHookOverride) { return 0; }
