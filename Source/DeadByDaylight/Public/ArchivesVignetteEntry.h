#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "ArchivesVignetteEntry.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FArchivesVignetteEntry: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool HasAudio;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UTexture2D> RewardImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PreviewTextureOffset;

public:
	DEADBYDAYLIGHT_API FArchivesVignetteEntry();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesVignetteEntry) { return 0; }
