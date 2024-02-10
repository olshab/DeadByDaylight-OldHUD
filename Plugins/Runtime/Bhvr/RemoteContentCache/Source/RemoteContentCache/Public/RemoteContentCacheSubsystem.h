#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RemoteContentCacheSubsystem.generated.h"

UCLASS()
class REMOTECONTENTCACHE_API URemoteContentCacheSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	URemoteContentCacheSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const URemoteContentCacheSubsystem) { return 0; }
