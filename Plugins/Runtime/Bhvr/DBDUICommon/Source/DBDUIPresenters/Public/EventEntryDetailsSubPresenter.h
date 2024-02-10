#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "DetailsTabViewData.h"
#include "EventEntryDetailsSubPresenter.generated.h"

class IEventDetailsViewInterface;
class UEventEntryPresenter;

UCLASS()
class UEventEntryDetailsSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TScriptInterface<IEventDetailsViewInterface> _detailsTabWidget;

	UPROPERTY(Transient)
	FDetailsTabViewData _viewData;

	UPROPERTY(Transient, Export)
	UEventEntryPresenter* _parentPresenter;

public:
	UEventEntryDetailsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryDetailsSubPresenter) { return 0; }
