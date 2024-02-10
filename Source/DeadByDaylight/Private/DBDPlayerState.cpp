#include "DBDPlayerState.h"
#include "AwardedScore.h"
#include "EGameState.h"
#include "StatusViewSource.h"
#include "ScoreEventData.h"
#include "EBotReplacementState.h"
#include "EPlayerRole.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "EndOfMatchRPCData.h"
#include "Net/UnrealNetwork.h"
#include "GameplayNotificationManager.h"
#include "CharacterStatsHandlerComponent.h"
#include "PlayerScoreComponent.h"

class AActor;

void ADBDPlayerState::UpdateOngoingScores()
{

}

void ADBDPlayerState::Server_CheatSelectSurvivor_Implementation(int32 camperIndex)
{

}

bool ADBDPlayerState::Server_CheatSelectSurvivor_Validate(int32 camperIndex)
{
	return true;
}

void ADBDPlayerState::Server_CheatSelectKiller_Implementation(int32 slasherIndex)
{

}

bool ADBDPlayerState::Server_CheatSelectKiller_Validate(int32 slasherIndex)
{
	return true;
}

void ADBDPlayerState::OnRep_IsReplacementBot()
{

}

void ADBDPlayerState::OnRep_DisplayData()
{

}

void ADBDPlayerState::OnRep_CustomizationData()
{

}

void ADBDPlayerState::OnRep_BotDifficultyLevel()
{

}

void ADBDPlayerState::Multicast_SetPlayerGameState_Implementation(EGameState newGameState, bool isEscapeHatch)
{

}

void ADBDPlayerState::Multicast_SetInParadise_Implementation()
{

}

void ADBDPlayerState::Multicast_SetBotInfoInCachedPlayerScore_Implementation(bool isBot, bool isReplacementBot, const FString& replacementBotName)
{

}

void ADBDPlayerState::Multicast_SetAsLeftMatch_Implementation(EBotReplacementState botReplacementState)
{

}

void ADBDPlayerState::Multicast_SetAsDisconnected_Implementation(EBotReplacementState botReplacementState)
{

}

void ADBDPlayerState::Multicast_FireGameplayEventWithScore_Implementation(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target, const FAwardedScore& awardedScore)
{

}

void ADBDPlayerState::Multicast_FireGameplayEvent_Implementation(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target)
{

}

bool ADBDPlayerState::IsInFinishedPlayingState() const
{
	return false;
}

bool ADBDPlayerState::HasEscaped() const
{
	return false;
}

EGameState ADBDPlayerState::GetPlayerGameState() const
{
	return EGameState::VE_Active;
}

EPlayerRole ADBDPlayerState::GetGameRole() const
{
	return EPlayerRole::VE_None;
}

UGameplayNotificationManager* ADBDPlayerState::GetGameplayNotificationManager() const
{
	return NULL;
}

void ADBDPlayerState::FireScoreEvent(EDBDScoreTypes scoreType, float percentToAward)
{

}

void ADBDPlayerState::FireActiveStatusViewEvent(FName statusViewID, FName uniqueSourceID, const FStatusViewSource statusViewSource)
{

}

void ADBDPlayerState::FireActiveStatusEffectEvent(FName statusEffectID, float percentage, int32 iconFilePathIndex, int32 levelToDisplay)
{

}

void ADBDPlayerState::Client_UpdateWallet_Implementation(const FString& currencyId, int32 amount)
{

}

void ADBDPlayerState::Client_SetInParadise_Implementation()
{

}

void ADBDPlayerState::Client_SetGameRole_Implementation(EPlayerRole newRole)
{

}

void ADBDPlayerState::Client_SetDSKickedOutReason_Implementation(const uint32 reason)
{

}

void ADBDPlayerState::Client_RemoveItemFromInventory_Implementation(FName toRemove, bool updateLoadout)
{

}

void ADBDPlayerState::Client_RemotelyDispatchGameEventWithScore_Implementation(const FGameplayTag& gameEventType, const FGameEventData& gameEventData, const FAwardedScore& awardedScore)
{

}

void ADBDPlayerState::Client_RemotelyDispatchGameEvent_Implementation(const FGameplayTag& gameEventType, const FGameEventData& gameEventData)
{

}

void ADBDPlayerState::Client_InvalidateIncentives_Implementation()
{

}

void ADBDPlayerState::Client_HandleEscapeScoreEvent_Implementation()
{

}

