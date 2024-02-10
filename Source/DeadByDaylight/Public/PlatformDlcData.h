#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTableRowBase.h"
#include "PlatformDlcData.generated.h"

USTRUCT(BlueprintType)
struct FPlatformDlcData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText UnlockDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsHeritagePack;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 UISortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSoftObjectPath BannerImage;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString HeritageID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdSteam;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdEpic;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdPS4;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcId_XB1_XSX_GDK;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdGRDK;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdPS5;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DlcIdStadia;

public:
	DEADBYDAYLIGHT_API FPlatformDlcData();
};

FORCEINLINE uint32 GetTypeHash(const FPlatformDlcData) { return 0; }
