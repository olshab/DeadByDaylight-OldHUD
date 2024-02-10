#include "FeatureGateHelper.h"
#include "EDBDFeatureType.h"
#include "EPlayerRole.h"
#include "DBDFeatureLockProgress.h"

class UObject;

bool UFeatureGateHelper::WasSeen(const UObject* contextObject, EDBDFeatureType featureType, EPlayerRole role)
{
	return false;
}

bool UFeatureGateHelper::IsLocked(const UObject* contextObject, EDBDFeatureType featureType, EPlayerRole role)
{
	return false;
}

bool UFeatureGateHelper::IsEnabled(const UObject* contextObject)
{
	return false;
}

bool UFeatureGateHelper::GetSingle(const UObject* contextObject, FDBDFeatureLockProgress& outData, EDBDFeatureType featureType, EPlayerRole role)
{
	return false;
}

bool UFeatureGateHelper::GetAllBySeenState(const UObject* contextObject, TArray<FDBDFeatureLockProgress>& outData, bool WasSeen)
{
	return false;
}

bool UFeatureGateHelper::GetAllByRole(const UObject* contextObject, TArray<FDBDFeatureLockProgress>& outData, EPlayerRole role)
{
	return false;
}

bool UFeatureGateHelper::GetAllByLockState(const UObject* contextObject, TArray<FDBDFeatureLockProgress>& outData, bool Locked)
{
	return false;
}

bool UFeatureGateHelper::GetAll(const UObject* contextObject, TArray<FDBDFeatureLockProgress>& outData)
{
	return false;
}

UFeatureGateHelper::UFeatureGateHelper()
{

}
