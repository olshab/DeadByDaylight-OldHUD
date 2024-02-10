#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CommentatorActorBase.generated.h"

class UAkComponent;

UCLASS(Abstract)
class ACommentatorActorBase : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UAkComponent* _audioComponent;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnAudioStarted();

	UFUNCTION(BlueprintImplementableEvent)
	void OnAudioEnded();

public:
	ACommentatorActorBase();
};

FORCEINLINE uint32 GetTypeHash(const ACommentatorActorBase) { return 0; }
