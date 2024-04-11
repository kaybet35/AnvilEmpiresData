#include "RigHierarchy.h"

URigHierarchy::URigHierarchy() {
    this->TopologyVersion = 0;
    this->MetadataVersion = 0;
    this->MetadataTagVersion = 0;
    this->bEnableDirtyPropagation = true;
    this->TransformStackIndex = 0;
    this->HierarchyController = NULL;
    this->HierarchyForCacheValidation = NULL;
}

void URigHierarchy::UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo) {
}

void URigHierarchy::UnsetCurveValue(FRigElementKey InKey, bool bSetupUndo) {
}

bool URigHierarchy::SwitchToWorldSpace(FRigElementKey InChild, bool bInitial, bool bAffectChildren) {
    return false;
}

bool URigHierarchy::SwitchToParent(FRigElementKey InChild, FRigElementKey InParent, bool bInitial, bool bAffectChildren) {
    return false;
}

bool URigHierarchy::SwitchToDefaultParent(FRigElementKey InChild, bool bInitial, bool bAffectChildren) {
    return false;
}

TArray<FRigElementKey> URigHierarchy::SortKeys(const TArray<FRigElementKey>& InKeys) const {
    return TArray<FRigElementKey>();
}

bool URigHierarchy::SetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector InValue) {
    return false;
}

bool URigHierarchy::SetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FVector> InValue) {
    return false;
}

bool URigHierarchy::SetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform InValue) {
    return false;
}

bool URigHierarchy::SetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FTransform> InValue) {
    return false;
}

bool URigHierarchy::SetTag(FRigElementKey InItem, FName InTag) {
    return false;
}

bool URigHierarchy::SetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator InValue) {
    return false;
}

bool URigHierarchy::SetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRotator> InValue) {
    return false;
}

bool URigHierarchy::SetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey InValue) {
    return false;
}

bool URigHierarchy::SetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRigElementKey> InValue) {
    return false;
}

bool URigHierarchy::SetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat InValue) {
    return false;
}

bool URigHierarchy::SetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FQuat> InValue) {
    return false;
}

void URigHierarchy::SetPose_ForBlueprint(FRigPose InPose) {
}

bool URigHierarchy::SetParentWeightArray(FRigElementKey InChild, TArray<FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren) {
    return false;
}

bool URigHierarchy::SetParentWeight(FRigElementKey InChild, FRigElementKey InParent, FRigElementWeight InWeight, bool bInitial, bool bAffectChildren) {
    return false;
}

bool URigHierarchy::SetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName InValue) {
    return false;
}

bool URigHierarchy::SetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FName> InValue) {
    return false;
}

void URigHierarchy::SetLocalTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands) {
}

void URigHierarchy::SetLocalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands) {
}

bool URigHierarchy::SetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor InValue) {
    return false;
}

bool URigHierarchy::SetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FLinearColor> InValue) {
    return false;
}

bool URigHierarchy::SetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32 InValue) {
    return false;
}

bool URigHierarchy::SetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<int32> InValue) {
    return false;
}

void URigHierarchy::SetGlobalTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand) {
}

void URigHierarchy::SetGlobalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand) {
}

bool URigHierarchy::SetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float InValue) {
    return false;
}

bool URigHierarchy::SetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<float> InValue) {
    return false;
}

void URigHierarchy::SetCurveValueByIndex(int32 InElementIndex, float InValue, bool bSetupUndo) {
}

void URigHierarchy::SetCurveValue(FRigElementKey InKey, float InValue, bool bSetupUndo) {
}

void URigHierarchy::SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility) {
}

void URigHierarchy::SetControlVisibility(FRigElementKey InKey, bool bVisibility) {
}

void URigHierarchy::SetControlValueByIndex(int32 InElementIndex, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands) {
}

void URigHierarchy::SetControlValue(FRigElementKey InKey, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands) {
}

void URigHierarchy::SetControlShapeTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bSetupUndo) {
}

void URigHierarchy::SetControlShapeTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bSetupUndo) {
}

void URigHierarchy::SetControlSettingsByIndex(int32 InElementIndex, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands) {
}

void URigHierarchy::SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands) {
}

