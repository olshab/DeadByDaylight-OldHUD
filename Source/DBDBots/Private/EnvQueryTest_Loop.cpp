#include "EnvQueryTest_Loop.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_Loop::UEnvQueryTest_Loop()
{
	this->QuerierContext = UEnvQueryContext_Querier::StaticClass();
}
