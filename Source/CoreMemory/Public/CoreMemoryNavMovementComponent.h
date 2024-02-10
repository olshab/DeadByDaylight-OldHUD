#pragma once

#include "CoreMinimal.h"
#include "ActorNavMovementComponent.h"
#include "AITypes.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "CoreMemoryNavMovementComponent.generated.h"

class UCoreMemoryFragmentNavAgentComponent;
class UNavigationQueryFilter;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCoreMemoryNavMovementComponent : public UActorNavMovementComponent
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
	FDBDTunableRowHandle _fragmentMoveSpeed;

	UPROPERTY(Transient, Export)
	UCoreMemoryFragmentNavAgentComponent* _navAgentComponent;

public:
	UCoreMemoryNavMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryNavMovementComponent) { return 0; }
