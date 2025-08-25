#pragma once
#include "CoreMinimal.h"
#include "HUDWindow.h"
#include "Templates/SubclassOf.h"
#include "BuildMenuWindow.generated.h"

class UBuildMenuTabButton;
class UDataTable;
class UGridPanelWidget;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UBuildMenuWindow : public UHUDWindow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TabButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanelWidget* StructureButtonGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBuildMenuTabButton> TabButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BuildMenuTabButtonDataTable;
    
public:
    UBuildMenuWindow();

};

