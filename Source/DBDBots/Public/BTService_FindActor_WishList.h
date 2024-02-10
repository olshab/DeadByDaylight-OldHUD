#pragma once

#include "CoreMinimal.h"
#include "BTService_FindActor.h"
#include "GameplayTagContainer.h"
#include "BTService_FindActor_WishList.generated.h"

UCLASS()
class DBDBOTS_API UBTService_FindActor_WishList : public UBTService_FindActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FGameplayTag WishListTag;

public:
	UBTService_FindActor_WishList();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindActor_WishList) { return 0; }
