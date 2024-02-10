#include "AISense_UnclearHearing.h"
#include "UObject/NoExportTypes.h"

class UObject;
class AActor;

void UAISense_UnclearHearing::ReportUnclearNoiseEvent(UObject* worldContextObject, FVector noiseLocation, float loudness, AActor* instigator, float maxRange, FName tag)
{

}

UAISense_UnclearHearing::UAISense_UnclearHearing()
{
	this->NoiseEvents = TArray<FAIUnclearNoiseEvent>();
}
