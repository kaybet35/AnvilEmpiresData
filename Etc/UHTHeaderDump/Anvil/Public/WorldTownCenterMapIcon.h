#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "DeploymentPointMapIcon.h"
#include "WorldTownCenterMapIcon.generated.h"

class UBorder;
class UImage;
class UPanelWidget;
class UStatusWidget;
class UTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UWorldTownCenterMapIcon : public UDeploymentPointMapIcon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* MainElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* TownStatusVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* TownNameBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TownNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* TownStatusBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* NumPledgedStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* NumTentsStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* NumReinforcementSuppliesStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TownWarningText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DetectionRangeCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashingFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashingMinOpacity;
    
public:
    UWorldTownCenterMapIcon();

private:
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetTownWarningTextVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetTownWarningText();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetTownStatusBorderVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetTownNameText();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetTownNameBorderVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetNumTentsText();
    
    UFUNCTION(BlueprintCallable)
    FText GetNumReinforcementSuppliesText();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetNumPledgedVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetNumPledgedText();
    
};

