#include "SentryScope.h"
#include "ESentryLevel.h"

class USentryBreadcrumb;
class USentryAttachment;

void USentryScope::SetTagValue(const FString& Key, const FString& Value)
{

}

void USentryScope::SetTags(const TMap<FString, FString>& Tags)
{

}

void USentryScope::SetLevel(ESentryLevel Level)
{

}

void USentryScope::SetFingerprint(const TArray<FString>& Fingerprint)
{

}

void USentryScope::SetExtraValue(const FString& Key, const FString& Value)
{

}

void USentryScope::SetExtras(const TMap<FString, FString>& Extras)
{

}

void USentryScope::SetEnvironment(const FString& Environment)
{

}

void USentryScope::SetDist(const FString& Dist)
{

}

void USentryScope::SetContext(const FString& Key, const TMap<FString, FString>& Values)
{

}

void USentryScope::RemoveTag(const FString& Key)
{

}

void USentryScope::RemoveExtra(const FString& Key)
{

}

void USentryScope::RemoveContext(const FString& Key)
{

}

FString USentryScope::GetTagValue(const FString& Key) const
{
	return TEXT("");
}

TMap<FString, FString> USentryScope::GetTags() const
{
	return TMap<FString, FString>();
}

ESentryLevel USentryScope::GetLevel() const
{
	return ESentryLevel::Debug;
}

TArray<FString> USentryScope::GetFingerprint() const
{
	return TArray<FString>();
}

FString USentryScope::GetExtraValue(const FString& Key) const
{
	return TEXT("");
}

TMap<FString, FString> USentryScope::GetExtras() const
{
	return TMap<FString, FString>();
}

FString USentryScope::GetEnvironment() const
{
	return TEXT("");
}

FString USentryScope::GetDist() const
{
	return TEXT("");
}

void USentryScope::ClearBreadcrumbs()
{

}

void USentryScope::ClearAttachments()
{

}

void USentryScope::Clear()
{

}

void USentryScope::AddBreadcrumb(USentryBreadcrumb* Breadcrumb)
{

}

void USentryScope::AddAttachment(USentryAttachment* Attachment)
{

}

USentryScope::USentryScope()
{

}
