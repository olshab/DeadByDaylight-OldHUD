#pragma once

#include "CoreMinimal.h"
#include "EDBDCameraViewType.h"
#include "Subsystems/WorldSubsystem.h"
#include "MenuCameraSystem.generated.h"

class UMenuCameraDesignTunables;
class AMenuCameraActor;
class ACameraActor;

UCLASS()
class DEADBYDAYLIGHT_API UMenuCameraSystem : public UWorldSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UMenuCameraDesignTunables* _tunables;

	UPROPERTY(Transient)
	AMenuCameraActor* _cameraTarget;

	UPROPERTY(Transient)
	TMap<EDBDCameraViewType, ACameraActor*> _reservedTargets;

public:
	UMenuCameraSystem();
};

FORCEINLINE uint32 GetTypeHash(const UMenuCameraSystem) { return 0; }
