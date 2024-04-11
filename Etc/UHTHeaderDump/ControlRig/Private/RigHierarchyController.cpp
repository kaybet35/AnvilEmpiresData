#include "RigHierarchyController.h"

URigHierarchyController::URigHierarchyController() {
    this->bReportWarningsAndErrors = true;
}

bool URigHierarchyController::SetSelection(const TArray<FRigElementKey>& InKeys, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

void URigHierarchyController::SetHierarchy(URigHierarchy* InHierarchy) {
}

FName URigHierarchyController::SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand) {
    return NAME_None;
}

bool URigHierarchyController::SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo) const {
    return false;
}

bool URigHierarchyController::SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection) {
    return false;
}

FRigElementKey URigHierarchyController::RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection) {
    return FRigElementKey{};
}

bool URigHierarchyController::RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

TArray<FRigElementKey> URigHierarchyController::MirrorElements(TArray<FRigElementKey> InKeys, FRigMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands) {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchyController::ImportFromText(const FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands) {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchyController::ImportCurves(USkeleton* InSkeleton, FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand) {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchyController::ImportBones(USkeleton* InSkeleton, FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand) {
    return TArray<FRigElementKey>();
}

URigHierarchy* URigHierarchyController::GetHierarchy() const {
    return NULL;
}

FRigControlSettings URigHierarchyController::GetControlSettings(FRigElementKey InKey) const {
    return FRigControlSettings{};
}

FString URigHierarchyController::ExportToText(TArray<FRigElementKey> InKeys) const {
    return TEXT("");
}

FString URigHierarchyController::ExportSelectionToText() const {
    return TEXT("");
}

TArray<FRigElementKey> URigHierarchyController::DuplicateElements(TArray<FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands) {
    return TArray<FRigElementKey>();
}

bool URigHierarchyController::DeselectElement(FRigElementKey InKey) {
    return false;
}

bool URigHierarchyController::ClearSelection() {
    return false;
}

FRigElementKey URigHierarchyController::AddRigidBody(FName InName, FRigElementKey InParent, FRigRigidBodySettings InSettings, FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}

bool URigHierarchyController::AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo) {
    return false;
}

FRigElementKey URigHierarchyController::AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}

FRigElementKey URigHierarchyController::AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}

FRigElementKey URigHierarchyController::AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}

FRigElementKey URigHierarchyController::AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}

FRigElementKey URigHierarchyController::AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}


