#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SentryUserFeedback.generated.h"

class USentryId;

UCLASS(BlueprintType)
class SENTRY_API USentryUserFeedback : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetName(const FString& Name);

	UFUNCTION(BlueprintCallable)
	void SetEmail(const FString& Email);

	UFUNCTION(BlueprintCallable)
	void SetComment(const FString& Comments);

	UFUNCTION(BlueprintCallable)
	void Initialize(USentryId* EventId);

	UFUNCTION(BlueprintPure)
	FString GetName() const;

	UFUNCTION(BlueprintPure)
	FString GetEmail() const;

	UFUNCTION(BlueprintPure)
	FString GetComment() const;

public:
	USentryUserFeedback();
};

FORCEINLINE uint32 GetTypeHash(const USentryUserFeedback) { return 0; }
