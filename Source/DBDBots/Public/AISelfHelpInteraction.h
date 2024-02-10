#pragma once

#include "CoreMinimal.h"
#include "EInputInteractionType.h"
#include "AITunableParameter.h"
#include "AISelfHelpInteraction.generated.h"

USTRUCT()
struct FAISelfHelpInteraction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FString InteractionID;

	UPROPERTY(EditInstanceOnly)
	EInputInteractionType InputType;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter BasicWeight;

	UPROPERTY(EditInstanceOnly)
	bool UsesSurvivorItem;

	UPROPERTY(EditInstanceOnly)
	bool PreferHelpFromOther;

	UPROPERTY(EditInstanceOnly)
	bool UsesAISkill;

public:
	DBDBOTS_API FAISelfHelpInteraction();
};

FORCEINLINE uint32 GetTypeHash(const FAISelfHelpInteraction) { return 0; }
