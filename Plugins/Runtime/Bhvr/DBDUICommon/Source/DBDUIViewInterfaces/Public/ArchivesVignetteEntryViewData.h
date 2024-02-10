#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ArchivesVignetteEntryViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FArchivesVignetteEntryViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsRead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> RewardImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float PreviewTextureOffset;

public:
	DBDUIVIEWINTERFACES_API FArchivesVignetteEntryViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesVignetteEntryViewData) { return 0; }
