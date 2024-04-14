#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MapIconInstanceProperty.h"
#include "MapIconTypeProperty.h"
#include "DeploymentPointWidget.generated.h"

class UBorder;
class UButton;
class UCanvasPanelSlot;
class UImage;
class UStatusWidget;
class UTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UDeploymentPointWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* MapItemButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MapItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* TownStatusVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* TownNameBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TownNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* TownStatusBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* NumHousesStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* NumTentsStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* NumReinforcementSuppliesStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashingFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashingMinOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* ParentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconTypeProperty TypeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconInstanceProperty InstanceProperty;
    
public:
    UDeploymentPointWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnDeploymentPointClicked();
    
    UFUNCTION(BlueprintCallable)
    bool IsDeploymentPointEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetTownStatusVerticalBoxVisibility();
    
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
    ESlateVisibility GetNumHousesVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetNumHousesText();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetDeploymentPointVisibility();
    
};

