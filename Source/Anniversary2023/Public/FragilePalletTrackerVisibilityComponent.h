#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "FragilePalletTrackerVisibilityComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UFragilePalletTrackerVisibilityComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _visibilityDistance;

private:
	UFUNCTION()
	void OnLocallyObservedChanged();

public:
	UFragilePalletTrackerVisibilityComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFragilePalletTrackerVisibilityComponent) { return 0; }
