#include "OrbProperties.h"

FOrbProperties::FOrbProperties()
{
	this->VoidEnergyType = EVoidEnergyType::None;
	this->SpawnLocation = FVector{};
	this->HoverLocation = FVector{};
	this->CustomEndLocation = FVector{};
	this->CustomTravelTime = 0.0f;
	this->ExtraPlayersToObserveOrbs = TArray<ADBDPlayer*>();
}
