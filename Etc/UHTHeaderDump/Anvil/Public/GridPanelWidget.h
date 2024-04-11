#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UniformGridPanel -FallbackName=UniformGridPanel
#include "Templates/SubclassOf.h"
#include "GridPanelWidget.generated.h"

class UGridItemWidget;

UCLASS(Blueprintable)
class ANVIL_API UGridPanelWidget : public UUniformGridPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint PreferredDimension;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGridItemWidget> ItemSlotWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewItemCount;
    
public:
    UGridPanelWidget();

};

