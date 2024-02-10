#include "Window.h"
#include "DBDNavEvadeLoopComponent.h"
#include "Net/UnrealNetwork.h"
#include "BlockableComponent.h"

class ADBDPlayer;
class UInteractionDefinition;

void AWindow::OnRep_blockedByLevel()
{

}

void AWindow::NotifyOnFastVault(ADBDPlayer* player, UInteractionDefinition* interaction)
{

}

bool AWindow::IsWindowVaultBlockedFor(const ADBDPlayer* player) const
{
	return false;
}

void AWindow::Authority_SetBlockedByLevel(bool isBlockedByLevel)
{

}

void AWindow::Authority_OnVaultInternal(ADBDPlayer* player, bool canBlockVault)
{

}

void AWindow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AWindow, _isBlockedByLevel);
}

AWindow::AWindow()
{
	this->_windowCollider = NULL;
	this->_collisionBox1 = NULL;
	this->_collisionBox2 = NULL;
	this->_isBlockedByLevel = false;
	this->_survivorVaultData = TMap<ACamperPlayer*, FVaultData>();
	this->_blockableComponent = CreateDefaultSubobject<UBlockableComponent>(TEXT("BlockableComponent"));
	this->_navEvadeLoopComponent = CreateDefaultSubobject<UDBDNavEvadeLoopComponent>(TEXT("NavEvadeLoopComponent"));
}
