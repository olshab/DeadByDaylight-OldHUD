#include "WormholeFatherKeyCard.h"
#include "Net/UnrealNetwork.h"
#include "EFatherKeyCardState.h"

class ADBDPlayer;

void AWormholeFatherKeyCard::RemoveInitialTag(ADBDPlayer* character) const
{

}

void AWormholeFatherKeyCard::OnRep_KeyCardState()
{

}

EFatherKeyCardState AWormholeFatherKeyCard::GetKeyCardState() const
{
	return EFatherKeyCardState::None;
}

void AWormholeFatherKeyCard::ApplyInitialTag(ADBDPlayer* character) const
{

}

void AWormholeFatherKeyCard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AWormholeFatherKeyCard, _keyCardState);
}

AWormholeFatherKeyCard::AWormholeFatherKeyCard()
{
	this->_keyCardState = EFatherKeyCardState::None;
}
