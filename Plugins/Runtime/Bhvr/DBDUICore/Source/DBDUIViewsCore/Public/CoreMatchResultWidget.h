#pragma once

#include "CoreMinimal.h"
#include "EKillerMatchResult.h"
#include "MatchResultViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "EGameState.h"
#include "CoreMatchResultWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMatchResultWidget : public UCoreBaseHudWidget, public IMatchResultViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	FText _survivorDefaultResultText;

	UPROPERTY(BlueprintReadOnly)
	TMap<EGameState, FText> _survivorResultTexts;

	UPROPERTY(BlueprintReadOnly)
	FText _killerDefaultResultText;

	UPROPERTY(BlueprintReadOnly)
	TMap<EKillerMatchResult, FText> _killerResultTexts;

public:
	UCoreMatchResultWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMatchResultWidget) { return 0; }
