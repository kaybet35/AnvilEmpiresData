#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveFloat -FallbackName=InterpCurveFloat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveQuat -FallbackName=InterpCurveQuat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector -FallbackName=InterpCurveVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESplineCoordinateSpace.h"
#include "ESplinePointType.h"
#include "PrimitiveComponent.h"
#include "SplineCurves.h"
#include "SplinePoint.h"
#include "SplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USplineComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineCurves SplineCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveVector SplineInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveQuat SplineRotInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveVector SplineScaleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat SplineReparamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSplineEditingPerInstance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReparamStepsPerSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStationaryEndpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplineHasBeenEdited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifiedByConstructionScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputSplinePointsToConstructionScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClosedLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopPositionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopPosition;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultUpVector;
    
    USplineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSpline();
    
    UFUNCTION(BlueprintCallable)
    void SetWorldLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetUpVectorAtSplinePoint(int32 PointIndex, const FVector& InUpVector, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetUnselectedSplineSegmentColor(const FLinearColor& SegmentColor);
    
    UFUNCTION(BlueprintCallable)
    void SetTangentsAtSplinePoint(int32 PointIndex, const FVector& InArriveTangent, const FVector& InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetTangentColor(const FLinearColor& TangentColor);
    
    UFUNCTION(BlueprintCallable)
    void SetTangentAtSplinePoint(int32 PointIndex, const FVector& InTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineWorldPoints(const TArray<FVector>& Points);
    
    UFUNCTION(BlueprintCallable)
    void SetSplinePointType(int32 PointIndex, TEnumAsByte<ESplinePointType::Type> Type, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetSplinePoints(const TArray<FVector>& Points, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineLocalPoints(const TArray<FVector>& Points);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedSplineSegmentColor(const FLinearColor& SegmentColor);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleAtSplinePoint(int32 PointIndex, const FVector& InScaleVector, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationAtSplinePoint(int32 PointIndex, const FRotator& InRotation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawDebug(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultUpVector(const FVector& UpVector, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSplinePoint(int32 Index, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosedLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldTangentAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetWorldRotationAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldLocationAtSplinePoint(int32 PointIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldLocationAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldDirectionAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVectorPropertyAtSplinePoint(int32 Index, FName PropertyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVectorPropertyAtSplineInputKey(float InKey, FName PropertyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUpVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUpVectorAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUpVectorAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransformAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity, bool bUseScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransformAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransformAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTangentAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTangentAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ESplinePointType::Type> GetSplinePointType(int32 PointIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScaleAtTime(float Time, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScaleAtSplinePoint(int32 PointIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScaleAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetScaleAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRollAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRollAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRollAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRollAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRightVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRightVectorAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRightVectorAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRightVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfSplineSegments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfSplinePoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocationAndTangentAtSplinePoint(int32 PointIndex, FVector& Location, FVector& Tangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocalLocationAndTangentAtSplinePoint(int32 PointIndex, FVector& LocalLocation, FVector& LocalTangent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLeaveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputKeyValueAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputKeyAtDistanceAlongSpline(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatPropertyAtSplinePoint(int32 Index, FName PropertyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatPropertyAtSplineInputKey(float InKey, FName PropertyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceAlongSplineAtSplinePoint(int32 PointIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceAlongSplineAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirectionAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseConstantVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirectionAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirectionAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetArriveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindUpVectorClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform FindTransformClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUseScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindTangentClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindScaleClosestToWorldLocation(const FVector& WorldLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator FindRotationClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float FindRollClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindRightVectorClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindLocationClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float FindInputKeyClosestToWorldLocation(const FVector& WorldLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindDirectionClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    bool DivideSplineIntoPolylineRecursiveWithDistances(float StartDistanceAlongSpline, float EndDistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, const float MaxSquareDistanceFromSpline, TArray<FVector>& OutPoints, TArray<double>& OutDistancesAlongSpline) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DivideSplineIntoPolylineRecursive(float StartDistanceAlongSpline, float EndDistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, const float MaxSquareDistanceFromSpline, TArray<FVector>& OutPoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConvertSplineToPolyLine(TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, const float MaxSquareDistanceFromSpline, TArray<FVector>& OutPoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConvertSplineSegmentToPolyLine(int32 SplinePointStartIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, const float MaxSquareDistanceFromSpline, TArray<FVector>& OutPoints) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSplinePoints(bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void AddSplineWorldPoint(const FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    void AddSplinePointAtIndex(const FVector& Position, int32 Index, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void AddSplinePoint(const FVector& Position, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void AddSplineLocalPoint(const FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    void AddPoints(const TArray<FSplinePoint>& Points, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void AddPoint(const FSplinePoint& Point, bool bUpdateSpline);
    
};

