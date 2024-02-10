#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InvitationTargetComponent.h"
#include "DBDTunableRowHandle.h"
#include "InvitationSurvivorTargetComponent.generated.h"

class UStatusEffect;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UInvitationSurvivorTargetComponent : public UInvitationTargetComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _vaultBlockerDistance;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _fragilePalletDistance;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _masqueradeRevealStatusEffect;

public:
	UInvitationSurvivorTargetComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInvitationSurvivorTargetComponent) { return 0; }
