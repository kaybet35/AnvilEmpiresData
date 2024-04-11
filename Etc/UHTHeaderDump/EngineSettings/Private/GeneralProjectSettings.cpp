#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CopyrightNotice = TEXT("Fill out your copyright notice in the Description page of Project Settings.");
    this->ProjectVersion = TEXT("1.0.0.0");
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
    this->EyeOffsetForFakeStereoRenderingDevice = 0.03f;
    this->FOVForFakeStereoRenderingDevice = 100.00f;
}


