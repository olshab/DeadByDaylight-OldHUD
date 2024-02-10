#include "HexPerk.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UHexPerk::UpdateCursedStatusViewOnLocalPlayer()
{

}

void UHexPerk::OnRep_PlayersWhoKnowCurse()
{

}

bool UHexPerk::IsCurseRevealedToPlayer(const ADBDPlayer* player) const
{
	return false;
}

void UHexPerk::Authority_SetCurseRevealedToPlayer(ADBDPlayer* player, const bool revealed)
{

}

void UHexPerk::Authority_RevealCurseToAllSurvivors(bool revealed)
{

}

void UHexPerk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UHexPerk, _playersWhoKnowCurse);
}

UHexPerk::UHexPerk()
{
	this->_playersWhoKnowCurse = TArray<ADBDPlayer*>();
	this->_oldPlayersWhoKnowCurse = TArray<ADBDPlayer*>();
}
