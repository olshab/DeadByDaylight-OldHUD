#pragma once

#include "CoreMinimal.h"
#include "GameplayMutator.h"
#include "HideHUDGameplayMutator.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHideHUDGameplayMutator : public UGameplayMutator
{
	GENERATED_BODY()

public:
	UHideHUDGameplayMutator();
};

FORCEINLINE uint32 GetTypeHash(const UHideHUDGameplayMutator) { return 0; }
