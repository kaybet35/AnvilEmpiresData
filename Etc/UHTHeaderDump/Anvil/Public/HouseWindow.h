#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "HouseWindow.generated.h"

class UHousePlayerInventoryWidgetBox;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UHouseWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHousePlayerInventoryWidgetBox* PlayerInventoriesBox;
    
public:
    UHouseWindow();

};

