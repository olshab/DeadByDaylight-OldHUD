#include "PlayerInteractable.h"
#include "Interactor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

class ADBDPlayer;

void APlayerInteractable::InitInteractable_Implementation(ADBDPlayer* player)
{

}

APlayerInteractable::APlayerInteractable()
{
	this->_mainInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("MainInteractionZone"));
	this->_selfInteractionsInteractor = CreateDefaultSubobject<UInteractor>(TEXT("SelfInteractionsInteractor"));
	this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}
