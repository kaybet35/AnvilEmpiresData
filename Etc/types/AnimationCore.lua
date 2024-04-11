---@meta

---@class FAimConstraintDescription : FConstraintDescriptionEx
---@field LookAt_Axis FAxis
---@field LookUp_Axis FAxis
---@field bUseLookUp boolean
---@field LookUpTarget FVector
FAimConstraintDescription = {}



---@class FAxis
---@field Axis FVector
---@field bInLocalSpace boolean
FAxis = {}



---@class FCCDIKChainLink
FCCDIKChainLink = {}


---@class FConstraintData
---@field Constraint FConstraintDescriptor
---@field Weight float
---@field bMaintainOffset boolean
---@field Offset FTransform
---@field CurrentTransform FTransform
FConstraintData = {}



---@class FConstraintDescription
---@field bTranslation boolean
---@field bRotation boolean
---@field bScale boolean
---@field bParent boolean
---@field TranslationAxes FFilterOptionPerAxis
---@field RotationAxes FFilterOptionPerAxis
---@field ScaleAxes FFilterOptionPerAxis
FConstraintDescription = {}



---@class FConstraintDescriptionEx
---@field AxesFilterOption FFilterOptionPerAxis
FConstraintDescriptionEx = {}



---@class FConstraintDescriptor
---@field Type EConstraintType
FConstraintDescriptor = {}



---@class FConstraintOffset
---@field Translation FVector
---@field Rotation FQuat
---@field Scale FVector
---@field Parent FTransform
FConstraintOffset = {}



---@class FEulerTransform
---@field Location FVector
---@field Rotation FRotator
---@field Scale FVector
FEulerTransform = {}



---@class FFABRIKChainLink
FFABRIKChainLink = {}


---@class FFilterOptionPerAxis
---@field bX boolean
---@field bY boolean
---@field bZ boolean
FFilterOptionPerAxis = {}



---@class FNodeChain
---@field Nodes TArray<FName>
FNodeChain = {}



---@class FNodeHierarchyData
---@field Nodes TArray<FNodeObject>
---@field Transforms TArray<FTransform>
---@field NodeNameToIndexMapping TMap<FName, int32>
FNodeHierarchyData = {}



---@class FNodeHierarchyWithUserData
---@field Hierarchy FNodeHierarchyData
FNodeHierarchyWithUserData = {}



---@class FNodeObject
---@field Name FName
---@field ParentName FName
FNodeObject = {}



---@class FTransformConstraint
---@field Operator FConstraintDescription
---@field SourceNode FName
---@field TargetNode FName
---@field Weight float
---@field bMaintainOffset boolean
FTransformConstraint = {}



---@class FTransformConstraintDescription : FConstraintDescriptionEx
---@field TransformType ETransformConstraintType
FTransformConstraintDescription = {}



---@class FTransformFilter
---@field TranslationFilter FFilterOptionPerAxis
---@field RotationFilter FFilterOptionPerAxis
---@field ScaleFilter FFilterOptionPerAxis
FTransformFilter = {}



---@class FTransformNoScale
---@field Location FVector
---@field Rotation FQuat
FTransformNoScale = {}



---@class UAnimationDataSourceRegistry : UObject
---@field DataSources TMap<FName, TWeakObjectPtr<UObject>>
UAnimationDataSourceRegistry = {}



