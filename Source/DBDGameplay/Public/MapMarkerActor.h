#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapMarkerActor.generated.h"

UCLASS()
class AMapMarkerActor : public AActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnDestroy();

public:
	AMapMarkerActor();
};

FORCEINLINE uint32 GetTypeHash(const AMapMarkerActor) { return 0; }
