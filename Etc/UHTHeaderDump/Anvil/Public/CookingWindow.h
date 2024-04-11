#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "StructureWindow.h"
#include "CookingWindow.generated.h"

class UInventoryWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UCookingWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryWidget* RecipeInputItemGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryWidget* RecipeOutputItemGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryWidget* FuelInputItemGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryWidget* FuelOutputItemGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CookingDurationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* FuelDurationText;
    
public:
    UCookingWindow();

private:
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetFuelDurationTextVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetFuelDurationText();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetCookingDurationTextVisibility();
    
    UFUNCTION(BlueprintCallable)
    FText GetCookingDurationText();
    
};

