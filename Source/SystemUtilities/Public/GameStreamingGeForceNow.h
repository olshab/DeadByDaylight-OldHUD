#pragma once

#include "CoreMinimal.h"
#include "GameStreamingSubsytem.h"
#include "GameStreamingGeForceNow.generated.h"

UCLASS()
class SYSTEMUTILITIES_API UGameStreamingGeForceNow : public UGameStreamingSubsytem
{
	GENERATED_BODY()

public:
	UGameStreamingGeForceNow();
};

FORCEINLINE uint32 GetTypeHash(const UGameStreamingGeForceNow) { return 0; }
