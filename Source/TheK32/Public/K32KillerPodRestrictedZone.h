#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K32KillerPodRestrictedZone.generated.h"

class UStaticMeshComponent;

UCLASS()
class AK32KillerPodRestrictedZone : public AActor
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	UStaticMeshComponent* GetStaticMesh() const;

public:
	AK32KillerPodRestrictedZone();
};

FORCEINLINE uint32 GetTypeHash(const AK32KillerPodRestrictedZone) { return 0; }
