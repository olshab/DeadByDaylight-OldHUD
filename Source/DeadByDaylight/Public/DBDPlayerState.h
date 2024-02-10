#pragma once

#include "CoreMinimal.h"
#include "StatusViewSource.h"
#include "EGameState.h"
#include "PlayerflowEventsNotifier.h"
#include "OnPlayerGameStateChanged.h"
#include "GameFramework/PlayerState.h"
#include "EPlayerRole.h"
#include "EAIDifficultyLevel.h"
#include "PlayerGameplayEventDelegate.h"
#include "AIFinishedPlayingEvent.h"
#include "GameEventData.h"
#include "EPlatformFlag.h"
#include "CharacterStateData.h"
#include "PlayerStateData.h"
#include "AwardedScores.h"
#include "AwardedScore.h"
#include "UserGameStats.h"
#include "OngoingScoreData.h"
#include "EquippedPlayerCustomization.h"
#include "EProviderFlag.h"
#include "StreamerModePlayerData.h"
#include "EBotReplacementState.h"
#include "EDBDScoreTypes.h"
#include "ScoreEventData.h"
#include "GameplayTagContainer.h"
#include "EndOfMatchRPCData.h"
#include "DBDPlayerState.generated.h"

class AActor;
class UDedicatedServerHandlerComponent;
class UGameplayNotificationManager;
class UCharacterStatsHandlerComponent;
class UPlayerScoreComponent;

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerState : public APlayerState, public IPlayerflowEventsNotifier
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FAIFinishedPlayingEvent OnAIFinishedPlayingEvent;

	UPROPERTY(Replicated, Transient)
	FString MirrorsId;

	UPROPERTY(Transient)
	FString ContentVersion;

	UPROPERTY(ReplicatedUsing=OnRep_BotDifficultyLevel, Transient)
	EAIDifficultyLevel _difficultyLevel;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient)
	bool IsPlayerReady;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient)
	EPlayerRole GameRole;

	UPROPERTY(BlueprintReadOnly, Transient, Export)
	UDedicatedServerHandlerComponent* DedicatedServerHandler;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient)
	FCharacterStateData CamperData;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData)
	FCharacterStateData SlasherData;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData)
	FPlayerStateData PlayerData;

	UPROPERTY(BlueprintAssignable)
	FPlayerGameplayEventDelegate OnPlayerGameplayEvent;

	UPROPERTY(BlueprintAssignable)
	FOnPlayerGameStateChanged OnPlayerGameStateChanged;

protected:
	UPROPERTY()
	TMap<FName, FAwardedScores> _awardedScoresByType;

	UPROPERTY()
	FUserGameStats _cachedUserGameStats;

	UPROPERTY()
	TArray<FOngoingScoreData> _ongoingScoreEvents;

	UPROPERTY(Replicated, Transient)
	bool _inParadise;

	UPROPERTY(Transient)
	bool _endOfMatchRpcReceived;

	UPROPERTY(ReplicatedUsing=OnRep_CustomizationData)
	FEquippedPlayerCustomization _playerCustomization;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient)
	int32 _selectedCamperIndex;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient)
	int32 _selectedSlasherIndex;

private:
	UPROPERTY(Transient, Export)
	UGameplayNotificationManager* _gameplayNotificationManager;

	UPROPERTY(Transient, Export)
	UCharacterStatsHandlerComponent* _characterStatsHandler;

	UPROPERTY(VisibleAnywhere, Export)
	UPlayerScoreComponent* _playerScoreComponent;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient)
	FString _platformAccountId;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient)
	EPlatformFlag _platform;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient)
	EProviderFlag _provider;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient)
	bool _crossplayAllowed;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient)
	bool _offNetworkFlag;

	UPROPERTY(ReplicatedUsing=OnRep_DisplayData, Transient)
	FStreamerModePlayerData _streamerModePlayerData;

	UPROPERTY(Replicated, Transient)
	bool _gameLevelLoaded;

	UPROPERTY(Replicated, Transient)
	bool _showPortraitBorder;

	UPROPERTY(Replicated, Transient)
	bool _hasActiveSubscription;

	UPROPERTY(Replicated, Transient)
	uint32 _matchmakingIncentive;

	UPROPERTY(Replicated)
	float _pktLossPercentage;

	UPROPERTY(ReplicatedUsing=OnRep_IsReplacementBot, Transient)
	bool _isReplacementBot;

	UPROPERTY(Replicated, Transient)
	FString _replacementBotName;

	UPROPERTY(Replicated, Transient)
	int32 _disconnectedPlayerScore;

