#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDBDFeatureType.h"
#include "EPlayerRole.h"
#include "DBDFeatureLockProgress.h"
#include "FeatureGateHelper.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UFeatureGateHelper : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool WasSeen(const UObject* contextObject, EDBDFeatureType featureType, EPlayerRole role);

	UFUNCTION(BlueprintPure)
	static bool IsLocked(const UObject* contextObject, EDBDFeatureType featureType, EPlayerRole role);

	UFUNCTION(BlueprintPure)
	static bool IsEnabled(const UObject* contextObject);

	UFUNCTION(BlueprintPure)
	static bool GetSingle(const UObject* contextObject, FDBDFeatureLockProgress& outData, EDBDFeatureType featureType, EPlayerRole role);

	UFUNCTION(BlueprintPure)
	static bool GetAllBySeenState(const UObject* contextObject, TArray<FDBDFeatureLockProgress>& outData, bool WasSeen);

	UFUNCTION(BlueprintPure)
	static bool GetAllByRole(const UObject* contextObject, TArray<FDBDFeatureLockProgress>& outData, EPlayerRole role);

	UFUNCTION(BlueprintPure)
	static bool GetAllByLockState(const UObject* contextObject, TArray<FDBDFeatureLockProgress>& outData, bool Locked);

	UFUNCTION(BlueprintPure)
	static bool GetAll(const UObject* contextObject, TArray<FDBDFeatureLockProgress>& outData);

public:
	UFeatureGateHelper();
};

FORCEINLINE uint32 GetTypeHash(const UFeatureGateHelper) { return 0; }
