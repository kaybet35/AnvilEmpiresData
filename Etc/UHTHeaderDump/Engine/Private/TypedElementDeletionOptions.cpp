#include "TypedElementDeletionOptions.h"

FTypedElementDeletionOptions::FTypedElementDeletionOptions() {
    this->bVerifyDeletionCanHappen = false;
    this->bWarnAboutReferences = false;
    this->bWarnAboutSoftReferences = false;
}

