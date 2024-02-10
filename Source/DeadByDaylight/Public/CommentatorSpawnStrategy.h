#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CommentatorSpawnStrategy.generated.h"

UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class UCommentatorSpawnStrategy : public UObject
{
	GENERATED_BODY()

public:
	UCommentatorSpawnStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UCommentatorSpawnStrategy) { return 0; }
