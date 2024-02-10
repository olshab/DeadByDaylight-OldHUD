#pragma once

#include "CoreMinimal.h"
#include "EFatherKeyCardState.h"
#include "BaseCamperCollectable.h"
#include "WormholeFatherKeyCard.generated.h"

class ADBDPlayer;

UCLASS()
class AWormholeFatherKeyCard : public ABaseCamperCollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_KeyCardState)
	EFatherKeyCardState _keyCardState;

private:
	UFUNCTION()
	void RemoveInitialTag(ADBDPlayer* character) const;

	UFUNCTION()
	void OnRep_KeyCardState();

public:
	UFUNCTION(BlueprintPure)
	EFatherKeyCardState GetKeyCardState() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKeyCardDropped();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKeyCardCollected();

private:
	UFUNCTION()
	void ApplyInitialTag(ADBDPlayer* character) const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AWormholeFatherKeyCard();
};

FORCEINLINE uint32 GetTypeHash(const AWormholeFatherKeyCard) { return 0; }
