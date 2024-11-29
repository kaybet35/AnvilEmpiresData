#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DismantleButtonWidget.generated.h"

class UButton;
class UImage;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UDismantleButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* DismantleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* StructureIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ReinforcedIconContainer;
    
public:
    UDismantleButtonWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnClicked();
    
};

