#include "AISense_Terror.h"
#include "UObject/NoExportTypes.h"

class UObject;
class UTerrorRadiusEmitterComponent;
class AActor;

void UAISense_Terror::ReportTerrorEvent(UObject* worldContextObj, FVector location, AActor* instigator, UTerrorRadiusEmitterComponent* terrorEmitter)
{

}

UAISense_Terror::UAISense_Terror()
{
	this->_events = TArray<FAITerrorEvent>();
}
