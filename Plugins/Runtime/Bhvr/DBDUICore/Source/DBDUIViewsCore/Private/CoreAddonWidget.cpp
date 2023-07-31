#include "CoreAddonWidget.h"

class UTexture2D;

//void UCoreAddonWidget::SetLoadoutStackCount(int32 stackCount) {
//}

void UCoreAddonWidget::SetLoadoutPartRarity(EItemRarity rarity) {
}

void UCoreAddonWidget::SetLoadoutPartIcon(TSoftObjectPtr<UTexture2D> icon) {
}

UCoreAddonWidget::UCoreAddonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ImageRarity = NULL;
    this->ImageIcon = NULL;
    this->StackCount = NULL;
}

