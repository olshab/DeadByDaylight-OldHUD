#include "EnvQueryTest_ApproachLureableDangerObject.h"
#include "EnvQueryContext_PinActor.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_ApproachLureableDangerObject::UEnvQueryTest_ApproachLureableDangerObject()
{
	this->QuerierContext = UEnvQueryContext_Querier::StaticClass();
	this->TargetContext = UEnvQueryContext_PinActor::StaticClass();
	this->TowardDangerObjectMaxAngle = 70.000000;
}