void URigHierarchy::SetControlPreferredRotatorByIndex(int32 InElementIndex, const FRotator& InValue, bool bInitial, bool bFixEulerFlips) {
}

void URigHierarchy::SetControlPreferredRotator(FRigElementKey InKey, const FRotator& InValue, bool bInitial, bool bFixEulerFlips) {
}

void URigHierarchy::SetControlOffsetTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands) {
}

void URigHierarchy::SetControlOffsetTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands) {
}

bool URigHierarchy::SetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool InValue) {
    return false;
}

bool URigHierarchy::SetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<bool> InValue) {
    return false;
}

void URigHierarchy::SendAutoKeyEvent(FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous) {
}

void URigHierarchy::ResetToDefault() {
}

void URigHierarchy::ResetPoseToInitial(ERigElementType InTypeFilter) {
}

void URigHierarchy::ResetCurveValues() {
}

void URigHierarchy::Reset() {
}

bool URigHierarchy::RemoveMetadata(FRigElementKey InItem, FName InMetadataName) {
    return false;
}

bool URigHierarchy::RemoveAllMetadata(FRigElementKey InItem) {
    return false;
}

int32 URigHierarchy::Num() const {
    return 0;
}

FRigControlValue URigHierarchy::MakeControlValueFromVector2D(FVector2D InValue) {
    return FRigControlValue{};
}

FRigControlValue URigHierarchy::MakeControlValueFromVector(FVector InValue) {
    return FRigControlValue{};
}

FRigControlValue URigHierarchy::MakeControlValueFromTransformNoScale(FTransformNoScale InValue) {
    return FRigControlValue{};
}

FRigControlValue URigHierarchy::MakeControlValueFromTransform(FTransform InValue) {
    return FRigControlValue{};
}

FRigControlValue URigHierarchy::MakeControlValueFromRotator(FRotator InValue) {
    return FRigControlValue{};
}

FRigControlValue URigHierarchy::MakeControlValueFromInt(int32 InValue) {
    return FRigControlValue{};
}

FRigControlValue URigHierarchy::MakeControlValueFromFloat(float InValue) {
    return FRigControlValue{};
}

FRigControlValue URigHierarchy::MakeControlValueFromEulerTransform(FEulerTransform InValue) {
    return FRigControlValue{};
}

FRigControlValue URigHierarchy::MakeControlValueFromBool(bool InValue) {
    return FRigControlValue{};
}

bool URigHierarchy::IsValidIndex(int32 InElementIndex) const {
    return false;
}

bool URigHierarchy::IsSelectedByIndex(int32 InIndex) const {
    return false;
}

bool URigHierarchy::IsSelected(FRigElementKey InKey) const {
    return false;
}

bool URigHierarchy::IsProcedural(const FRigElementKey& InKey) const {
    return false;
}

bool URigHierarchy::IsParentedTo(FRigElementKey InChild, FRigElementKey InParent) const {
    return false;
}

bool URigHierarchy::IsCurveValueSetByIndex(int32 InElementIndex) const {
    return false;
}

bool URigHierarchy::IsCurveValueSet(FRigElementKey InKey) const {
    return false;
}

bool URigHierarchy::IsControllerAvailable() const {
    return false;
}

bool URigHierarchy::HasTag(FRigElementKey InItem, FName InTag) const {
    return false;
}

FVector URigHierarchy::GetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector DefaultValue) const {
    return FVector{};
}

FVector URigHierarchy::GetVectorFromControlValue(FRigControlValue InValue) {
    return FVector{};
}

TArray<FVector> URigHierarchy::GetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName) const {
    return TArray<FVector>();
}

FVector2D URigHierarchy::GetVector2DFromControlValue(FRigControlValue InValue) {
    return FVector2D{};
}

FTransformNoScale URigHierarchy::GetTransformNoScaleFromControlValue(FRigControlValue InValue) {
    return FTransformNoScale{};
}

FTransform URigHierarchy::GetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform DefaultValue) const {
    return FTransform{};
}

FTransform URigHierarchy::GetTransformFromControlValue(FRigControlValue InValue) {
    return FTransform{};
}

TArray<FTransform> URigHierarchy::GetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName) const {
    return TArray<FTransform>();
}

