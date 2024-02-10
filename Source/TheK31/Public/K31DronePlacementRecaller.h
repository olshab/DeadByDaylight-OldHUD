#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K31DronePlacementRecaller.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DronePlacementRecaller : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxDistanceXY;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxDistanceZ;

public:
	UK31DronePlacementRecaller();
};

FORCEINLINE uint32 GetTypeHash(const UK31DronePlacementRecaller) { return 0; }
