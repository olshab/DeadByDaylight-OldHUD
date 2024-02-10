#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "TrapCamperInteraction.generated.h"

class UStatusEffect;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTrapCamperInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FString> _nonOverridableInteractions;

	UPROPERTY(EditAnywhere)
	FName _trapAttachSocket;

	UPROPERTY(EditAnywhere)
	FName _updateMontageID;

	UPROPERTY(EditAnywhere)
	FName _updateNoScreamMontageID;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _loudNoiseRangeTunable;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _hemorrhageEffectDurationTunable;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hemorrhageStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _mangledStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _honingStoneWarningStatusEffect;

public:
	UTrapCamperInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UTrapCamperInteraction) { return 0; }
