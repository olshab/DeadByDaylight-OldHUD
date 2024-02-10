#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDirectionalInputKey.h"
#include "EDirectionalMinigameResult.h"
#include "DirectionalMinigameSurvivorComponent.generated.h"

class UDirectionalMinigameComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDirectionalMinigameSurvivorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(Server, Reliable)
	void Server_EnterKey(UDirectionalMinigameComponent* directionalMinigame, EDirectionalInputKey key);

	UFUNCTION(Server, Reliable)
	void Server_CancelMinigame(UDirectionalMinigameComponent* directionalMinigame);

	UFUNCTION(Client, Reliable)
	void Client_StopInteraction(UDirectionalMinigameComponent* directionalMinigame, EDirectionalMinigameResult result);

public:
	UDirectionalMinigameSurvivorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDirectionalMinigameSurvivorComponent) { return 0; }
