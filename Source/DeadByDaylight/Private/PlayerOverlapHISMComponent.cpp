#include "PlayerOverlapHISMComponent.h"

UPlayerOverlapHISMComponent::UPlayerOverlapHISMComponent()
{
	this->_playerInfluenceRadius = 150;
	this->_playerOverlapOverrides = TArray<UMaterialInterface*>();
}
