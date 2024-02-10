#include "K31Scanner.h"
#include "UObject/NoExportTypes.h"

TArray<FLinearColor> UK31Scanner::GetEncodedPoints() const
{
	return TArray<FLinearColor>();
}

UK31Scanner::UK31Scanner()
{
	this->_debugPointTexture = NULL;
	this->_owningActor = NULL;
	this->_playersShownOnRadar = TSet<ADBDPlayer*>();
}
