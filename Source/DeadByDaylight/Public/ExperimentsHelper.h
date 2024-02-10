#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CombinedExperimentData.h"
#include "ExperimentsHelper.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UExperimentsHelper : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool IsActive(const UObject* contextObject, FName experimentId);

	UFUNCTION(BlueprintPure)
	static bool GetCombinedData(const UObject* contextObject, FName experimentId, FCombinedExperimentData& outData);

	UFUNCTION(BlueprintPure)
	static bool GetAllActive(const UObject* contextObject, TArray<FCombinedExperimentData>& outData);

public:
	UExperimentsHelper();
};

FORCEINLINE uint32 GetTypeHash(const UExperimentsHelper) { return 0; }
