#include "ControlRigPoseAsset.h"

UControlRigPoseAsset::UControlRigPoseAsset() {
}

void UControlRigPoseAsset::SelectControls(UControlRig* InControlRig, bool bDoMirror) {
}

void UControlRigPoseAsset::SavePose(UControlRig* InControlRig, bool bUseAll) {
}

void UControlRigPoseAsset::ReplaceControlName(const FName& CurrentName, const FName& NewName) {
}

void UControlRigPoseAsset::PastePose(UControlRig* InControlRig, bool bDoKey, bool bDoMirror) {
}

void UControlRigPoseAsset::GetCurrentPose(UControlRig* InControlRig, FControlRigControlPose& OutPose) {
}

TArray<FName> UControlRigPoseAsset::GetControlNames() const {
    return TArray<FName>();
}

bool UControlRigPoseAsset::DoesMirrorMatch(UControlRig* ControlRig, const FName& ControlName) const {
    return false;
}


