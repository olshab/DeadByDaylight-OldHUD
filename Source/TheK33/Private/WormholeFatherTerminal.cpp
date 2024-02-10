#include "WormholeFatherTerminal.h"
#include "Components/SceneComponent.h"

AWormholeFatherTerminal::AWormholeFatherTerminal()
{
	this->_wormholeKeyCardAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("WrmKeyCardAttachment"));
}
