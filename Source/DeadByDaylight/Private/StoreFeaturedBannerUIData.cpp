#include "StoreFeaturedBannerUIData.h"

FStoreFeaturedBannerUIData::FStoreFeaturedBannerUIData()
{
	this->BannerId = NAME_None;
	this->BannerData = FStoreFeaturedBannerData{};
	this->IsNew = false;
	this->LimitedTimeBannerText = TEXT("");
	this->LimitedTimeDiscountText = TEXT("");
	this->IsOwned = false;
}
