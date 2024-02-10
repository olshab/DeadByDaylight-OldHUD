#pragma once

#include "CoreMinimal.h"
#include "ProfileMenuStatsViewInterface.h"
#include "CoreTabContentWidget.h"
#include "ProfileMenuStatsWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UProfileMenuStatsWidget : public UCoreTabContentWidget, public IProfileMenuStatsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	FText PlayerLevelText;

	UPROPERTY(BlueprintReadOnly)
	FText PlayerLevelAndDevotionDescription;

	UPROPERTY(BlueprintReadOnly)
	FText KillerAndSurvivorGradesDescription;

public:
	UProfileMenuStatsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UProfileMenuStatsWidget) { return 0; }
