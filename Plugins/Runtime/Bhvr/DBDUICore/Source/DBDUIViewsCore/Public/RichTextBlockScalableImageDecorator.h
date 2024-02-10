#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "Components/RichTextBlockImageDecorator.h"
#include "RichTextBlockScalableImageDecorator.generated.h"

UCLASS(BlueprintType)
class URichTextBlockScalableImageDecorator : public URichTextBlockImageDecorator
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor TintColor;

public:
	UFUNCTION(BlueprintCallable)
	void SetTintColor(FSlateColor tintColorNew);

	UFUNCTION(BlueprintCallable)
	void ResetTintColor();

public:
	URichTextBlockScalableImageDecorator();
};

FORCEINLINE uint32 GetTypeHash(const URichTextBlockScalableImageDecorator) { return 0; }
