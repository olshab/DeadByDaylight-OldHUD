#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESentryLevel.h"
#include "SentryEvent.generated.h"

class USentryEvent;

UCLASS(BlueprintType)
class SENTRY_API USentryEvent : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetMessage(const FString& Message);

	UFUNCTION(BlueprintCallable)
	void SetLevel(ESentryLevel Level);

	UFUNCTION(BlueprintPure)
	bool IsCrash() const;

	UFUNCTION(BlueprintPure)
	FString GetMessage() const;

	UFUNCTION(BlueprintPure)
	ESentryLevel GetLevel() const;

	UFUNCTION(BlueprintCallable)
	static USentryEvent* CreateEventWithMessageAndLevel(const FString& Message, ESentryLevel Level);

public:
	USentryEvent();
};

FORCEINLINE uint32 GetTypeHash(const USentryEvent) { return 0; }
