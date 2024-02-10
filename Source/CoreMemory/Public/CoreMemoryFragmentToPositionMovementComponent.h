#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "CoreMemoryFragmentToPositionMovementComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCoreMemoryFragmentToPositionMovementComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _fragmentMoveSpeed;

public:
	UCoreMemoryFragmentToPositionMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentToPositionMovementComponent) { return 0; }
