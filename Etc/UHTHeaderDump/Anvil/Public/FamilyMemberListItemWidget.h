#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESelectInfo -FallbackName=ESelectInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "FamilyMemberListItemWidget.generated.h"

class UButton;
class UComboBoxString;
class UImage;
class USizeBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UFamilyMemberListItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* OnlineStatusIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayerNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* RoleComboBoxSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* RoleComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* RoleTextSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RoleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* KickButton;
    
    UFamilyMemberListItemWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnKickButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnFamilyRoleSelectionChanged(const FString& SelectedItem, const TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetRoleTextVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetRoleText();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetRoleComboBoxVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetPlayerNameText();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetKickButtonVisibility();
    
};

