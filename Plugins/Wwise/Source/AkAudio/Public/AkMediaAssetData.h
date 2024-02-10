#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkMediaAssetData.generated.h"

UCLASS()
class AKAUDIO_API UAkMediaAssetData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	bool IsStreamed;

	UPROPERTY(VisibleAnywhere)
	bool UseDeviceMemory;

	UPROPERTY(VisibleAnywhere)
	FString Language;

	UPROPERTY(VisibleAnywhere)
	FString AssetPlatform;

public:
	UAkMediaAssetData();
};

FORCEINLINE uint32 GetTypeHash(const UAkMediaAssetData) { return 0; }
