#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScrollBox -FallbackName=ScrollBox
#include "Templates/SubclassOf.h"
#include "HousePlayerInventoryWidgetBox.generated.h"

class UHousePlayerInventoryListItem;

UCLASS(Blueprintable)
class ANVIL_API UHousePlayerInventoryWidgetBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHousePlayerInventoryListItem> PlayerInventoryListItemType;
    
    UHousePlayerInventoryWidgetBox();

};

