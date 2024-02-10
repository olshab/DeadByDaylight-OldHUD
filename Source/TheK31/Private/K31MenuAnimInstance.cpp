#include "K31MenuAnimInstance.h"

int32 UK31MenuAnimInstance::GetCustomizationMappingID() const
{
	return 0;
}

TArray<FName> UK31MenuAnimInstance::GetCustoAnimTags() const
{
	return TArray<FName>();
}

UK31MenuAnimInstance::UK31MenuAnimInstance()
{
	this->_animationSelector = NULL;
}
