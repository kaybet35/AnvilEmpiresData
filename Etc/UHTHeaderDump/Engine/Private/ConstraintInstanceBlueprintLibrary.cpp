#include "ConstraintInstanceBlueprintLibrary.h"

UConstraintInstanceBlueprintLibrary::UConstraintInstanceBlueprintLibrary() {
}

void UConstraintInstanceBlueprintLibrary::SetProjectionParams(FConstraintInstanceAccessor& Accessor, bool bEnableProjection, float ProjectionLinearAlpha, float ProjectionAngularAlpha) {
}

void UConstraintInstanceBlueprintLibrary::SetParentDominates(FConstraintInstanceAccessor& Accessor, bool bParentDominates) {
}

void UConstraintInstanceBlueprintLibrary::SetOrientationDriveTwistAndSwing(FConstraintInstanceAccessor& Accessor, bool bEnableTwistDrive, bool bEnableSwingDrive) {
}

void UConstraintInstanceBlueprintLibrary::SetOrientationDriveSLERP(FConstraintInstanceAccessor& Accessor, bool bEnableSLERP) {
}

void UConstraintInstanceBlueprintLibrary::SetLinearVelocityTarget(FConstraintInstanceAccessor& Accessor, const FVector& InVelTarget) {
}

void UConstraintInstanceBlueprintLibrary::SetLinearVelocityDrive(FConstraintInstanceAccessor& Accessor, bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) {
}

void UConstraintInstanceBlueprintLibrary::SetLinearSoftLimitParams(FConstraintInstanceAccessor& Accessor, bool bSoftLinearLimit, float LinearLimitStiffness, float LinearLimitDamping, float LinearLimitRestitution, float LinearLimitContactDistance) {
}

void UConstraintInstanceBlueprintLibrary::SetLinearPositionTarget(FConstraintInstanceAccessor& Accessor, const FVector& InPosTarget) {
}

void UConstraintInstanceBlueprintLibrary::SetLinearPositionDrive(FConstraintInstanceAccessor& Accessor, bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) {
}

void UConstraintInstanceBlueprintLibrary::SetLinearPlasticity(FConstraintInstanceAccessor& Accessor, bool bLinearPlasticity, float LinearPlasticityThreshold, TEnumAsByte<EConstraintPlasticityType> PlasticityType) {
}

void UConstraintInstanceBlueprintLibrary::SetLinearLimits(FConstraintInstanceAccessor& Accessor, TEnumAsByte<ELinearConstraintMotion> XMotion, TEnumAsByte<ELinearConstraintMotion> YMotion, TEnumAsByte<ELinearConstraintMotion> ZMotion, float Limit) {
}

void UConstraintInstanceBlueprintLibrary::SetLinearDriveParams(FConstraintInstanceAccessor& Accessor, float PositionStrength, float VelocityStrength, float InForceLimit) {
}

void UConstraintInstanceBlueprintLibrary::SetLinearBreakable(FConstraintInstanceAccessor& Accessor, bool bLinearBreakable, float LinearBreakThreshold) {
}

void UConstraintInstanceBlueprintLibrary::SetDisableCollision(FConstraintInstanceAccessor& Accessor, bool bDisableCollision) {
}

void UConstraintInstanceBlueprintLibrary::SetContactTransferScale(FConstraintInstanceAccessor& Accessor, float ContactTransferScale) {
}

void UConstraintInstanceBlueprintLibrary::SetAngularVelocityTarget(FConstraintInstanceAccessor& Accessor, const FVector& InVelTarget) {
}

void UConstraintInstanceBlueprintLibrary::SetAngularVelocityDriveTwistAndSwing(FConstraintInstanceAccessor& Accessor, bool bEnableTwistDrive, bool bEnableSwingDrive) {
}

void UConstraintInstanceBlueprintLibrary::SetAngularVelocityDriveSLERP(FConstraintInstanceAccessor& Accessor, bool bEnableSLERP) {
}

void UConstraintInstanceBlueprintLibrary::SetAngularSoftTwistLimitParams(FConstraintInstanceAccessor& Accessor, bool bSoftTwistLimit, float TwistLimitStiffness, float TwistLimitDamping, float TwistLimitRestitution, float TwistLimitContactDistance) {
}

