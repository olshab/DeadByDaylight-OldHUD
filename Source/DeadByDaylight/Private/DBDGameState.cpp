#include "DBDGameState.h"
#include "GamePresetData.h"
#include "BuiltLevelData.h"
#include "EEndGameReason.h"
#include "UObject/SoftObjectPtr.h"
#include "EGameState.h"
#include "SpecialEventGameplaySpawnerComponent.h"
#include "OnScreenDebugComponent.h"
#include "SelectedOffering.h"
#include "InGameAssetPreloaderComponent.h"
#include "ServerTimeProviderComponent.h"
#include "MutatorGameplaySpawnerComponent.h"
#include "CollectableCollection.h"
#include "OnSlasherSetDelegate.h"
#include "EndGameStateComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpecialBehaviourGameplaySpawnerComponent.h"
#include "RenderingFeaturesSequencer.h"
#include "ScourgeHookManagerComponent.h"
#include "ActorPairQueryEvaluatorComponent.h"
#include "HudStateComponent.h"
#include "CharacterCollection.h"

class AEscapeDoor;
class UObject;
class UDBDDangerPredictionComponent;
class APawn;
class ATotem;
class ACamperPlayer;
class AInteractable;
class AMeatHook;
class ADBDPlayerState_Menu;
class ADBDPlayerState;
class ASlasherPlayer;
class ADBDPlayer;
class UAkAudioBank;
class AWindow;
class ASearchable;
class AReverseBearTrapRemover;
class ABaseTrap;
class APallet;
class AHatch;
class AGenerator;

void ADBDGameState::UpdateInGamePallets() const
{

}

void ADBDGameState::UnregisterFromIntroCompleteAndLevelReadyToPlay(const UObject* inObject)
{

}

void ADBDGameState::SortOfferings()
{

}

void ADBDGameState::SetPlayersReadyToStart(bool playersReadyToStart)
{

}

void ADBDGameState::SetKillerIntroCompletedNormalized(float completedAmount)
{

}

void ADBDGameState::SetGameLevelEnded(EEndGameReason endGameReason)
{

}

void ADBDGameState::SetDisplayMapName(bool display)
{

}

void ADBDGameState::Server_UpdateGameRole()
{

}

void ADBDGameState::ResetGameLevelStatus()
{

}

void ADBDGameState::RemoveTrap(AInteractable* toRemove)
{

}

void ADBDGameState::RemoveDangerPredictionObject(UDBDDangerPredictionComponent* toRemove)
{

}

void ADBDGameState::OnRep_UseNetAsyncLoading()
{

}

void ADBDGameState::OnRep_SurvivorLeft(int32 oldValue)
{

}

void ADBDGameState::OnRep_SessionId()
{

}

void ADBDGameState::OnRep_SecondsLeftInLobby(const int32 oldValue)
{

}

void ADBDGameState::OnRep_RequiredActivatedGeneratorCount(int32 oldRequiredActivatedGeneratorCount)
{

}

void ADBDGameState::OnRep_OnLevelReadyToPlay()
{

}

void ADBDGameState::OnRep_OnGameLevelCreated()
{

}

void ADBDGameState::OnRep_ObsessionTarget(ACamperPlayer* previousObsessionTarget)
{

}

void ADBDGameState::OnRep_NumberOfSurvivorsKilledOrSacrificed(int8 oldValue)
{

}

void ADBDGameState::OnRep_LobbyId()
{

}

void ADBDGameState::OnRep_HatchOpened(bool oldValue)
{

}

void ADBDGameState::OnRep_GamePresetData()
{

}

void ADBDGameState::OnRep_GameLevelLoadingStarted(bool oldValue)
{

}

void ADBDGameState::OnRep_EscapeDoorActivated(bool oldValue)
{

}

void ADBDGameState::OnRep_BuildLevelData()
{

}

void ADBDGameState::OnRep_ActivatedGeneratorCount(int32 oldValue)
{

}

void ADBDGameState::OnPlayerGameStateChangedAddIfKilled(ADBDPlayerState* playerState, EGameState gameState)
{

}

void ADBDGameState::Multicast_UpdateCharacterFromGamePreset_Implementation(ADBDPlayerState_Menu* playerState_Menu, const FGamePresetData& gamePresetData)
{

}

void ADBDGameState::Multicast_SetServerLeftGame_Implementation(bool hasServerLeftGame)
{

}

void ADBDGameState::Multicast_SetLostServerConnection_Implementation(bool hasLostServerConnection)
{

}

void ADBDGameState::Multicast_SetGameLevelLoaded_Implementation(bool gameLevelLoaded)
{

}

void ADBDGameState::Multicast_SetGameLevelEnded_Implementation(EEndGameReason endGameReason)
{

}

void ADBDGameState::Multicast_SetGameEnded_Implementation(bool hasServerLeftGame)
{

}

void ADBDGameState::Multicast_SetBuiltLevelData_Implementation(const FBuiltLevelData& builtLevelData)
{

}

void ADBDGameState::Multicast_SendHVSPlusState_Implementation(bool enabled)
{

}

void ADBDGameState::Multicast_SendEnsureToClients_Implementation(const FString& ensure)
{

}

void ADBDGameState::Multicast_OnGameStarted_Implementation()
{

}

void ADBDGameState::Multicast_BroadcastOnLevelLoadingTimeOutClientEvent_Implementation()
{

}

bool ADBDGameState::IsPlayerDistributionReady() const
{
	return false;
}

bool ADBDGameState::IsOnePlayerLeft() const
{
	return false;
}

bool ADBDGameState::IsOfferingReceived() const
{
	return false;
}

bool ADBDGameState::IsObsessionTargetAliveInLevel()
{
	return false;
}

bool ADBDGameState::IsObsessionTargetAlive()
{
	return false;
}

bool ADBDGameState::IsLightingGenerated() const
{
	return false;
}

bool ADBDGameState::IsLevelSetupDone() const
{
	return false;
}

bool ADBDGameState::IsLevelReadyToPlay() const
{
	return false;
}

bool ADBDGameState::IsIntroCompleted() const
{
	return false;
}

bool ADBDGameState::IsHatchVisible() const
{
	return false;
}

bool ADBDGameState::IsEscapeRequirementCompleted() const
{
	return false;
}

bool ADBDGameState::IsEscapeDoorOpen() const
{
	return false;
}

bool ADBDGameState::IsEscapeDoorActivated() const
{
	return false;
}

void ADBDGameState::IntroCompleted()
{

}

TArray<AInteractable*> ADBDGameState::GetTraps() const
{
	return TArray<AInteractable*>();
}

TArray<ATotem*> ADBDGameState::GetTotems() const
{
	return TArray<ATotem*>();
}

int32 ADBDGameState::GetSurvivorLeft() const
{
	return 0;
}

USpecialEventGameplaySpawnerComponent* ADBDGameState::GetSpecialEventGameplaySpawnerComponent() const
{
	return NULL;
}

TArray<FSelectedOffering> ADBDGameState::GetSelectedOfferings() const
{
	return TArray<FSelectedOffering>();
}

bool ADBDGameState::GetSelectedOffering(int32 index, FSelectedOffering& selectedOffering) const
{
	return false;
}

int32 ADBDGameState::GetRequiredActivatedGeneratorCount() const
{
	return 0;
}

int32 ADBDGameState::GetRemainingGeneratorsNeeded() const
{
	return 0;
}

ADBDPlayerState* ADBDGameState::GetPlayerStateByMirrorsID(const FString& id) const
{
	return NULL;
}

ADBDPlayerState* ADBDGameState::GetPlayerStateByIDString(const FString& id, bool isReplacementBot) const
{
	return NULL;
}

bool ADBDGameState::GetPlayersReadyToStart() const
{
	return false;
}

void ADBDGameState::GetPlayerRoleCounts(int32& survivorCount, int32& killerCount, int32& spectatorCount) const
{

}

ACamperPlayer* ADBDGameState::GetObsessionTarget() const
{
	return NULL;
}

int32 ADBDGameState::GetNumberOfOtherActiveSurvivors(ADBDPlayer* exception) const
{
	return 0;
}

int32 ADBDGameState::GetNumberOfActiveSurvivors() const
{
	return 0;
}

FName ADBDGameState::GetMapThemeName() const
{
	return NAME_None;
}

ADBDPlayer* ADBDGameState::GetLocalPlayerPawn() const
{
	return NULL;
}

APawn* ADBDGameState::GetLocalPlayerBasePawn() const
{
	return NULL;
}

TSoftObjectPtr<UAkAudioBank> ADBDGameState::GetLevelThemeAudioSoundBankAssetPtr() const
{
	return NULL;
}

FBuiltLevelData ADBDGameState::GetLevelData() const
{
	return FBuiltLevelData{};
}

float ADBDGameState::GetKillerIntroCompletedNormalized() const
{
	return 0.0f;
}

ASlasherPlayer* ADBDGameState::GetKiller() const
{
	return NULL;
}

bool ADBDGameState::GetIsGameEnded() const
{
	return false;
}

TArray<AWindow*> ADBDGameState::GetInGameWindows() const
{
	return TArray<AWindow*>();
}

TArray<ASearchable*> ADBDGameState::GetInGameSearchables() const
{
	return TArray<ASearchable*>();
}

TArray<AReverseBearTrapRemover*> ADBDGameState::GetInGameReverseBearTrapRemovers() const
{
	return TArray<AReverseBearTrapRemover*>();
}

TArray<APallet*> ADBDGameState::GetInGamePallets() const
{
	return TArray<APallet*>();
}

TArray<AMeatHook*> ADBDGameState::GetInGameMeatHooks() const
{
	return TArray<AMeatHook*>();
}

TArray<AHatch*> ADBDGameState::GetInGameHatches() const
{
	return TArray<AHatch*>();
}

TArray<AGenerator*> ADBDGameState::GetInGameGenerators() const
{
	return TArray<AGenerator*>();
}

TArray<AEscapeDoor*> ADBDGameState::GetInGameEscapeDoors() const
{
	return TArray<AEscapeDoor*>();
}

TArray<ABaseTrap*> ADBDGameState::GetInGameBaseTraps() const
{
	return TArray<ABaseTrap*>();
}

bool ADBDGameState::GetGameLevelLoadingStarted() const
{
	return false;
}

bool ADBDGameState::GetGameLevelLoaded() const
{
	return false;
}

UEndGameStateComponent* ADBDGameState::GetEndGameStateComponent() const
{
	return NULL;
}

TArray<UDBDDangerPredictionComponent*> ADBDGameState::GetDangerPredictionObjects(const bool isObjectDynamic)
{
	return TArray<UDBDDangerPredictionComponent*>();
}

UCollectableCollection* ADBDGameState::GetCollectableCollection() const
{
	return NULL;
}

UCharacterCollection* ADBDGameState::GetCharacterCollection() const
{
	return NULL;
}

TArray<UDBDDangerPredictionComponent*> ADBDGameState::GetAllDangerPredictionObjects() const
{
	return TArray<UDBDDangerPredictionComponent*>();
}

void ADBDGameState::CallOnSlasherSet(FOnSlasherSetDelegate callback)
{

}

void ADBDGameState::CallOnLevelReadyToPlay(FOnLevelReadyToPlayDelegate callback)
{

}

void ADBDGameState::CallOnIntroComplete(FOnIntroCompleteDelegate callback)
{

}

void ADBDGameState::BroadcastOnSetBuildLevelData()
{

}

void ADBDGameState::Authority_UnsetLevelReadyToPlay()
{

}

void ADBDGameState::Authority_SignalEscapeDoorActivated(bool newEscapeDoorActivated)
{

}

void ADBDGameState::Authority_SetSurvivorLeft(int32 survivorRemaining)
{

}

void ADBDGameState::Authority_SetObsessionTarget(ACamperPlayer* obsessionTarget)
{

}

void ADBDGameState::Authority_SetLevelReadyToPlay()
{

}

void ADBDGameState::Authority_SetHatchOpen(bool opened)
{

}

void ADBDGameState::Authority_SetGameStarted()
{

}

void ADBDGameState::Authority_SetGameSelectedOffering(const TArray<FSelectedOffering>& offerings)
{

}

void ADBDGameState::Authority_SetGameLevelLoaded()
{

}

void ADBDGameState::Authority_SetGameLevelEnded(EEndGameReason endGameReason)
{

}

void ADBDGameState::Authority_SetGameLevelCreated()
{

}

void ADBDGameState::Authority_SetEscapeDoorOpened(bool opened)
{

}

void ADBDGameState::Authority_SetBuiltLevelData(const FBuiltLevelData& builtLevelData)
{

}

void ADBDGameState::Authority_SetAllPlayerLoaded()
{

}

void ADBDGameState::Authority_EvaluateObsessionTarget(ADBDPlayer* potentialTarget)
{

}

void ADBDGameState::Authority_EscapeThroughHatch()
{

}

void ADBDGameState::Authority_EnableObsession()
{

}

void ADBDGameState::Authority_DeactivateAI()
{

}

void ADBDGameState::AddTrap(AInteractable* toAdd)
{

}

void ADBDGameState::AddDangerPredictionObject(UDBDDangerPredictionComponent* toAdd)
{

}

void ADBDGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ADBDGameState, SecondsLeftInLobby);
	DOREPLIFETIME(ADBDGameState, _useNetAsyncLoading);
	DOREPLIFETIME(ADBDGameState, _gameLevelLoadingStarted);
	DOREPLIFETIME(ADBDGameState, _builtLevelData);
	DOREPLIFETIME(ADBDGameState, _levelOfferings);
	DOREPLIFETIME(ADBDGameState, _sessionId);
	DOREPLIFETIME(ADBDGameState, _lobbyId);
	DOREPLIFETIME(ADBDGameState, _activatedGeneratorCount);
	DOREPLIFETIME(ADBDGameState, _requiredActivatedGeneratorCount);
	DOREPLIFETIME(ADBDGameState, _escapeDoorActivated);
	DOREPLIFETIME(ADBDGameState, _escapeDoorOpened);
	DOREPLIFETIME(ADBDGameState, _isHatchOpen);
	DOREPLIFETIME(ADBDGameState, _levelReadyToPlay);
	DOREPLIFETIME(ADBDGameState, _playerDistributionReady);
	DOREPLIFETIME(ADBDGameState, _usingWeakenedMechanic);
	DOREPLIFETIME(ADBDGameState, _survivorLeft);
	DOREPLIFETIME(ADBDGameState, _obsessionTarget);
	DOREPLIFETIME(ADBDGameState, _numberOfSurvivorsKilledOrSacrificed);
	DOREPLIFETIME(ADBDGameState, _gamePresetData);
	DOREPLIFETIME(ADBDGameState, _gameLevelCreated);
	DOREPLIFETIME(ADBDGameState, _onScreenDebugComponent);
	DOREPLIFETIME(ADBDGameState, _matchStartTime);
	DOREPLIFETIME(ADBDGameState, _isServerDedicated);
	DOREPLIFETIME(ADBDGameState, _maxSurvivorCount);
	DOREPLIFETIME(ADBDGameState, _serverBuildVersion);
	DOREPLIFETIME(ADBDGameState, _serverContentVersion);
	DOREPLIFETIME(ADBDGameState, _serverSessionId);
	DOREPLIFETIME(ADBDGameState, _serverRegion);
	DOREPLIFETIME(ADBDGameState, _serverMatchId);
	DOREPLIFETIME(ADBDGameState, _leaveSpectateRequested);
}

ADBDGameState::ADBDGameState()
{
	this->IntroState = EIntroState::WaitingToStart;
	this->_specialEventGameplaySpawnerComponent = CreateDefaultSubobject<USpecialEventGameplaySpawnerComponent>(TEXT("SpecialEventSpawnerComponent"));
	this->_specialBehaviourGameplaySpawnerComponent = CreateDefaultSubobject<USpecialBehaviourGameplaySpawnerComponent>(TEXT("SpecialBehaviourEventSpawnerComponent"));
	this->_mutatorGameplaySpawnerComponent = CreateDefaultSubobject<UMutatorGameplaySpawnerComponent>(TEXT("MutatorSpawnerComponent"));
	this->SecondsLeftInLobby = -1;
	this->Slasher = NULL;
	this->_renderingSequencer = CreateDefaultSubobject<URenderingFeaturesSequencer>(TEXT("RenderingSequencer"));
	this->_camperHookedInBasementCount = 0;
	this->_useNetAsyncLoading = EServerUseNetAsyncLoading::NotSet;
	this->_gameLevelLoadingStarted = false;
	this->_clipManager = NULL;
	this->_fadeManager = NULL;
	this->_activatedGeneratorCount = 0;
	this->_requiredActivatedGeneratorCount = -1;
	this->_escapeDoorActivated = false;
	this->_escapeDoorOpened = false;
	this->_isHatchOpen = false;
	this->_levelReadyToPlay = false;
	this->_playerDistributionReady = false;
	this->_usingWeakenedMechanic = false;
	this->_survivorLeft = 0;
	this->_meatHooks = TArray<AMeatHook*>();
	this->_searchables = TArray<ASearchable*>();
	this->_generators = TArray<AGenerator*>();
	this->_escapeDoors = TArray<AEscapeDoor*>();
	this->_hatches = TArray<AHatch*>();
	this->_reverseBearTrapRemovers = TArray<AReverseBearTrapRemover*>();
	this->_baseTraps = TArray<ABaseTrap*>();
	this->_pallets = TArray<APallet*>();
	this->_windows = TArray<AWindow*>();
	this->_lockers = TArray<ALocker*>();
	this->_breakableWalls = TArray<ABreakableBase*>();
	this->_totems = TArray<ATotem*>();
	this->_camperEscapedThroughHatch = 0;
	this->_obsessionTarget = NULL;
	this->_cachedObsessionEscaped = false;
	this->_numberOfSurvivorsKilledOrSacrificed = 0;
	this->_traps = TArray<AInteractable*>();
	this->_dangerPredictionObjects = TArray<UDBDDangerPredictionComponent*>();
	this->_gameLevelLoaded = false;
	this->_gameLevelCreated = false;
	this->_gameLevelEnded = false;
	this->_gameTimedOut = false;
	this->_gameEndedReason = EEndGameReason::None;
	this->_isLoadoutFrozen = false;
	this->_endGameState = CreateDefaultSubobject<UEndGameStateComponent>(TEXT("EndGameState"));
	this->_scourgeHookManager = CreateDefaultSubobject<UScourgeHookManagerComponent>(TEXT("ScourgeHookManager"));
	this->_actorPairQueryEvaluatorComponent = CreateDefaultSubobject<UActorPairQueryEvaluatorComponent>(TEXT("distanceTracker"));
	this->_hudStateComponent = CreateDefaultSubobject<UHudStateComponent>(TEXT("HudState"));
	this->_characterCollection = CreateDefaultSubobject<UCharacterCollection>(TEXT("CharacterCollection"));
	this->_collectableCollection = CreateDefaultSubobject<UCollectableCollection>(TEXT("CollectableCollection"));
	this->_serverTimeProvider = CreateDefaultSubobject<UServerTimeProviderComponent>(TEXT("ServerTimerProvider"));
	this->_inGameAssetPreloaderComponent = CreateDefaultSubobject<UInGameAssetPreloaderComponent>(TEXT("In Game Asset Pre Loader"));
	this->_onScreenDebugComponent = CreateDefaultSubobject<UOnScreenDebugComponent>(TEXT("OnScreenDebug"));
	this->_isServerDedicated = false;
	this->_maxSurvivorCount = 4;
	this->_serverBuildVersion = TEXT("");
	this->_serverContentVersion = TEXT("");
	this->_serverSessionId = TEXT("");
	this->_serverRegion = TEXT("");
	this->_serverMatchId = TEXT("");
	this->_introDuration = 8.500000;
	this->_leaveSpectateRequested = false;
}
