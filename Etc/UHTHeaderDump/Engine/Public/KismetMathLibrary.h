#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=QualifiedFrameTime -FallbackName=QualifiedFrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "BlueprintFunctionLibrary.h"
#include "EEasingFunc.h"
#include "ELerpInterpolationMode.h"
#include "EMatrixColumns.h"
#include "FloatSpringState.h"
#include "QuaternionSpringState.h"
#include "VectorSpringState.h"
#include "Vector_NetQuantize.h"
#include "Vector_NetQuantize10.h"
#include "Vector_NetQuantize100.h"
#include "Vector_NetQuantizeNormal.h"
#include "KismetMathLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class ENGINE_API UKismetMathLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetMathLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Xor_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 Xor_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Wrap(int32 Value, int32 NewMin, int32 NewMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector WeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float Weight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator WeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float Weight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float WeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float Weight);
    
    UFUNCTION(BlueprintPure)
    static double VSizeXYSquared(FVector A);
    
    UFUNCTION(BlueprintPure)
    static double VSizeXY(FVector A);
    
    UFUNCTION(BlueprintPure)
    static double VSizeSquared(FVector A);
    
    UFUNCTION(BlueprintPure)
    static double VSize2DSquared(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static double VSize2D(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static double VSize(FVector A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VLerp(FVector A, FVector B, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VInterpTo_Constant(FVector Current, FVector Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VInterpTo(FVector Current, FVector Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    static FVector VectorSpringInterp(FVector Current, FVector Target, UPARAM(Ref) FVectorSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass, float TargetVelocityAmount, bool bClamp, FVector MinValue, FVector MaxValue, bool bInitializeFromTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_Zero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_Up();
    
    UFUNCTION(BlueprintCallable)
    static void Vector_UnwindEuler(UPARAM(Ref) FVector& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Vector_UnitCartesianToSpherical(FVector A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_ToRadians(FVector A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_ToDegrees(FVector A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_SnappedToGrid(FVector InVect, float InGridSize);
    
    UFUNCTION(BlueprintCallable)
    static void Vector_Set(UPARAM(Ref) FVector& A, double X, double Y, double Z);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_Right();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_Reciprocal(const FVector& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_ProjectOnToNormal(FVector V, FVector InNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_One();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_NormalUnsafe(const FVector& A);
    
    UFUNCTION(BlueprintCallable)
    static void Vector_Normalize(UPARAM(Ref) FVector& A, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_Normal2D(FVector A, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_MirrorByPlane(FVector A, const FPlane& InPlane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_Left();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Vector_IsZero(const FVector& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Vector_IsUnit(const FVector& A, float SquaredLenthTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Vector_IsUniform(const FVector& A, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Vector_IsNormal(const FVector& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Vector_IsNearlyZero(const FVector& A, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Vector_IsNAN(const FVector& A);
    
    UFUNCTION(BlueprintPure)
    static double Vector_HeadingAngle(FVector A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_GetSignVector(FVector A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_GetProjection(FVector A);
    
    UFUNCTION(BlueprintPure)
    static double Vector_GetAbsMin(FVector A);
    
    UFUNCTION(BlueprintPure)
    static double Vector_GetAbsMax(FVector A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_GetAbs(FVector A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_Forward();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_Down();
    
    UFUNCTION(BlueprintPure)
    static double Vector_DistanceSquared(FVector v1, FVector v2);
    
    UFUNCTION(BlueprintPure)
    static double Vector_Distance2DSquared(FVector v1, FVector v2);
    
    UFUNCTION(BlueprintPure)
    static double Vector_Distance2D(FVector v1, FVector v2);
    
    UFUNCTION(BlueprintPure)
    static double Vector_Distance(FVector v1, FVector v2);
    
    UFUNCTION(BlueprintPure)
    static double Vector_CosineAngle2D(FVector A, FVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_ComponentMin(FVector A, FVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_ComponentMax(FVector A, FVector B);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_ClampSizeMax2D(FVector A, double NewMax);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_ClampSizeMax(FVector A, double NewMax);
    
    UFUNCTION(BlueprintPure)
    static FVector Vector_ClampSize2D(FVector A, double NewMin, double NewMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_BoundedToCube(FVector InVect, float InRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_BoundedToBox(FVector InVect, FVector InBoxMin, FVector InBoxMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Vector_Backward();
    
    UFUNCTION(BlueprintCallable)
    static void Vector_Assign(UPARAM(Ref) FVector& A, const FVector& InVector);
    
    UFUNCTION(BlueprintCallable)
    static void Vector_AddBounded(UPARAM(Ref) FVector& A, FVector InAddVect, float InRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Vector4_Zero();
    
    UFUNCTION(BlueprintPure)
    static double Vector4_SizeSquared3(const FVector4& A);
    
    UFUNCTION(BlueprintPure)
    static double Vector4_SizeSquared(const FVector4& A);
    
    UFUNCTION(BlueprintPure)
    static double Vector4_Size3(const FVector4& A);
    
    UFUNCTION(BlueprintPure)
    static double Vector4_Size(const FVector4& A);
    
    UFUNCTION(BlueprintCallable)
    static void Vector4_Set(UPARAM(Ref) FVector4& A, double X, double Y, double Z, double W);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Vector4_NormalUnsafe3(const FVector4& A);
    
    UFUNCTION(BlueprintCallable)
    static void Vector4_Normalize3(UPARAM(Ref) FVector4& A, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Vector4_Normal3(const FVector4& A, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Vector4_Negated(const FVector4& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Vector4_MirrorByVector3(const FVector4& Direction, const FVector4& SurfaceNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Vector4_IsZero(const FVector4& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Vector4_IsUnit3(const FVector4& A, float SquaredLenthTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Vector4_IsNormal3(const FVector4& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Vector4_IsNearlyZero3(const FVector4& A, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Vector4_IsNAN(const FVector4& A);
    
    UFUNCTION(BlueprintPure)
    static double Vector4_DotProduct3(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintPure)
    static double Vector4_DotProduct(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Vector4_CrossProduct3(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintCallable)
    static void Vector4_Assign(UPARAM(Ref) FVector4& A, const FVector4& InVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Vector2DInterpTo_Constant(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Vector2DInterpTo(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Vector2D_Zero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Vector2D_Unit45Deg();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Vector2D_One();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VEase(FVector A, FVector B, float Alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime UtcNow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 TransformVector4(const FMatrix& Matrix, const FVector4& Vec4);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator TransformRotation(const FTransform& T, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector TransformLocation(const FTransform& T, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector TransformDirection(const FTransform& T, FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Transform_Determinant(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D ToSign2D(FVector2D A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D ToRounded2D(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static void ToDirectionAndLength2D(FVector2D A, FVector2D& OutDir, double& OutLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime Today();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform TLerp(const FTransform& A, const FTransform& B, float Alpha, TEnumAsByte<ELerpInterpolationMode::Type> InterpMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform TInterpTo(const FTransform& Current, const FTransform& Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan TimespanZeroValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float TimespanRatio(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan TimespanMinValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan TimespanMaxValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TimespanFromString(const FString& TimespanString, FTimespan& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform TEase(const FTransform& A, const FTransform& B, float Alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintPure)
    static double Tan(double A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Subtract_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Subtract_VectorInt(FVector A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FVector Subtract_VectorFloat(FVector A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Subtract_Vector4Vector4(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Subtract_Vector2DVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Subtract_Vector2DFloat(FVector2D A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan Subtract_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Subtract_QuatQuat(const FQuat& A, const FQuat& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor Subtract_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint Subtract_IntPointIntPoint(FIntPoint A, FIntPoint B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint Subtract_IntPointInt(FIntPoint A, int32 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Subtract_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 Subtract_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static double Subtract_DoubleDouble(double A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime Subtract_DateTimeTimespan(FDateTime A, FTimespan B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan Subtract_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 Subtract_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static double Square(double A);
    
    UFUNCTION(BlueprintPure)
    static double Sqrt(double A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Spherical2DToUnitCartesian(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static double Sin(double A);
    
    UFUNCTION(BlueprintPure)
    static int64 SignOfInteger64(int64 A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SignOfInteger(int32 A);
    
    UFUNCTION(BlueprintPure)
    static double SignOfFloat(double A);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorSpringStateVelocity(UPARAM(Ref) FVectorSpringState& SpringState, FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    static void SetRandomStreamSeed(UPARAM(Ref) FRandomStream& Stream, int32 NewSeed);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuaternionSpringStateAngularVelocity(UPARAM(Ref) FQuaternionSpringState& SpringState, FVector AngularVelocity);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatSpringStateVelocity(UPARAM(Ref) FFloatSpringState& SpringState, float Velocity);
    
    UFUNCTION(BlueprintCallable)
    static void Set2D(UPARAM(Ref) FVector2D& A, double X, double Y);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SelectVector(FVector A, FVector B, bool bPickA);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform SelectTransform(const FTransform& A, const FTransform& B, bool bPickA);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SelectString(const FString& A, const FString& B, bool bPickA);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator SelectRotator(FRotator A, FRotator B, bool bPickA);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* SelectObject(UObject* A, UObject* B, bool bSelectA);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SelectInt(int32 A, int32 B, bool bPickA);
    
    UFUNCTION(BlueprintPure)
    static double SelectFloat(double A, double B, bool bPickA);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor SelectColor(FLinearColor A, FLinearColor B, bool bPickA);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* SelectClass(UClass* A, UClass* B, bool bSelectA);
    
    UFUNCTION(BlueprintCallable)
    static void SeedRandomStream(UPARAM(Ref) FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static double SafeDivide(double A, double B);
    
    UFUNCTION(BlueprintPure)
    static int64 Round64(double A);
    
    UFUNCTION(BlueprintPure)
    static int32 Round(double A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator RotatorFromAxisAndAngle(FVector Axis, float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RotateAngleAxis(FVector InVect, float AngleDeg, FVector Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator RLerp(FRotator A, FRotator B, float Alpha, bool bShortestPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator RInterpTo_Constant(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator RInterpTo(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RGBToHSV_Vector(FLinearColor RGB, FLinearColor& HSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RGBToHSV(FLinearColor InColor, float& H, float& S, float& V, float& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor RGBLinearToHSV(FLinearColor RGB);
    
    UFUNCTION(BlueprintCallable)
    static void ResetVectorSpringState(UPARAM(Ref) FVectorSpringState& SpringState);
    
    UFUNCTION(BlueprintCallable)
    static void ResetRandomStream(const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable)
    static void ResetQuaternionSpringState(UPARAM(Ref) FQuaternionSpringState& SpringState);
    
    UFUNCTION(BlueprintCallable)
    static void ResetFloatSpringState(UPARAM(Ref) FFloatSpringState& SpringState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator REase(FRotator A, FRotator B, float Alpha, bool bShortestPath, TEnumAsByte<EEasingFunc::Type> EasingFunc, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomUnitVectorInEllipticalConeInRadiansFromStream(const FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomUnitVectorInEllipticalConeInRadians(FVector ConeDir, float MaxYawInRadians, float MaxPitchInRadians);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomUnitVectorInEllipticalConeInDegreesFromStream(const FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomUnitVectorInEllipticalConeInDegrees(FVector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomUnitVectorInConeInRadiansFromStream(const FVector& ConeDir, float ConeHalfAngleInRadians, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomUnitVectorInConeInRadians(FVector ConeDir, float ConeHalfAngleInRadians);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomUnitVectorInConeInDegreesFromStream(const FVector& ConeDir, float ConeHalfAngleInDegrees, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomUnitVectorInConeInDegrees(FVector ConeDir, float ConeHalfAngleInDegrees);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomUnitVectorFromStream(const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomUnitVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator RandomRotatorFromStream(bool bRoll, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator RandomRotator(bool bRoll);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomPointInBoundingBoxFromStream_Box(const FBox Box, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomPointInBoundingBoxFromStream(const FVector Center, const FVector HalfSize, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomPointInBoundingBox_Box(const FBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RandomPointInBoundingBox(const FVector Center, const FVector HalfSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RandomIntegerInRangeFromStream(int32 NewMin, int32 NewMax, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RandomIntegerInRange(int32 NewMin, int32 NewMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RandomIntegerFromStream(int32 NewMax, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static int64 RandomInteger64InRange(int64 NewMin, int64 NewMax);
    
    UFUNCTION(BlueprintPure)
    static int64 RandomInteger64(int64 NewMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RandomInteger(int32 NewMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandomFloatInRangeFromStream(float NewMin, float NewMax, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static double RandomFloatInRange(double NewMin, double NewMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandomFloatFromStream(const FRandomStream& Stream);
    
    UFUNCTION(BlueprintPure)
    static double RandomFloat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool RandomBoolWithWeightFromStream(float Weight, const FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool RandomBoolWithWeight(float Weight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool RandomBoolFromStream(const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool RandomBool();
    
    UFUNCTION(BlueprintPure)
    static double RadiansToDegrees(double A);
    
    UFUNCTION(BlueprintCallable)
    static FQuat QuaternionSpringInterp(FQuat Current, FQuat Target, UPARAM(Ref) FQuaternionSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass, float TargetVelocityAmount, bool bInitializeFromTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Quat_VectorUp(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Quat_VectorRight(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Quat_VectorForward(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Quat_UnrotateVector(const FQuat& Q, const FVector& V);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Quat_SizeSquared(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Quat_Size(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable)
    static void Quat_SetFromEuler(UPARAM(Ref) FQuat& Q, const FVector& Euler);
    
    UFUNCTION(BlueprintCallable)
    static void Quat_SetComponents(UPARAM(Ref) FQuat& Q, float X, float Y, float Z, float W);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator Quat_Rotator(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Quat_RotateVector(const FQuat& Q, const FVector& V);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Quat_Normalized(const FQuat& Q, float Tolerance);
    
    UFUNCTION(BlueprintCallable)
    static void Quat_Normalize(UPARAM(Ref) FQuat& Q, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Quat_MakeFromEuler(const FVector& Euler);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Quat_Log(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Quat_IsNormalized(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Quat_IsNonFinite(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Quat_IsIdentity(const FQuat& Q, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Quat_IsFinite(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Quat_Inversed(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Quat_Identity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Quat_GetRotationAxis(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Quat_GetAxisZ(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Quat_GetAxisY(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Quat_GetAxisX(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Quat_GetAngle(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Quat_Exp(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Quat_Euler(const FQuat& Q);
    
    UFUNCTION(BlueprintCallable)
    static void Quat_EnforceShortestArcWith(UPARAM(Ref) FQuat& A, const FQuat& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Quat_AngularDistance(const FQuat& A, const FQuat& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ProjectVectorOnToVector(FVector V, FVector Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ProjectVectorOnToPlane(FVector V, FVector PlaneNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ProjectPointOnToPlane(FVector Point, FVector PlaneBase, FVector PlaneNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PointsAreCoplanar(const TArray<FVector>& Points, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float PerlinNoise1D(const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Percent_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 Percent_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static double Percent_FloatFloat(double A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 Percent_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Or_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 Or_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime Now();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqualExactly_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqualExactly_Vector4Vector4(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqualExactly_Vector2DVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_VectorVector(FVector A, FVector B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_Vector4Vector4(const FVector4& A, const FVector4& B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_QuatQuat(const FQuat& A, const FQuat& B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_ObjectObject(UObject* A, UObject* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_NameName(FName A, FName B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_MatrixMatrix(const FMatrix& A, const FMatrix& B, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_IntPointIntPoint(FIntPoint A, FIntPoint B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_DoubleDouble(double A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_ClassClass(UClass* A, UClass* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_BoolBool(bool A, bool B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Not_PreBool(bool A);
    
    UFUNCTION(BlueprintPure)
    static int64 Not_Int64(int64 A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Not_Int(int32 A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D NormalSafe2D(FVector2D A, float Tolerance);
    
    UFUNCTION(BlueprintPure)
    static double NormalizeToRange(double Value, double RangeMin, double RangeMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator NormalizedDeltaRotator(FRotator A, FRotator B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float NormalizeAxis(float Angle);
    
    UFUNCTION(BlueprintCallable)
    static void Normalize2D(UPARAM(Ref) FVector2D& A, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Normal2D(FVector2D A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Normal(FVector A, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector NegateVector(FVector A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator NegateRotator(FRotator A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Negated2D(const FVector2D& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NearlyEqual_TransformTransform(const FTransform& A, const FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);
    
    UFUNCTION(BlueprintPure)
    static bool NearlyEqual_FloatFloat(double A, double B, double ErrorTolerance);
    
    UFUNCTION(BlueprintPure)
    static double MultiplyMultiply_FloatFloat(double Base, double NewExp);
    
    UFUNCTION(BlueprintPure)
    static double MultiplyByPi(double Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Multiply_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Multiply_VectorInt(FVector A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FVector Multiply_VectorFloat(FVector A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Multiply_Vector4Vector4(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Multiply_Vector2DVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Multiply_Vector2DFloat(FVector2D A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan Multiply_TimespanFloat(FTimespan A, float Scalar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator Multiply_RotatorInt(FRotator A, int32 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator Multiply_RotatorFloat(FRotator A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Multiply_QuatQuat(const FQuat& A, const FQuat& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Multiply_MatrixMatrix(const FMatrix& A, const FMatrix& B);
    
    UFUNCTION(BlueprintPure)
    static FMatrix Multiply_MatrixFloat(const FMatrix& A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor Multiply_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor Multiply_LinearColorFloat(FLinearColor A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint Multiply_IntPointIntPoint(FIntPoint A, FIntPoint B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint Multiply_IntPointInt(FIntPoint A, int32 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Multiply_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static double Multiply_IntFloat(int32 A, double B);
    
    UFUNCTION(BlueprintPure)
    static int64 Multiply_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static double Multiply_DoubleDouble(double A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 Multiply_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector MirrorVectorByNormal(FVector InVect, FVector InNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MinOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMinValue, int32& MinValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MinOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMinValue, float& MinValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MinOfByteArray(const TArray<uint8>& ByteArray, int32& IndexOfMinValue, uint8& MinValue);
    
    UFUNCTION(BlueprintPure)
    static int64 MinInt64(int64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MinimumAreaRectangle(UObject* WorldContextObject, const TArray<FVector>& InVerts, const FVector& SampleSurfaceNormal, FVector& OutRectCenter, FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MinAreaRectangle(UObject* WorldContextObject, const TArray<FVector>& InPoints, const FVector& SampleSurfaceNormal, FVector& OutRectCenter, FRotator& OutRectRotation, float& OutRectLengthX, float& OutRectLengthY, bool bDebugDraw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Min(int32 A, int32 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MedianOfIntArray(TArray<int32> IntArray, float& MedianValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MaxOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMaxValue, int32& MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MaxOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMaxValue, float& MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MaxOfByteArray(const TArray<uint8>& ByteArray, int32& IndexOfMaxValue, uint8& MaxValue);
    
    UFUNCTION(BlueprintPure)
    static int64 MaxInt64(int64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Max(int32 A, int32 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Matrix_TransformVector4(const FMatrix& M, FVector4 V);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Matrix_TransformVector(const FMatrix& M, FVector V);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Matrix_TransformPosition(const FMatrix& M, FVector V);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Matrix_ToQuat(const FMatrix& M);
    
    UFUNCTION(BlueprintCallable)
    static void Matrix_SetOrigin(UPARAM(Ref) FMatrix& M, FVector NewOrigin);
    
    UFUNCTION(BlueprintCallable)
    static void Matrix_SetColumn(UPARAM(Ref) FMatrix& M, TEnumAsByte<EMatrixColumns::Type> Column, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static void Matrix_SetAxis(UPARAM(Ref) FMatrix& M, TEnumAsByte<EAxis::Type> Axis, FVector AxisVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Matrix_ScaleTranslation(const FMatrix& M, FVector Scale3D);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Matrix_RemoveTranslation(const FMatrix& M);
    
    UFUNCTION(BlueprintCallable)
    static void Matrix_RemoveScaling(UPARAM(Ref) FMatrix& M, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Matrix_Mirror(const FMatrix& M, TEnumAsByte<EAxis::Type> MirrorAxis, TEnumAsByte<EAxis::Type> FlipAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Matrix_InverseTransformVector(const FMatrix& M, FVector V);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Matrix_InverseTransformPosition(const FMatrix& M, FVector V);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Matrix_Identity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Matrix_GetUnitAxis(const FMatrix& M, TEnumAsByte<EAxis::Type> Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Matrix_GetUnitAxes(const FMatrix& M, FVector& X, FVector& Y, FVector& Z);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Matrix_GetTransposed(const FMatrix& M);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Matrix_GetTransposeAdjoint(const FMatrix& M);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Matrix_GetScaleVector(const FMatrix& M, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Matrix_GetScaledAxis(const FMatrix& M, TEnumAsByte<EAxis::Type> Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Matrix_GetScaledAxes(const FMatrix& M, FVector& X, FVector& Y, FVector& Z);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Matrix_GetRotDeterminant(const FMatrix& M);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator Matrix_GetRotator(const FMatrix& M);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Matrix_GetOrigin(const FMatrix& InMatrix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Matrix_GetMaximumAxisScale(const FMatrix& M);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Matrix_GetMatrixWithoutScale(const FMatrix& M, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Matrix_GetInverse(const FMatrix& M);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Matrix_GetFrustumTopPlane(const FMatrix& M, FPlane& OutPlane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Matrix_GetFrustumRightPlane(const FMatrix& M, FPlane& OutPlane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Matrix_GetFrustumNearPlane(const FMatrix& M, FPlane& OutPlane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Matrix_GetFrustumLeftPlane(const FMatrix& M, FPlane& OutPlane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Matrix_GetFrustumFarPlane(const FMatrix& M, FPlane& OutPlane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Matrix_GetFrustumBottomPlane(const FMatrix& M, FPlane& OutPlane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Matrix_GetDeterminant(const FMatrix& M);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Matrix_GetColumn(const FMatrix& M, TEnumAsByte<EMatrixColumns::Type> Column);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Matrix_ContainsNaN(const FMatrix& M);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Matrix_ConcatenateTranslation(const FMatrix& M, FVector Translation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Matrix_ApplyScale(const FMatrix& M, float Scale);
    
    UFUNCTION(BlueprintPure)
    static double MapRangeUnclamped(double Value, double InRangeA, double InRangeB, double OutRangeA, double OutRangeB);
    
    UFUNCTION(BlueprintPure)
    static double MapRangeClamped(double Value, double InRangeA, double InRangeB, double OutRangeA, double OutRangeB);
    
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantizeNormal MakeVector_NetQuantizeNormal(double X, double Y, double Z);
    
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantize100 MakeVector_NetQuantize100(double X, double Y, double Z);
    
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantize10 MakeVector_NetQuantize10(double X, double Y, double Z);
    
    UFUNCTION(BlueprintPure)
    static FVector_NetQuantize MakeVector_NetQuantize(double X, double Y, double Z);
    
    UFUNCTION(BlueprintPure)
    static FVector4 MakeVector4(double X, double Y, double Z, double W);
    
    UFUNCTION(BlueprintPure)
    static FVector2D MakeVector2D(double X, double Y);
    
    UFUNCTION(BlueprintPure)
    static FVector MakeVector(double X, double Y, double Z);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform MakeTransform(FVector Location, FRotator Rotation, FVector Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan MakeTimespan2(int32 Days, int32 Hours, int32 Minutes, int32 Seconds, int32 FractionNano);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan MakeTimespan(int32 Days, int32 Hours, int32 Minutes, int32 Seconds, int32 Milliseconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeRotFromZY(const FVector& Z, const FVector& Y);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeRotFromZX(const FVector& Z, const FVector& X);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeRotFromZ(const FVector& Z);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeRotFromYZ(const FVector& Y, const FVector& Z);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeRotFromYX(const FVector& Y, const FVector& X);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeRotFromY(const FVector& Y);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeRotFromXZ(const FVector& X, const FVector& Z);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeRotFromXY(const FVector& X, const FVector& Y);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeRotFromX(const FVector& X);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeRotator(float Roll, float Pitch, float Yaw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeRotationFromAxes(FVector Forward, FVector Right, FVector Up);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform MakeRelativeTransform(const FTransform& A, const FTransform& RelativeTo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRandomStream MakeRandomStream(int32 InitialSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat MakeQuat(float X, float Y, float Z, float W);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQualifiedFrameTime MakeQualifiedFrameTime(FFrameNumber Frame, FFrameRate FrameRate, float SubFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlane MakePlaneFromPointAndNormal(FVector Point, FVector NewNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameRate MakeFrameRate(int32 Numerator, int32 Denominator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime MakeDateTime(int32 Year, int32 Month, int32 Day, int32 Hour, int32 Minute, int32 Second, int32 Millisecond);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor MakeColor(float R, float G, float B, float A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBoxSphereBounds MakeBoxSphereBounds(FVector Origin, FVector BoxExtent, float SphereRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox2D MakeBox2D(FVector2D NewMin, FVector2D NewMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox MakeBox(FVector NewMin, FVector NewMax);
    
    UFUNCTION(BlueprintPure)
    static double Loge(double A);
    
    UFUNCTION(BlueprintPure)
    static double Log(double A, double Base);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LinePlaneIntersection_OriginNormal(const FVector& LineStart, const FVector& LineEnd, FVector PlaneOrigin, FVector PlaneNormal, float& T, FVector& Intersection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LinePlaneIntersection(const FVector& LineStart, const FVector& LineEnd, const FPlane& APlane, float& T, FVector& Intersection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LinearColorLerpUsingHSV(FLinearColor A, FLinearColor B, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LinearColorLerp(FLinearColor A, FLinearColor B, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LinearColor_Yellow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LinearColor_White();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LinearColor_Transparent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor LinearColor_ToRGBE(FLinearColor InLinearColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LinearColor_ToNewOpacity(FLinearColor InColor, float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_SetTemperature(UPARAM(Ref) FLinearColor& InOutColor, float InTemperature);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_SetRGBA(UPARAM(Ref) FLinearColor& InOutColor, float R, float G, float B, float A);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_SetRandomHue(UPARAM(Ref) FLinearColor& InOutColor);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_SetFromSRGB(UPARAM(Ref) FLinearColor& InOutColor, const FColor& InSRGB);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_SetFromPow22(UPARAM(Ref) FLinearColor& InOutColor, const FColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_SetFromHSV(UPARAM(Ref) FLinearColor& InOutColor, float H, float S, float V, float A);
    
    UFUNCTION(BlueprintCallable)
    static void LinearColor_Set(UPARAM(Ref) FLinearColor& InOutColor, FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LinearColor_Red();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor LinearColor_QuantizeRound(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor LinearColor_Quantize(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LinearColor_IsNearEqual(FLinearColor A, FLinearColor B, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LinearColor_Green();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LinearColor_Gray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LinearColor_GetMin(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LinearColor_GetMax(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LinearColor_GetLuminance(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LinearColor_Distance(FLinearColor C1, FLinearColor C2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LinearColor_Desaturated(FLinearColor InColor, float InDesaturation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LinearColor_Blue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LinearColor_Black();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector LessLess_VectorRotator(FVector A, FRotator B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessEqual_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessEqual_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_DoubleDouble(double A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessEqual_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_DoubleDouble(double A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Less_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static double Lerp(double A, double B, double Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsZero2D(const FVector2D& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointInBoxWithTransform_Box(FVector Point, const FTransform& BoxWorldTransform, FBox BoxExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointInBoxWithTransform(FVector Point, const FTransform& BoxWorldTransform, FVector BoxExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointInBox_Box(FVector Point, FBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointInBox(FVector Point, FVector BoxOrigin, FVector BoxExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNearlyZero2D(const FVector2D& A, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMorning(FDateTime A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLeapYear(int32 Year);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAfternoon(FDateTime A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform InvertTransform(const FTransform& T);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator InverseTransformRotation(const FTransform& T, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector InverseTransformLocation(const FTransform& T, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector InverseTransformDirection(const FTransform& T, FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint IntPoint_Zero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint IntPoint_Up();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint IntPoint_Right();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint IntPoint_One();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint IntPoint_Left();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint IntPoint_Down();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InRange_IntInt(int32 Value, int32 NewMin, int32 NewMax, bool InclusiveMin, bool InclusiveMax);
    
    UFUNCTION(BlueprintPure)
    static bool InRange_Int64Int64(int64 Value, int64 NewMin, int64 NewMax, bool InclusiveMin, bool InclusiveMax);
    
    UFUNCTION(BlueprintPure)
    static bool InRange_FloatFloat(double Value, double NewMin, double NewMax, bool InclusiveMin, bool InclusiveMax);
    
    UFUNCTION(BlueprintPure)
    static double Hypotenuse(double Width, double Height);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor HSVToRGBLinear(FLinearColor HSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void HSVToRGB_Vector(FLinearColor HSV, FLinearColor& RGB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor HSVToRGB(float H, float S, float V, float A);
    
    UFUNCTION(BlueprintPure)
    static double GridSnap_Float(double Location, double GridSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GreaterGreater_VectorRotator(FVector A, FRotator B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterEqual_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterEqual_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_DoubleDouble(double A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterEqual_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Greater_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Greater_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_DoubleDouble(double A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Greater_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Greater_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetYear(FDateTime A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetYawPitchFromVector(FVector InVec, float& Yaw, float& Pitch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVectorArrayAverage(const TArray<FVector>& Vectors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetUpVector(FRotator InRot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTotalSeconds(FTimespan A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTotalMinutes(FTimespan A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTotalMilliseconds(FTimespan A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTotalHours(FTimespan A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTotalDays(FTimespan A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan GetTimeOfDay(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static double GetTAU();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSlopeDegreeAngles(const FVector& MyRightYAxis, const FVector& FloorNormal, const FVector& UpVector, float& OutSlopePitchDegreeAngle, float& OutSlopeRollDegreeAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSeconds(FTimespan A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSecond(FDateTime A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetRotated2D(FVector2D A, float AngleDeg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRightVector(FRotator InRot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetReflectionVector(FVector Direction, FVector SurfaceNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPointDistanceToSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPointDistanceToLine(FVector Point, FVector LineOrigin, FVector LineDirection);
    
    UFUNCTION(BlueprintPure)
    static double GetPI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMonth(FDateTime A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMinutes(FTimespan A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMinute(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static double GetMinElement(FVector A);
    
    UFUNCTION(BlueprintPure)
    static double GetMin2D(FVector2D A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMilliseconds(FTimespan A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMillisecond(FDateTime A);
    
    UFUNCTION(BlueprintPure)
    static double GetMaxElement(FVector A);
    
    UFUNCTION(BlueprintPure)
    static double GetMax2D(FVector2D A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHours(FTimespan A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHour12(FDateTime A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetHour(FDateTime A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetForwardVector(FRotator InRot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan GetDuration(FTimespan A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetDirectionUnitVector(FVector From, FVector To);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDays(FTimespan A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDayOfYear(FDateTime A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDay(FDateTime A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetDate(FDateTime A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAzimuthAndElevation(FVector InDirection, const FTransform& ReferenceFrame, float& Azimuth, float& Elevation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAxes(FRotator A, FVector& X, FVector& Y, FVector& Z);
    
    UFUNCTION(BlueprintPure)
    static double GetAbsMax2D(FVector2D A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetAbs2D(FVector2D A);
    
    UFUNCTION(BlueprintPure)
    static double FWrap(double Value, double NewMin, double NewMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector FTruncVector(const FVector& InVector);
    
    UFUNCTION(BlueprintPure)
    static int64 FTrunc64(double A);
    
    UFUNCTION(BlueprintPure)
    static int32 FTrunc(double A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan FromSeconds(float Seconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan FromMinutes(float Minutes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan FromMilliseconds(float Milliseconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan FromHours(float Hours);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan FromDays(float Days);
    
    UFUNCTION(BlueprintPure)
    static double Fraction(double A);
    
    UFUNCTION(BlueprintPure)
    static int64 FMod64(double Dividend, double Divisor, double& Remainder);
    
    UFUNCTION(BlueprintPure)
    static int32 FMod(double Dividend, double Divisor, double& Remainder);
    
    UFUNCTION(BlueprintPure)
    static double FMin(double A, double B);
    
    UFUNCTION(BlueprintPure)
    static double FMax(double A, double B);
    
    UFUNCTION(BlueprintCallable)
    static float FloatSpringInterp(float Current, float Target, UPARAM(Ref) FFloatSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass, float TargetVelocityAmount, bool bClamp, float MinValue, float MaxValue, bool bInitializeFromTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FixedTurn(float InCurrent, float InDesired, float InDeltaRate);
    
    UFUNCTION(BlueprintPure)
    static double FInterpTo_Constant(double Current, double Target, double DeltaTime, double InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static double FInterpTo(double Current, double Target, double DeltaTime, double InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static double FInterpEaseInOut(double A, double B, double Alpha, double Exponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator FindRelativeLookAtRotation(const FTransform& StartTransform, const FVector& TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindNearestPointsOnLineSegments(FVector Segment1Start, FVector Segment1End, FVector Segment2Start, FVector Segment2End, FVector& Segment1Point, FVector& Segment2Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator FindLookAtRotation(const FVector& Start, const FVector& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector FindClosestPointOnSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector FindClosestPointOnLine(FVector Point, FVector LineOrigin, FVector LineDirection);
    
    UFUNCTION(BlueprintPure)
    static int64 FFloor64(double A);
    
    UFUNCTION(BlueprintPure)
    static int32 FFloor(double A);
    
    UFUNCTION(BlueprintPure)
    static double FClamp(double Value, double NewMin, double NewMax);
    
    UFUNCTION(BlueprintPure)
    static int64 FCeil64(double A);
    
    UFUNCTION(BlueprintPure)
    static int32 FCeil(double A);
    
    UFUNCTION(BlueprintPure)
    static double Exp(double A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualExactly_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualExactly_Vector4Vector4(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualExactly_Vector2DVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_VectorVector(FVector A, FVector B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_Vector4Vector4(const FVector4& A, const FVector4& B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_TransformTransform(const FTransform& A, const FTransform& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_QuatQuat(const FQuat& A, const FQuat& B, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_ObjectObject(UObject* A, UObject* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_NameName(FName A, FName B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_MatrixMatrix(const FMatrix& A, const FMatrix& B, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_DoubleDouble(double A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_ClassClass(UClass* A, UClass* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_BoolBool(bool A, bool B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_IntPointIntPoint(FIntPoint A, FIntPoint B);
    
    UFUNCTION(BlueprintPure)
    static double Ease(double A, double B, double Alpha, TEnumAsByte<EEasingFunc::Type> EasingFunc, double BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector DynamicWeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator DynamicWeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float DynamicWeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
    
    UFUNCTION(BlueprintPure)
    static double DotProduct2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static double Dot_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Divide_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Divide_VectorInt(FVector A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FVector Divide_VectorFloat(FVector A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Divide_Vector4Vector4(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Divide_Vector2DVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Divide_Vector2DFloat(FVector2D A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan Divide_TimespanFloat(FTimespan A, float Scalar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor Divide_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint Divide_IntPointIntPoint(FIntPoint A, FIntPoint B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint Divide_IntPointInt(FIntPoint A, int32 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Divide_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 Divide_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static double Divide_DoubleDouble(double A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 Divide_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static double DistanceSquared2D(FVector2D v1, FVector2D v2);
    
    UFUNCTION(BlueprintPure)
    static double Distance2D(FVector2D v1, FVector2D v2);
    
    UFUNCTION(BlueprintPure)
    static double DegTan(double A);
    
    UFUNCTION(BlueprintPure)
    static double DegSin(double A);
    
    UFUNCTION(BlueprintPure)
    static double DegreesToRadians(double A);
    
    UFUNCTION(BlueprintPure)
    static double DegCos(double A);
    
    UFUNCTION(BlueprintPure)
    static double DegAtan2(double Y, double X);
    
    UFUNCTION(BlueprintPure)
    static double DegAtan(double A);
    
    UFUNCTION(BlueprintPure)
    static double DegAsin(double A);
    
    UFUNCTION(BlueprintPure)
    static double DegAcos(double A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 DaysInYear(int32 Year);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 DaysInMonth(int32 Year, int32 Month);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime DateTimeMinValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime DateTimeMaxValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DateTimeFromString(const FString& DateTimeString, FDateTime& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DateTimeFromIsoString(const FString& IsoString, FDateTime& Result);
    
    UFUNCTION(BlueprintPure)
    static double CrossProduct2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Cross_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);
    
    UFUNCTION(BlueprintPure)
    static double Cos(double A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ConvertTransformToRelative(const FTransform& Transform, const FTransform& ParentTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Conv_VectorToVector2D(FVector InVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform Conv_VectorToTransform(FVector InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator Conv_VectorToRotator(FVector InVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Conv_VectorToQuaternion(FVector InVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor Conv_VectorToLinearColor(FVector InVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_Vector4ToVector(const FVector4& InVector4);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator Conv_Vector4ToRotator(const FVector4& InVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Conv_Vector4ToQuaternion(const FVector4& InVec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_Vector2DToVector(FVector2D InVector2D, float Z);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint Conv_Vector2DToIntPoint(FVector2D InVector2D);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Conv_TransformToMatrix(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_RotatorToVector(FRotator InRot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform Conv_RotatorToTransform(const FRotator& InRotator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Conv_RotatorToQuaternion(FRotator InRot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform Conv_MatrixToTransform(const FMatrix& InMatrix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator Conv_MatrixToRotator(const FMatrix& InMatrix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_LinearColorToVector(FLinearColor InLinearColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor Conv_LinearColorToColor(FLinearColor InLinearColor, bool InUseSRGB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_IntVectorToVector(const FIntVector& InIntVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_IntToVector(int32 inInt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector Conv_IntToIntVector(int32 inInt);
    
    UFUNCTION(BlueprintPure)
    static int64 Conv_IntToInt64(int32 inInt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Conv_IntToFloat(int32 inInt);
    
    UFUNCTION(BlueprintPure)
    static double Conv_IntToDouble(int32 inInt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 Conv_IntToByte(int32 inInt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Conv_IntToBool(int32 inInt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Conv_IntPointToVector2D(FIntPoint InIntPoint);
    
    UFUNCTION(BlueprintPure)
    static int32 Conv_Int64ToInt(int64 inInt);
    
    UFUNCTION(BlueprintPure)
    static double Conv_Int64ToDouble(int64 inInt);
    
    UFUNCTION(BlueprintPure)
    static uint8 Conv_Int64ToByte(int64 inInt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_FloatToVector(float InFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor Conv_FloatToLinearColor(float InFloat);
    
    UFUNCTION(BlueprintPure)
    static double Conv_FloatToDouble(float InFloat);
    
    UFUNCTION(BlueprintPure)
    static FVector Conv_DoubleToVector(double InDouble);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor Conv_DoubleToLinearColor(double InDouble);
    
    UFUNCTION(BlueprintPure)
    static int64 Conv_DoubleToInt64(double InDouble);
    
    UFUNCTION(BlueprintPure)
    static float Conv_DoubleToFloat(double InDouble);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor Conv_ColorToLinearColor(FColor InColor);
    
    UFUNCTION(BlueprintPure)
    static int64 Conv_ByteToInt64(uint8 InByte);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Conv_ByteToInt(uint8 InByte);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Conv_ByteToFloat(uint8 InByte);
    
    UFUNCTION(BlueprintPure)
    static double Conv_ByteToDouble(uint8 InByte);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Conv_BoolToInt(bool InBool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Conv_BoolToFloat(bool InBool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 Conv_BoolToByte(bool InBool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ComposeTransforms(const FTransform& A, const FTransform& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator ComposeRotators(FRotator A, FRotator B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ClassIsChildOf(UClass* TestClass, UClass* ParentClass);
    
    UFUNCTION(BlueprintPure)
    static FVector ClampVectorSize(FVector A, double NewMin, double NewMax);
    
    UFUNCTION(BlueprintPure)
    static int64 ClampInt64(int64 Value, int64 NewMin, int64 NewMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ClampAxis(float Angle);
    
    UFUNCTION(BlueprintPure)
    static FVector2D ClampAxes2D(FVector2D A, double MinAxisVal, double MaxAxisVal);
    
    UFUNCTION(BlueprintPure)
    static double ClampAngle(double AngleDegrees, double MinAngleDegrees, double MaxAngleDegrees);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Clamp(int32 Value, int32 NewMin, int32 NewMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor CInterpTo(FLinearColor Current, FLinearColor Target, float DeltaTime, float InterpSpeed);
    
    UFUNCTION(BlueprintPure)
    static void BreakVector_NetQuantizeNormal(FVector_NetQuantizeNormal InVec, double& X, double& Y, double& Z);
    
    UFUNCTION(BlueprintPure)
    static void BreakVector_NetQuantize100(FVector_NetQuantize100 InVec, double& X, double& Y, double& Z);
    
    UFUNCTION(BlueprintPure)
    static void BreakVector_NetQuantize10(FVector_NetQuantize10 InVec, double& X, double& Y, double& Z);
    
    UFUNCTION(BlueprintPure)
    static void BreakVector_NetQuantize(FVector_NetQuantize InVec, double& X, double& Y, double& Z);
    
    UFUNCTION(BlueprintPure)
    static void BreakVector4(const FVector4& InVec, double& X, double& Y, double& Z, double& W);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakVector3f(FVector3f InVec, float& X, float& Y, float& Z);
    
    UFUNCTION(BlueprintPure)
    static void BreakVector2D(FVector2D InVec, double& X, double& Y);
    
    UFUNCTION(BlueprintPure)
    static void BreakVector(FVector InVec, double& X, double& Y, double& Z);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakTransform(const FTransform& InTransform, FVector& Location, FRotator& Rotation, FVector& Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakTimespan2(FTimespan InTimespan, int32& Days, int32& Hours, int32& Minutes, int32& Seconds, int32& FractionNano);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakTimespan(FTimespan InTimespan, int32& Days, int32& Hours, int32& Minutes, int32& Seconds, int32& Milliseconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakRotIntoAxes(const FRotator& InRot, FVector& X, FVector& Y, FVector& Z);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakRotator(FRotator InRot, float& Roll, float& Pitch, float& Yaw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakRandomStream(const FRandomStream& InRandomStream, int32& InitialSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakQuat(const FQuat& InQuat, float& X, float& Y, float& Z, float& W);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakQualifiedFrameTime(const FQualifiedFrameTime& InFrameTime, FFrameNumber& Frame, FFrameRate& FrameRate, float& SubFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakFrameRate(const FFrameRate& InFrameRate, int32& Numerator, int32& Denominator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakDateTime(FDateTime InDateTime, int32& Year, int32& Month, int32& Day, int32& Hour, int32& Minute, int32& Second, int32& Millisecond);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakColor(FLinearColor InColor, float& R, float& G, float& B, float& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakBoxSphereBounds(const FBoxSphereBounds& InBoxSphereBounds, FVector& Origin, FVector& BoxExtent, float& SphereRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BooleanXOR(bool A, bool B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BooleanOR(bool A, bool B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BooleanNOR(bool A, bool B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BooleanNAND(bool A, bool B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BooleanAND(bool A, bool B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 BMin(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 BMax(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void AverageOfIntArray(const TArray<int32>& IntArray, float& AverageValue);
    
    UFUNCTION(BlueprintPure)
    static double Atan2(double Y, double X);
    
    UFUNCTION(BlueprintPure)
    static double Atan(double A);
    
    UFUNCTION(BlueprintPure)
    static double Asin(double A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 And_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 And_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Add_VectorVector(FVector A, FVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Add_VectorInt(FVector A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FVector Add_VectorFloat(FVector A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 Add_Vector4Vector4(const FVector4& A, const FVector4& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Add_Vector2DVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Add_Vector2DFloat(FVector2D A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan Add_TimespanTimespan(FTimespan A, FTimespan B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Add_QuatQuat(const FQuat& A, const FQuat& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMatrix Add_MatrixMatrix(const FMatrix& A, const FMatrix& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor Add_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint Add_IntPointIntPoint(FIntPoint A, FIntPoint B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint Add_IntPointInt(FIntPoint A, int32 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Add_IntInt(int32 A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static int64 Add_Int64Int64(int64 A, int64 B);
    
    UFUNCTION(BlueprintPure)
    static double Add_DoubleDouble(double A, double B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime Add_DateTimeTimespan(FDateTime A, FTimespan B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime Add_DateTimeDateTime(FDateTime A, FDateTime B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 Add_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintPure)
    static double Acos(double A);
    
    UFUNCTION(BlueprintPure)
    static int64 Abs_Int64(int64 A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Abs_Int(int32 A);
    
    UFUNCTION(BlueprintPure)
    static double Abs(double A);
    
};

