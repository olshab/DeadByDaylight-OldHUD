#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K34FootstepsComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK34FootstepsComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _footstepFrequency;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _footstepsShouldOnlySpawnWhenMoving;

	UPROPERTY(EditDefaultsOnly)
	bool _showFootstepsInTipToeMode;

	UPROPERTY(EditAnywhere)
	FGameplayTagQuery _normalFootfallSpawningStateTagQuery;

public:
	UK34FootstepsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34FootstepsComponent) { return 0; }
