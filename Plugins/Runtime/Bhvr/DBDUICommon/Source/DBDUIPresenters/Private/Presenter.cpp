#include "Presenter.h"
#include "EContext.h"

bool UPresenter::ShouldPresent() const
{
	return false;
}

void UPresenter::OnContextUnfocus(EContext context)
{

}

void UPresenter::OnContextFocus(EContext context)
{

}

void UPresenter::OnContextChanged(EContext context)
{

}

bool UPresenter::IsPlayerStateReady() const
{
	return false;
}

bool UPresenter::IsGameStateReady() const
{
	return false;
}

bool UPresenter::IsContextReady() const
{
	return false;
}

UPresenter::UPresenter()
{
	this->_overrideWidgetInstantiationPhase = false;
	this->_widgetInstantiationPhase = EPresenterPhase::Initialization;
	this->InitialVisibility = ESlateVisibility::Visible;
	this->_widgetZOrder = 0;
	this->_widget = NULL;
	this->_parentInfo = NULL;
	this->_ignoredPresentationRequirementFunctions = TSet<FString>();
	this->_presentationRequirementFunctions = TArray<UPresenterRequirementFunction*>();
	this->_filter = 0;
	this->_currencyFilter = 0;
	this->_lockedFeatureElements = TArray<TScriptInterface<ILockedFeatureElementViewInterface>>();
}
