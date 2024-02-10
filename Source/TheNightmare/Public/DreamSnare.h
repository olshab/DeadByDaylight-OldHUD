#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DreamSnare.generated.h"

UCLASS()
class THENIGHTMARE_API ADreamSnare : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isActive;

public:
	ADreamSnare();
};

FORCEINLINE uint32 GetTypeHash(const ADreamSnare) { return 0; }
