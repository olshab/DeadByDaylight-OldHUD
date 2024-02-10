#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CollectedObjectCollection.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UCollectedObjectCollection : public UActorComponent
{
	GENERATED_BODY()

public:
	UCollectedObjectCollection();
};

FORCEINLINE uint32 GetTypeHash(const UCollectedObjectCollection) { return 0; }
