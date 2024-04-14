#include "R2WeatherEventConfig.h"

FR2WeatherEventConfig::FR2WeatherEventConfig() {
    this->Type = EAnvilR2WeatherEventType::Rain;
    this->StartingPositionGlobalX = 0.00f;
    this->StartingPositionGlobalY = 0.00f;
    this->InnerRadius = 0.00f;
    this->OuterRadius = 0.00f;
    this->VelocityX = 0.00f;
    this->VelocityY = 0.00f;
    this->MaxDurationSec = 0;
    this->PeakIntensity = 0.00f;
}

