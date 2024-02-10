#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponentToAddInfo.h"
#include "SpecialEventPlayerComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API USpecialEventPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FComponentToAddInfo> _componentsAddToSurvivor;

	UPROPERTY(EditDefaultsOnly)
	TArray<FComponentToAddInfo> _componentsAddToKiller;

public:
	USpecialEventPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USpecialEventPlayerComponent) { return 0; }
