#pragma once

#include "CoreMinimal.h"
#include "ProjectileProvider.h"
#include "AuthoritativeActorPoolComponent.h"
#include "SnowballProvider.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class WINTEREVENT2023_API USnowballProvider : public UAuthoritativeActorPoolComponent, public IProjectileProvider
{
	GENERATED_BODY()

public:
	USnowballProvider();
};

FORCEINLINE uint32 GetTypeHash(const USnowballProvider) { return 0; }
