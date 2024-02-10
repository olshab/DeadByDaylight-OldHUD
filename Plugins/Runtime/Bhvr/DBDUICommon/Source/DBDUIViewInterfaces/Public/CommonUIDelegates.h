#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CommonUIDelegates.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UCommonUIDelegates : public UObject
{
	GENERATED_BODY()

public:
	UCommonUIDelegates();
};

FORCEINLINE uint32 GetTypeHash(const UCommonUIDelegates) { return 0; }
