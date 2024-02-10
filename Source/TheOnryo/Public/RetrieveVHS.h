#pragma once

#include "CoreMinimal.h"
#include "SurvivorTelevisionInteraction.h"
#include "Templates/SubclassOf.h"
#include "RetrieveVHS.generated.h"

class ACollectable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class URetrieveVHS : public USurvivorTelevisionInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACollectable> _vhsCollectableBP;

public:
	URetrieveVHS();
};

FORCEINLINE uint32 GetTypeHash(const URetrieveVHS) { return 0; }
