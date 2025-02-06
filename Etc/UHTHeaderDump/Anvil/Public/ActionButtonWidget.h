#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilEntityActionType -FallbackName=EAnvilEntityActionType
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EActionButtonType.h"
#include "ActionButtonWidget.generated.h"

class UButton;
class USoundCue;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UActionButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionButtonType ActionButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilEntityActionType EntityActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ButtonImageOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ActionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CallForReinforcementsCue;
    
public:
    UActionButtonWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsActionButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetActionButtonVisibility();
    
};

