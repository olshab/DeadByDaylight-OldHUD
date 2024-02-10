#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EAIDodgeType.h"
#include "EAIDodgeTechnique.h"
#include "AICamperDodgeTunableRowData.generated.h"

USTRUCT()
struct FAICamperDodgeTunableRowData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 CharacterId;

	UPROPERTY(EditAnywhere)
	FText Description;

	UPROPERTY(EditAnywhere)
	EAIDodgeType BestDodgeType;

	UPROPERTY(EditAnywhere)
	TArray<EAIDodgeTechnique> DodgeTechniques;

	UPROPERTY(EditAnywhere)
	bool RequireInSight;

	UPROPERTY(EditAnywhere)
	bool RequireAttackState;

	UPROPERTY(EditAnywhere)
	float Duration;

	UPROPERTY(EditAnywhere)
	float ReactionTime;

	UPROPERTY(EditAnywhere)
	float Range;

	UPROPERTY(EditAnywhere)
	float AttackPlusSurvivorHalfWidth;

	UPROPERTY(EditAnywhere)
	float FieldOfView;

public:
	DEADBYDAYLIGHT_API FAICamperDodgeTunableRowData();
};

FORCEINLINE uint32 GetTypeHash(const FAICamperDodgeTunableRowData) { return 0; }
