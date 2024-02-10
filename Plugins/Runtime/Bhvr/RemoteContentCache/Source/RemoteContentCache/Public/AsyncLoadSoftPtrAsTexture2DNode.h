#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SoftRemoteContentCacheObjectPtr.h"
#include "AsyncLoadSoftPtrAsTexture2DNode.generated.h"

class UAsyncLoadSoftPtrAsTexture2DNode;
class UObject;
class UTexture2D;

UCLASS()
class REMOTECONTENTCACHE_API UAsyncLoadSoftPtrAsTexture2DNode : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSoftPtrAsyncLoadAsTexture2DCompleted, UTexture2D*, LoadedTexture);

public:
	UPROPERTY(BlueprintAssignable)
	FSoftPtrAsyncLoadAsTexture2DCompleted Loaded;

	UPROPERTY(BlueprintAssignable)
	FSoftPtrAsyncLoadAsTexture2DCompleted LoadFailed;

public:
	UFUNCTION(BlueprintCallable)
	static UAsyncLoadSoftPtrAsTexture2DNode* LoadAsTexture2D(UObject* worldContextObject, FSoftRemoteContentCacheObjectPtr ptrToLoad);

public:
	UAsyncLoadSoftPtrAsTexture2DNode();
};

FORCEINLINE uint32 GetTypeHash(const UAsyncLoadSoftPtrAsTexture2DNode) { return 0; }
