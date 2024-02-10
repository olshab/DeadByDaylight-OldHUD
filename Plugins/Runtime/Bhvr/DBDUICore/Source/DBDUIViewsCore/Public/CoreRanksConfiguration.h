#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "CoreRanksConfiguration.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCoreRanksConfiguration
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* RankBackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateColor NumberColor;

public:
	DBDUIVIEWSCORE_API FCoreRanksConfiguration();
};

FORCEINLINE uint32 GetTypeHash(const FCoreRanksConfiguration) { return 0; }
