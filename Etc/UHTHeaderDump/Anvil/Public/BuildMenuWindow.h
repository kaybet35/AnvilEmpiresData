#pragma once
#include "CoreMinimal.h"
#include "EBuildSiteCategory.h"
#include "HUDWindow.h"
#include "Templates/SubclassOf.h"
#include "BuildMenuWindow.generated.h"

class UBuildMenuTabButton;
class UGridPanelWidget;
class UPanelWidget;
class UTexture2D;

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
    TMap<EBuildSiteCategory, UTexture2D*> TabButtonIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuildLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildMenuTabButton* CurrentTabButton;
    
public:
    UBuildMenuWindow();

};

