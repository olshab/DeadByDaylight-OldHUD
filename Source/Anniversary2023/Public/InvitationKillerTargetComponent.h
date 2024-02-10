#pragma once

#include "CoreMinimal.h"
#include "InvitationTargetComponent.h"
#include "DBDTunableRowHandle.h"
#include "InvitationKillerTargetComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UInvitationKillerTargetComponent : public UInvitationTargetComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _bloodlustExposeDistance;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _remoteDestroyDistance;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _negateStunDistance;

public:
	UInvitationKillerTargetComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInvitationKillerTargetComponent) { return 0; }
