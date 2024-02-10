#pragma once

#include "CoreMinimal.h"
#include "SoftRemoteContentCacheObjectPtr.h"
#include "EPlayerRole.h"
#include "StoreFeaturedCharacterViewData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedCharacterViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FSoftRemoteContentCacheObjectPtr CharacterPortrait;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText CharacterName;

public:
	DBDUIVIEWINTERFACES_API FStoreFeaturedCharacterViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedCharacterViewData) { return 0; }
