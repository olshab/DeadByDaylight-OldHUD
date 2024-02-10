#pragma once

#include "CoreMinimal.h"
#include "ArchivePassClickDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FArchivePassClickDelegate, const FName&, archiveId, const FString&, packId);
