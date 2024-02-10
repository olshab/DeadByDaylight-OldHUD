#include "K32Utilities.h"
#include "UObject/NoExportTypes.h"

class ACamperPlayer;
class AK32Power;
class UObject;
class ASlasherPlayer;

bool UK32Utilities::IsSurvivorAbleToBeAffectedByPower(const ACamperPlayer* survivor, const ASlasherPlayer* killer)
{
	return false;
}

bool UK32Utilities::IsPodOutlineAndIndicatorVisible(const ASlasherPlayer* killer)
{
	return false;
}

AK32Power* UK32Utilities::GetK32Power(const UObject* worldContextObject)
{
	return NULL;
}

bool UK32Utilities::DoesEmpReach(const FVector& launchPosition, const FVector& targetLocation, float rangeSquared)
{
	return false;
}

UK32Utilities::UK32Utilities()
{

}
