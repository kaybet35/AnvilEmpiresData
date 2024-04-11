#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
#include "PanelWidget.h"
#include "StackBox.generated.h"

class UStackBoxSlot;
class UWidget;

UCLASS(Blueprintable)
class UMG_API UStackBox : public UPanelWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
public:
    UStackBox();

    UFUNCTION(BlueprintCallable)
    UStackBoxSlot* AddChildToStackBox(UWidget* Content);
    
};

