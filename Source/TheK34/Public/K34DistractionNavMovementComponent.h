#pragma once

#include "CoreMinimal.h"
#include "ActorNavMovementComponent.h"
#include "AITypes.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "K34DistractionNavMovementComponent.generated.h"

class UNavigationQueryFilter;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK34_API UK34DistractionNavMovementComponent : public UActorNavMovementComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	FAIMoveRequest _moveRequest;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UNavigationQueryFilter> _navFilter;

	UPROPERTY(EditDefaultsOnly)
	float _movementAcceptanceRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _moveSpeed;

public:
	UK34DistractionNavMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34DistractionNavMovementComponent) { return 0; }
