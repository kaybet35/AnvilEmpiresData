#include "AudioMeter.h"

UAudioMeter::UAudioMeter() {
    this->MeterChannelInfo.AddDefaulted(1);
    this->Orientation = Orient_Vertical;
}

void UAudioMeter::SetMeterValueColor(FLinearColor InValue) {
}

void UAudioMeter::SetMeterScaleLabelColor(FLinearColor InValue) {
}

void UAudioMeter::SetMeterScaleColor(FLinearColor InValue) {
}

void UAudioMeter::SetMeterPeakColor(FLinearColor InValue) {
}

void UAudioMeter::SetMeterClippingColor(FLinearColor InValue) {
}

void UAudioMeter::SetMeterChannelInfo(const TArray<FMeterChannelInfo>& InMeterChannelInfo) {
}

void UAudioMeter::SetMeterBackgroundColor(FLinearColor InValue) {
}

void UAudioMeter::SetBackgroundColor(FLinearColor InValue) {
}

TArray<FMeterChannelInfo> UAudioMeter::GetMeterChannelInfo() const {
    return TArray<FMeterChannelInfo>();
}


