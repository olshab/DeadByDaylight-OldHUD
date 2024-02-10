#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PounceAttackOpenSubstateCosmetic.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class UPounceAttackOpenSubstateCosmetic : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLungeAttackStartCosmetic(ADBDPlayer* killer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLungeAttackEndCosmetic(ADBDPlayer* killer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLocallyObservedChangedCosmetic(ADBDPlayer* killer);

private:
	UFUNCTION()
	void OnLocallyObservedChanged(ADBDPlayer* killer);

public:
	UFUNCTION(BlueprintPure)
	bool IsLungeAttackAugmented(ADBDPlayer* killer) const;

public:
	UPounceAttackOpenSubstateCosmetic();
};

FORCEINLINE uint32 GetTypeHash(const UPounceAttackOpenSubstateCosmetic) { return 0; }
