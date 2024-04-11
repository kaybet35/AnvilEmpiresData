#include "MetasoundFrontendClassMetadata.h"

FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata() {
    this->Type = EMetasoundFrontendClassType::External;
    this->bIsDeprecated = false;
    this->bAutoUpdateManagesInterface = false;
}

