#pragma once

#include "CoreMinimal.h"
#include "PlayerCardAnimationViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CorePlayerCardAnimationWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerCardAnimationWidget : public UCoreBaseUserWidget, public IPlayerCardAnimationViewInterface
{
	GENERATED_BODY()

public:
	UCorePlayerCardAnimationWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerCardAnimationWidget) { return 0; }
