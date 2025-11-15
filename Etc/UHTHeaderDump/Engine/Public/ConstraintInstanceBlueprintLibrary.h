#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EAngularConstraintMotion -FallbackName=EAngularConstraintMotion
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EConstraintPlasticityType -FallbackName=EConstraintPlasticityType
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ELinearConstraintMotion -FallbackName=ELinearConstraintMotion
#include "BlueprintFunctionLibrary.h"
#include "ConstraintInstanceAccessor.h"
#include "EAngularDriveMode.h"
#include "ConstraintInstanceBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UConstraintInstanceBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConstraintInstanceBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetProjectionParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bEnableProjection, float ProjectionLinearAlpha, float ProjectionAngularAlpha);
    
    UFUNCTION(BlueprintCallable)
    static void SetParentDominates(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bParentDominates);
    
    UFUNCTION(BlueprintCallable)
    static void SetOrientationDriveTwistAndSwing(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bEnableTwistDrive, bool bEnableSwingDrive);
    
    UFUNCTION(BlueprintCallable)
    static void SetOrientationDriveSLERP(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bEnableSLERP);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinearVelocityTarget(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, const FVector& InVelTarget);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinearVelocityDrive(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinearSoftLimitParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bSoftLinearLimit, float LinearLimitStiffness, float LinearLimitDamping, float LinearLimitRestitution, float LinearLimitContactDistance);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinearPositionTarget(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, const FVector& InPosTarget);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinearPositionDrive(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinearPlasticity(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bLinearPlasticity, float LinearPlasticityThreshold, TEnumAsByte<EConstraintPlasticityType> PlasticityType);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinearLimits(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, TEnumAsByte<ELinearConstraintMotion> XMotion, TEnumAsByte<ELinearConstraintMotion> YMotion, TEnumAsByte<ELinearConstraintMotion> ZMotion, float Limit);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinearDriveParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, float PositionStrength, float VelocityStrength, float InForceLimit);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinearBreakable(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bLinearBreakable, float LinearBreakThreshold);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisableCollision(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bDisableCollision);
    
    UFUNCTION(BlueprintCallable)
    static void SetContactTransferScale(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, float ContactTransferScale);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularVelocityTarget(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, const FVector& InVelTarget);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularVelocityDriveTwistAndSwing(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bEnableTwistDrive, bool bEnableSwingDrive);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularVelocityDriveSLERP(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bEnableSLERP);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularSoftTwistLimitParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bSoftTwistLimit, float TwistLimitStiffness, float TwistLimitDamping, float TwistLimitRestitution, float TwistLimitContactDistance);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularSoftSwingLimitParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bSoftSwingLimit, float SwingLimitStiffness, float SwingLimitDamping, float SwingLimitRestitution, float SwingLimitContactDistance);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularPlasticity(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bAngularPlasticity, float AngularPlasticityThreshold);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularOrientationTarget(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, const FRotator& InPosTarget);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularLimits(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, TEnumAsByte<EAngularConstraintMotion> Swing1MotionType, float Swing1LimitAngle, TEnumAsByte<EAngularConstraintMotion> Swing2MotionType, float Swing2LimitAngle, TEnumAsByte<EAngularConstraintMotion> TwistMotionType, float TwistLimitAngle);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularDriveParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, float PositionStrength, float VelocityStrength, float InForceLimit);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularDriveMode(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, TEnumAsByte<EAngularDriveMode::Type> DriveMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularBreakable(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool bAngularBreakable, float AngularBreakThreshold);
    
    UFUNCTION(BlueprintCallable)
    static void GetProjectionParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bEnableProjection, float& ProjectionLinearAlpha, float& ProjectionAngularAlpha);
    
    UFUNCTION(BlueprintCallable)
    static bool GetParentDominates(UPARAM(Ref) FConstraintInstanceAccessor& Accessor);
    
    UFUNCTION(BlueprintCallable)
    static void GetOrientationDriveTwistAndSwing(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bOutEnableTwistDrive, bool& bOutEnableSwingDrive);
    
    UFUNCTION(BlueprintCallable)
    static void GetOrientationDriveSLERP(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bOutEnableSLERP);
    
    UFUNCTION(BlueprintCallable)
    static void GetLinearVelocityTarget(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, FVector& OutVelTarget);
    
    UFUNCTION(BlueprintCallable)
    static void GetLinearVelocityDrive(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bOutEnableDriveX, bool& bOutEnableDriveY, bool& bOutEnableDriveZ);
    
    UFUNCTION(BlueprintCallable)
    static void GetLinearSoftLimitParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bSoftLinearLimit, float& LinearLimitStiffness, float& LinearLimitDamping, float& LinearLimitRestitution, float& LinearLimitContactDistance);
    
    UFUNCTION(BlueprintCallable)
    static void GetLinearPositionTarget(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, FVector& OutPosTarget);
    
    UFUNCTION(BlueprintCallable)
    static void GetLinearPositionDrive(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bOutEnableDriveX, bool& bOutEnableDriveY, bool& bOutEnableDriveZ);
    
    UFUNCTION(BlueprintCallable)
    static void GetLinearPlasticity(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bLinearPlasticity, float& LinearPlasticityThreshold, TEnumAsByte<EConstraintPlasticityType>& PlasticityType);
    
    UFUNCTION(BlueprintCallable)
    static void GetLinearLimits(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, TEnumAsByte<ELinearConstraintMotion>& XMotion, TEnumAsByte<ELinearConstraintMotion>& YMotion, TEnumAsByte<ELinearConstraintMotion>& ZMotion, float& Limit);
    
    UFUNCTION(BlueprintCallable)
    static void GetLinearDriveParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, float& OutPositionStrength, float& OutVelocityStrength, float& OutForceLimit);
    
    UFUNCTION(BlueprintCallable)
    static void GetLinearBreakable(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bLinearBreakable, float& LinearBreakThreshold);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDisableCollsion(UPARAM(Ref) FConstraintInstanceAccessor& Accessor);
    
    UFUNCTION(BlueprintCallable)
    static void GetContactTransferScale(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, float& ContactTransferScale);
    
    UFUNCTION(BlueprintCallable)
    static void GetAttachedBodyNames(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, FName& ParentBody, FName& ChildBody);
    
    UFUNCTION(BlueprintCallable)
    static void GetAngularVelocityTarget(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, FVector& OutVelTarget);
    
    UFUNCTION(BlueprintCallable)
    static void GetAngularVelocityDriveTwistAndSwing(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bOutEnableTwistDrive, bool& bOutEnableSwingDrive);
    
    UFUNCTION(BlueprintCallable)
    static void GetAngularVelocityDriveSLERP(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bOutEnableSLERP);
    
    UFUNCTION(BlueprintCallable)
    static void GetAngularSoftTwistLimitParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bSoftTwistLimit, float& TwistLimitStiffness, float& TwistLimitDamping, float& TwistLimitRestitution, float& TwistLimitContactDistance);
    
    UFUNCTION(BlueprintCallable)
    static void GetAngularSoftSwingLimitParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bSoftSwingLimit, float& SwingLimitStiffness, float& SwingLimitDamping, float& SwingLimitRestitution, float& SwingLimitContactDistance);
    
    UFUNCTION(BlueprintCallable)
    static void GetAngularPlasticity(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bAngularPlasticity, float& AngularPlasticityThreshold);
    
    UFUNCTION(BlueprintCallable)
    static void GetAngularOrientationTarget(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, FRotator& OutPosTarget);
    
    UFUNCTION(BlueprintCallable)
    static void GetAngularLimits(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, TEnumAsByte<EAngularConstraintMotion>& Swing1MotionType, float& Swing1LimitAngle, TEnumAsByte<EAngularConstraintMotion>& Swing2MotionType, float& Swing2LimitAngle, TEnumAsByte<EAngularConstraintMotion>& TwistMotionType, float& TwistLimitAngle);
    
    UFUNCTION(BlueprintCallable)
    static void GetAngularDriveParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, float& OutPositionStrength, float& OutVelocityStrength, float& OutForceLimit);
    
    UFUNCTION(BlueprintCallable)
    static void GetAngularDriveMode(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, TEnumAsByte<EAngularDriveMode::Type>& OutDriveMode);
    
    UFUNCTION(BlueprintCallable)
    static void GetAngularBreakable(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, bool& bAngularBreakable, float& AngularBreakThreshold);
    
    UFUNCTION(BlueprintCallable)
    static void CopyParams(UPARAM(Ref) FConstraintInstanceAccessor& Accessor, UPARAM(Ref) FConstraintInstanceAccessor& SourceAccessor, bool bKeepPosition, bool bKeepRotation);
    
};

