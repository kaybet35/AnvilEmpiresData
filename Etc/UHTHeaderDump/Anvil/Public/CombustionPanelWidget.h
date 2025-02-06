#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "CombustionPanelWidget.generated.h"

class UCombustionDataComponent;
class UInventoryWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UCombustionPanelWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* FuelDurationText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombustionDataComponent* CombustionDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryWidget* FuelInputItemGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryWidget* FuelOutputItemGrid;
    
public:
    UCombustionPanelWidget();

};

