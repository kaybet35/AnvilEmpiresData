#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ESplineMeshAxis.h"
#include "Interface_CollisionDataProvider.h"
#include "SplineMeshParams.h"
#include "StaticMeshComponent.h"
#include "SplineMeshComponent.generated.h"

class UBodySetup;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USplineMeshComponent : public UStaticMeshComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMeshParams SplineParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SplineUpDir;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineBoundaryMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CachedMeshBodySetupGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineBoundaryMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowSplineEditingPerInstance: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSmoothInterpRollScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bMeshDirty: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VirtualTextureMainPassMaxDrawDistance;
    
    USplineMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMesh();
    
    UFUNCTION(BlueprintCallable)
    void SetStartTangent(FVector StartTangent, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetStartScale(FVector2D StartScale, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetStartRoll(float StartRoll, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetStartPosition(FVector StartPos, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetStartOffset(FVector2D StartOffset, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetStartAndEnd(FVector StartPos, FVector StartTangent, FVector EndPos, FVector EndTangent, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineUpDir(const FVector& InSplineUpDir, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetForwardAxis(TEnumAsByte<ESplineMeshAxis::Type> InForwardAxis, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetEndTangent(FVector EndTangent, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetEndScale(FVector2D EndScale, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetEndRoll(float EndRoll, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetEndPosition(FVector EndPos, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetEndOffset(FVector2D EndOffset, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStartTangent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetStartScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartRoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStartPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetStartOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSplineUpDir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ESplineMeshAxis::Type> GetForwardAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEndTangent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetEndScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEndRoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEndPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetEndOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoundaryMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoundaryMax() const;
    

    // Fix for true pure virtual functions not being implemented
};

