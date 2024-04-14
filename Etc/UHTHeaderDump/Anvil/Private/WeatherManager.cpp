#include "WeatherManager.h"

FWeatherManager::FWeatherManager() {
    this->SeasonToAutumnCurve = NULL;
    this->SeasonToWinterCurve = NULL;
    this->SeasonToTempCurve = NULL;
    this->SeasonToTintCurve = NULL;
    this->TemperatureVisualsCurve = NULL;
    this->WetnessVisualsCurve = NULL;
    this->WindVisualsCurve = NULL;
    this->WeatherSeasonsMaterialParameterCollection = NULL;
    this->WinterPostProcessVolume = NULL;
}

