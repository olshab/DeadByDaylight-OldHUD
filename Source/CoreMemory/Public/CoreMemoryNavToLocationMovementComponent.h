#pragma once

#include "CoreMinimal.h"
#include "ActorNavMovementComponent.h"
#include "AITypes.h"
#include "Templates/SubclassOf.h"
#include "CoreMemoryNavToLocationMovementComponent.generated.h"

class UCoreMemoryFragmentNavAgentComponent;
class UNavigationQueryFilter;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCoreMemoryNavToLocationMovementComponent : public UActorNavMovementComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	FAIMoveRequest _moveRequest;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UNavigationQueryFilter> _navFilter;

	UPROPERTY(EditDefaultsOnly)
	float _movementAcceptanceRadius;

	UPROPERTY(Transient, Export)
	UCoreMemoryFragmentNavAgentComponent* _navAgentComponent;

public:
	UCoreMemoryNavToLocationMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryNavToLocationMovementComponent) { return 0; }
