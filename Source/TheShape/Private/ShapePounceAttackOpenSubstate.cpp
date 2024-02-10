#include "ShapePounceAttackOpenSubstate.h"

float UShapePounceAttackOpenSubstate::GetShapePounceAttackOpenDuration() const
{
	return 0.0f;
}

UShapePounceAttackOpenSubstate::UShapePounceAttackOpenSubstate()
{
	this->_tierDurations = TArray<FDBDTunableRowHandle>();
}
