#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "K32Utilities.generated.h"

class ACamperPlayer;
class AK32Power;
class UObject;
class ASlasherPlayer;

UCLASS(BlueprintType)
class UK32Utilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool IsSurvivorAbleToBeAffectedByPower(const ACamperPlayer* survivor, const ASlasherPlayer* killer);

	UFUNCTION(BlueprintPure)
	static bool IsPodOutlineAndIndicatorVisible(const ASlasherPlayer* killer);

	UFUNCTION(BlueprintPure)
	static AK32Power* GetK32Power(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static bool DoesEmpReach(const FVector& launchPosition, const FVector& targetLocation, float rangeSquared);

public:
	UK32Utilities();
};

FORCEINLINE uint32 GetTypeHash(const UK32Utilities) { return 0; }
