#include "HitValidatorComponent.h"
#include "HitValidationReport.h"

void UHitValidatorComponent::Multicast_DrawDebugHit_Implementation(FHitValidationReport report)
{

}

UHitValidatorComponent::UHitValidatorComponent()
{
	this->_hitValidationConfigComponent = NULL;
}
