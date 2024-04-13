#include "AlertsContainerWidget.h"

UAlertsContainerWidget::UAlertsContainerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MaxNumVisibleAlerts = 3;
    this->AlertWidgetClass = NULL;
    this->AlertsMaximizeButton = NULL;
    this->AlertsMinimizeButton = NULL;
    this->AlertsVerticalBox = NULL;
}

void UAlertsContainerWidget::OnAlertsMinimizeClicked() {
}

void UAlertsContainerWidget::OnAlertsMaximizeClicked() {
}


