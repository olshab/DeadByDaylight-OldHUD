#include "K34Footstep.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"

void AK34Footstep::OnRep_IsActive()
{

}

FVector AK34Footstep::GetOwningActorsVelocity() const
{
	return FVector{};
}

void AK34Footstep::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK34Footstep, _currentFootType);
	DOREPLIFETIME(AK34Footstep, _isActive);
	DOREPLIFETIME(AK34Footstep, _owningActor);
	DOREPLIFETIME(AK34Footstep, _owningKiller);
}

AK34Footstep::AK34Footstep()
{
	this->_currentFootType = EK34Foot::LeftFoot;
	this->_isActive = false;
	this->_owningActor = NULL;
	this->_owningKiller = NULL;
	this->_visibilityRaycastProperties = TArray<FK34FootstepVisibilityRaycastDefinition>();
}
