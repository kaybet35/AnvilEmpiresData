#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EAngularConstraintMotion -FallbackName=EAngularConstraintMotion
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EConstraintFrame -FallbackName=EConstraintFrame
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EConstraintPlasticityType -FallbackName=EConstraintPlasticityType
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ELinearConstraintMotion -FallbackName=ELinearConstraintMotion
#include "ConstrainComponentPropName.h"
#include "ConstraintBrokenSignatureDelegate.h"
#include "ConstraintInstance.h"
#include "ConstraintInstanceAccessor.h"
#include "EAngularDriveMode.h"
#include "PlasticDeformationEventSignatureDelegate.h"
#include "SceneComponent.h"
#include "PhysicsConstraintComponent.generated.h"

class AActor;
class UPhysicsConstraintTemplate;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPhysicsConstraintComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ConstraintActor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstrainComponentPropName ComponentName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ConstraintActor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstrainComponentPropName ComponentName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintTemplate* ConstraintSetup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstraintBrokenSignature OnConstraintBroken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlasticDeformationEventSignature OnPlasticDeformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstraintInstance ConstraintInstance;
    
    UPhysicsConstraintComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientationDriveSLERP(bool bEnableSLERP);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearZLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearYLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearXLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearVelocityTarget(const FVector& InVelTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearPositionTarget(const FVector& InPosTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearPlasticity(bool bLinearPlasticity, float LinearPlasticityThreshold, TEnumAsByte<EConstraintPlasticityType> PlasticityType);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCollision(bool bDisableCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetContactTransferScale(float ContactTransferScale);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintReferencePosition(TEnumAsByte<EConstraintFrame::Type> Frame, const FVector& RefPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintReferenceOrientation(TEnumAsByte<EConstraintFrame::Type> Frame, const FVector& PriAxis, const FVector& SecAxis);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintReferenceFrame(TEnumAsByte<EConstraintFrame::Type> Frame, const FTransform& RefFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetConstrainedComponents(UPrimitiveComponent* Component1, FName BoneName1, UPrimitiveComponent* Component2, FName BoneName2);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocityTarget(const FVector& InVelTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocityDriveSLERP(bool bEnableSLERP);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularTwistLimit(TEnumAsByte<EAngularConstraintMotion> ConstraintType, float TwistLimitAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularSwing2Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing2LimitAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularSwing1Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing1LimitAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularPlasticity(bool bAngularPlasticity, float AngularPlasticityThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularOrientationTarget(const FRotator& InPosTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularDriveMode(TEnumAsByte<EAngularDriveMode::Type> DriveMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold);
    
    UFUNCTION(BlueprintCallable)
    bool IsBroken();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTwist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSwing2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSwing1() const;
    
    UFUNCTION(BlueprintCallable)
    void GetConstraintForce(FVector& OutLinearForce, FVector& OutAngularForce);
    
    UFUNCTION(BlueprintCallable)
    FConstraintInstanceAccessor GetConstraint();
    
    UFUNCTION(BlueprintCallable)
    void GetConstrainedComponents(UPrimitiveComponent*& OutComponent1, FName& OutBoneName1, UPrimitiveComponent*& OutComponent2, FName& OutBoneName2);
    
    UFUNCTION(BlueprintCallable)
    void BreakConstraint();
    
};

