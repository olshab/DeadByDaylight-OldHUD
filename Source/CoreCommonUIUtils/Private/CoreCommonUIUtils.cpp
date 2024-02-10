#include "CoreCommonUIUtils.h"
#include "Components/SlateWrapperTypes.h"
#include "EItemRarity.h"
#include "UObject/NoExportTypes.h"

class UWidget;
class UObject;

FText UCoreCommonUIUtils::WrapTextWithStyleTag(const FText& text, const FText& style)
{
	return FText::GetEmpty();
}

void UCoreCommonUIUtils::SetConditionalWidgetVisibility(UWidget* widget, const bool condition, const ESlateVisibility trueVisibility, const ESlateVisibility falseVisibility)
{

}

bool UCoreCommonUIUtils::HasOuter(const UObject* object, UObject* root)
{
	return false;
}

FText UCoreCommonUIUtils::GetTextBasedOnRarity(const EItemRarity rarity)
{
	return FText::GetEmpty();
}

float UCoreCommonUIUtils::GetNextUpdateRate(const FDateTime& endTime)
{
	return 0.0f;
}

float UCoreCommonUIUtils::GetDPIScale()
{
	return 0.0f;
}

FText UCoreCommonUIUtils::GetBeautifiedNumericText(const int32 value)
{
	return FText::GetEmpty();
}

FString UCoreCommonUIUtils::GetBeautifiedNumericString(const int32 value)
{
	return TEXT("");
}

FString UCoreCommonUIUtils::BeautifyNarrativeText(const FString& str, const int32 charLimit)
{
	return TEXT("");
}

FString UCoreCommonUIUtils::BeautifyName(const FString& name, int32 maxCharacters)
{
	return TEXT("");
}

UCoreCommonUIUtils::UCoreCommonUIUtils()
{

}
