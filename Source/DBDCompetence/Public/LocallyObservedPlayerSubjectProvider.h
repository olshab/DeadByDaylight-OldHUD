#pragma once

#include "CoreMinimal.h"
#include "ModifierSubjectProvider.h"
#include "LocallyObservedPlayerSubjectProvider.generated.h"

UCLASS()
class ULocallyObservedPlayerSubjectProvider : public UModifierSubjectProvider
{
	GENERATED_BODY()

public:
	ULocallyObservedPlayerSubjectProvider();
};

FORCEINLINE uint32 GetTypeHash(const ULocallyObservedPlayerSubjectProvider) { return 0; }
