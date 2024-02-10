#pragma once

#include "CoreMinimal.h"
#include "EDBDCameraViewType.h"
#include "Engine/DataAsset.h"
#include "MenuCameraView.h"
#include "Templates/SubclassOf.h"
#include "MenuCameraDesignTunables.generated.h"

class AMenuCameraActor;
class UCurveFloat;

UCLASS()
class DEADBYDAYLIGHT_API UMenuCameraDesignTunables : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<AMenuCameraActor> CameraClass;

	UPROPERTY(EditAnywhere)
	UCurveFloat* TransitionCurve;

	UPROPERTY(EditAnywhere, EditFixedSize)
	TMap<EDBDCameraViewType, FMenuCameraView> Views;

public:
	UMenuCameraDesignTunables();
};

FORCEINLINE uint32 GetTypeHash(const UMenuCameraDesignTunables) { return 0; }
