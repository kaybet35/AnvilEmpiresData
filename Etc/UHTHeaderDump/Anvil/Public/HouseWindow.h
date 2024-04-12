#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ECheckBoxState -FallbackName=ECheckBoxState
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "StructureWindow.h"
#include "HouseWindow.generated.h"

class UCheckBox;
class UHousePlayerInventoryWidgetBox;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UHouseWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHousePlayerInventoryWidgetBox* PlayerInventoriesBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* HouseAreaRestrictedCheckBox;
    
public:
    UHouseWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OnHouseAreaRestrictedChecked(bool bIsChecked);
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetHouseAreaRestrictedVisibility();
    
    UFUNCTION(BlueprintCallable)
    ECheckBoxState GetHouseAreaRestrictedCheckedState();
    
};

