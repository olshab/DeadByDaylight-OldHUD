#pragma once

#include "CoreMinimal.h"
#include "CoreStoreCustomizationItemWidget.h"
#include "CoreStoreSpecialsItemWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreSpecialsItemWidget : public UCoreStoreCustomizationItemWidget
{
	GENERATED_BODY()

public:
	UCoreStoreSpecialsItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialsItemWidget) { return 0; }
