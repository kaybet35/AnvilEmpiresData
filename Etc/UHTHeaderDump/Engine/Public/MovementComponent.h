#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActorComponent.h"
#include "EPlaneConstraintAxisSetting.h"
#include "HitResult.h"
#include "MovementComponent.generated.h"

class APhysicsVolume;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* UpdatedComponent;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* UpdatedPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlaneConstraintNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlaneConstraintOrigin;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateOnlyIfRendered: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoUpdateTickRegistration: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTickBeforeOwner: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoRegisterUpdatedComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bConstrainToPlane: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSnapToPlaneAtStart: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoRegisterPhysicsVolumeUpdates: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bComponentShouldUpdatePhysicsVolume: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlaneConstraintAxisSetting PlaneConstraintAxisSetting;
    
public:
    UMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopMovementImmediately();
    
    UFUNCTION(BlueprintCallable)
    void SnapUpdatedComponentToPlane();
    
    UFUNCTION(BlueprintCallable)
    void SetUpdatedComponent(USceneComponent* NewUpdatedComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneConstraintOrigin(FVector PlaneOrigin);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneConstraintNormal(FVector PlaneNormal);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneConstraintFromVectors(FVector Forward, FVector Up);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneConstraintEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting NewAxisSetting);
    
    UFUNCTION(BlueprintCallable)
    void PhysicsVolumeChanged(APhysicsVolume* NewVolume);
    
    UFUNCTION(BlueprintCallable)
    bool K2_MoveUpdatedComponent(FVector Delta, FRotator NewRotation, FHitResult& OutHit, bool bSweep, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExceedingMaxSpeed(float MaxSpeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlaneConstraintOrigin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlaneConstraintNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APhysicsVolume* GetPhysicsVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravityZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ConstrainNormalToPlane(FVector Normal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ConstrainLocationToPlane(FVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ConstrainDirectionToPlane(FVector Direction) const;
    
};

