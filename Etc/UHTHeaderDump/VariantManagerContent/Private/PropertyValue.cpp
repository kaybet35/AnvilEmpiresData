#include "PropertyValue.h"

UPropertyValue::UPropertyValue() {
    this->bHasRecordedData = false;
    this->LeafPropertyClass = NULL;
    this->PropCategory = EPropertyValueCategory::Undefined;
}

bool UPropertyValue::HasRecordedData() const {
    return false;
}

FText UPropertyValue::GetPropertyTooltip() const {
    return FText::GetEmpty();
}

FString UPropertyValue::GetFullDisplayString() const {
    return TEXT("");
}


