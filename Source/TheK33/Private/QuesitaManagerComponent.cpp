#include "QuesitaManagerComponent.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"

class ALocker;

void UQuesitaManagerComponent::OnRep_QuesitaLocker(ALocker* lastLocker)
{

}

void UQuesitaManagerComponent::OnRep_QuesitaInteraction()
{

}

void UQuesitaManagerComponent::Authority_OnQuesitaInteractionDone()
{

}

void UQuesitaManagerComponent::Authority_OnLockerInteractorChanged(bool isLocked)
{

}

void UQuesitaManagerComponent::Authority_OnLevelReadyToPlay()
{

}

void UQuesitaManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UQuesitaManagerComponent, _interaction);
	DOREPLIFETIME(UQuesitaManagerComponent, _locker);
	DOREPLIFETIME(UQuesitaManagerComponent, _shouldImplementQuesitaInteraction);
}

UQuesitaManagerComponent::UQuesitaManagerComponent()
{
	this->_quesitaLockerInteraction = NULL;
	this->_globalJumpScareChanceIncrease = 0.050000;
	this->_globalJumpScareChanceInitialValue = 0.200000;
	this->_akQuesitaComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Audio_Quesita"));
	this->_interaction = NULL;
	this->_locker = NULL;
	this->_shouldImplementQuesitaInteraction = false;
}
