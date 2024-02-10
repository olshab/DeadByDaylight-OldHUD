#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterOptimizer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCharacterOptimizer : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _characterMovementTickRateWhenInsignificant;

public:
	UCharacterOptimizer();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterOptimizer) { return 0; }
