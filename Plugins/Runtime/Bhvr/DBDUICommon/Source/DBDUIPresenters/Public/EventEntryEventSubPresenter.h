#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "EventEntryEventSubPresenter.generated.h"

class UEventEntryPresenter;
class IEventInfoViewInterface;
class UEventTabViewData;

UCLASS()
class UEventEntryEventSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TScriptInterface<IEventInfoViewInterface> _eventTabWidget;

	UPROPERTY(Transient)
	UEventTabViewData* _tabsData;

	UPROPERTY(Transient, Export)
	UEventEntryPresenter* _parentPresenter;

protected:
	UFUNCTION()
	void OnArchiveButtonClicked();

public:
	UEventEntryEventSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryEventSubPresenter) { return 0; }
