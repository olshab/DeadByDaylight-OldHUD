#include "PlayerInteractionHandler.h"
#include "StoredInteraction.h"
#include "EInputInteractionType.h"
#include "EInteractionValidationState.h"
#include "Engine/EngineTypes.h"
#include "ERequestState.h"

class ADBDPlayer;
class UInterruptionDefinition;
class UInteractionDefinition;
class AActor;

void UPlayerInteractionHandler::Server_StoreInterruption_Interruptor_Implementation(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition)
{

}

void UPlayerInteractionHandler::Server_SetInteractionToSwapTo_Implementation(UInteractionDefinition* interaction)
{

}

void UPlayerInteractionHandler::Server_RequestInterruption_Interruptor_Implementation()
{

}

void UPlayerInteractionHandler::Server_Cheat_SetInteractionScanInterval_Implementation(float interval)
{

}

void UPlayerInteractionHandler::Server_CancelCurrentInteractionByInput_Implementation()
{

}

void UPlayerInteractionHandler::Server_Broadcast_StoreInteraction_Implementation(FStoredInteraction interactionToStore)
{

}

void UPlayerInteractionHandler::Server_Broadcast_ConfirmChargedCompleted_Implementation(bool chargeComplete)
{

}

void UPlayerInteractionHandler::Server_AnswerInterruption_Interruptee_Implementation(ERequestState state)
{

}

bool UPlayerInteractionHandler::Server_AnswerInterruption_Interruptee_Validate(ERequestState state)
{
	return true;
}

void UPlayerInteractionHandler::RemoveInteraction(UInteractionDefinition* interaction)
{

}

void UPlayerInteractionHandler::OnAttachedInteractorOwnerEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason)
{

}

void UPlayerInteractionHandler::Multicast_StoreInterruption_Interruptor_Implementation(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition)
{

}

void UPlayerInteractionHandler::Multicast_StoreInteraction_Implementation(FStoredInteraction interactionToStore)
{

}

void UPlayerInteractionHandler::Multicast_SetInteractionToSwapTo_Implementation(UInteractionDefinition* interaction)
{

}

void UPlayerInteractionHandler::Multicast_RequestInterruption_Interruptee_Implementation(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition)
{

}

void UPlayerInteractionHandler::Multicast_InterruptionRequestResult_Interruptor_Implementation(ERequestState state, bool grantInterruptScore)
{

}

void UPlayerInteractionHandler::Multicast_InteractionPredictionValidationResult_Implementation(UInteractionDefinition* interaction, EInteractionValidationState state)
{

}

void UPlayerInteractionHandler::Multicast_CancelCurrentInteractionByInput_Implementation()
{

}

bool UPlayerInteractionHandler::HasAvailableInteraction(EInputInteractionType interactionType)
{
	return false;
}

bool UPlayerInteractionHandler::HasActiveSkillCheck() const
{
	return false;
}

float UPlayerInteractionHandler::GetMultiplicativeSkillCheckProbabilityModifier() const
{
	return 0.0f;
}

UInteractionDefinition* UPlayerInteractionHandler::GetCurrentInteraction() const
{
	return NULL;
}

UInteractionDefinition* UPlayerInteractionHandler::GetAvailableInteraction(EInputInteractionType interactionType) const
{
	return NULL;
}

float UPlayerInteractionHandler::GetAdditiveSkillCheckProbabilityModifier() const
{
	return 0.0f;
}

void UPlayerInteractionHandler::Client_NotifyChargeCompleted_Implementation(const UInteractionDefinition* interaction)
{

}

void UPlayerInteractionHandler::Client_Cheat_SetInteractionScanInterval_Implementation(float interval)
{

}

void UPlayerInteractionHandler::CleanInteractionArray(AActor* destroyedActor)
{

}

void UPlayerInteractionHandler::Broadcast_Multicast_ConfirmChargedCompleted_Implementation(bool chargeComplete)
{

}

void UPlayerInteractionHandler::Authority_ClearPlayerDependency(ADBDPlayer* playerDependency)
{

}

void UPlayerInteractionHandler::AddInteraction(UInteractionDefinition* interaction)
{

}

UPlayerInteractionHandler::UPlayerInteractionHandler()
{
	this->PriorityConeAngle = 50.000000;
	this->BotPriorityConeAngle = 50.000000;
	this->InteractionLayer = EInteractionLayer::VE_Camper;
	this->_hasInteractionRequest = false;
	this->_hasInteractionRequestInBuffer = false;
	this->_interactionToSwapTo = NULL;
	this->_currentInteraction = NULL;
	this->_currentPlayerDependencies = TArray<ADBDPlayer*>();
	this->_currentInteractionType = EInputInteractionType::VE_None;
	this->_skillCheck = NULL;
	this->_progressBasedSkillChecks = TArray<float>();
	this->_requestedInterruptionOtherParty = NULL;
	this->_requestedInterruptionDefinition = NULL;
	this->_requestedInterruptionIsInterruptor = false;
	this->_currentInterruptionOtherParty = NULL;
	this->_currentInterruptionDefinition = NULL;
	this->_currentInterruptionIsInterruptor = false;
	this->_interactionInProgress = false;
	this->_interactionsInZone = TArray<UInteractionDefinition*>();
	this->_disableInteractionSourcesToExceptions = TMap<UObject*, FGameplayTagContainer>();
}
