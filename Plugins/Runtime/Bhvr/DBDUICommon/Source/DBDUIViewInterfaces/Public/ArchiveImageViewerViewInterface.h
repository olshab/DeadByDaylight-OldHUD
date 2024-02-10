#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ArchivesVignetteEntryViewData.h"
#include "ArchiveImageViewerViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UArchiveImageViewerViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IArchiveImageViewerViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateContent(const FArchivesVignetteEntryViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetVoiceOverPlaying(bool voiceOverPlaying);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetVoiceOverAutoplay(bool voiceOverAutoplay);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTextVisibility(bool visible);

};
