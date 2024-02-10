#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "DemogorgonPortalOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDemogorgonPortalOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _survivorAuraColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _killerHiddenAuraColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _killerExposedAuraColor;

public:
	UDemogorgonPortalOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPortalOutlineUpdateStrategy) { return 0; }
