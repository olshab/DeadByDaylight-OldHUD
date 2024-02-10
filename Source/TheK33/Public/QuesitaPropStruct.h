#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "QuesitaPropStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FQuesitaPropStruct
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> PropActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketName;

public:
	THEK33_API FQuesitaPropStruct();
};

FORCEINLINE uint32 GetTypeHash(const FQuesitaPropStruct) { return 0; }
