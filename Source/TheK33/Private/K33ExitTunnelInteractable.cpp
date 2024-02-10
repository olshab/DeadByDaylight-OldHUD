#include "K33ExitTunnelInteractable.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "Interactor.h"
#include "Components/BoxComponent.h"

void AK33ExitTunnelInteractable::OnRep_TargetLocation()
{

}

void AK33ExitTunnelInteractable::OnRep_LinkedControlStation()
{

}

void AK33ExitTunnelInteractable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK33ExitTunnelInteractable, _linkedControlStation);
	DOREPLIFETIME(AK33ExitTunnelInteractable, _targetLocation);
}

AK33ExitTunnelInteractable::AK33ExitTunnelInteractable()
{
	this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->_interactor = CreateDefaultSubobject<UInteractor>(TEXT("Interactor"));
	this->_interactionCollisionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionCollisionZone"));
	this->_linkedControlStation = NULL;
}
