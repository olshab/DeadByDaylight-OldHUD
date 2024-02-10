#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnScreenDebugInfo.h"
#include "OnScreenDebugComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOnScreenDebugComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	TArray<FOnScreenDebugInfo> _messages;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UOnScreenDebugComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnScreenDebugComponent) { return 0; }
