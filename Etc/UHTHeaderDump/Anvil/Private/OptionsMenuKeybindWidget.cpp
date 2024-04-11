#include "OptionsMenuKeybindWidget.h"

UOptionsMenuKeybindWidget::UOptionsMenuKeybindWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->KeybindWidgetContainer = NULL;
    this->ResetButton = NULL;
}

void UOptionsMenuKeybindWidget::OnResetKeyBinds() {
}


