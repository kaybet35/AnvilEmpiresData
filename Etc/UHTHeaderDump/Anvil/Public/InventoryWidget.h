#pragma once
#include "CoreMinimal.h"
#include "GridPanelWidget.h"
#include "InventoryWidget.generated.h"

UCLASS(Blueprintable)
class ANVIL_API UInventoryWidget : public UGridPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerInventory;
    
    UInventoryWidget();

};

