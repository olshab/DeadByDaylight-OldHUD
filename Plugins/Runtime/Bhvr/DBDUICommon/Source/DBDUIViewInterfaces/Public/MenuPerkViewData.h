#pragma once

#include "CoreMinimal.h"
#include "MenuLoadoutPartViewData.h"
#include "MenuPerkViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UMenuPerkViewData : public UMenuLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText EventName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString EventId;

public:
	UMenuPerkViewData();
};

FORCEINLINE uint32 GetTypeHash(const UMenuPerkViewData) { return 0; }
