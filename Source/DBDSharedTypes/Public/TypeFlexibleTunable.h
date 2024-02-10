#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EFlexibleTunableType.h"
#include "TypeFlexibleTunable.generated.h"

USTRUCT()
struct FTypeFlexibleTunable: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	EFlexibleTunableType setType;

	UPROPERTY(EditDefaultsOnly)
	bool _boolValue;

	UPROPERTY(EditDefaultsOnly)
	float _floatValue;

	UPROPERTY(EditDefaultsOnly)
	int32 _intValue;

	UPROPERTY(EditDefaultsOnly)
	FString _stringValue;

	UPROPERTY(EditDefaultsOnly)
	TArray<FString> _arrayValue;

public:
	DBDSHAREDTYPES_API FTypeFlexibleTunable();
};

FORCEINLINE uint32 GetTypeHash(const FTypeFlexibleTunable) { return 0; }
