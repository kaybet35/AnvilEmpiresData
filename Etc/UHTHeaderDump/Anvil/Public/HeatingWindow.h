#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "HeatingWindow.generated.h"

class UInventoryWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UHeatingWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryWidget* ItemsItemGrid;
    
public:
    UHeatingWindow();

};

