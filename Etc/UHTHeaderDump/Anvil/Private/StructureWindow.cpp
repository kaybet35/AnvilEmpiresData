#include "StructureWindow.h"

UStructureWindow::UStructureWindow() {
    this->HealthStatus = NULL;
    this->HeartStatus = NULL;
    this->HungerStatus = NULL;
    this->StaminaStatus = NULL;
    this->DecayStatus = NULL;
    this->ReinforcingStatus = NULL;
    this->FamilyAccessLevel = NULL;
}

void UStructureWindow::OnFamilyAccessLevelSelectionChanged(const FString& SelectedItem, const TEnumAsByte<ESelectInfo::Type> SelectionType) {
}


