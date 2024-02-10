#include "CoreStoreFeaturedCharacterWidget.h"
#include "StoreFeaturedCharacterViewData.h"

void UCoreStoreFeaturedCharacterWidget::SetCharacterData_Implementation(const FStoreFeaturedCharacterViewData& characterData)
{

}

FStoreFeaturedCharacterViewData UCoreStoreFeaturedCharacterWidget::GetCharacterViewData()
{
	return FStoreFeaturedCharacterViewData{};
}

UCoreStoreFeaturedCharacterWidget::UCoreStoreFeaturedCharacterWidget()
{
	this->MoveToCharactersBioPageButton = NULL;
}
