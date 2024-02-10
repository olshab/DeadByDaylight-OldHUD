#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "EFindInteractableLockerStatusFilter.h"
#include "InLockerPerk.h"
#include "BTService_FindInteractor_Locker.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindInteractor_Locker : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	EFindInteractableLockerStatusFilter StatusFilter;

	UPROPERTY(EditInstanceOnly)
	bool LockerNeedsToBeOpenable;

	UPROPERTY(EditInstanceOnly)
	TArray<FInLockerPerk> PerksToRunInLocker;

public:
	UBTService_FindInteractor_Locker();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Locker) { return 0; }
