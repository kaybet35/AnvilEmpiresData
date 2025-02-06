#pragma once
#include "CoreMinimal.h"
#include "HUDEntityBillboardWidget.h"
#include "HUDSignPostWidget.generated.h"

class USignPostMessageWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UHUDSignPostWidget : public UHUDEntityBillboardWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MessageDisplayRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USignPostMessageWidget* MessageWidget;
    
public:
    UHUDSignPostWidget();

};

