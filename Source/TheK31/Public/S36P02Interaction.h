#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "S36P02Interaction.generated.h"

class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class US36P02Interaction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnRecoverInteractionUsed_Cosmetic(ACamperPlayer* survivor);

public:
	US36P02Interaction();
};

FORCEINLINE uint32 GetTypeHash(const US36P02Interaction) { return 0; }
