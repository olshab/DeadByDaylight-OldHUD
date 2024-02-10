#pragma once

#include "CoreMinimal.h"
#include "Footstep.generated.h"

class UCurveFloat;
class UDBDDecalComponent;

USTRUCT()
struct FFootstep
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	UCurveFloat* FadeCurve;

	UPROPERTY(Transient)
	UCurveFloat* VeinsCurve;

private:
	UPROPERTY(Export)
	UDBDDecalComponent* _decal;

public:
	DBDGAMEPLAY_API FFootstep();
};

FORCEINLINE uint32 GetTypeHash(const FFootstep) { return 0; }
