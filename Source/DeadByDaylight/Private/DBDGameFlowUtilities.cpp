#include "DBDGameFlowUtilities.h"
#include "EUIFlowEvent.h"
#include "EWorldFlowEvent.h"

class UObject;
class UDBDGameInstance;

void UDBDGameFlowUtilities::TriggerWorldFlowEvent(UObject* worldContextObject, EWorldFlowEvent worldFlowEvent)
{

}

void UDBDGameFlowUtilities::TriggerUIFlowEvent(UObject* worldContextObject, EUIFlowEvent uiFlowEvent)
{

}

bool UDBDGameFlowUtilities::IsCurrentlyInGame(const UDBDGameInstance* gameInstance)
{
	return false;
}

UDBDGameFlowUtilities::UDBDGameFlowUtilities()
{

}
