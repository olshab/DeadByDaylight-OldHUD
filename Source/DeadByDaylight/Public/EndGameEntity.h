#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndGameEntity.generated.h"

class UDBDSkeletalMeshComponentBudgeted;

UCLASS()
class DEADBYDAYLIGHT_API AEndGameEntity : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Export)
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent;

public:
	AEndGameEntity();
};

FORCEINLINE uint32 GetTypeHash(const AEndGameEntity) { return 0; }
