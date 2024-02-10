#pragma once

#include "CoreMinimal.h"
#include "ClosetHideEnterInteraction.h"
#include "QuesitaPropStruct.h"
#include "QuesitaClosetHideEnterInteraction.generated.h"

class AActor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UQuesitaClosetHideEnterInteraction : public UClosetHideEnterInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<FQuesitaPropStruct> _propInfos;

private:
	UPROPERTY()
	TArray<AActor*> _props;

public:
	UQuesitaClosetHideEnterInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UQuesitaClosetHideEnterInteraction) { return 0; }
