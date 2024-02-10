#include "EnvQueryTest_Basement.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_Basement::UEnvQueryTest_Basement()
{
	this->QuerierContext = UEnvQueryContext_Querier::StaticClass();
}
