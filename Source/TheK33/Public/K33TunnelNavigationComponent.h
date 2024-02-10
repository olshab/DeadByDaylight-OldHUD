#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K33TunnelNavigationComponent.generated.h"

class UAimDirectionProvider;
class UK33TunnelPulsationComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33TunnelNavigationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _dotProductDeltaValueForPathRecalculation;

	UPROPERTY(EditDefaultsOnly)
	float _minDistanceDeltaForPathRecalculation;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK33TunnelPulsationComponent> _tunnelPulsationComponentClass;

	UPROPERTY(Transient, Export)
	UK33TunnelPulsationComponent* _tunnelPulsationComponent;

	UPROPERTY(EditDefaultsOnly, Export)
	UAimDirectionProvider* _aimDirectionProvider;

public:
	UK33TunnelNavigationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TunnelNavigationComponent) { return 0; }
