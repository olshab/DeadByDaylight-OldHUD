#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TrapInstallerComponent.generated.h"

class USurvivorTrapPerk;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTrapInstallerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<USurvivorTrapPerk*> _ownedTrapPerks;

public:
	UTrapInstallerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTrapInstallerComponent) { return 0; }
