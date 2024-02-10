#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K31PlayerDroneZoneStruct.h"
#include "K31DroneZoneComponent.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneZoneComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<ADBDPlayer*, FK31PlayerDroneZoneStruct> _playerDroneZoneStructMap;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxDistanceXY;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxDistanceZ;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _maxDistanceZ_ScoutingLaser;

public:
	UK31DroneZoneComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneZoneComponent) { return 0; }