TArray<FName> URigHierarchy::GetTags(FRigElementKey InItem) const {
    return TArray<FName>();
}

TArray<FRigElementKey> URigHierarchy::GetSelectedKeys(ERigElementType InTypeFilter) const {
    return TArray<FRigElementKey>();
}

FRotator URigHierarchy::GetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator DefaultValue) const {
    return FRotator{};
}

FRotator URigHierarchy::GetRotatorFromControlValue(FRigControlValue InValue) {
    return FRotator{};
}

TArray<FRotator> URigHierarchy::GetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName) const {
    return TArray<FRotator>();
}

TArray<FRigElementKey> URigHierarchy::GetRigidBodyKeys(bool bTraverse) const {
    return TArray<FRigElementKey>();
}

FRigElementKey URigHierarchy::GetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey DefaultValue) const {
    return FRigElementKey{};
}

TArray<FRigElementKey> URigHierarchy::GetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName) const {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchy::GetReferenceKeys(bool bTraverse) const {
    return TArray<FRigElementKey>();
}

FQuat URigHierarchy::GetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat DefaultValue) const {
    return FQuat{};
}

TArray<FQuat> URigHierarchy::GetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName) const {
    return TArray<FQuat>();
}

FRigElementKey URigHierarchy::GetPreviousParent(const FRigElementKey& InKey) const {
    return FRigElementKey{};
}

FName URigHierarchy::GetPreviousName(const FRigElementKey& InKey) const {
    return NAME_None;
}

FRigPose URigHierarchy::GetPose(bool bInitial) const {
    return FRigPose{};
}

TArray<FRigElementWeight> URigHierarchy::GetParentWeightArray(FRigElementKey InChild, bool bInitial) const {
    return TArray<FRigElementWeight>();
}

FRigElementWeight URigHierarchy::GetParentWeight(FRigElementKey InChild, FRigElementKey InParent, bool bInitial) const {
    return FRigElementWeight{};
}

FTransform URigHierarchy::GetParentTransformByIndex(int32 InElementIndex, bool bInitial) const {
    return FTransform{};
}

FTransform URigHierarchy::GetParentTransform(FRigElementKey InKey, bool bInitial) const {
    return FTransform{};
}

TArray<FRigElementKey> URigHierarchy::GetParents(FRigElementKey InKey, bool bRecursive) const {
    return TArray<FRigElementKey>();
}

int32 URigHierarchy::GetNumberOfParents(FRigElementKey InKey) const {
    return 0;
}

TArray<FRigElementKey> URigHierarchy::GetNullKeys(bool bTraverse) const {
    return TArray<FRigElementKey>();
}

FName URigHierarchy::GetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName DefaultValue) const {
    return NAME_None;
}

TArray<FName> URigHierarchy::GetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName) const {
    return TArray<FName>();
}

ERigMetadataType URigHierarchy::GetMetadataType(FRigElementKey InItem, FName InMetadataName) {
    return ERigMetadataType::Bool;
}

TArray<FName> URigHierarchy::GetMetadataNames(FRigElementKey InItem) {
    return TArray<FName>();
}

FTransform URigHierarchy::GetLocalTransformByIndex(int32 InElementIndex, bool bInitial) const {
    return FTransform{};
}

FTransform URigHierarchy::GetLocalTransform(FRigElementKey InKey, bool bInitial) const {
    return FTransform{};
}

FTransform URigHierarchy::GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial) const {
    return FTransform{};
}

FTransform URigHierarchy::GetLocalControlShapeTransform(FRigElementKey InKey, bool bInitial) const {
    return FTransform{};
}

FLinearColor URigHierarchy::GetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor DefaultValue) const {
    return FLinearColor{};
}

TArray<FLinearColor> URigHierarchy::GetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName) const {
    return TArray<FLinearColor>();
}

TArray<FRigElementKey> URigHierarchy::GetKeys(const TArray<int32> InElementIndices) const {
    return TArray<FRigElementKey>();
}

FRigElementKey URigHierarchy::GetKey(int32 InElementIndex) const {
    return FRigElementKey{};
}

int32 URigHierarchy::GetIntFromControlValue(FRigControlValue InValue) {
    return 0;
}

