#include "EyeTrackerGazeData.h"

FEyeTrackerGazeData::FEyeTrackerGazeData() {
    this->ConfidenceValue = 0.00f;
    this->bIsLeftEyeBlink = false;
    this->bIsRightEyeBlink = false;
    this->LeftPupilDiameter = 0.00f;
    this->RightPupilDiameter = 0.00f;
}

