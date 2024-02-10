#include "CoreLockedFeatureButtonWidget.h"

void UCoreLockedFeatureButtonWidget::UpdateLockedFeatureVisuals_Implementation(bool isLockedFeature)
{

}

bool UCoreLockedFeatureButtonWidget::HasValidLockedFeatureData() const
{
	return false;
}

UCoreLockedFeatureButtonWidget::UCoreLockedFeatureButtonWidget()
{
	this->_isFeatureGatingEnabled = false;
	this->_lockedFeatureType = EDBDFeatureType::None;
}
