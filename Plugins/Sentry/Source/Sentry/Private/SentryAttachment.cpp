#include "SentryAttachment.h"

void USentryAttachment::InitializeWithPath(const FString& Path, const FString& Filename, const FString& ContentType)
{

}

void USentryAttachment::InitializeWithData(const TArray<uint8>& Data, const FString& Filename, const FString& ContentType)
{

}

FString USentryAttachment::GetPath() const
{
	return TEXT("");
}

FString USentryAttachment::GetFilename() const
{
	return TEXT("");
}

TArray<uint8> USentryAttachment::GetData() const
{
	return TArray<uint8>();
}

FString USentryAttachment::GetContentType() const
{
	return TEXT("");
}

USentryAttachment::USentryAttachment()
{

}
