#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "EStatusEffectType.h"
#include "StatusViewProperties.generated.h"

class AStatusView;
class UTexture2D;

USTRUCT(BlueprintType)
struct FStatusViewProperties: public FDBDTableRowBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName _statusViewID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText _description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText _displayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<AStatusView> _statusViewBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EStatusEffectType _statusType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString _iconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UTexture2D> _iconAsset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _playIntroAnimation;

public:
	DEADBYDAYLIGHT_API FStatusViewProperties();
};

FORCEINLINE uint32 GetTypeHash(const FStatusViewProperties) { return 0; }
