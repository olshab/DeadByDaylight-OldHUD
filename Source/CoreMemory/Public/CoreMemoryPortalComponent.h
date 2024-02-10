#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CoreMemoryPortalComponent.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UCoreMemoryPortalComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _playersWithActivePortal;

public:
	UFUNCTION(BlueprintPure)
	TArray<ADBDPlayer*> GetPlayersWithActivePortal() const;

public:
	UCoreMemoryPortalComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryPortalComponent) { return 0; }
