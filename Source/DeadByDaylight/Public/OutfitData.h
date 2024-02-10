#pragma once

#include "CoreMinimal.h"
#include "ItemUIData.h"
#include "DBDTableRowBase.h"
#include "ItemAvailability.h"
#include "OutfitData.generated.h"

USTRUCT(BlueprintType)
struct FOutfitData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName ID;

	UPROPERTY(EditAnywhere)
	FItemUIData UIData;

	UPROPERTY(EditAnywhere)
	FItemAvailability Availability;

	UPROPERTY(EditAnywhere)
	TArray<FName> OutfitItems;

	UPROPERTY(EditAnywhere)
	FText CollectionName;

	UPROPERTY(EditAnywhere)
	FText CollectionDescription;

	UPROPERTY(EditAnywhere)
	FString InclusionVersion;

	UPROPERTY(EditAnywhere)
	bool IsAvailableInAtlantaBuild;

	UPROPERTY(EditAnywhere)
	FName CustomizedAudioStateCollection;

private:
	UPROPERTY(EditAnywhere)
	FString _outfitId;

public:
	DEADBYDAYLIGHT_API FOutfitData();
};

FORCEINLINE uint32 GetTypeHash(const FOutfitData) { return 0; }
