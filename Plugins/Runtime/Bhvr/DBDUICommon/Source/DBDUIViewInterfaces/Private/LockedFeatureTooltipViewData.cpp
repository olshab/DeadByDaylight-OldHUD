#include "LockedFeatureTooltipViewData.h"

FLockedFeatureTooltipViewData::FLockedFeatureTooltipViewData()
{
	this->LockedElementType = ELockedElementType::Default;
	this->FeatureLockProgress = FDBDFeatureLockProgress{};
}
