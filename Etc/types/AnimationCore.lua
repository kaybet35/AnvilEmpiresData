---@meta

---@class FAimConstraintDescription : FConstraintDescriptionEx
---@field LookAt_Axis FAxis
---@field LookUp_Axis FAxis
---@field bUseLookUp boolean
---@field LookUpTarget FVector
local FAimConstraintDescription = {}



---@class FAxis
---@field Axis FVector
---@field bInLocalSpace boolean
local FAxis = {}



---@class FCCDIKChainLink
local FCCDIKChainLink = {}


---@class FConstraintData
---@field Constraint FConstraintDescriptor
---@field Weight float
---@field bMaintainOffset boolean
---@field Offset FTransform
---@field CurrentTransform FTransform
local FConstraintData = {}



---@class FConstraintDescription
---@field bTranslation boolean
---@field bRotation boolean
---@field bScale boolean
---@field bParent boolean
---@field TranslationAxes FFilterOptionPerAxis
---@field RotationAxes FFilterOptionPerAxis
---@field ScaleAxes FFilterOptionPerAxis
local FConstraintDescription = {}



---@class FConstraintDescriptionEx
---@field AxesFilterOption FFilterOptionPerAxis
local FConstraintDescriptionEx = {}



---@class FConstraintDescriptor
---@field Type EConstraintType
local FConstraintDescriptor = {}



---@class FConstraintOffset
---@field Translation FVector
---@field Rotation FQuat
---@field Scale FVector
---@field Parent FTransform
local FConstraintOffset = {}



---@class FEulerTransform
---@field Location FVector
---@field Rotation FRotator
---@field Scale FVector
local FEulerTransform = {}



---@class FFABRIKChainLink
local FFABRIKChainLink = {}


---@class FFilterOptionPerAxis
---@field bX boolean
---@field bY boolean
---@field bZ boolean
local FFilterOptionPerAxis = {}



---@class FNodeChain
---@field Nodes TArray<FName>
local FNodeChain = {}



---@class FNodeHierarchyData
---@field Nodes TArray<FNodeObject>
---@field Transforms TArray<FTransform>
---@field NodeNameToIndexMapping TMap<FName, int32>
local FNodeHierarchyData = {}



---@class FNodeHierarchyWithUserData
---@field Hierarchy FNodeHierarchyData
local FNodeHierarchyWithUserData = {}



---@class FNodeObject
---@field Name FName
---@field ParentName FName
local FNodeObject = {}



---@class FTransformConstraint
---@field Operator FConstraintDescription
---@field SourceNode FName
---@field TargetNode FName
---@field Weight float
---@field bMaintainOffset boolean
local FTransformConstraint = {}



---@class FTransformConstraintDescription : FConstraintDescriptionEx
---@field TransformType ETransformConstraintType
local FTransformConstraintDescription = {}



---@class FTransformFilter
---@field TranslationFilter FFilterOptionPerAxis
---@field RotationFilter FFilterOptionPerAxis
---@field ScaleFilter FFilterOptionPerAxis
local FTransformFilter = {}



---@class FTransformNoScale
---@field Location FVector
---@field Rotation FQuat
local FTransformNoScale = {}



---@class UAnimationDataSourceRegistry : UObject
---@field DataSources TMap<FName, TWeakObjectPtr<UObject>>
local UAnimationDataSourceRegistry = {}



