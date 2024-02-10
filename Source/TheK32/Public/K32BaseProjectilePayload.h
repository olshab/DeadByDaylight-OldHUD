#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32BaseProjectilePayload.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FK32BaseProjectilePayload
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FVector StartLocationWorldSpace;

	UPROPERTY(BlueprintReadOnly)
	bool IsMovingToActor;

	UPROPERTY(BlueprintReadOnly)
	FVector WorldPositionTarget;

	UPROPERTY(BlueprintReadOnly)
	AActor* TargetActor;

	UPROPERTY(BlueprintReadOnly)
	FName TargetSocket;

public:
	THEK32_API FK32BaseProjectilePayload();
};

FORCEINLINE uint32 GetTypeHash(const FK32BaseProjectilePayload) { return 0; }