void UConstraintInstanceBlueprintLibrary::SetAngularSoftSwingLimitParams(FConstraintInstanceAccessor& Accessor, bool bSoftSwingLimit, float SwingLimitStiffness, float SwingLimitDamping, float SwingLimitRestitution, float SwingLimitContactDistance) {
}

void UConstraintInstanceBlueprintLibrary::SetAngularPlasticity(FConstraintInstanceAccessor& Accessor, bool bAngularPlasticity, float AngularPlasticityThreshold) {
}

void UConstraintInstanceBlueprintLibrary::SetAngularOrientationTarget(FConstraintInstanceAccessor& Accessor, const FRotator& InPosTarget) {
}

void UConstraintInstanceBlueprintLibrary::SetAngularLimits(FConstraintInstanceAccessor& Accessor, TEnumAsByte<EAngularConstraintMotion> Swing1MotionType, float Swing1LimitAngle, TEnumAsByte<EAngularConstraintMotion> Swing2MotionType, float Swing2LimitAngle, TEnumAsByte<EAngularConstraintMotion> TwistMotionType, float TwistLimitAngle) {
}

void UConstraintInstanceBlueprintLibrary::SetAngularDriveParams(FConstraintInstanceAccessor& Accessor, float PositionStrength, float VelocityStrength, float InForceLimit) {
}

void UConstraintInstanceBlueprintLibrary::SetAngularDriveMode(FConstraintInstanceAccessor& Accessor, TEnumAsByte<EAngularDriveMode::Type> DriveMode) {
}

void UConstraintInstanceBlueprintLibrary::SetAngularBreakable(FConstraintInstanceAccessor& Accessor, bool bAngularBreakable, float AngularBreakThreshold) {
}

void UConstraintInstanceBlueprintLibrary::GetProjectionParams(FConstraintInstanceAccessor& Accessor, bool& bEnableProjection, float& ProjectionLinearAlpha, float& ProjectionAngularAlpha) {
}

bool UConstraintInstanceBlueprintLibrary::GetParentDominates(FConstraintInstanceAccessor& Accessor) {
    return false;
}

void UConstraintInstanceBlueprintLibrary::GetOrientationDriveTwistAndSwing(FConstraintInstanceAccessor& Accessor, bool& bOutEnableTwistDrive, bool& bOutEnableSwingDrive) {
}

void UConstraintInstanceBlueprintLibrary::GetOrientationDriveSLERP(FConstraintInstanceAccessor& Accessor, bool& bOutEnableSLERP) {
}

void UConstraintInstanceBlueprintLibrary::GetLinearVelocityTarget(FConstraintInstanceAccessor& Accessor, FVector& OutVelTarget) {
}

void UConstraintInstanceBlueprintLibrary::GetLinearVelocityDrive(FConstraintInstanceAccessor& Accessor, bool& bOutEnableDriveX, bool& bOutEnableDriveY, bool& bOutEnableDriveZ) {
}

void UConstraintInstanceBlueprintLibrary::GetLinearSoftLimitParams(FConstraintInstanceAccessor& Accessor, bool& bSoftLinearLimit, float& LinearLimitStiffness, float& LinearLimitDamping, float& LinearLimitRestitution, float& LinearLimitContactDistance) {
}

void UConstraintInstanceBlueprintLibrary::GetLinearPositionTarget(FConstraintInstanceAccessor& Accessor, FVector& OutPosTarget) {
}

void UConstraintInstanceBlueprintLibrary::GetLinearPositionDrive(FConstraintInstanceAccessor& Accessor, bool& bOutEnableDriveX, bool& bOutEnableDriveY, bool& bOutEnableDriveZ) {
}

void UConstraintInstanceBlueprintLibrary::GetLinearPlasticity(FConstraintInstanceAccessor& Accessor, bool& bLinearPlasticity, float& LinearPlasticityThreshold, TEnumAsByte<EConstraintPlasticityType>& PlasticityType) {
}

