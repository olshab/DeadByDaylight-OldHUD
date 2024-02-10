#pragma once

#include "CoreMinimal.h"
#include "CommentatorSpawnStrategy.h"
#include "Templates/SubclassOf.h"
#include "FreeSpotAroundLocationSpawnStrategy.generated.h"

class AActor;

UCLASS(EditInlineNew)
class UFreeSpotAroundLocationSpawnStrategy : public UCommentatorSpawnStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _minSpawnRadius;

	UPROPERTY(EditDefaultsOnly)
	float _maxSpawnRadius;

	UPROPERTY(EditDefaultsOnly)
	float _floorDepth;

	UPROPERTY(EditDefaultsOnly)
	float _collisionSphereRadius;

	UPROPERTY(EditDefaultsOnly)
	float _checkForEveryAngleDegrees;

	UPROPERTY(EditDefaultsOnly)
	float _numberOfPositionToCheckInAnAngle;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<AActor>> _actorsToIgnore;

public:
	UFreeSpotAroundLocationSpawnStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UFreeSpotAroundLocationSpawnStrategy) { return 0; }
