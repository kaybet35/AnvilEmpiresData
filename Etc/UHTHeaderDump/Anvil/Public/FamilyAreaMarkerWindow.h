#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ECheckBoxState -FallbackName=ECheckBoxState
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "StructureWindow.h"
#include "Templates/SubclassOf.h"
#include "FamilyAreaMarkerWindow.generated.h"

class UButton;
class UCheckBox;
class UFamilyMemberListItemWidget;
class UImage;
class UScrollBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UFamilyAreaMarkerWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* FamilyMembersScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* AlliedFamiliesScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UpkeepIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UpkeepTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFamilyMemberListItemWidget> FamilyMemberListItemWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* FamilyAreaRestrictedCheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* FamilyAreaAllianceButton;
    
public:
    UFamilyAreaMarkerWindow();

private:
    UFUNCTION()
    void OnRemoveAlliedFamilyClicked(const uint64 AlliedFamilyFounderOnlineId);
    
    UFUNCTION()
    void OnKickMemberClicked(const uint64 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnFamilyAreaSetAllianceClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnFamilyAreaRestrictedChecked(bool bIsChecked);
    
    UFUNCTION(BlueprintCallable)
    bool IsFamilyAreaSetAllianceButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsFamilyAreaRestrictedCheckBoxEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetFamilyAreaSetAllianceVisibility();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetFamilyAreaRestrictedVisibility();
    
    UFUNCTION(BlueprintCallable)
    ECheckBoxState GetFamilyAreaRestrictedCheckedState();
    
};

