#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "WormholeFatherRoomZoneOverlap.generated.h"

class USpherePlayerOverlapComponent;
class UPrimitiveComponent;

UCLASS()
class AWormholeFatherRoomZoneOverlap : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	USpherePlayerOverlapComponent* _wormholeFatherRoomZone;

protected:
	UFUNCTION()
	void OnOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	AWormholeFatherRoomZoneOverlap();
};

FORCEINLINE uint32 GetTypeHash(const AWormholeFatherRoomZoneOverlap) { return 0; }
