#pragma once

#include "CoreMinimal.h"
#include "GunslingerHarpoon.h"
#include "GameFramework/Actor.h"
#include "HarpoonProp.generated.h"

class UDBDSkeletalMeshComponentBudgeted;

UCLASS()
class THEGUNSLINGER_API AHarpoonProp : public AActor, public IGunslingerHarpoon
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Export)
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent;

public:
	AHarpoonProp();
};

FORCEINLINE uint32 GetTypeHash(const AHarpoonProp) { return 0; }
