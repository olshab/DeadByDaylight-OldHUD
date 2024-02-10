#pragma once

#include "CoreMinimal.h"
#include "EInventoryItemType.h"
#include "StatusViewSource.generated.h"

USTRUCT(BlueprintType)
struct FStatusViewSource
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _sourceID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _remainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _percentageFill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInventoryItemType _sourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _sourceIconIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _sourceLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isVisuallyInfinite;

public:
	DEADBYDAYLIGHT_API FStatusViewSource();
};

FORCEINLINE uint32 GetTypeHash(const FStatusViewSource) { return 0; }
