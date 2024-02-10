#pragma once

#include "CoreMinimal.h"
#include "ERemoteContentDownloadStrategy.generated.h"

UENUM(BlueprintType)
enum class ERemoteContentDownloadStrategy : uint8
{
	PreferRemote,
	PreferPackaged,
};
