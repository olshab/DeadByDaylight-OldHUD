#pragma once

#include "CoreMinimal.h"
#include "DBDPlayerControllerBase.h"
#include "OnPawnLeavingGameDelegate.h"
#include "OnLocallyObservedChangedDelegate.h"
#include "EPlayerRole.h"
#include "PlayerFinishStats.h"
#include "DBDPlayerController.generated.h"

class APawn;
class UDBDBaseInputHandler;
class ADBDPlayer;
class ADBDPlayerState;
class ANetworkFenceActor;

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerController : public ADBDPlayerControllerBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnPawnLeavingGameDelegate OnPawnLeavingGame;

	UPROPERTY(BlueprintAssignable)
	FOnLocallyObservedChangedDelegate OnLocallyObservedChanged;

private:
	UPROPERTY(ReplicatedUsing=OnRep_Fence, Transient)
	ANetworkFenceActor* _theFence;

	UPROPERTY(Transient)
	UDBDBaseInputHandler* _inputHandler;

	UPROPERTY(Transient)
	APawn* _aiPawn;

	UPROPERTY(EditDefaultsOnly)
	EPlayerRole _controllerGameRole;

public:
	UFUNCTION(Server, Unreliable, WithValidation)
	void ServerViewPlayer(const FString& playerName);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetSpectatorModeInEditor(bool on, ADBDPlayerState* spectatingPlayerState);

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetSpectatorMode(bool on);

public:
	UFUNCTION(Server, Reliable)
	void Server_SetReadyToTravel();

	UFUNCTION(Server, Reliable)
	void Server_RequestEndGame();

	UFUNCTION(Server, Reliable)
	void Server_NotifyHasMoved();

	UFUNCTION(Server, Reliable)
	void Server_LeaveGame(bool joiningLobby);

	UFUNCTION(Server, Reliable)
	void Server_DebugSend(const FString& data);

	UFUNCTION(Server, Unreliable)
	void Server_ClientTimeSinceLastLoadingProgress(float lastProgression);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ActivateAIAll(bool activate, int32 playerRank, int8 playerRole);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ActivateAI(bool activate, int32 playerRank);

private:
	UFUNCTION()
	void OnRep_Fence();

public:
	UFUNCTION(BlueprintPure)
	bool MobileJoystickInput_Pressed(int32 joystickIndex) const;

	UFUNCTION(BlueprintPure)
	bool IsSpectating() const;

	UFUNCTION(BlueprintCallable)
	void ImplementRunLockMechanic();

	UFUNCTION(BlueprintPure)
	ADBDPlayerState* GetSpectatedPlayerState() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetSpectatedPlayer() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetControlledPlayer() const;

	UFUNCTION(BlueprintPure)
	APawn* GetAIPawn() const;

private:
	UFUNCTION(Client, Reliable)
	void Client_SpectateAI(APawn* aiPawn);

public:
	UFUNCTION(Client, Reliable)
	void Client_SetSpectatorModeInEditor(bool on, ADBDPlayerState* spectatingPlayerState);

	UFUNCTION(Client, Reliable)
	void Client_SetSpectatorMode(bool on);

private:
	UFUNCTION(Client, Reliable)
	void Client_SetPlayerFinishStats(const FPlayerFinishStats& stats);

public:
	UFUNCTION(BlueprintCallable)
	void ActivateAI(bool activate, int32 playerRank);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ADBDPlayerController();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerController) { return 0; }
