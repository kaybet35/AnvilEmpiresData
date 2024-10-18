#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ESelectInfo -FallbackName=ESelectInfo
#include "HUDWindow.h"
#include "StructureWindow.generated.h"

class UComboBoxString;
class UStatusWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UStructureWindow : public UHUDWindow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* HealthStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* HeartStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* HungerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* StaminaStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* DecayStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* ReinforcingStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* FamilyAccessLevel;
    
public:
    UStructureWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OnFamilyAccessLevelSelectionChanged(const FString& SelectedItem, const TEnumAsByte<ESelectInfo::Type> SelectionType);
    
};

