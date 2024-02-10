#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K34ScoringComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK34ScoringComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _windowToFollowUpAScamperWithAHitTunableValue;

public:
	UK34ScoringComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34ScoringComponent) { return 0; }
