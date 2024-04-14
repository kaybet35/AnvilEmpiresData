#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OptionsMenuVideoWidget.generated.h"

class UAnvilDropdownEntryWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UOptionsMenuVideoWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilDropdownEntryWidget* FullscreenDropdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilDropdownEntryWidget* ResolutionDropdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilDropdownEntryWidget* QualityDropdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilDropdownEntryWidget* VSyncDropdown;
    
public:
    UOptionsMenuVideoWidget();

private:
    UFUNCTION(BlueprintCallable)
    void SetFullscreen(const FString& Input);
    
};

