#include "SteamPipeManagerComponent.h"
#include "ESteamPipeState.h"
#include "Net/UnrealNetwork.h"

class ASteamPipe;
class AActor;
class ADBDPlayer;

void USteamPipeManagerComponent::OnLevelReadyToPlay()
{

}

void USteamPipeManagerComponent::Authority_UpdateCanUseResetSwitch()
{

}

void USteamPipeManagerComponent::Authority_OnSwitchCooldownComplete()
{

}

void USteamPipeManagerComponent::Authority_OnSteamPipeStateChanged(const ASteamPipe* steamPipe, const ESteamPipeState newState)
{

}

void USteamPipeManagerComponent::Authority_OnResetInteractionComplete(bool completed, const TArray<AActor*>& instigatorsForCompletion)
{

}

void USteamPipeManagerComponent::Authority_OnCharacterAdded(ADBDPlayer* character)
{

}

void USteamPipeManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USteamPipeManagerComponent, _sharedChargeableComponent);
}

USteamPipeManagerComponent::USteamPipeManagerComponent()
{
	this->_steamPipeEffectComponentClass = NULL;
	this->_chargeableComponentClass = NULL;
	this->_sharedChargeableComponent = NULL;
	this->_steamPipes = TArray<TWeakObjectPtr<ASteamPipe>>();
	this->_steamPipeResetSwitches = TArray<TWeakObjectPtr<ASteamPipeResetSwitch>>();
	this->_interactingPlayersArray = TArray<TWeakObjectPtr<ADBDPlayer>>();
}
