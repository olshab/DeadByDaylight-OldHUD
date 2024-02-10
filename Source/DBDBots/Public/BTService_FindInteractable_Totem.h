#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractable.h"
#include "BTService_FindInteractable_Totem.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractable_Totem : public UBTService_FindInteractable
{
	GENERATED_BODY()

public:
	UBTService_FindInteractable_Totem();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractable_Totem) { return 0; }
