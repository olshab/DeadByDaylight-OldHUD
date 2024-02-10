#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TestObject.generated.h"

UCLASS()
class REMOTECONTENTCACHE_API UTestObject : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	int32 TestValue;

public:
	UTestObject();
};

FORCEINLINE uint32 GetTypeHash(const UTestObject) { return 0; }
