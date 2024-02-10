#include "OutlineOverrideConfig.h"

FOutlineOverrideConfig::FOutlineOverrideConfig()
{
	this->TranslucencyDefaultMaterialsOverride = TArray<TSoftObjectPtr<UMaterialInterface>>();
	this->OutlineOverride = TMap<TSoftClassPtr<UObject>, FOutlineConfig>();
}
