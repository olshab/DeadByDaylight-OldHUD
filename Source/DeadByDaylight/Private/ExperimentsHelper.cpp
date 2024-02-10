#include "ExperimentsHelper.h"
#include "CombinedExperimentData.h"

class UObject;

bool UExperimentsHelper::IsActive(const UObject* contextObject, FName experimentId)
{
	return false;
}

bool UExperimentsHelper::GetCombinedData(const UObject* contextObject, FName experimentId, FCombinedExperimentData& outData)
{
	return false;
}

bool UExperimentsHelper::GetAllActive(const UObject* contextObject, TArray<FCombinedExperimentData>& outData)
{
	return false;
}

UExperimentsHelper::UExperimentsHelper()
{

}
