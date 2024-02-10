#include "StatusViewProperties.h"

FStatusViewProperties::FStatusViewProperties()
{
	this->_statusViewID = NAME_None;
	this->_description = FText::GetEmpty();
	this->_displayName = FText::GetEmpty();
	this->_statusViewBlueprint = NULL;
	this->_statusType = EStatusEffectType::None;
	this->_iconFilePath = TEXT("");
	this->_iconAsset = NULL;
	this->_playIntroAnimation = false;
}
