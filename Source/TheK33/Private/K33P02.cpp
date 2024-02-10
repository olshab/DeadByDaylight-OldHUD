#include "K33P02.h"

float UK33P02::GetHasteDurationAtLevel() const
{
	return 0.0f;
}

float UK33P02::GetHasteAmount() const
{
	return 0.0f;
}

UK33P02::UK33P02()
{
	this->_hasteStatusEffect = NULL;
	this->_hasteDuration = 0.000000;
	this->_hasteAmount = 0.000000;
	this->_hasteEffect = NULL;
}
