#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoreMemoryBehaviourBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCoreMemoryBehaviourBase : public UObject
{
	GENERATED_BODY()

public:
	UCoreMemoryBehaviourBase();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryBehaviourBase) { return 0; }
