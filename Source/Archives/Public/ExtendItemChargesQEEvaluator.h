#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "EInventoryType.h"
#include "ExtendItemChargesQEEvaluator.generated.h"

class ACamperPlayer;
class ACollectable;
class ADBDPlayer;

UCLASS()
class UExtendItemChargesQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnSurvivorRemoved(ACamperPlayer* removedPlayer) const;

	UFUNCTION()
	void OnItemRemoved(ACollectable* removedItem, EInventoryType inventoryType, ADBDPlayer* player) const;

	UFUNCTION()
	void OnItemEmpty(ADBDPlayer* itemUser);

	UFUNCTION()
	void OnItemChargeChanged(const float previousCharge, const float currentCharge, ADBDPlayer* itemUser, ACollectable* item);

	UFUNCTION()
	void OnItemAdded(ACollectable* addedItem, EInventoryType inventoryType, ADBDPlayer* player);

public:
	UExtendItemChargesQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UExtendItemChargesQEEvaluator) { return 0; }
