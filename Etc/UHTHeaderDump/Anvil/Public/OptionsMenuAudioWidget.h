#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OptionsMenuAudioWidget.generated.h"

class UAnvilButtonWidget;
class UAnvilDropdownEntryWidget;
class UAnvilSliderWidget;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UOptionsMenuAudioWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilSliderWidget* MasterVolumeSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilSliderWidget* SFXVolumeSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilDropdownEntryWidget* VoiceChatEnabledDropdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilSliderWidget* VoiceInputVolumeSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilSliderWidget* VoiceOutputVolumeSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilDropdownEntryWidget* VoiceInDropdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilDropdownEntryWidget* VoiceOutDropdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnvilButtonWidget* ReconnectButton;
    
public:
    UOptionsMenuAudioWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnReconnectToVoice();
    
    UFUNCTION(BlueprintCallable)
    bool IsReconnectButtonEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetReconnectButtonVisibility();
    
};

