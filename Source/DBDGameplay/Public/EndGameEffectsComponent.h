#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "EndGameEffectsComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UEndGameEffectsComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite)
	bool _hasEndGameBegun;

	UPROPERTY(BlueprintReadWrite)
	bool _playCameraShakeOnce;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UnregisterLocallyObservedEvents();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StartUpdateTimer(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RegisterLocallyObservedEvents();

	UFUNCTION(BlueprintImplementableEvent)
	void OnLocallyObservedChanged(ADBDPlayer* player);

public:
	UEndGameEffectsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEndGameEffectsComponent) { return 0; }
