#include "CoreArchiveVignetteEntryButtonWidget.h"

void UCoreArchiveVignetteEntryButtonWidget::SetData(const int32 entryNumber, const bool isRead, const bool isImage)
{

}

int32 UCoreArchiveVignetteEntryButtonWidget::GetEntryNumber() const
{
	return 0;
}

UCoreArchiveVignetteEntryButtonWidget::UCoreArchiveVignetteEntryButtonWidget()
{
	this->TextIconLocked = NULL;
	this->TextIconUnlocked = NULL;
	this->ImageIconLocked = NULL;
	this->ImageIconUnlocked = NULL;
}
