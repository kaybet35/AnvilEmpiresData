#include "HUDWindow.h"

UHUDWindow::UHUDWindow() : UUserWidget(FObjectInitializer::Get()) {
    this->WindowContext = NULL;
    this->StructureToPlayerTransfer = false;
    this->PlayerToStructureTransfer = false;
    this->StructureInventoryContainerWidget = NULL;
    this->PlayerInventoryPanel = NULL;
    this->TargetHeader = NULL;
}


