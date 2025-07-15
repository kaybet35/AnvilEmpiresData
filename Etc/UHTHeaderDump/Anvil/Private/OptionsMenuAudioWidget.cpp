#include "OptionsMenuAudioWidget.h"

UOptionsMenuAudioWidget::UOptionsMenuAudioWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MasterVolumeSlider = NULL;
    this->SFXVolumeSlider = NULL;
    this->VoiceChatEnabledDropdown = NULL;
    this->VoiceInputVolumeSlider = NULL;
    this->VoiceOutputVolumeSlider = NULL;
    this->VoiceInDropdown = NULL;
    this->VoiceOutDropdown = NULL;
    this->ReconnectButton = NULL;
}

void UOptionsMenuAudioWidget::OnReconnectToVoice() {
}

bool UOptionsMenuAudioWidget::IsReconnectButtonEnabled() {
    return false;
}

ESlateVisibility UOptionsMenuAudioWidget::GetReconnectButtonVisibility() {
    return ESlateVisibility::Visible;
}


