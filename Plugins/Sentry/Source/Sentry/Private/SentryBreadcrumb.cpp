#include "SentryBreadcrumb.h"
#include "ESentryLevel.h"

void USentryBreadcrumb::SetType(const FString& Type)
{

}

void USentryBreadcrumb::SetMessage(const FString& Message)
{

}

void USentryBreadcrumb::SetLevel(ESentryLevel Level)
{

}

void USentryBreadcrumb::SetData(const TMap<FString, FString>& Data)
{

}

void USentryBreadcrumb::SetCategory(const FString& Category)
{

}

FString USentryBreadcrumb::GetType() const
{
	return TEXT("");
}

FString USentryBreadcrumb::GetMessage() const
{
	return TEXT("");
}

ESentryLevel USentryBreadcrumb::GetLevel() const
{
	return ESentryLevel::Debug;
}

TMap<FString, FString> USentryBreadcrumb::GetData() const
{
	return TMap<FString, FString>();
}

FString USentryBreadcrumb::GetCategory() const
{
	return TEXT("");
}

USentryBreadcrumb::USentryBreadcrumb()
{

}
