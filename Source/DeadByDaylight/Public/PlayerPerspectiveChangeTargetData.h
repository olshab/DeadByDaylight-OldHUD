#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerPerspectiveChangeTargetData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FPlayerPerspectiveChangeTargetData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	bool IsAFirstPersonView;

	UPROPERTY(Transient, Export)
	USceneComponent* SceneComponent;

	UPROPERTY(EditDefaultsOnly)
	float CameraDistanceFromFPVLocationToToggleFPVOnPlayer;

	UPROPERTY(EditDefaultsOnly)
	FName SocketNameOnSceneComponent;

	UPROPERTY(EditDefaultsOnly)
	FVector Offset;

public:
	DEADBYDAYLIGHT_API FPlayerPerspectiveChangeTargetData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerPerspectiveChangeTargetData) { return 0; }