int32 URigHierarchy::GetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32 DefaultValue) const {
    return 0;
}

TArray<int32> URigHierarchy::GetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName) const {
    return TArray<int32>();
}

int32 URigHierarchy::GetIndex_ForBlueprint(FRigElementKey InKey) const {
    return 0;
}

FTransform URigHierarchy::GetGlobalTransformByIndex(int32 InElementIndex, bool bInitial) const {
    return FTransform{};
}

FTransform URigHierarchy::GetGlobalTransform(FRigElementKey InKey, bool bInitial) const {
    return FTransform{};
}

FTransform URigHierarchy::GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial) const {
    return FTransform{};
}

FTransform URigHierarchy::GetGlobalControlShapeTransform(FRigElementKey InKey, bool bInitial) const {
    return FTransform{};
}

FTransform URigHierarchy::GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool bInitial) const {
    return FTransform{};
}

FTransform URigHierarchy::GetGlobalControlOffsetTransform(FRigElementKey InKey, bool bInitial) const {
    return FTransform{};
}

float URigHierarchy::GetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float DefaultValue) const {
    return 0.0f;
}

float URigHierarchy::GetFloatFromControlValue(FRigControlValue InValue) {
    return 0.0f;
}

TArray<float> URigHierarchy::GetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName) const {
    return TArray<float>();
}

FRigElementKey URigHierarchy::GetFirstParent(FRigElementKey InKey) const {
    return FRigElementKey{};
}

FEulerTransform URigHierarchy::GetEulerTransformFromControlValue(FRigControlValue InValue) {
    return FEulerTransform{};
}

FRigElementKey URigHierarchy::GetDefaultParent(FRigElementKey InKey) const {
    return FRigElementKey{};
}

float URigHierarchy::GetCurveValueByIndex(int32 InElementIndex) const {
    return 0.0f;
}

float URigHierarchy::GetCurveValue(FRigElementKey InKey) const {
    return 0.0f;
}

TArray<FRigElementKey> URigHierarchy::GetCurveKeys() const {
    return TArray<FRigElementKey>();
}

FRigControlValue URigHierarchy::GetControlValueByIndex(int32 InElementIndex, ERigControlValueType InValueType) const {
    return FRigControlValue{};
}

FRigControlValue URigHierarchy::GetControlValue(FRigElementKey InKey, ERigControlValueType InValueType) const {
    return FRigControlValue{};
}

FRotator URigHierarchy::GetControlPreferredRotatorByIndex(int32 InElementIndex, bool bInitial) const {
    return FRotator{};
}

FRotator URigHierarchy::GetControlPreferredRotator(FRigElementKey InKey, bool bInitial) const {
    return FRotator{};
}

URigHierarchyController* URigHierarchy::GetController(bool bCreateIfNeeded) {
    return NULL;
}

TArray<FRigElementKey> URigHierarchy::GetControlKeys(bool bTraverse) const {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchy::GetChildren(FRigElementKey InKey, bool bRecursive) const {
    return TArray<FRigElementKey>();
}

bool URigHierarchy::GetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool DefaultValue) const {
    return false;
}

TArray<bool> URigHierarchy::GetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName) const {
    return TArray<bool>();
}

TArray<FRigElementKey> URigHierarchy::GetBoneKeys(bool bTraverse) const {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchy::GetAllKeys_ForBlueprint(bool bTraverse) const {
    return TArray<FRigElementKey>();
}

FRigNullElement URigHierarchy::FindNull_ForBlueprintOnly(const FRigElementKey& InKey) const {
    return FRigNullElement{};
}

FRigControlElement URigHierarchy::FindControl_ForBlueprintOnly(const FRigElementKey& InKey) const {
    return FRigControlElement{};
}

FRigBoneElement URigHierarchy::FindBone_ForBlueprintOnly(const FRigElementKey& InKey) const {
    return FRigBoneElement{};
}

void URigHierarchy::CopyPose(URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded) {
}

void URigHierarchy::CopyHierarchy(URigHierarchy* InHierarchy) {
}

bool URigHierarchy::Contains_ForBlueprint(FRigElementKey InKey) const {
    return false;
}


