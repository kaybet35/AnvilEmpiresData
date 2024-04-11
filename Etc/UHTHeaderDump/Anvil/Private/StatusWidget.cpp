#include "StatusWidget.h"

UStatusWidget::UStatusWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->IconTexture = NULL;
    this->SimpleTooltip = ESimpleTooltip::None;
    this->StatusIcon = NULL;
    this->StatusText = NULL;
    this->HappyIconTexture = NULL;
    this->UnhappyIconTexture = NULL;
}


