#pragma once

#include "CoreMinimal.h"
#include "ESpecialEventDependency.h"
#include "DBDTableRowBase.h"
#include "SpecialBehaviourSpawnableComponent.h"
#include "SpecialEventObjectiveData.h"
#include "SpecialEventSplashScreenData.h"
#include "SpecialEventOfferingSequenceData.h"
#include "ECurrencyType.h"
#include "ESpecialEventGameMode.h"
#include "SpecialEventEntryPopupData.h"
#include "SpecialEventBloodwebData.h"
#include "SpecialEventUiTakeoverData.h"
#include "SpecialEventData.generated.h"

class UCommentatorAudioData;

USTRUCT(BlueprintType)
struct FSpecialEventData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName EventId;

	UPROPERTY(EditAnywhere)
	ECurrencyType CurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText EventName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString EventBannerLabel;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString EventThemeLabel;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsTrackedOnline;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool UseSpecialEventLoadingScreen;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FSpecialEventObjectiveData> Objectives;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString LobbyName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ShopName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FString> AdditionalLobbyNames;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName AudioStateSpecialEvent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FSpecialBehaviourSpawnableComponent> SpawnableComponents;

	UPROPERTY(EditAnywhere)
	ESpecialEventGameMode GameMode;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool UseEventEntryScreen;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSpecialEventEntryPopupData EventEntryData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ESpecialEventDependency EventDependency;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool UseMarketDiscount;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSpecialEventBloodwebData Bloodweb;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSpecialEventOfferingSequenceData OfferingSequence;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSpecialEventSplashScreenData SplashScreen;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSpecialEventUiTakeoverData UiTakeoverData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UCommentatorAudioData* CommentatorAudioData;

public:
	DEADBYDAYLIGHT_API FSpecialEventData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventData) { return 0; }
