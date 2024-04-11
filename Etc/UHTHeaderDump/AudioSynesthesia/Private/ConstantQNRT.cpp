#include "ConstantQNRT.h"
#include "ConstantQNRTSettings.h"

UConstantQNRT::UConstantQNRT() {
    this->Settings = CreateDefaultSubobject<UConstantQNRTSettings>(TEXT("DefaultConstantQNRTSettings"));
}

void UConstantQNRT::GetNormalizedChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>& OutConstantQ) const {
}

void UConstantQNRT::GetChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>& OutConstantQ) const {
}


