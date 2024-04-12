#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MapItemWidget.generated.h"

class UButton;
class UCanvasPanelSlot;
class UImage;
class UNewMapWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UMapItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* MapItemButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MapItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNewMapWidget* ParentMapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* ParentSlot;
    
public:
    UMapItemWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnMapItemClicked();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetItemVisibility();
    
};

