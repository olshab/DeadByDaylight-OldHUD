#include "FadeManager.h"
#include "UObject/NoExportTypes.h"

void AFadeManager::RemoveFadeMaterials(bool adjustAudioOcclusions)
{

}

void AFadeManager::FadeAt(FVector Location, bool adjustAudioOcclusions)
{

}

void AFadeManager::DBD_TurnCameraAroundPlayerWithFading(bool isTurning)
{

}

void AFadeManager::DBD_FadeAtCurrentCameraLocation(bool isEnabled)
{

}

bool AFadeManager::AreAnyMaterialsFaded()
{
	return false;
}

AFadeManager::AFadeManager()
{
	this->_meshComponents = TSet<UMeshComponent*>();
	this->_fadeMaterials = NULL;
	this->_fadedMeshes = TArray<FOriginalMaterials>();
	this->_excludedActors = TSet<UActorComponent*>();
}
