#include "SignPostMessageWidget.h"

USignPostMessageWidget::USignPostMessageWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MessageBox = NULL;
    this->LifetimeBox = NULL;
    this->BuilderNameBox = NULL;
    this->BuilderNameButton = NULL;
    this->Context = NULL;
}

void USignPostMessageWidget::CopyBuilderId() {
}


