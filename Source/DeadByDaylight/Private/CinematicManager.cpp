#include "CinematicManager.h"
#include "Cinematic.h"
#include "BackendCinematicContainer.h"

void UCinematicManager::SetVideoThumbnailProperties(FCinematic& cinematic)
{

}

void UCinematicManager::PlaySingle(const FCinematic& cinematic)
{

}

void UCinematicManager::PlayMultiple(const TArray<FCinematic>& cinematics)
{

}

bool UCinematicManager::HasCinematicToPlay() const
{
	return false;
}

FCinematic UCinematicManager::GetNextCinematicToPlay()
{
	return FCinematic{};
}

void UCinematicManager::CancelAllCinematicToPlay()
{

}

UCinematicManager::UCinematicManager()
{
	this->_cinematicQueue = TArray<FCinematic>();
	this->_backendContainer = CreateDefaultSubobject<UBackendCinematicContainer>(TEXT("BackendContainer"));
}