protected:
	UFUNCTION()
	void UpdateOngoingScores();

public:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_CheatSelectSurvivor(int32 camperIndex);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_CheatSelectKiller(int32 slasherIndex);

private:
	UFUNCTION()
	void OnRep_IsReplacementBot();

public:
	UFUNCTION()
	void OnRep_DisplayData();

	UFUNCTION()
	void OnRep_CustomizationData();

	UFUNCTION()
	void OnRep_BotDifficultyLevel();

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetPlayerGameState(EGameState newGameState, bool isEscapeHatch);

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetInParadise();

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetBotInfoInCachedPlayerScore(bool isBot, bool isReplacementBot, const FString& replacementBotName);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetAsLeftMatch(EBotReplacementState botReplacementState);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetAsDisconnected(EBotReplacementState botReplacementState);

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_FireGameplayEventWithScore(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target, const FAwardedScore& awardedScore);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_FireGameplayEvent(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target);

public:
	UFUNCTION(BlueprintPure)
	bool IsInFinishedPlayingState() const;

	UFUNCTION()
	bool HasEscaped() const;

	UFUNCTION(BlueprintPure)
	EGameState GetPlayerGameState() const;

	UFUNCTION(BlueprintPure)
	EPlayerRole GetGameRole() const;

	UFUNCTION(BlueprintPure)
	UGameplayNotificationManager* GetGameplayNotificationManager() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void FireScoreEvent(EDBDScoreTypes scoreType, float percentToAward);

	UFUNCTION(BlueprintCallable)
	void FireActiveStatusViewEvent(FName statusViewID, FName uniqueSourceID, const FStatusViewSource statusViewSource);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void FireActiveStatusEffectEvent(FName statusEffectID, float percentage, int32 iconFilePathIndex, int32 levelToDisplay);

private:
	UFUNCTION(Client, Reliable)
	void Client_UpdateWallet(const FString& currencyId, int32 amount);

	UFUNCTION(Client, Reliable)
	void Client_SetInParadise();

protected:
	UFUNCTION(Client, Reliable)
	void Client_SetGameRole(EPlayerRole newRole);

private:
	UFUNCTION(Client, Reliable)
	void Client_SetDSKickedOutReason(const uint32 reason);

public:
	UFUNCTION(Client, Reliable)
	void Client_RemoveItemFromInventory(FName toRemove, bool updateLoadout);

	UFUNCTION(Client, Reliable)
	void Client_RemotelyDispatchGameEventWithScore(const FGameplayTag& gameEventType, const FGameEventData& gameEventData, const FAwardedScore& awardedScore);

	UFUNCTION(Client, Reliable)
	void Client_RemotelyDispatchGameEvent(const FGameplayTag& gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(Client, Reliable)
	void Client_InvalidateIncentives();

	UFUNCTION(Client, Reliable)
	void Client_HandleEscapeScoreEvent();

private:
	UFUNCTION(Client, Reliable)
	void Client_HandleEndOfMatch(bool success, const FEndOfMatchRPCData& response);

	UFUNCTION(Client, Reliable)
	void Client_FetchCoreRituals(bool hasClaimableRitual);

public:
	UFUNCTION(BlueprintCallable)
	void ChangeStartingGameRole(EPlayerRole gameRoleNew);

private:
	UFUNCTION()
	void Authority_SetPlayerGameState(EGameState newGameState, bool isEscapeHatch);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_EndOngoingScoreEvent(FGameplayTag scoreTypeTag);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_CancelOngoingScoreEvent(FGameplayTag scoreTypeTag);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ADBDPlayerState();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerState) { return 0; }
