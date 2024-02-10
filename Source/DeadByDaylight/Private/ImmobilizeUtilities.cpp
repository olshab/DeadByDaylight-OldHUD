#include "ImmobilizeUtilities.h"
#include "EGuidedState.h"
#include "EImmobilizedState.h"

class ADBDPlayer;

void UImmobilizeUtilities::StopGuiding(ADBDPlayer* player, ADBDPlayer* previouslyGuidingPlayer)
{

}

void UImmobilizeUtilities::StartGuiding(ADBDPlayer* player, EGuidedState guidedState, ADBDPlayer* guidingPlayer)
{

}

void UImmobilizeUtilities::SetImmobilizeState(ADBDPlayer* player, EImmobilizedState immobilizeState)
{

}

void UImmobilizeUtilities::RemoveAllGuidingPlayers(ADBDPlayer* player)
{

}

bool UImmobilizeUtilities::IsImmobilized(const ADBDPlayer* player)
{
	return false;
}

bool UImmobilizeUtilities::IsGuidedByPlayer(const ADBDPlayer* player, const ADBDPlayer* guidingPlayer)
{
	return false;
}

bool UImmobilizeUtilities::IsGuided(const ADBDPlayer* player)
{
	return false;
}

bool UImmobilizeUtilities::HasImmobilizeState(const ADBDPlayer* player, EImmobilizedState immobilizeState)
{
	return false;
}

bool UImmobilizeUtilities::HasGuidedState(const ADBDPlayer* player, EGuidedState guidedState)
{
	return false;
}

EImmobilizedState UImmobilizeUtilities::GetImmobilizeState(const ADBDPlayer* player)
{
	return EImmobilizedState::VE_None;
}

EGuidedState UImmobilizeUtilities::GetGuidedState(const ADBDPlayer* player)
{
	return EGuidedState::VE_None;
}

UImmobilizeUtilities::UImmobilizeUtilities()
{

}
