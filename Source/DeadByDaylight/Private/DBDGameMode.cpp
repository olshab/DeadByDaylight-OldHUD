#include "DBDGameMode.h"
#include "NavmeshGeneratorComponent.h"

void ADBDGameMode::SetPlayerCount(int32 playerAmount)
{

}

void ADBDGameMode::LevelLoaded(const FString& levelName)
{

}

bool ADBDGameMode::IsEscapeOpen() const
{
	return false;
}

void ADBDGameMode::InitializeEscapeRequirements()
{

}

void ADBDGameMode::HostGame()
{

}

bool ADBDGameMode::AreLoadoutsCreated() const
{
	return false;
}

ADBDGameMode::ADBDGameMode()
{
	this->_killerPlayerControllerClass = NULL;
	this->_survivorPlayerControllerClass = NULL;
	this->_initialPlayerStarts = TArray<APlayerStart*>();
	this->KillerCreationPositionOrder = 0;
	this->_gateBlockedStatus = NULL;
	this->_navmeshGeneratorComponent = CreateDefaultSubobject<UNavmeshGeneratorComponent>(TEXT("NavmeshGeneratorComponent"));
}
