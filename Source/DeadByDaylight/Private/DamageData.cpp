#include "DamageData.h"

FDamageData::FDamageData()
{
	this->_damagedWithoutStartingGradualRegression = false;
	this->_isRegressing = false;
	this->_isIntense = false;
	this->_lastDamageChangeSource = NULL;
}
