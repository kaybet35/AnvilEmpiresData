#include "WeatherManager.h"

FWeatherManager::FWeatherManager() {
    this->SeasonToAutumnCurve = NULL;
    this->SeasonToWinterCurve = NULL;
    this->SeasonToTempCurve = NULL;
    this->SeasonToTintCurve = NULL;
    this->WeatherSeasonsMaterialParameterCollection = NULL;
    this->WinterPostProcessVolume = NULL;
}

