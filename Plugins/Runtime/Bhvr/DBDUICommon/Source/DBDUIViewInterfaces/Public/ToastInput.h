#pragma once

#include "CoreMinimal.h"
#include "ToastInput.generated.h"

USTRUCT(BlueprintType)
struct FToastInput
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText InputName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsRegression;

public:
	DBDUIVIEWINTERFACES_API FToastInput();
};

FORCEINLINE uint32 GetTypeHash(const FToastInput) { return 0; }
