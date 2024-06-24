#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EInputType.h"
#include "AnvilKeyEntryWidget.generated.h"

class UInputKeySelector;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UAnvilKeyEntryWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LabelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputKeySelector* InputSelector;
    
public:
    UAnvilKeyEntryWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnAxisMappingChanged(FInputChord Input);
    
    UFUNCTION(BlueprintCallable)
    void OnActionMappingChanged(FInputChord Input);
    
};

