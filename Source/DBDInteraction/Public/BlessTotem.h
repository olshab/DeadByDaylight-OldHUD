#pragma once

#include "CoreMinimal.h"
#include "BaseTotemInteraction.h"
#include "DBDTunableRowHandle.h"
#include "BlessTotem.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBlessTotem : public UBaseTotemInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	FDBDTunableRowHandle _blessHexTotemSpeedPenalty;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionStarted();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionFinished();

public:
	UBlessTotem();
};

FORCEINLINE uint32 GetTypeHash(const UBlessTotem) { return 0; }
