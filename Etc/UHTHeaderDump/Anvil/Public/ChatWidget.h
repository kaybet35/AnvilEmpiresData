#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EChatType -FallbackName=EChatType
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESelectInfo -FallbackName=ESelectInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ChatWidget.generated.h"

class UButton;
class UChatEntryWidget;
class UComboBoxString;
class UEditableTextBox;
class UListView;
class UObject;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UChatWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatMinimizedHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatType CurrentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* MinimizeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* MaximizeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* ChatEntryDropdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* ChatEntryTextField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ChatHistoryListView;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChatEntryWidget* EntryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* LastItem;
    
public:
    UChatWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnModeOptionSelected(const FString& Item, TEnumAsByte<ESelectInfo::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimized();
    
    UFUNCTION(BlueprintCallable)
    void OnMaximized();
    
    UFUNCTION(BlueprintCallable)
    void OnEntryCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> Method);
    
    UFUNCTION(BlueprintCallable)
    void OnEntryChanged(const FText& Text);
    
};

