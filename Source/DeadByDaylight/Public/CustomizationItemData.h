#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MaterialReplacerData.h"
#include "CustomizationData.h"
#include "ECustomizationCategory.h"
#include "UObject/SoftObjectPtr.h"
#include "ConditionalMaterialReplacer.h"
#include "TextureReplacerData.h"
#include "ECharmCategory.h"
#include "BPAttachementSocketData.h"
#include "CustomAnimData.h"
#include "UnlockSaveStatCondition.h"
#include "CustomSoundFXData.h"
#include "CustomizationItemData.generated.h"

class USkeletalMesh;
class UAnimInstance;
class AActor;

USTRUCT(BlueprintType)
struct FCustomizationItemData: public FCustomizationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	ECustomizationCategory Category;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USkeletalMesh> ItemMesh;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UAnimInstance> AnimClass;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<AActor> ItemBlueprint;

	UPROPERTY(EditAnywhere)
	TArray<FMaterialReplacerData> MaterialsMap;

	UPROPERTY(EditAnywhere)
	FConditionalMaterialReplacer ConditionalMaterialReplacer;

	UPROPERTY(EditAnywhere)
	TArray<FTextureReplacerData> TexturesMap;

	UPROPERTY(EditAnywhere)
	TArray<FName> SkeletalComponentTags;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer CosmeticOverrideSemanticTags;

	UPROPERTY(EditAnywhere)
	FText CollectionName;

	UPROPERTY(EditAnywhere)
	FText CollectionDescription;

	UPROPERTY(EditAnywhere)
	int32 PrestigeUlockLevel;

	UPROPERTY()
	FString PrestigeUnlockDate;

	UPROPERTY(EditAnywhere)
	FName EventId;

	UPROPERTY(EditAnywhere)
	ECharmCategory CharmCategory;

	UPROPERTY(EditAnywhere)
	TArray<FBPAttachementSocketData> SocketAttachements;

	UPROPERTY(EditAnywhere)
	TArray<FUnlockSaveStatCondition> UnlockingConditions;

	UPROPERTY(EditAnywhere)
	bool IsInStore;

	UPROPERTY(EditAnywhere)
	bool IsInNonViolentBuild;

	UPROPERTY(EditAnywhere)
	bool IsAvailableInAtlantaBuild;

	UPROPERTY(EditAnywhere)
	bool IsEntitledByDefault;

	UPROPERTY(EditAnywhere)
	uint32 PlatformExclusiveFlag;

	UPROPERTY(EditAnywhere)
	TArray<FCustomSoundFXData> CustomSFXs;

	UPROPERTY(EditAnywhere)
	FCustomAnimData AnimationData;

public:
	DEADBYDAYLIGHT_API FCustomizationItemData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationItemData) { return 0; }
