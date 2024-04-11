#include "RefineryWindow.h"

URefineryWindow::URefineryWindow() {
    this->RefineryProducibleItemsList = NULL;
    this->RefineryQueue = NULL;
    this->QueueTotalTimeText = NULL;
    this->QueueTimeText = NULL;
    this->StatusText = NULL;
    this->PrivateButton = NULL;
}

void URefineryWindow::OnStatusChanged(const bool& Old, const bool& New) {
}

void URefineryWindow::OnPrivateButtonClicked() {
}


