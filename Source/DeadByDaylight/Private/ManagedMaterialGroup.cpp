#include "ManagedMaterialGroup.h"

FManagedMaterialGroup::FManagedMaterialGroup()
{
	this->Source = NULL;
	this->Group = TEXT("");
	this->Condition = FMaterialGroupCondition();
}
