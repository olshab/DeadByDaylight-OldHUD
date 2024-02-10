#pragma once

#include "CoreMinimal.h"
#include "EDirection.h"
#include "Tile2.h"
#include "BorderElements2.h"
#include "BorderTile2.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ABorderTile2 : public ATile2
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBorderElements2> Borders;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableBorderDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDirection BorderDirection;

public:
	ABorderTile2();
};

FORCEINLINE uint32 GetTypeHash(const ABorderTile2) { return 0; }
