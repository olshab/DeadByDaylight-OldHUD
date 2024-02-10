#include "BaseAlertPresenter.h"
#include "EContext.h"

void UBaseAlertPresenter::OnContextLeave(EContext context)
{

}

void UBaseAlertPresenter::OnContextEnter(EContext context)
{

}

bool UBaseAlertPresenter::IsContextEntered() const
{
	return false;
}

UBaseAlertPresenter::UBaseAlertPresenter()
{
	this->ObservedContext = EContext::None;
}
