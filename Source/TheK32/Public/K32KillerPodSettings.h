#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32KillerPodSettings.generated.h"

USTRUCT(BlueprintType)
struct FK32KillerPodSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FVector CollisionPoint;

	UPROPERTY(BlueprintReadOnly)
	FVector SpawnLocation;

	UPROPERTY(BlueprintReadOnly)
	FRotator SpawnForwardRotation;

	UPROPERTY(BlueprintReadOnly)
	FRotator LastForwardRotation;

	UPROPERTY(BlueprintReadOnly)
	bool IsVisible;

	UPROPERTY(BlueprintReadOnly)
	bool IsDisabled;

	UPROPERTY(BlueprintReadOnly)
	bool IsControlledByKiller;

	UPROPERTY(BlueprintReadOnly)
	bool IsLastControlledKillerPod;

	UPROPERTY(BlueprintReadOnly)
	FVector SurfaceNormal;

	UPROPERTY(BlueprintReadOnly, NotReplicated)
	TArray<FVector> AttachmentPoints;

public:
	THEK32_API FK32KillerPodSettings();
};

FORCEINLINE uint32 GetTypeHash(const FK32KillerPodSettings) { return 0; }
