#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "WormholeFatherHackableActor.generated.h"

class UWormholeFatherHackingComponent;

UCLASS()
class AWormholeFatherHackableActor : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FGameplayTagContainer _hackedGameEvents;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UWormholeFatherHackingComponent* _hackingComponent;

protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnHackedEvent(const FGameplayTag gameEvent, const FGameEventData& gameEventData);

public:
	AWormholeFatherHackableActor();
};

FORCEINLINE uint32 GetTypeHash(const AWormholeFatherHackableActor) { return 0; }
