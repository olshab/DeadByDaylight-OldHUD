#include "EnvQueryTest_LureToDangerObject.h"
#include "EnvQueryContext_PinActor.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_LureToDangerObject::UEnvQueryTest_LureToDangerObject()
{
	this->QuerierContext = UEnvQueryContext_Querier::StaticClass();
	this->TargetContext = UEnvQueryContext_PinActor::StaticClass();
}
