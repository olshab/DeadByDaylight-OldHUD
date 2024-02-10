#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31DroneActionRequest.h"
#include "K31DroneActionResponse.h"
#include "K31DroneActionProcessor.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneActionProcessor : public UActorComponent
{
	GENERATED_BODY()

protected:
	UFUNCTION(Server, Reliable)
	void Server_RequestAction(FK31DroneActionRequest request);

	UFUNCTION(Client, Reliable)
	void Client_ReceiveActionResponse(FK31DroneActionResponse response);

public:
	UK31DroneActionProcessor();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneActionProcessor) { return 0; }
