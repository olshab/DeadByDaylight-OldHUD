#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "InvitationInteractionDefinition.generated.h"

UCLASS(Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UInvitationInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UInvitationInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UInvitationInteractionDefinition) { return 0; }
