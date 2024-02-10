#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkReverbVolume.generated.h"

class UAkAuxBus;
class UAkLateReverbComponent;

UCLASS()
class AKAUDIO_API AAkReverbVolume : public AVolume
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool bEnabled_DEPRECATED;

	UPROPERTY()
	UAkAuxBus* AuxBus_DEPRECATED;

	UPROPERTY()
	FString AuxBusName_DEPRECATED;

	UPROPERTY()
	float SendLevel_DEPRECATED;

	UPROPERTY()
	float FadeRate_DEPRECATED;

	UPROPERTY()
	float Priority_DEPRECATED;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export)
	UAkLateReverbComponent* LateReverbComponent;

public:
	AAkReverbVolume();
};

FORCEINLINE uint32 GetTypeHash(const AAkReverbVolume) { return 0; }
