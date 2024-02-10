#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EAkCallbackType.h"
#include "ECommentatorContextCode.h"
#include "CommentatorSubsystem.generated.h"

class UAkCallbackInfo;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCommentatorSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnCommentatorAudioFinished(EAkCallbackType callbackType, UAkCallbackInfo* callbackInfo);

public:
	UFUNCTION(BlueprintCallable)
	void EnqueueMenuAudioContext(ECommentatorContextCode contextCode);

	UFUNCTION(BlueprintCallable)
	void EnqueueInGameAudioContext(ECommentatorContextCode contextCode);

public:
	UCommentatorSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UCommentatorSubsystem) { return 0; }
