#include "AnimNode_PoseDriver.h"

FAnimNode_PoseDriver::FAnimNode_PoseDriver() {
    this->bEvalFromRefPose = false;
    this->DriveSource = EPoseDriverSource::Rotation;
    this->DriveOutput = EPoseDriverOutput::DrivePoses;
    this->bOnlyDriveSelectedBones = false;
    this->LODThreshold = 0;
}

