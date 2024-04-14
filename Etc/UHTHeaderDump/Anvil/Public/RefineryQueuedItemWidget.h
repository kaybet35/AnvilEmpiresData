#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "GridItemWidget.h"
#include "RefineryQueuedItemWidget.generated.h"

class UBorder;
class UButton;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API URefineryQueuedItemWidget : public UGridItemWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ItemBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ItemBorderBrush;
    
public:
    URefineryQueuedItemWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCancelClicked();
    
};

