#pragma once

#include "CoreMinimal.h"
#include "ESentryLevel.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SentryLibrary.generated.h"

class USentryUserFeedback;
class USentryId;
class USentryBreadcrumb;
class USentryAttachment;
class USentryUser;
class USentryEvent;

UCLASS(BlueprintType)
class SENTRY_API USentryLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static TArray<uint8> StringToBytesArray(const FString& InString);

	UFUNCTION(BlueprintCallable)
	static FString SaveStringToFile(const FString& InString, const FString& Filename);

	UFUNCTION(BlueprintCallable)
	static USentryUserFeedback* CreateSentryUserFeedback(USentryId* EventId, const FString& Name, const FString& Email, const FString& Comments);

	UFUNCTION(BlueprintCallable)
	static USentryUser* CreateSentryUser(const FString& Email, const FString& Id, const FString& Username, const FString& IpAddress, const TMap<FString, FString>& Data);

	UFUNCTION(BlueprintCallable)
	static USentryEvent* CreateSentryEvent(const FString& Message, ESentryLevel Level);

	UFUNCTION(BlueprintCallable)
	static USentryBreadcrumb* CreateSentryBreadcrumb(const FString& Message, const FString& Type, const FString& Category, const TMap<FString, FString>& Data, ESentryLevel Level);

	UFUNCTION(BlueprintCallable)
	static USentryAttachment* CreateSentryAttachmentWithPath(const FString& Path, const FString& Filename, const FString& ContentType);

	UFUNCTION(BlueprintCallable)
	static USentryAttachment* CreateSentryAttachmentWithData(const TArray<uint8>& Data, const FString& Filename, const FString& ContentType);

	UFUNCTION(BlueprintCallable)
	static FString ByteArrayToString(const TArray<uint8>& Array);

public:
	USentryLibrary();
};

FORCEINLINE uint32 GetTypeHash(const USentryLibrary) { return 0; }
