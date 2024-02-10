#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31AnalyticsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API UK31AnalyticsComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _analyticInspectionTime;

public:
	UK31AnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31AnalyticsComponent) { return 0; }
