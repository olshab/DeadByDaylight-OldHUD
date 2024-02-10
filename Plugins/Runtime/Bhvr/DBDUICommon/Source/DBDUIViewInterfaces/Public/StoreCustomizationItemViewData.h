#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomTransformation.h"
#include "StoreItemViewData.h"
#include "CustomizationRewardViewData.h"
#include "SpecialEventInfoViewData.h"
#include "EPlayerRole.h"
#include "StoreCustomizationItemViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UStoreCustomizationItemViewData : public UStoreItemViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Transient)
	FCustomizationRewardViewData CustomizationReward;

	UPROPERTY(BlueprintReadOnly, Transient)
	FName MirrorsId;

	UPROPERTY(BlueprintReadWrite, Transient)
	FString DisplayName;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString DisplayCollectionName;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString Description;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString RoleCategoryInfo;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString RarityPartInfo;

	UPROPERTY(BlueprintReadOnly, Transient)
	FSpecialEventInfoViewData EventInfo;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FName> ParentBundleIds;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FName> ChildrenItemIds;

	UPROPERTY(BlueprintReadOnly, Transient)
	FCustomTransformation CustomTransformation;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsVisceral;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsLocked;

	UPROPERTY(BlueprintReadOnly, Transient)
	EPlayerRole AssociatedRole;

	UPROPERTY(BlueprintReadOnly, Transient)
	FDateTime ReleaseDate;

public:
	UStoreCustomizationItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCustomizationItemViewData) { return 0; }
