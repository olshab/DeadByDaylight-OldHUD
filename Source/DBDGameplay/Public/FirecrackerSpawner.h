#pragma once

#include "CoreMinimal.h"
#include "BaseCamperCollectable.h"
#include "Templates/SubclassOf.h"
#include "FirecrackerSpawner.generated.h"

class AActor;

UCLASS()
class DBDGAMEPLAY_API AFirecrackerSpawner : public ABaseCamperCollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> _firecrackerClass;

	UPROPERTY(EditDefaultsOnly)
	float _possibleThrowHeight;

public:
	AFirecrackerSpawner();
};

FORCEINLINE uint32 GetTypeHash(const AFirecrackerSpawner) { return 0; }
