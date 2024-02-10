#include "CustomizationAnimationMapping.h"

FCustomizationAnimationMapping::FCustomizationAnimationMapping()
{
	this->ID = 0;
	this->AnimTags = TArray<FName>();
	this->_mappingInfos = TArray<FCustomizationCategoryAnimationMappingInfo>();
}
