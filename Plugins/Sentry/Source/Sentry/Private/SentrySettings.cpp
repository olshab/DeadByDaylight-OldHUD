#include "SentrySettings.h"
#include "SentryBeforeSendHandler.h"

USentrySettings::USentrySettings()
{
	this->Dsn = TEXT("");
	this->Environment = TEXT("Release");
	this->InitAutomatically = true;
	this->Debug = true;
	this->EnableForPromotedBuildsOnly = false;
	this->EnableAutoCrashCapturing = true;
	this->EnableAutoLogAttachment = false;
	this->AttachStacktrace = true;
	this->UseProxy = false;
	this->ProxyUrl = TEXT("");
	this->SampleRate = 1.000000;
	this->MaxBreadcrumbs = 100;
	this->AttachScreenshot = false;
	this->InAppInclude = TArray<FString>();
	this->InAppExclude = TArray<FString>();
	this->SendDefaultPii = false;
	this->EnableAutoSessionTracking = true;
	this->SessionTimeout = 30000;
	this->OverrideReleaseName = false;
	this->Release = TEXT("");
	this->UploadSymbolsAutomatically = false;
	this->ProjectName = TEXT("");
	this->OrgName = TEXT("");
	this->AuthToken = TEXT("");
	this->IncludeSources = false;
	this->CrashReporterUrl = TEXT("");
	this->BeforeSendHandler = USentryBeforeSendHandler::StaticClass();
}
