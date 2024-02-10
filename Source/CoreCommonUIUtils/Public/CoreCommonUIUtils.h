#pragma once

#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EItemRarity.h"
#include "UObject/NoExportTypes.h"
#include "CoreCommonUIUtils.generated.h"

class UWidget;
class UObject;

UCLASS(BlueprintType)
class CORECOMMONUIUTILS_API UCoreCommonUIUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static FText WrapTextWithStyleTag(const FText& text, const FText& style);

	UFUNCTION(BlueprintCallable)
	static void SetConditionalWidgetVisibility(UWidget* widget, const bool condition, const ESlateVisibility trueVisibility, const ESlateVisibility falseVisibility);

	UFUNCTION(BlueprintPure)
	static bool HasOuter(const UObject* object, UObject* root);

	UFUNCTION(BlueprintPure)
	static FText GetTextBasedOnRarity(const EItemRarity rarity);

	UFUNCTION(BlueprintCallable)
	static float GetNextUpdateRate(const FDateTime& endTime);

	UFUNCTION(BlueprintPure)
	static float GetDPIScale();

	UFUNCTION(BlueprintPure)
	static FText GetBeautifiedNumericText(const int32 value);

	UFUNCTION(BlueprintPure)
	static FString GetBeautifiedNumericString(const int32 value);

	UFUNCTION(BlueprintPure)
	static FString BeautifyNarrativeText(const FString& str, const int32 charLimit);

	UFUNCTION(BlueprintPure)
	static FString BeautifyName(const FString& name, int32 maxCharacters);

public:
	UCoreCommonUIUtils();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCommonUIUtils) { return 0; }
