#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GenericTeamAgentInterface.h"
#include "AITerrorEvent.generated.h"

class UTerrorRadiusEmitterComponent;
class AActor;

USTRUCT(BlueprintType)
struct FAITerrorEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Instigator;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export)
	UTerrorRadiusEmitterComponent* TerrorEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGenericTeamId TeamIdentifier;

public:
	DBDGAMEPLAY_API FAITerrorEvent();
};

FORCEINLINE uint32 GetTypeHash(const FAITerrorEvent) { return 0; }
