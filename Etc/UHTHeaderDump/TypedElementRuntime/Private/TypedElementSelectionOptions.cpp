#include "TypedElementSelectionOptions.h"

FTypedElementSelectionOptions::FTypedElementSelectionOptions() {
    this->bAllowHidden = false;
    this->bAllowGroups = false;
    this->bAllowLegacyNotifications = false;
    this->bWarnIfLocked = false;
    this->ChildElementInclusionMethod = ETypedElementChildInclusionMethod::None;
}

