#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OptionsMenuGameplayWidget.generated.h"

class UAnvilDropdownEntryWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UOptionsMenuGameplayWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilDropdownEntryWidget* ShowPlayerNameDropDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilDropdownEntryWidget* InteractCameraZoomDropDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilDropdownEntryWidget* HideCrowdNamesDropDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilDropdownEntryWidget* AutoArmEquippedItemsDropDown;
    
public:
    UOptionsMenuGameplayWidget();

};

