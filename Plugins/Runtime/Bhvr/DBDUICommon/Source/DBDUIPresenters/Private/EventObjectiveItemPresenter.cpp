#include "EventObjectiveItemPresenter.h"

UEventObjectiveItemPresenter::UEventObjectiveItemPresenter()
{
	this->DefaultCoreHudEventObjectiveItemWidgetClass = NULL;
	this->CoreHudEventObjectiveItemWidgetClassMapping = TMap<FName, TSubclassOf<UUserWidget>>();
}
