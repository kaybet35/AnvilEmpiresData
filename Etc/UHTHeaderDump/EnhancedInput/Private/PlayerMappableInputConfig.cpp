#include "PlayerMappableInputConfig.h"

UPlayerMappableInputConfig::UPlayerMappableInputConfig() {
    this->bIsDeprecated = false;
    this->MetaData = NULL;
}

void UPlayerMappableInputConfig::ResetToDefault() {
}

bool UPlayerMappableInputConfig::IsDeprecated() const {
    return false;
}

TArray<FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetPlayerMappableKeys() const {
    return TArray<FEnhancedActionKeyMapping>();
}

UObject* UPlayerMappableInputConfig::GetMetadata() const {
    return NULL;
}

TMap<UInputMappingContext*, int32> UPlayerMappableInputConfig::GetMappingContexts() const {
    return TMap<UInputMappingContext*, int32>();
}

FEnhancedActionKeyMapping UPlayerMappableInputConfig::GetMappingByName(const FName MappingName) const {
    return FEnhancedActionKeyMapping{};
}

TArray<FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetKeysBoundToAction(const UInputAction* InAction) const {
    return TArray<FEnhancedActionKeyMapping>();
}

FText UPlayerMappableInputConfig::GetDisplayName() const {
    return FText::GetEmpty();
}

FName UPlayerMappableInputConfig::GetConfigName() const {
    return NAME_None;
}


