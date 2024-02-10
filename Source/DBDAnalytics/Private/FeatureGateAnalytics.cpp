#include "FeatureGateAnalytics.h"

FFeatureGateAnalytics::FFeatureGateAnalytics()
{
	this->Enabled = false;
	this->Features = TArray<FFeatureGateAnalyticsDBDFeature>();
}
