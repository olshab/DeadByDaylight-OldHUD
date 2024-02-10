#pragma once

#include "CoreMinimal.h"
#include "AIGetAttentionMovement.generated.h"

USTRUCT()
struct FAIGetAttentionMovement
{
	GENERATED_BODY()

public:
	DBDBOTS_API FAIGetAttentionMovement();
};

FORCEINLINE uint32 GetTypeHash(const FAIGetAttentionMovement) { return 0; }
