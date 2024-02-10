#include "RemoteContentCacheEntry.h"

FRemoteContentCacheEntry::FRemoteContentCacheEntry()
{
	this->Schema = TEXT("");
	this->Uri = TEXT("");
	this->ContentVersion = TEXT("");
	this->PackagedObjectPath = FSoftObjectPath{};
	this->DownloadStrategy = ERemoteContentDownloadStrategy::PreferRemote;
	this->_isPackaged = false;
}
