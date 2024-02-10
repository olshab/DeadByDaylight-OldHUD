#pragma once

#include "CoreMinimal.h"
#include "BaseCamperCollectable.h"
#include "DBDTunableRowHandle.h"
#include "K29InfectionRemovalCollectable.generated.h"

UCLASS()
class AK29InfectionRemovalCollectable : public ABaseCamperCollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxCharges;

public:
	AK29InfectionRemovalCollectable();
};

FORCEINLINE uint32 GetTypeHash(const AK29InfectionRemovalCollectable) { return 0; }
