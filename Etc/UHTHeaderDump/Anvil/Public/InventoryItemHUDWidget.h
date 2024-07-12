#pragma once
#include "CoreMinimal.h"
#include "InventoryItemWidget.h"
#include "InventoryItemHUDWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ANVIL_API UInventoryItemHUDWidget : public UInventoryItemWidget {
    GENERATED_BODY()
public:
    UInventoryItemHUDWidget();

};

