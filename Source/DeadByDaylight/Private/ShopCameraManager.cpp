#include "ShopCameraManager.h"

AShopCameraManager::AShopCameraManager()
{
	this->CharacterRotation = TArray<FRoleGenderCharacterRotation>();
	this->CatalogCharactersCamera = TArray<FCharacterCameraTag>();
	this->StoryCharactersCamera = TArray<FCharacterCameraTag>();
	this->HookCamera = NULL;
}
