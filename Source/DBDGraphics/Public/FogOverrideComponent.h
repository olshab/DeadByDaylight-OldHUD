#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FogOverrideComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UFogOverrideComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _interpolationDistance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _canBeDisabledByGameType;

public:
	UFogOverrideComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFogOverrideComponent) { return 0; }
