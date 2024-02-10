#include "EventEntryPresenter.h"

void UEventEntryPresenter::OnSelectedTabChanged(const int32 key)
{

}

void UEventEntryPresenter::OnMilestoneTrackerItemClicked(const int32 selectedIndex)
{

}

void UEventEntryPresenter::OnBackAction()
{

}

void UEventEntryPresenter::GoToStoreButtonClicked(const FName selectedStoreTabItemId)
{

}

UEventEntryPresenter::UEventEntryPresenter()
{
	this->EventEntryWidgetClass = NULL;
	this->_eventSubPresenter = NULL;
	this->_detailsSubPresenter = NULL;
	this->_collectionSubPresenter = NULL;
	this->_storeSubPresenter = NULL;
	this->_activeSubPresenter = NULL;
	this->_viewData = NULL;
}
