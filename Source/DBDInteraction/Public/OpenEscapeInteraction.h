#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "OpenEscapeInteraction.generated.h"

class AEscapeDoor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UOpenEscapeInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	AEscapeDoor* _escapeDoor;

private:
	UPROPERTY(EditDefaultsOnly)
	FName _jointCrankTargetName;

public:
	UOpenEscapeInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOpenEscapeInteraction) { return 0; }
