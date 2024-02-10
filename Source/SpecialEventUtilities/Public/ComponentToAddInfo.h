#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ComponentToAddInfo.generated.h"

class UActorComponent;

USTRUCT()
struct FComponentToAddInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UActorComponent> Component;

	UPROPERTY(EditDefaultsOnly)
	FName Name;

public:
	SPECIALEVENTUTILITIES_API FComponentToAddInfo();
};

FORCEINLINE uint32 GetTypeHash(const FComponentToAddInfo) { return 0; }
