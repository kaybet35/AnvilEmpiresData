#include "CancellableAsyncAction.h"

UCancellableAsyncAction::UCancellableAsyncAction() {
}

bool UCancellableAsyncAction::IsActive() const {
    return false;
}

void UCancellableAsyncAction::Cancel() {
}


