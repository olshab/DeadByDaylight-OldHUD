#include "VideoThumbnailProperties.h"

FVideoThumbnailProperties::FVideoThumbnailProperties()
{
	this->_id = NAME_None;
	this->_hasAudio = false;
	this->_size = FVector2D{};
	this->_source = NULL;
	this->_fadeInDuration = 0.0f;
	this->_fadeOutDuration = 0.0f;
	this->_delayDuration = 0.0f;
}
