#pragma once

#include "CoreMinimal.h"
#include "TerrorRadiusEmitterComponent.h"
#include "SlasherTerrorRadiusEmitterComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API USlasherTerrorRadiusEmitterComponent : public UTerrorRadiusEmitterComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetBaseTerrorRadius(float baseTerrorRadius, const bool progressive);

public:
	USlasherTerrorRadiusEmitterComponent();
};

FORCEINLINE uint32 GetTypeHash(const USlasherTerrorRadiusEmitterComponent) { return 0; }
