#include "IllusionaryDoctorEffect.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"

void UIllusionaryDoctorEffect::OnRep_IllusionaryDoctorTransform()
{

}

void UIllusionaryDoctorEffect::Multicast_DebugDisplayInfo_Implementation(const float timeRemainingBeforeActivation, const FColor& messageColor)
{

}

void UIllusionaryDoctorEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UIllusionaryDoctorEffect, _illusionaryDoctorTransform);
}

UIllusionaryDoctorEffect::UIllusionaryDoctorEffect()
{
	this->_illusionaryDoctorClass = NULL;
	this->_illusionaryDoctor = NULL;
	this->_numberOfAttempsToFindIllusionaryDoctorTargetLocationPerTick = 10;
}
