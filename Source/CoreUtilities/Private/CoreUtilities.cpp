#include "CoreUtilities.h"

class UWorld;
class UObject;
class UGameInstance;

UWorld* UCoreUtilities::GetWorldFromContext(const UObject* worldContextObject)
{
	return NULL;
}

TArray<int32> UCoreUtilities::GetRandomValuesFromArray(const TArray<int32>& values, const int32 numberOfDesiredValues)
{
	return TArray<int32>();
}

UWorld* UCoreUtilities::GetGlobalWorld()
{
	return NULL;
}

UGameInstance* UCoreUtilities::GetGameInstance(const UObject* worldContextObject)
{
	return NULL;
}

UCoreUtilities::UCoreUtilities()
{

}
