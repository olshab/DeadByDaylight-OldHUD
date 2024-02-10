#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "CoreMemoryFragmentSimpleMovementComponent.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCoreMemoryFragmentSimpleMovementComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FName _characterBoneName;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _fragmentMoveSpeed;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _speedCurve;

public:
	UCoreMemoryFragmentSimpleMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentSimpleMovementComponent) { return 0; }
