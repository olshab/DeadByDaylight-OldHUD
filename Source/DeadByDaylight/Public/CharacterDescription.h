#pragma once
#include "CoreMinimal.h"
#include "ECharacterDifficulty.h"
#include "DBDTableRowBase.h"
#include "EPlayerRole.h"
#include "CustomizedMeshPart.h"
#include "EGender.h"
#include "EKillerAbilities.h"
#include "DataTableProxy.h"
#include "EKillerHeight.h"
#include "SlideShowDescription.h"
#include "CharacterDescription.generated.h"

class UTexture2D;
class APawn;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FCharacterDescription : public FDBDTableRowBase {
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterDifficulty Difficulty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DebugName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText BackStory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Biography;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BackgroundImagePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCustomizedMeshPart> CustomizationDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RequiredDlcIdString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName IdName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInChunk0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailableInNonViolentBuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailableInAtlantaBuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlatformExclusiveFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UBlueprint> GamePawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UBlueprint> MenuPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DefaultItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGender Gender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> CharacterPrefix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerAbilities KillerAbilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UDataTable> TunableDB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerHeight KillerHeight;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationCategory CustomizationCategories;

public:
	FCharacterDescription();
};

