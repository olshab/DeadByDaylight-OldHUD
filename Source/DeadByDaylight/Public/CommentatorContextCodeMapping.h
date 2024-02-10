#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "ECommentatorContextCode.h"
#include "EPlayerTeam.h"
#include "CommentatorContextCodeMapping.generated.h"

USTRUCT()
struct FCommentatorContextCodeMapping: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag GameEventTag;

	UPROPERTY(EditAnywhere)
	ECommentatorContextCode CommentatorContextCode;

	UPROPERTY(EditAnywhere)
	EPlayerTeam RequiredPlayerTeam;

public:
	DEADBYDAYLIGHT_API FCommentatorContextCodeMapping();
};

FORCEINLINE uint32 GetTypeHash(const FCommentatorContextCodeMapping) { return 0; }
