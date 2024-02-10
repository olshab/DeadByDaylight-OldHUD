#include "EnvQueryTest_IsInDangerObjectRange.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_IsInDangerObjectRange::UEnvQueryTest_IsInDangerObjectRange()
{
	this->QuerierContext = UEnvQueryContext_Querier::StaticClass();
}
