#pragma once

#include "CoreMinimal.h"
#include "EnableBuildTargets.h"
#include "Templates/SubclassOf.h"
#include "EnableBuildPlatforms.h"
#include "AutomaticBreadcrumbs.h"
#include "UObject/NoExportTypes.h"
#include "EnableBuildConfigurations.h"
#include "TagsPromotion.h"
#include "SentrySettings.generated.h"

class USentryBeforeSendHandler;

UCLASS(BlueprintType)
class SENTRY_API USentrySettings : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Dsn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Environment;

	UPROPERTY(EditAnywhere)
	bool InitAutomatically;

	UPROPERTY(EditAnywhere)
	bool Debug;

	UPROPERTY(EditAnywhere)
	bool EnableForPromotedBuildsOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEnableBuildConfigurations EnableBuildConfigurations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEnableBuildTargets EnableBuildTargets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEnableBuildPlatforms EnableBuildPlatforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAutomaticBreadcrumbs AutomaticBreadcrumbs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTagsPromotion TagsPromotion;

	UPROPERTY(EditAnywhere)
	bool EnableAutoCrashCapturing;

	UPROPERTY(EditAnywhere)
	bool EnableAutoLogAttachment;

	UPROPERTY(EditAnywhere)
	bool AttachStacktrace;

	UPROPERTY(EditAnywhere)
	bool UseProxy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ProxyUrl;

	UPROPERTY(EditAnywhere)
	float SampleRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxBreadcrumbs;

	UPROPERTY(EditAnywhere)
	bool AttachScreenshot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> InAppInclude;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> InAppExclude;

	UPROPERTY(EditAnywhere)
	bool SendDefaultPii;

	UPROPERTY(EditAnywhere)
	bool EnableAutoSessionTracking;

	UPROPERTY(EditAnywhere)
	int32 SessionTimeout;

	UPROPERTY(EditAnywhere)
	bool OverrideReleaseName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Release;

	UPROPERTY(EditAnywhere)
	bool UploadSymbolsAutomatically;

	UPROPERTY(EditAnywhere)
	FString ProjectName;

	UPROPERTY(EditAnywhere)
	FString OrgName;

	UPROPERTY(EditAnywhere)
	FString AuthToken;

	UPROPERTY(EditAnywhere)
	bool IncludeSources;

	UPROPERTY(EditAnywhere)
	FString CrashReporterUrl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<USentryBeforeSendHandler> BeforeSendHandler;

public:
	USentrySettings();
};

FORCEINLINE uint32 GetTypeHash(const USentrySettings) { return 0; }
