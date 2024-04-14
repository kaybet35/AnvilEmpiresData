#include "WeatherDataComponent.h"

UWeatherDataComponent::UWeatherDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentNormalizedSeason = 0.00f;
    this->GlobalNormalizedTemperature = 0.00f;
    this->GlobalNormalizedWetness = 0.00f;
    this->GlobalNormalizedWind = 0.00f;
    this->GlobalWindDirectionX = 0.00f;
    this->GlobalWindDirectionY = 0.00f;
}


