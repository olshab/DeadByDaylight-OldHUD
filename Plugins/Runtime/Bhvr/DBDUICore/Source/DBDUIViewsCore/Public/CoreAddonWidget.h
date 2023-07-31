#pragma once
#include "CoreMinimal.h"
#include "CoreBaseLoadoutPartWidget.h"
#include "AddonViewInterface.h"
#include "CoreAddonWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAddonWidget : public UUserWidget, public IAddonViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
        UDBDImage* ImageRarity;

    UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
        UDBDImage* ImageIcon;

    UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
        UDBDTextBlock* StackCount;

public:
    UCoreAddonWidget();
protected:
    //UFUNCTION(BlueprintCallable)
        //void SetLoadoutStackCount(int32 stackCount);

    UFUNCTION(BlueprintCallable)
        void SetLoadoutPartRarity(EItemRarity rarity);

    UFUNCTION(BlueprintCallable)
        void SetLoadoutPartIcon(TSoftObjectPtr<UTexture2D> icon);

    // Fix for true pure virtual functions not being implemented
};

