#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "FragilePalletComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UFragilePalletComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFragilePalletSpawnEvent);

public:
	UPROPERTY(BlueprintAssignable)
	FOnFragilePalletSpawnEvent Cosmetic_OnFragilePalletSpawnBegin;

	UPROPERTY(BlueprintAssignable)
	FOnFragilePalletSpawnEvent Cosmetic_OnFragilePalletSpawnEnd;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _fragilePalletSpawnTime;

public:
	UFragilePalletComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFragilePalletComponent) { return 0; }
