---@meta

---@class FControlRigSpline
FControlRigSpline = {}


---@class FControlRigSplineImpl
FControlRigSplineImpl = {}


---@class FRigUnit_ClosestParameterFromControlRigSpline : FRigUnit_ControlRigSplineBase
---@field Spline FControlRigSpline
---@field Position FVector
---@field U float
FRigUnit_ClosestParameterFromControlRigSpline = {}



---@class FRigUnit_ControlRigSplineBase : FRigUnit
FRigUnit_ControlRigSplineBase = {}


---@class FRigUnit_ControlRigSplineFromPoints : FRigUnit_ControlRigSplineBase
---@field Points TArray<FVector>
---@field SplineMode ESplineType
---@field SamplesPerSegment int32
---@field Compression float
---@field Stretch float
---@field Spline FControlRigSpline
FRigUnit_ControlRigSplineFromPoints = {}



---@class FRigUnit_DrawControlRigSpline : FRigUnitMutable
---@field Spline FControlRigSpline
---@field Color FLinearColor
---@field Thickness float
---@field Detail int32
FRigUnit_DrawControlRigSpline = {}



---@class FRigUnit_FitChainToSplineCurve : FRigUnit_HighlevelBaseMutable
---@field Items FRigElementKeyCollection
---@field Spline FControlRigSpline
---@field Alignment EControlRigCurveAlignment
---@field Minimum float
---@field Maximum float
---@field SamplingPrecision int32
---@field PrimaryAxis FVector
---@field SecondaryAxis FVector
---@field PoleVectorPosition FVector
---@field Rotations TArray<FRigUnit_FitChainToCurve_Rotation>
---@field RotationEaseType EControlRigAnimEasingType
---@field Weight float
---@field bPropagateToChildren boolean
---@field DebugSettings FRigUnit_FitChainToCurve_DebugSettings
---@field WorkData FRigUnit_FitChainToCurve_WorkData
FRigUnit_FitChainToSplineCurve = {}



---@class FRigUnit_FitChainToSplineCurveItemArray : FRigUnit_HighlevelBaseMutable
---@field Items TArray<FRigElementKey>
---@field Spline FControlRigSpline
---@field Alignment EControlRigCurveAlignment
---@field Minimum float
---@field Maximum float
---@field SamplingPrecision int32
---@field PrimaryAxis FVector
---@field SecondaryAxis FVector
---@field PoleVectorPosition FVector
---@field Rotations TArray<FRigUnit_FitChainToCurve_Rotation>
---@field RotationEaseType EControlRigAnimEasingType
---@field Weight float
---@field bPropagateToChildren boolean
---@field DebugSettings FRigUnit_FitChainToCurve_DebugSettings
---@field WorkData FRigUnit_FitChainToCurve_WorkData
FRigUnit_FitChainToSplineCurveItemArray = {}



---@class FRigUnit_FitSplineCurveToChain : FRigUnit_HighlevelBaseMutable
---@field Items FRigElementKeyCollection
---@field Spline FControlRigSpline
FRigUnit_FitSplineCurveToChain = {}



---@class FRigUnit_FitSplineCurveToChainItemArray : FRigUnit_HighlevelBaseMutable
---@field Items TArray<FRigElementKey>
---@field Spline FControlRigSpline
FRigUnit_FitSplineCurveToChainItemArray = {}



---@class FRigUnit_GetLengthControlRigSpline : FRigUnit
---@field Spline FControlRigSpline
---@field Length float
FRigUnit_GetLengthControlRigSpline = {}



---@class FRigUnit_ParameterAtPercentage : FRigUnit_ControlRigSplineBase
---@field Spline FControlRigSpline
---@field Percentage float
---@field U float
FRigUnit_ParameterAtPercentage = {}



---@class FRigUnit_PositionFromControlRigSpline : FRigUnit_ControlRigSplineBase
---@field Spline FControlRigSpline
---@field U float
---@field Position FVector
FRigUnit_PositionFromControlRigSpline = {}



---@class FRigUnit_SetSplinePoints : FRigUnitMutable
---@field Points TArray<FVector>
---@field Spline FControlRigSpline
FRigUnit_SetSplinePoints = {}



---@class FRigUnit_TangentFromControlRigSpline : FRigUnit_ControlRigSplineBase
---@field Spline FControlRigSpline
---@field U float
---@field Tangent FVector
FRigUnit_TangentFromControlRigSpline = {}



---@class FRigUnit_TransformFromControlRigSpline : FRigUnit_ControlRigSplineBase
---@field Spline FControlRigSpline
---@field UpVector FVector
---@field Roll float
---@field U float
---@field Transform FTransform
FRigUnit_TransformFromControlRigSpline = {}



