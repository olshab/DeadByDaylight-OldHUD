#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryScreamBehaviour.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew)
class UCoreMemoryScreamBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _shouldScreamOnCollect;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldScreamOnAcquired;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldScreamOnSynchronized;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Scream(ACamperPlayer* camper) const;

public:
	UCoreMemoryScreamBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryScreamBehaviour) { return 0; }
