#pragma once

#include "CoreMinimal.h"
#include "ESaveGameFailureType.generated.h"

UENUM(BlueprintType)
enum class ESaveGameFailureType : uint8
{
	None,
	InvalidPlayerID,
	InvalidGameInstance,
	NoServerConnection,
	UserNotSignedIn,
	Unknown,
};
