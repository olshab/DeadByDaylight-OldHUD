#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "EventEntryPopupSkinUIData.generated.h"

class UTexture2D;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct FEventEntryPopupSkinUIData: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ScrollBarColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> EventImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> PreviewAreaBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor BaseColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInstance> BackgroundTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> BackgroundCenterImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInstance> TabMaterialInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsUsingBackgroundTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInstance> TitleBannerMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> TitleIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInstance> HeaderBackgroundMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInstance> MilestoneTrackerBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInstance> MilestoneTrackerHighlightBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor PreviewBGTintColor;

public:
	DBDUIVIEWINTERFACES_API FEventEntryPopupSkinUIData();
};

FORCEINLINE uint32 GetTypeHash(const FEventEntryPopupSkinUIData) { return 0; }
