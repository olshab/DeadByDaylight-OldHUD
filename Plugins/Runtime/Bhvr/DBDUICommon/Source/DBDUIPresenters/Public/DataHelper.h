#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DataHelper.generated.h"

UCLASS()
class DBDUIPRESENTERS_API UDataHelper : public UObject
{
	GENERATED_BODY()

public:
	UDataHelper();
};

FORCEINLINE uint32 GetTypeHash(const UDataHelper) { return 0; }
