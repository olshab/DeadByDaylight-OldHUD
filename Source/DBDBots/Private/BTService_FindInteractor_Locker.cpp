#include "BTService_FindInteractor_Locker.h"

UBTService_FindInteractor_Locker::UBTService_FindInteractor_Locker()
{
	this->StatusFilter = EFindInteractableLockerStatusFilter::Empty;
	this->LockerNeedsToBeOpenable = true;
	this->PerksToRunInLocker = TArray<FInLockerPerk>();
}
