#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=CheckBoxStyle -FallbackName=CheckBoxStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonClickMethod -FallbackName=EButtonClickMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonPressMethod -FallbackName=EButtonPressMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonTouchMethod -FallbackName=EButtonTouchMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ECheckBoxState -FallbackName=ECheckBoxState
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
#include "ContentWidget.h"
#include "OnCheckBoxComponentStateChangedDelegate.h"
#include "Widget.h"
#include "CheckBox.generated.h"

UCLASS(Blueprintable)
class UMG_API UCheckBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECheckBoxState CheckedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetCheckBoxState CheckedStateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCheckBoxComponentStateChanged OnCheckStateChanged;
    
    UCheckBox();

    UFUNCTION(BlueprintCallable)
    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetIsChecked(bool InIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckedState(ECheckBoxState InCheckedState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChecked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECheckBoxState GetCheckedState() const;
    
};

