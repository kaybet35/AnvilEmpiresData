#include "EnhancedInputPlatformData.h"

UEnhancedInputPlatformData::UEnhancedInputPlatformData() {
}

UInputMappingContext* UEnhancedInputPlatformData::GetContextRedirect(UInputMappingContext* InContext) const {
    return NULL;
}


