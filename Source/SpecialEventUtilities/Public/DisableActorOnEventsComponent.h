#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "DisableActorOnEventsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDisableActorOnEventsComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _triggerEvents;

public:
	UDisableActorOnEventsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDisableActorOnEventsComponent) { return 0; }
