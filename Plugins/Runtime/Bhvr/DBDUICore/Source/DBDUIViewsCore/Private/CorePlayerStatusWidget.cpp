#include "CorePlayerStatusWidget.h"

class UCorePlayerStatusKillerEffectWidget;

bool UCorePlayerStatusWidget::ShouldPlaySleepAnimation(ESleepingUIState newSleepState) const {
    return false;
}

bool UCorePlayerStatusWidget::HasTimerProgressChanged(float newTimerProgress) const {
    return false;
}

bool UCorePlayerStatusWidget::HasPlayerStatusDataChanged(const FPlayerStatusViewData& newViewData) const {
    return false;
}

bool UCorePlayerStatusWidget::HasPlayerStateChanged(EPlayerStatus newPlayerState) const {
    return false;
}

bool UCorePlayerStatusWidget::HasObsessionStateChanged(EObsessionUIState newObsessionState) const {
    return true;
}

bool UCorePlayerStatusWidget::HasKillerStatusDataChanged(const FPlayerStatusViewData& newViewData) const {
    return false;
}

EPlayerStateChangeType UCorePlayerStatusWidget::GetPlayerStateChangeType(const FPlayerStatusViewData& newViewData) const {
    return EPlayerStateChangeType::None;
}

UCorePlayerStatusKillerEffectWidget* UCorePlayerStatusWidget::GetKillerStatusEffectWidget() {
    return NULL;
}

FPlayerStatusViewData UCorePlayerStatusWidget::CacheViewData(const FPlayerStatusViewData& data)
{
    return _cachedViewData;
}

UCorePlayerStatusWidget::UCorePlayerStatusWidget() {
    //this->ObsessionSfx = NULL;
    //this->PlayerNameTextfield = NULL;
    //this->KillerStatusContainer = NULL;
    this->_killerStatusEffectWidget = NULL;
    //this->_killerStatusDataMappingDB = { };
}

