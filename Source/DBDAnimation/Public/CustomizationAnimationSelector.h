#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizationAnimationSelector.generated.h"

class UDataTable;
class UCustomizedSkeletalMesh;

UCLASS(EditInlineNew)
class DBDANIMATION_API UCustomizationAnimationSelector : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UDataTable* _customizationAnimationMappings;

	UPROPERTY(Transient, Export)
	UCustomizedSkeletalMesh* _customizedSkeletalMesh;

public:
	UCustomizationAnimationSelector();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationAnimationSelector) { return 0; }
