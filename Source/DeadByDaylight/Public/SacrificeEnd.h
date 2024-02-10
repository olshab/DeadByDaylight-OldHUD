#pragma once

#include "CoreMinimal.h"
#include "Particles/Emitter.h"
#include "SacrificeEnd.generated.h"

UCLASS()
class ASacrificeEnd : public AEmitter
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void FX_SacrificeEnd_Basement();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void FX_SacrificeEnd();

public:
	ASacrificeEnd();
};

FORCEINLINE uint32 GetTypeHash(const ASacrificeEnd) { return 0; }
