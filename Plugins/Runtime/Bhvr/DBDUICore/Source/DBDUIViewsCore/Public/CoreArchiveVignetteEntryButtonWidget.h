#pragma once

#include "CoreMinimal.h"
#include "CoreTabWidget.h"
#include "CoreArchiveVignetteEntryButtonWidget.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveVignetteEntryButtonWidget : public UCoreTabWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* TextIconLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* TextIconUnlocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ImageIconLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ImageIconUnlocked;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UnlockEntry();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualData(const int32 entryNumber, const bool isRead, const FText& unreadIndicatorText, const bool isImage);

	UFUNCTION(BlueprintCallable)
	void SetData(const int32 entryNumber, const bool isRead, const bool isImage);

	UFUNCTION(BlueprintPure)
	int32 GetEntryNumber() const;

public:
	UCoreArchiveVignetteEntryButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveVignetteEntryButtonWidget) { return 0; }
