#include "SaveTheBestForLast.h"

USaveTheBestForLast::USaveTheBestForLast()
{
	this->TokensLostOnHit = 2;
	this->_maxTokens = 0;
	this->_cooldownPerToken = 0.050000;
}
