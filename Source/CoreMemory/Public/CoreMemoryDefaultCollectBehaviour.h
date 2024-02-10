#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "CoreMemoryDefaultCollectBehaviour.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(EditInlineNew)
class UCoreMemoryDefaultCollectBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _secondsUncollectibleAfterTriggered;

private:
	UFUNCTION()
	void OnCollectZoneEntered(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UCoreMemoryDefaultCollectBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryDefaultCollectBehaviour) { return 0; }
