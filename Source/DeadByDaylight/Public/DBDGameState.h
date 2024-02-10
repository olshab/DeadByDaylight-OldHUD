#pragma once

#include "CoreMinimal.h"
#include "GameflowEventsNotifier.h"
#include "OnSlasherSetDelegate.h"
#include "GameFramework/GameState.h"
#include "OnKillerIntroCompletePercentChanged.h"
#include "EIntroState.h"
#include "EscapeDoorActivatedEvent.h"
#include "BuiltLevelData.h"
#include "OfferingData.h"
#include "LightingGeneratedEvent.h"
#include "ObsessionChangedDynamicDelegate.h"
#include "AllPlayerLoadedEvent.h"
#include "SlasherSetEvent.h"
#include "ActivatedGeneratorCountChangedDynamicEvent.h"
#include "EServerUseNetAsyncLoading.h"
#include "UObject/NoExportTypes.h"
#include "GamePresetData.h"
#include "UObject/SoftObjectPtr.h"
#include "EEndGameReason.h"
#include "EGameState.h"
#include "SelectedOffering.h"
#include "DBDGameState.generated.h"

class UCharacterCollection;
class ASlasherPlayer;
class ADBDPlayer;
class UDBDDangerPredictionComponent;
class UOnScreenDebugComponent;
class ADBDPlayerState_Menu;
class UInGameAssetPreloaderComponent;
class UServerTimeProviderComponent;
class AClipManager;
class UMutatorGameplaySpawnerComponent;
class USpecialEventGameplaySpawnerComponent;
class USpecialBehaviourGameplaySpawnerComponent;
class AMeatHook;
class URenderingFeaturesSequencer;
class AFadeManager;
class ASearchable;
class UHudStateComponent;
class AGenerator;
class ACamperPlayer;
class ATotem;
class AEscapeDoor;
class ABreakableBase;
class AHatch;
class UActorPairQueryEvaluatorComponent;
class AReverseBearTrapRemover;
class APallet;
class ABaseTrap;
class AWindow;
class ALocker;
class UAkAudioBank;
class AInteractable;
class UObject;
class UEndGameStateComponent;
class UScourgeHookManagerComponent;
class UCollectableCollection;
class APawn;
class ADBDPlayerState;

UCLASS()
class DEADBYDAYLIGHT_API ADBDGameState : public AGameState, public IGameflowEventsNotifier
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlasherSetMultiDelegate, ASlasherPlayer*, SlasherPlayer);

	DECLARE_DYNAMIC_DELEGATE(FOnLevelReadyToPlayDelegate);

	DECLARE_DYNAMIC_DELEGATE(FOnIntroCompleteDelegate);

public:
	UPROPERTY(BlueprintAssignable, Transient)
	FEscapeDoorActivatedEvent OnEscapeDoorActivated;

	UPROPERTY(BlueprintReadWrite, Transient)
	EIntroState IntroState;

	UPROPERTY(BlueprintAssignable)
	FOnKillerIntroCompletePercentChanged OnKillerIntroCompletePercentChanged;

	UPROPERTY(BlueprintAssignable)
	FLightingGeneratedEvent OnLightingGenerated;

	UPROPERTY(BlueprintReadWrite, Transient, Export)
	USpecialEventGameplaySpawnerComponent* _specialEventGameplaySpawnerComponent;

	UPROPERTY(BlueprintReadWrite, Transient, Export)
	USpecialBehaviourGameplaySpawnerComponent* _specialBehaviourGameplaySpawnerComponent;

	UPROPERTY(BlueprintReadWrite, Transient, Export)
	UMutatorGameplaySpawnerComponent* _mutatorGameplaySpawnerComponent;

	UPROPERTY(BlueprintAssignable)
	FAllPlayerLoadedEvent AuthorityOnAllPlayerLoaded;

	UPROPERTY(BlueprintAssignable)
	FActivatedGeneratorCountChangedDynamicEvent OnActivatedGeneratorCountChangedDynamic;

	UPROPERTY(BlueprintAssignable)
	FSlasherSetEvent OnSlasherSet;

	UPROPERTY(BlueprintAssignable)
	FObsessionChangedDynamicDelegate OnObsessionChanged;

	UPROPERTY(ReplicatedUsing=OnRep_SecondsLeftInLobby, Transient)
	int32 SecondsLeftInLobby;

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	ASlasherPlayer* Slasher;

	UPROPERTY(Transient)
	URenderingFeaturesSequencer* _renderingSequencer;

private:
	UPROPERTY(Transient)
	int32 _camperHookedInBasementCount;

	UPROPERTY(ReplicatedUsing=OnRep_UseNetAsyncLoading, Transient)
	EServerUseNetAsyncLoading _useNetAsyncLoading;

	UPROPERTY(ReplicatedUsing=OnRep_GameLevelLoadingStarted, Transient)
	bool _gameLevelLoadingStarted;

	UPROPERTY(ReplicatedUsing=OnRep_BuildLevelData, Transient)
	FBuiltLevelData _builtLevelData;

	UPROPERTY(Replicated, Transient)
	FOfferingData _levelOfferings;

	UPROPERTY(Transient)
	AClipManager* _clipManager;

	UPROPERTY(Transient)
	AFadeManager* _fadeManager;

	UPROPERTY(ReplicatedUsing=OnRep_SessionId, Transient)
	FGuid _sessionId;

	UPROPERTY(ReplicatedUsing=OnRep_LobbyId, Transient)
	FGuid _lobbyId;

	UPROPERTY(ReplicatedUsing=OnRep_ActivatedGeneratorCount, Transient)
	int32 _activatedGeneratorCount;

	UPROPERTY(ReplicatedUsing=OnRep_RequiredActivatedGeneratorCount, Transient)
	int32 _requiredActivatedGeneratorCount;

	UPROPERTY(ReplicatedUsing=OnRep_EscapeDoorActivated, Transient)
	bool _escapeDoorActivated;

	UPROPERTY(Replicated, Transient)
	bool _escapeDoorOpened;

	UPROPERTY(ReplicatedUsing=OnRep_HatchOpened, Transient)
	bool _isHatchOpen;

	UPROPERTY(ReplicatedUsing=OnRep_OnLevelReadyToPlay, Transient)
	bool _levelReadyToPlay;

	UPROPERTY(Replicated, Transient)
	bool _playerDistributionReady;

	UPROPERTY(Replicated, Transient)
	bool _usingWeakenedMechanic;

	UPROPERTY(ReplicatedUsing=OnRep_SurvivorLeft, Transient)
	int32 _survivorLeft;

	UPROPERTY(Transient)
	TArray<AMeatHook*> _meatHooks;

	UPROPERTY(Transient)
	TArray<ASearchable*> _searchables;

	UPROPERTY(Transient)
	TArray<AGenerator*> _generators;

	UPROPERTY(Transient)
	TArray<AEscapeDoor*> _escapeDoors;

	UPROPERTY(Transient)
	TArray<AHatch*> _hatches;

	UPROPERTY(Transient)
	TArray<AReverseBearTrapRemover*> _reverseBearTrapRemovers;

	UPROPERTY(Transient)
	TArray<ABaseTrap*> _baseTraps;

	UPROPERTY(Transient)
	TArray<APallet*> _pallets;

	UPROPERTY(Transient)
	TArray<AWindow*> _windows;

	UPROPERTY(Transient)
	TArray<ALocker*> _lockers;

	UPROPERTY(Transient)
	TArray<ABreakableBase*> _breakableWalls;

	UPROPERTY(Transient)
	TArray<ATotem*> _totems;

	UPROPERTY(Transient)
	FBoxSphereBounds _mapBoxSphereBounds;

	UPROPERTY(Transient)
	FBoxSphereBounds _basementBoxSphereBounds;

	UPROPERTY()
	int32 _camperEscapedThroughHatch;

	UPROPERTY(ReplicatedUsing=OnRep_ObsessionTarget, Transient)
	ACamperPlayer* _obsessionTarget;

	UPROPERTY(Transient)
	bool _cachedObsessionEscaped;

	UPROPERTY(ReplicatedUsing=OnRep_NumberOfSurvivorsKilledOrSacrificed, Transient)
	int8 _numberOfSurvivorsKilledOrSacrificed;

	UPROPERTY(Transient)
	TArray<AInteractable*> _traps;

	UPROPERTY(Transient, Export)
	TArray<UDBDDangerPredictionComponent*> _dangerPredictionObjects;

	UPROPERTY(ReplicatedUsing=OnRep_GamePresetData, Transient)
	FGamePresetData _gamePresetData;

	UPROPERTY(Transient)
	bool _gameLevelLoaded;

	UPROPERTY(ReplicatedUsing=OnRep_OnGameLevelCreated, Transient)
	bool _gameLevelCreated;

	UPROPERTY(Transient)
	bool _gameLevelEnded;

	UPROPERTY(Transient)
	bool _gameTimedOut;

	UPROPERTY(Transient)
	EEndGameReason _gameEndedReason;

	UPROPERTY(Transient)
	bool _isLoadoutFrozen;

	UPROPERTY(Export)
	UEndGameStateComponent* _endGameState;

	UPROPERTY(Transient, Export)
	UScourgeHookManagerComponent* _scourgeHookManager;

	UPROPERTY(Export)
	UActorPairQueryEvaluatorComponent* _actorPairQueryEvaluatorComponent;

	UPROPERTY(Transient, Export)
	UHudStateComponent* _hudStateComponent;

	UPROPERTY(Export)
	UCharacterCollection* _characterCollection;

	UPROPERTY(Export)
	UCollectableCollection* _collectableCollection;

	UPROPERTY(Export)
	UServerTimeProviderComponent* _serverTimeProvider;

	UPROPERTY(VisibleAnywhere, Export)
	UInGameAssetPreloaderComponent* _inGameAssetPreloaderComponent;

	UPROPERTY(Replicated, Transient, Export)
	UOnScreenDebugComponent* _onScreenDebugComponent;

	UPROPERTY(Replicated, Transient)
	FDateTime _matchStartTime;

	UPROPERTY(Replicated, Transient)
	bool _isServerDedicated;

	UPROPERTY(Replicated, Transient)
	int32 _maxSurvivorCount;

	UPROPERTY(Replicated, Transient)
	FString _serverBuildVersion;

	UPROPERTY(Replicated, Transient)
	FString _serverContentVersion;

	UPROPERTY(Replicated, Transient)
	FString _serverSessionId;

	UPROPERTY(Replicated, Transient)
	FString _serverRegion;

	UPROPERTY(Replicated, Transient)
	FString _serverMatchId;

	UPROPERTY(EditAnywhere)
	float _introDuration;

	UPROPERTY(Replicated, Transient)
	bool _leaveSpectateRequested;

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void UpdateInGamePallets() const;

	UFUNCTION(BlueprintCallable)
	void UnregisterFromIntroCompleteAndLevelReadyToPlay(const UObject* inObject);

	UFUNCTION()
	void SortOfferings();

	UFUNCTION(BlueprintCallable)
	void SetPlayersReadyToStart(bool playersReadyToStart);

	UFUNCTION(BlueprintCallable)
	void SetKillerIntroCompletedNormalized(float completedAmount);

	UFUNCTION()
	void SetGameLevelEnded(EEndGameReason endGameReason);

	UFUNCTION(BlueprintCallable)
	void SetDisplayMapName(bool display);

	UFUNCTION()
	void Server_UpdateGameRole();

	UFUNCTION()
	void ResetGameLevelStatus();

	UFUNCTION(BlueprintCallable)
	void RemoveTrap(AInteractable* toRemove);

	UFUNCTION(BlueprintCallable)
	void RemoveDangerPredictionObject(UDBDDangerPredictionComponent* toRemove);

private:
	UFUNCTION()
	void OnRep_UseNetAsyncLoading();

	UFUNCTION()
	void OnRep_SurvivorLeft(int32 oldValue);

	UFUNCTION()
	void OnRep_SessionId();

	UFUNCTION()
	void OnRep_SecondsLeftInLobby(const int32 oldValue);

	UFUNCTION()
	void OnRep_RequiredActivatedGeneratorCount(int32 oldRequiredActivatedGeneratorCount);

	UFUNCTION()
	void OnRep_OnLevelReadyToPlay();

	UFUNCTION()
	void OnRep_OnGameLevelCreated();

	UFUNCTION()
	void OnRep_ObsessionTarget(ACamperPlayer* previousObsessionTarget);

	UFUNCTION()
	void OnRep_NumberOfSurvivorsKilledOrSacrificed(int8 oldValue);

	UFUNCTION()
	void OnRep_LobbyId();

	UFUNCTION()
	void OnRep_HatchOpened(bool oldValue);

	UFUNCTION()
	void OnRep_GamePresetData();

	UFUNCTION()
	void OnRep_GameLevelLoadingStarted(bool oldValue);

	UFUNCTION()
	void OnRep_EscapeDoorActivated(bool oldValue);

	UFUNCTION()
	void OnRep_BuildLevelData();

	UFUNCTION()
	void OnRep_ActivatedGeneratorCount(int32 oldValue);

	UFUNCTION()
	void OnPlayerGameStateChangedAddIfKilled(ADBDPlayerState* playerState, EGameState gameState);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_UpdateCharacterFromGamePreset(ADBDPlayerState_Menu* playerState_Menu, const FGamePresetData& gamePresetData);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetServerLeftGame(bool hasServerLeftGame);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetLostServerConnection(bool hasLostServerConnection);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetGameLevelLoaded(bool gameLevelLoaded);

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetGameLevelEnded(EEndGameReason endGameReason);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetGameEnded(bool hasServerLeftGame);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetBuiltLevelData(const FBuiltLevelData& builtLevelData);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SendHVSPlusState(bool enabled);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SendEnsureToClients(const FString& ensure);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnGameStarted();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_BroadcastOnLevelLoadingTimeOutClientEvent();

	UFUNCTION(BlueprintPure)
	bool IsPlayerDistributionReady() const;

	UFUNCTION(BlueprintPure)
	bool IsOnePlayerLeft() const;

	UFUNCTION()
	bool IsOfferingReceived() const;

	UFUNCTION(BlueprintCallable)
	bool IsObsessionTargetAliveInLevel();

	UFUNCTION(BlueprintCallable)
	bool IsObsessionTargetAlive();

	UFUNCTION(BlueprintPure)
	bool IsLightingGenerated() const;

	UFUNCTION()
	bool IsLevelSetupDone() const;

	UFUNCTION(BlueprintPure)
	bool IsLevelReadyToPlay() const;

	UFUNCTION(BlueprintPure)
	bool IsIntroCompleted() const;

	UFUNCTION(BlueprintPure)
	bool IsHatchVisible() const;

	UFUNCTION(BlueprintPure)
	bool IsEscapeRequirementCompleted() const;

	UFUNCTION(BlueprintPure)
	bool IsEscapeDoorOpen() const;

	UFUNCTION(BlueprintPure)
	bool IsEscapeDoorActivated() const;

	UFUNCTION(BlueprintCallable)
	void IntroCompleted();

	UFUNCTION(BlueprintPure)
	TArray<AInteractable*> GetTraps() const;

	UFUNCTION(BlueprintPure)
	TArray<ATotem*> GetTotems() const;

	UFUNCTION(BlueprintPure)
	int32 GetSurvivorLeft() const;

	UFUNCTION(BlueprintPure)
	USpecialEventGameplaySpawnerComponent* GetSpecialEventGameplaySpawnerComponent() const;

	UFUNCTION()
	TArray<FSelectedOffering> GetSelectedOfferings() const;

	UFUNCTION()
	bool GetSelectedOffering(int32 index, FSelectedOffering& selectedOffering) const;

	UFUNCTION(BlueprintPure)
	int32 GetRequiredActivatedGeneratorCount() const;

	UFUNCTION(BlueprintPure)
	int32 GetRemainingGeneratorsNeeded() const;

	UFUNCTION()
	ADBDPlayerState* GetPlayerStateByMirrorsID(const FString& id) const;

	UFUNCTION()
	ADBDPlayerState* GetPlayerStateByIDString(const FString& id, bool isReplacementBot) const;

	UFUNCTION(BlueprintPure)
	bool GetPlayersReadyToStart() const;

	UFUNCTION(BlueprintPure)
	void GetPlayerRoleCounts(int32& survivorCount, int32& killerCount, int32& spectatorCount) const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetObsessionTarget() const;

	UFUNCTION(BlueprintPure)
	int32 GetNumberOfOtherActiveSurvivors(ADBDPlayer* exception) const;

	UFUNCTION(BlueprintPure)
	int32 GetNumberOfActiveSurvivors() const;

	UFUNCTION(BlueprintPure)
	FName GetMapThemeName() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetLocalPlayerPawn() const;

	UFUNCTION(BlueprintPure)
	APawn* GetLocalPlayerBasePawn() const;

	UFUNCTION()
	TSoftObjectPtr<UAkAudioBank> GetLevelThemeAudioSoundBankAssetPtr() const;

	UFUNCTION()
	FBuiltLevelData GetLevelData() const;

	UFUNCTION(BlueprintPure)
	float GetKillerIntroCompletedNormalized() const;

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetKiller() const;

	UFUNCTION(BlueprintPure)
	bool GetIsGameEnded() const;

	UFUNCTION(BlueprintPure)
	TArray<AWindow*> GetInGameWindows() const;

	UFUNCTION(BlueprintPure)
	TArray<ASearchable*> GetInGameSearchables() const;

	UFUNCTION(BlueprintPure)
	TArray<AReverseBearTrapRemover*> GetInGameReverseBearTrapRemovers() const;

	UFUNCTION(BlueprintPure)
	TArray<APallet*> GetInGamePallets() const;

	UFUNCTION(BlueprintPure)
	TArray<AMeatHook*> GetInGameMeatHooks() const;

	UFUNCTION(BlueprintPure)
	TArray<AHatch*> GetInGameHatches() const;

	UFUNCTION(BlueprintPure)
	TArray<AGenerator*> GetInGameGenerators() const;

	UFUNCTION(BlueprintPure)
	TArray<AEscapeDoor*> GetInGameEscapeDoors() const;

	UFUNCTION(BlueprintPure)
	TArray<ABaseTrap*> GetInGameBaseTraps() const;

	UFUNCTION(BlueprintPure)
	bool GetGameLevelLoadingStarted() const;

	UFUNCTION(BlueprintPure)
	bool GetGameLevelLoaded() const;

	UFUNCTION(BlueprintPure)
	UEndGameStateComponent* GetEndGameStateComponent() const;

	UFUNCTION(BlueprintCallable)
	TArray<UDBDDangerPredictionComponent*> GetDangerPredictionObjects(const bool isObjectDynamic);

	UFUNCTION(BlueprintPure)
	UCollectableCollection* GetCollectableCollection() const;

	UFUNCTION(BlueprintPure)
	UCharacterCollection* GetCharacterCollection() const;

	UFUNCTION(BlueprintPure)
	TArray<UDBDDangerPredictionComponent*> GetAllDangerPredictionObjects() const;

	UFUNCTION(BlueprintCallable)
	void CallOnSlasherSet(FOnSlasherSetDelegate callback);

	UFUNCTION(BlueprintCallable)
	void CallOnLevelReadyToPlay(FOnLevelReadyToPlayDelegate callback);

	UFUNCTION(BlueprintCallable)
	void CallOnIntroComplete(FOnIntroCompleteDelegate callback);

	UFUNCTION()
	void BroadcastOnSetBuildLevelData();

	UFUNCTION(BlueprintCallable)
	void Authority_UnsetLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_SignalEscapeDoorActivated(bool newEscapeDoorActivated);

	UFUNCTION()
	void Authority_SetSurvivorLeft(int32 survivorRemaining);

	UFUNCTION(BlueprintCallable)
	void Authority_SetObsessionTarget(ACamperPlayer* obsessionTarget);

	UFUNCTION(BlueprintCallable)
	void Authority_SetLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_SetHatchOpen(bool opened);

	UFUNCTION()
	void Authority_SetGameStarted();

	UFUNCTION()
	void Authority_SetGameSelectedOffering(const TArray<FSelectedOffering>& offerings);

	UFUNCTION()
	void Authority_SetGameLevelLoaded();

	UFUNCTION()
	void Authority_SetGameLevelEnded(EEndGameReason endGameReason);

	UFUNCTION()
	void Authority_SetGameLevelCreated();

	UFUNCTION(BlueprintCallable)
	void Authority_SetEscapeDoorOpened(bool opened);

	UFUNCTION()
	void Authority_SetBuiltLevelData(const FBuiltLevelData& builtLevelData);

	UFUNCTION()
	void Authority_SetAllPlayerLoaded();

	UFUNCTION(BlueprintCallable)
	void Authority_EvaluateObsessionTarget(ADBDPlayer* potentialTarget);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_EscapeThroughHatch();

	UFUNCTION(BlueprintCallable)
	void Authority_EnableObsession();

	UFUNCTION()
	void Authority_DeactivateAI();

	UFUNCTION(BlueprintCallable)
	void AddTrap(AInteractable* toAdd);

	UFUNCTION(BlueprintCallable)
	void AddDangerPredictionObject(UDBDDangerPredictionComponent* toAdd);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ADBDGameState();
};

FORCEINLINE uint32 GetTypeHash(const ADBDGameState) { return 0; }
