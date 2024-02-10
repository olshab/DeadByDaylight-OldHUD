#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HangDiagnosticSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UHangDiagnosticSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UHangDiagnosticSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UHangDiagnosticSubsystem) { return 0; }
