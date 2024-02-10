#pragma once

#include "CoreMinimal.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "Components/ActorComponent.h"
#include "CoreMemoryFragmentNavAgentComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCoreMemoryFragmentNavAgentComponent : public UActorComponent, public INavAgentInterface
{
	GENERATED_BODY()

public:
	UCoreMemoryFragmentNavAgentComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentNavAgentComponent) { return 0; }
