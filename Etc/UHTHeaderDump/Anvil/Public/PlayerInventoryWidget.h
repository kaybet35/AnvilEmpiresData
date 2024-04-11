#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "PlayerInventoryWidget.generated.h"

class UHeaderContainer;
class UInventoryWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UPlayerInventoryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryWidget* PlayerInventory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeaderContainer* Header;
    
public:
    UPlayerInventoryWidget();

};

