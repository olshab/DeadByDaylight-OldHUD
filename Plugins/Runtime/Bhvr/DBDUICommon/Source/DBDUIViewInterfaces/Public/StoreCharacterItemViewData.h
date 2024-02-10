#pragma once

#include "CoreMinimal.h"
#include "StoreItemViewData.h"
#include "CharacterRewardViewData.h"
#include "EPlayerRole.h"
#include "ECharacterDifficulty.h"
#include "SpecialEventInfoViewData.h"
#include "StoreCharacterItemViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UStoreCharacterItemViewData : public UStoreItemViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCharacterRewardViewData CharacterReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Biography;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECharacterDifficulty Difficulty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FSpecialEventInfoViewData EventInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName KillerPowerId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsUnlocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 UnlockInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 ItemsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 TotalItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasNonSelectedPerks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDlcLockedKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsLegacyRewardPrestigeEnabled;

public:
	UStoreCharacterItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCharacterItemViewData) { return 0; }
