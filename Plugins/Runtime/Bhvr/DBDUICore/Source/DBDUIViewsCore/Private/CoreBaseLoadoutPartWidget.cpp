#include "CoreBaseLoadoutPartWidget.h"

class UTexture2D;

void UCoreBaseLoadoutPartWidget::SetLoadoutStackCount(int32 stackCount) {
}

void UCoreBaseLoadoutPartWidget::SetLoadoutPartRarity(EItemRarity rarity) {
}

void UCoreBaseLoadoutPartWidget::SetLoadoutPartIcon(TSoftObjectPtr<UTexture2D> icon) {
    ImageIcon->SetBrushFromTexture(icon.Get(), false);
}

UCoreBaseLoadoutPartWidget::UCoreBaseLoadoutPartWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ImageRarity = NULL;
    this->ImageIcon = NULL;
    this->TextStackCount = NULL;
}

