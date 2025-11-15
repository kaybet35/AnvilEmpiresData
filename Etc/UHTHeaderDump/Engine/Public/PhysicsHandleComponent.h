#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActorComponent.h"
#include "PhysicsHandleComponent.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, CollapseCategories, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPhysicsHandleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* GrabbedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSoftAngularConstraint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSoftLinearConstraint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInterpolateTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationSpeed;
    
    UPhysicsHandleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargetRotation(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocationAndRotation(FVector NewLocation, FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocation(FVector NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearStiffness(float NewLinearStiffness);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearDamping(float NewLinearDamping);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolationSpeed(float NewInterpolationSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularStiffness(float NewAngularStiffness);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularDamping(float NewAngularDamping);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseComponent();
    
    UFUNCTION(BlueprintCallable)
    void GrabComponentAtLocationWithRotation(UPrimitiveComponent* Component, FName InBoneName, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void GrabComponentAtLocation(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation);
    
    UFUNCTION(BlueprintCallable)
    void GrabComponent(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation, bool bConstrainRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTargetLocationAndRotation(FVector& TargetLocation, FRotator& TargetRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetGrabbedComponent() const;
    
};

