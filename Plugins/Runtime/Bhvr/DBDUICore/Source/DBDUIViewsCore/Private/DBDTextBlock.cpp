#include "DBDTextBlock.h"

void UDBDTextBlock::SetIsUpperCase(bool isUpperCase)
{

}

void UDBDTextBlock::PreviewUndocked()
{

}

void UDBDTextBlock::PreviewLargeText()
{

}

void UDBDTextBlock::PopulateTextStyles()
{

}

void UDBDTextBlock::OnSwitchDockStateChanged(bool isDocked)
{

}

void UDBDTextBlock::OnLargeTextSettingsChanged(bool isLargeText)
{

}

TArray<FString> UDBDTextBlock::GetTextStyles()
{
	return TArray<FString>();
}

bool UDBDTextBlock::GetIsUpperCase() const
{
	return false;
}

UDBDTextBlock::UDBDTextBlock()
{
	this->TextStyle = TEXT("");
	this->_switchDockStateManager = NULL;
	this->_textManager = NULL;
	this->_characterLimit = 0;
	this->_isUpperCase = false;
	this->_hasLargeText = false;
	this->_overrideUndockedPropertiesWithLargeText = false;
	this->_hasUndocking = false;
}
