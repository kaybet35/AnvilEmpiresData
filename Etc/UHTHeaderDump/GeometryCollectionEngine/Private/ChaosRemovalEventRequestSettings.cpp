#include "ChaosRemovalEventRequestSettings.h"

FChaosRemovalEventRequestSettings::FChaosRemovalEventRequestSettings() {
    this->MaxNumberOfResults = 0;
    this->MinMass = 0.00f;
    this->MaxDistance = 0.00f;
    this->SortMethod = EChaosRemovalSortMethod::SortNone;
}

