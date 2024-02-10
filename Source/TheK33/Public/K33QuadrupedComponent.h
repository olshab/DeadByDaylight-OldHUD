#pragma once

#include "CoreMinimal.h"
#include "AnimTagProvider.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "K33QuadrupedComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK33_API UK33QuadrupedComponent : public UActorComponent, public IAnimTagProvider
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	FTagStateBool _isInQuadrupedMode;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33QuadrupedComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33QuadrupedComponent) { return 0; }
