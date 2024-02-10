#pragma once

#include "CoreMinimal.h"
#include "CoreMemoryBehaviourBase.h"
#include "CoreMemoryPortalDefaultBehaviour.generated.h"

UCLASS(EditInlineNew)
class UCoreMemoryPortalDefaultBehaviour : public UCoreMemoryBehaviourBase
{
	GENERATED_BODY()

public:
	UCoreMemoryPortalDefaultBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryPortalDefaultBehaviour) { return 0; }
