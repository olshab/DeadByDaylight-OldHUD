#include "DBDRichTextBlock.h"

void UDBDRichTextBlock::SetIsUpperCase(bool isUpperCase)
{

}

void UDBDRichTextBlock::SetHTMLText(const FText& InText)
{

}

void UDBDRichTextBlock::PreviewUndocked()
{

}

void UDBDRichTextBlock::PreviewLargeText()
{

}

void UDBDRichTextBlock::PreviewHTMLText()
{

}

void UDBDRichTextBlock::OnSwitchDockStateChanged(bool isDocked)
{

}

void UDBDRichTextBlock::OnLargeTextSettingsChanged(bool isLargeText)
{

}

bool UDBDRichTextBlock::GetIsUpperCase() const
{
	return false;
}

UDBDRichTextBlock::UDBDRichTextBlock() : URichTextBlock(FObjectInitializer::Get())
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
