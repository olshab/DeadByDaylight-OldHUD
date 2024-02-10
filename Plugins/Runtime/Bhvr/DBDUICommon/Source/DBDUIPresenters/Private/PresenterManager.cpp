#include "PresenterManager.h"
#include "ELoadingTransitionType.h"

class APlayerState;

void UPresenterManager::OnViewportCreated()
{

}

void UPresenterManager::OnPlayerStateChanged(const APlayerState* playerState)
{

}

void UPresenterManager::OnLoadingTransition(const ELoadingTransitionType transitionType)
{

}

UPresenterManager::UPresenterManager()
{
	this->_persistentPresenterGroups = TArray<UPresenterGroup*>();
	this->_transientPresenterGroups = TArray<UPresenterGroup*>();
}
