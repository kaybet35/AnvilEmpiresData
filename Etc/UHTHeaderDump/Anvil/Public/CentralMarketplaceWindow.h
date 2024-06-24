#pragma once
#include "CoreMinimal.h"
#include "StructureWindow.h"
#include "CentralMarketplaceWindow.generated.h"

class UCentralMarketplaceWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UCentralMarketplaceWindow : public UStructureWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCentralMarketplaceWidget* CentralMarketplaceWidget;
    
public:
    UCentralMarketplaceWindow();

};

