#include "EventEntryDetailsTabWidget.h"

UEventEntryDetailsTabWidget::UEventEntryDetailsTabWidget()
{
	this->LayoutWidgetsMap = TMap<EDetailsTabLayout, UEventEntryDetailsTabLayoutWidget*>();
}