void ADBDPlayerState::Client_HandleEndOfMatch_Implementation(bool success, const FEndOfMatchRPCData& response)
{

}

void ADBDPlayerState::Client_FetchCoreRituals_Implementation(bool hasClaimableRitual)
{

}

void ADBDPlayerState::ChangeStartingGameRole(EPlayerRole gameRoleNew)
{

}

void ADBDPlayerState::Authority_SetPlayerGameState(EGameState newGameState, bool isEscapeHatch)
{

}

void ADBDPlayerState::Authority_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData)
{

}

void ADBDPlayerState::Authority_EndOngoingScoreEvent(FGameplayTag scoreTypeTag)
{

}

void ADBDPlayerState::Authority_CancelOngoingScoreEvent(FGameplayTag scoreTypeTag)
{

}

void ADBDPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ADBDPlayerState, MirrorsId);
	DOREPLIFETIME(ADBDPlayerState, _difficultyLevel);
	DOREPLIFETIME(ADBDPlayerState, IsPlayerReady);
	DOREPLIFETIME(ADBDPlayerState, GameRole);
	DOREPLIFETIME(ADBDPlayerState, CamperData);
	DOREPLIFETIME(ADBDPlayerState, SlasherData);
	DOREPLIFETIME(ADBDPlayerState, PlayerData);
	DOREPLIFETIME(ADBDPlayerState, _inParadise);
	DOREPLIFETIME(ADBDPlayerState, _playerCustomization);
	DOREPLIFETIME(ADBDPlayerState, _selectedCamperIndex);
	DOREPLIFETIME(ADBDPlayerState, _selectedSlasherIndex);
	DOREPLIFETIME(ADBDPlayerState, _platformAccountId);
	DOREPLIFETIME(ADBDPlayerState, _platform);
	DOREPLIFETIME(ADBDPlayerState, _provider);
	DOREPLIFETIME(ADBDPlayerState, _crossplayAllowed);
	DOREPLIFETIME(ADBDPlayerState, _offNetworkFlag);
	DOREPLIFETIME(ADBDPlayerState, _streamerModePlayerData);
	DOREPLIFETIME(ADBDPlayerState, _gameLevelLoaded);
	DOREPLIFETIME(ADBDPlayerState, _showPortraitBorder);
	DOREPLIFETIME(ADBDPlayerState, _hasActiveSubscription);
	DOREPLIFETIME(ADBDPlayerState, _matchmakingIncentive);
	DOREPLIFETIME(ADBDPlayerState, _pktLossPercentage);
	DOREPLIFETIME(ADBDPlayerState, _isReplacementBot);
	DOREPLIFETIME(ADBDPlayerState, _replacementBotName);
	DOREPLIFETIME(ADBDPlayerState, _disconnectedPlayerScore);
}

ADBDPlayerState::ADBDPlayerState()
{
	this->MirrorsId = TEXT("");
	this->ContentVersion = TEXT("");
	this->_difficultyLevel = EAIDifficultyLevel::VeryEasy;
	this->IsPlayerReady = false;
	this->GameRole = EPlayerRole::VE_None;
	this->DedicatedServerHandler = NULL;
	this->_awardedScoresByType = TMap<FName, FAwardedScores>();
	this->_ongoingScoreEvents = TArray<FOngoingScoreData>();
	this->_inParadise = false;
	this->_endOfMatchRpcReceived = false;
	this->_selectedCamperIndex = -1;
	this->_selectedSlasherIndex = -1;
	this->_gameplayNotificationManager = CreateDefaultSubobject<UGameplayNotificationManager>(TEXT("GameplayNotificationManager"));
	this->_characterStatsHandler = CreateDefaultSubobject<UCharacterStatsHandlerComponent>(TEXT("CharacterStatsHandler"));
	this->_playerScoreComponent = CreateDefaultSubobject<UPlayerScoreComponent>(TEXT("PlayerScoreComponent"));
	this->_platformAccountId = TEXT("");
	this->_platform = EPlatformFlag::None;
	this->_provider = EProviderFlag::None;
	this->_crossplayAllowed = false;
	this->_offNetworkFlag = false;
	this->_gameLevelLoaded = false;
	this->_showPortraitBorder = false;
	this->_hasActiveSubscription = false;
	this->_matchmakingIncentive = 0;
	this->_pktLossPercentage = 0.000000;
	this->_isReplacementBot = false;
	this->_replacementBotName = TEXT("");
	this->_disconnectedPlayerScore = 0;
}
