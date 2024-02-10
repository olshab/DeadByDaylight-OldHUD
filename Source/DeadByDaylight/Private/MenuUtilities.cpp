#include "MenuUtilities.h"

class ADBDMenuPlayer;
class UObject;

ADBDMenuPlayer* UMenuUtilities::GetLocalPlayerCharacter(const UObject* contextObject)
{
	return NULL;
}

TArray<ADBDMenuPlayer*> UMenuUtilities::GetAllMenuCharacters()
{
	return TArray<ADBDMenuPlayer*>();
}

bool UMenuUtilities::AreAllGuestCharactersReady()
{
	return false;
}

UMenuUtilities::UMenuUtilities()
{

}
