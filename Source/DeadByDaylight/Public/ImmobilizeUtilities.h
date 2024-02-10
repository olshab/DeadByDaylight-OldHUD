#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGuidedState.h"
#include "EImmobilizedState.h"
#include "ImmobilizeUtilities.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UImmobilizeUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void StopGuiding(ADBDPlayer* player, ADBDPlayer* previouslyGuidingPlayer);

	UFUNCTION(BlueprintCallable)
	static void StartGuiding(ADBDPlayer* player, EGuidedState guidedState, ADBDPlayer* guidingPlayer);

	UFUNCTION(BlueprintCallable)
	static void SetImmobilizeState(ADBDPlayer* player, EImmobilizedState immobilizeState);

	UFUNCTION(BlueprintCallable)
	static void RemoveAllGuidingPlayers(ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	static bool IsImmobilized(const ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	static bool IsGuidedByPlayer(const ADBDPlayer* player, const ADBDPlayer* guidingPlayer);

	UFUNCTION(BlueprintPure)
	static bool IsGuided(const ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	static bool HasImmobilizeState(const ADBDPlayer* player, EImmobilizedState immobilizeState);

	UFUNCTION(BlueprintPure)
	static bool HasGuidedState(const ADBDPlayer* player, EGuidedState guidedState);

	UFUNCTION(BlueprintPure)
	static EImmobilizedState GetImmobilizeState(const ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	static EGuidedState GetGuidedState(const ADBDPlayer* player);

public:
	UImmobilizeUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UImmobilizeUtilities) { return 0; }
