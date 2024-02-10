#include "VaultDefinition.h"

class ADBDPlayer;

bool UVaultDefinition::ShouldLaunchCharacter(const ADBDPlayer* player) const
{
	return false;
}

bool UVaultDefinition::IsWithinHeightDelta(const ADBDPlayer* player) const
{
	return false;
}

bool UVaultDefinition::IsWindowVaultable() const
{
	return false;
}

UVaultDefinition::UVaultDefinition()
{
	this->_feetOffGroundID = TEXT("FeetOffGround");
	this->_feetOnGroundID = TEXT("FeetOnGround");
	this->_allowedHeightDelta = 60.000000;
	this->_isFall = false;
}
