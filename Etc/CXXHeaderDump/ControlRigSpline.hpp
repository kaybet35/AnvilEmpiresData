#ifndef UE4SS_SDK_ControlRigSpline_HPP
#define UE4SS_SDK_ControlRigSpline_HPP

#include "ControlRigSpline_enums.hpp"

struct FControlRigSpline
{
}; // Size: 0x18

struct FControlRigSplineImpl
{
}; // Size: 0x58

struct FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    FVector Position;                                                                 // 0x0020 (size: 0x18)
    float U;                                                                          // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FRigUnit_ControlRigSplineBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase
{
    TArray<FVector> Points;                                                           // 0x0008 (size: 0x10)
    ESplineType SplineMode;                                                           // 0x0018 (size: 0x1)
    int32 SamplesPerSegment;                                                          // 0x001C (size: 0x4)
    float Compression;                                                                // 0x0020 (size: 0x4)
    float Stretch;                                                                    // 0x0024 (size: 0x4)
    FControlRigSpline Spline;                                                         // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FRigUnit_DrawControlRigSpline : public FRigUnitMutable
{
    FControlRigSpline Spline;                                                         // 0x0040 (size: 0x18)
    FLinearColor Color;                                                               // 0x0058 (size: 0x10)
    float Thickness;                                                                  // 0x0068 (size: 0x4)
    int32 Detail;                                                                     // 0x006C (size: 0x4)

}; // Size: 0x70

struct FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x0040 (size: 0x10)
    FControlRigSpline Spline;                                                         // 0x0050 (size: 0x18)
    EControlRigCurveAlignment Alignment;                                              // 0x0068 (size: 0x1)
    float Minimum;                                                                    // 0x006C (size: 0x4)
    float Maximum;                                                                    // 0x0070 (size: 0x4)
    int32 SamplingPrecision;                                                          // 0x0074 (size: 0x4)
    FVector PrimaryAxis;                                                              // 0x0078 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0090 (size: 0x18)
    FVector PoleVectorPosition;                                                       // 0x00A8 (size: 0x18)
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;                              // 0x00C0 (size: 0x10)
    EControlRigAnimEasingType RotationEaseType;                                       // 0x00D0 (size: 0x1)
    float Weight;                                                                     // 0x00D4 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00D8 (size: 0x1)
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                             // 0x00E0 (size: 0x90)
    FRigUnit_FitChainToCurve_WorkData WorkData;                                       // 0x0170 (size: 0x98)

}; // Size: 0x210

struct FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;                                                     // 0x0040 (size: 0x10)
    FControlRigSpline Spline;                                                         // 0x0050 (size: 0x18)
    EControlRigCurveAlignment Alignment;                                              // 0x0068 (size: 0x1)
    float Minimum;                                                                    // 0x006C (size: 0x4)
    float Maximum;                                                                    // 0x0070 (size: 0x4)
    int32 SamplingPrecision;                                                          // 0x0074 (size: 0x4)
    FVector PrimaryAxis;                                                              // 0x0078 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0090 (size: 0x18)
    FVector PoleVectorPosition;                                                       // 0x00A8 (size: 0x18)
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;                              // 0x00C0 (size: 0x10)
    EControlRigAnimEasingType RotationEaseType;                                       // 0x00D0 (size: 0x1)
    float Weight;                                                                     // 0x00D4 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00D8 (size: 0x1)
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                             // 0x00E0 (size: 0x90)
    FRigUnit_FitChainToCurve_WorkData WorkData;                                       // 0x0170 (size: 0x98)

}; // Size: 0x210

struct FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x0040 (size: 0x10)
    FControlRigSpline Spline;                                                         // 0x0050 (size: 0x18)

}; // Size: 0x68

struct FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;                                                     // 0x0040 (size: 0x10)
    FControlRigSpline Spline;                                                         // 0x0050 (size: 0x18)

}; // Size: 0x68

struct FRigUnit_GetLengthControlRigSpline : public FRigUnit
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    float Length;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    float Percentage;                                                                 // 0x0020 (size: 0x4)
    float U;                                                                          // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    float U;                                                                          // 0x0020 (size: 0x4)
    FVector Position;                                                                 // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FRigUnit_SetSplinePoints : public FRigUnitMutable
{
    TArray<FVector> Points;                                                           // 0x0040 (size: 0x10)
    FControlRigSpline Spline;                                                         // 0x0050 (size: 0x18)

}; // Size: 0x68

struct FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    float U;                                                                          // 0x0020 (size: 0x4)
    FVector Tangent;                                                                  // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    FVector UpVector;                                                                 // 0x0020 (size: 0x18)
    float Roll;                                                                       // 0x0038 (size: 0x4)
    float U;                                                                          // 0x003C (size: 0x4)
    FTransform Transform;                                                             // 0x0040 (size: 0x60)

}; // Size: 0xA0

#endif
