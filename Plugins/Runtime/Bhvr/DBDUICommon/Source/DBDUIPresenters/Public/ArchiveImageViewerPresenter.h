#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "ArchiveImageViewerPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UArchiveImageViewerPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> ArchiveImageViewerWidgetClass;

private:
	UFUNCTION()
	void OnTextVisibilityChanged();

	UFUNCTION()
	void OnImageViewerVoiceOverPlayed();

	UFUNCTION()
	void OnImageViewerVoiceOverAutoplay(bool autoplay);

	UFUNCTION()
	void OnBackAction();

	UFUNCTION()
	void OnArchivesVoiceOverPlayed(bool playing);

	UFUNCTION()
	void OnArchivesVoiceOverAutoplay(bool autoplay);

	UFUNCTION()
	bool CanShowFullScreenMode() const;

public:
	UArchiveImageViewerPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveImageViewerPresenter) { return 0; }
