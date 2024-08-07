#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESelectInfo -FallbackName=ESelectInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AnvilDropdownEntryWidget.generated.h"

class UComboBoxString;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UAnvilDropdownEntryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* ComboBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LabelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ComboList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelTextBox;
    
public:
    UAnvilDropdownEntryWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnOptionSelected(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
};

