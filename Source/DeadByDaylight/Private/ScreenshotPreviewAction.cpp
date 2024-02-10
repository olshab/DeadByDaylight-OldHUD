#include "ScreenshotPreviewAction.h"

FScreenshotPreviewAction::FScreenshotPreviewAction()
{
	this->SkyboxEnabled = false;
	this->FrameSizes = TMap<ECharacterToolItemType, FIntPoint>();
	this->RenderResolution = 0;
	this->RenderTarget = NULL;
	this->EditorWidgetClass = NULL;
}
