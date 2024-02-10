#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "RestrictedPlacementAreaStrategy.generated.h"

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API URestrictedPlacementAreaStrategy : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle RestrictedRadius;

private:
	UPROPERTY(EditDefaultsOnly)
	bool _useTunableForHeight;

	UPROPERTY(EditDefaultsOnly)
	float _maxHeightRestriction;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxHeightRestrictionTunable;

public:
	URestrictedPlacementAreaStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URestrictedPlacementAreaStrategy) { return 0; }
