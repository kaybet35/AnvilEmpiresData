#include "HitConverterProxyComponent.h"

UHitConverterProxyComponent::UHitConverterProxyComponent() {
    this->ConversionType = EAnvilHitConversionType::ConvertItemAtMaxProgress;
    this->InputItemName = NULL;
    this->RequiredTool = EAnvilToolType::None;
}