void UConstraintInstanceBlueprintLibrary::GetLinearLimits(FConstraintInstanceAccessor& Accessor, TEnumAsByte<ELinearConstraintMotion>& XMotion, TEnumAsByte<ELinearConstraintMotion>& YMotion, TEnumAsByte<ELinearConstraintMotion>& ZMotion, float& Limit) {
}

void UConstraintInstanceBlueprintLibrary::GetLinearDriveParams(FConstraintInstanceAccessor& Accessor, float& OutPositionStrength, float& OutVelocityStrength, float& OutForceLimit) {
}

void UConstraintInstanceBlueprintLibrary::GetLinearBreakable(FConstraintInstanceAccessor& Accessor, bool& bLinearBreakable, float& LinearBreakThreshold) {
}

bool UConstraintInstanceBlueprintLibrary::GetDisableCollsion(FConstraintInstanceAccessor& Accessor) {
    return false;
}

void UConstraintInstanceBlueprintLibrary::GetContactTransferScale(FConstraintInstanceAccessor& Accessor, float& ContactTransferScale) {
}

void UConstraintInstanceBlueprintLibrary::GetAttachedBodyNames(FConstraintInstanceAccessor& Accessor, FName& ParentBody, FName& ChildBody) {
}

void UConstraintInstanceBlueprintLibrary::GetAngularVelocityTarget(FConstraintInstanceAccessor& Accessor, FVector& OutVelTarget) {
}

void UConstraintInstanceBlueprintLibrary::GetAngularVelocityDriveTwistAndSwing(FConstraintInstanceAccessor& Accessor, bool& bOutEnableTwistDrive, bool& bOutEnableSwingDrive) {
}

void UConstraintInstanceBlueprintLibrary::GetAngularVelocityDriveSLERP(FConstraintInstanceAccessor& Accessor, bool& bOutEnableSLERP) {
}

void UConstraintInstanceBlueprintLibrary::GetAngularSoftTwistLimitParams(FConstraintInstanceAccessor& Accessor, bool& bSoftTwistLimit, float& TwistLimitStiffness, float& TwistLimitDamping, float& TwistLimitRestitution, float& TwistLimitContactDistance) {
}

void UConstraintInstanceBlueprintLibrary::GetAngularSoftSwingLimitParams(FConstraintInstanceAccessor& Accessor, bool& bSoftSwingLimit, float& SwingLimitStiffness, float& SwingLimitDamping, float& SwingLimitRestitution, float& SwingLimitContactDistance) {
}

void UConstraintInstanceBlueprintLibrary::GetAngularPlasticity(FConstraintInstanceAccessor& Accessor, bool& bAngularPlasticity, float& AngularPlasticityThreshold) {
}

void UConstraintInstanceBlueprintLibrary::GetAngularOrientationTarget(FConstraintInstanceAccessor& Accessor, FRotator& OutPosTarget) {
}

void UConstraintInstanceBlueprintLibrary::GetAngularLimits(FConstraintInstanceAccessor& Accessor, TEnumAsByte<EAngularConstraintMotion>& Swing1MotionType, float& Swing1LimitAngle, TEnumAsByte<EAngularConstraintMotion>& Swing2MotionType, float& Swing2LimitAngle, TEnumAsByte<EAngularConstraintMotion>& TwistMotionType, float& TwistLimitAngle) {
}

void UConstraintInstanceBlueprintLibrary::GetAngularDriveParams(FConstraintInstanceAccessor& Accessor, float& OutPositionStrength, float& OutVelocityStrength, float& OutForceLimit) {
}

void UConstraintInstanceBlueprintLibrary::GetAngularDriveMode(FConstraintInstanceAccessor& Accessor, TEnumAsByte<EAngularDriveMode::Type>& OutDriveMode) {
}

void UConstraintInstanceBlueprintLibrary::GetAngularBreakable(FConstraintInstanceAccessor& Accessor, bool& bAngularBreakable, float& AngularBreakThreshold) {
}

void UConstraintInstanceBlueprintLibrary::CopyParams(FConstraintInstanceAccessor& Accessor, FConstraintInstanceAccessor& SourceAccessor, bool bKeepPosition, bool bKeepRotation) {
}


