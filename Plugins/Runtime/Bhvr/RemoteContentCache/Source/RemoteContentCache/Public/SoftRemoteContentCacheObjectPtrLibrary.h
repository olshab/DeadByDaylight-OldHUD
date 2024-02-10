#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SoftRemoteContentCacheObjectPtr.h"
#include "SoftRemoteContentCacheObjectPtrLibrary.generated.h"

class UImage;
class UObject;

UCLASS(BlueprintType)
class REMOTECONTENTCACHE_API USoftRemoteContentCacheObjectPtrLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void BindToImage(UObject* worldContextObject, FSoftRemoteContentCacheObjectPtr ptrToBind, UImage* target);

public:
	USoftRemoteContentCacheObjectPtrLibrary();
};

FORCEINLINE uint32 GetTypeHash(const USoftRemoteContentCacheObjectPtrLibrary) { return 0; }
