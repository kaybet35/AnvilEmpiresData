---@meta

---@class AConstraintsActor : AActor
---@field ConstraintsManager UConstraintsManager
local AConstraintsActor = {}



---@class FConstraintAndActiveChannel
---@field Constraint TSoftObjectPtr<UTickableConstraint>
---@field ActiveChannel FMovieSceneConstraintChannel
---@field ConstraintCopyToSpawn UTickableConstraint
local FConstraintAndActiveChannel = {}



---@class FConstraintTickFunction : FTickFunction
local FConstraintTickFunction = {}


---@class FMovieSceneConstraintChannel : FMovieSceneBoolChannel
local FMovieSceneConstraintChannel = {}


---@class UConstraintsManager : UObject
---@field OnConstraintAdded_BP FConstraintsManagerOnConstraintAdded_BP
---@field OnConstraintRemoved_BP FConstraintsManagerOnConstraintRemoved_BP
---@field Constraints TArray<UTickableConstraint>
local UConstraintsManager = {}



---@class UConstraintsScriptingLibrary : UBlueprintFunctionLibrary
local UConstraintsScriptingLibrary = {}

---@param InWorld UWorld
---@param InIndex int32
---@return boolean
function UConstraintsScriptingLibrary:RemoveConstraint(InWorld, InIndex) end
---@param InWorld UWorld
---@return UConstraintsManager
function UConstraintsScriptingLibrary:GetManager(InWorld) end
---@param InWorld UWorld
---@param InSceneComponent USceneComponent
---@param InSocketName FName
---@return UTransformableComponentHandle
function UConstraintsScriptingLibrary:CreateTransformableComponentHandle(InWorld, InSceneComponent, InSocketName) end
---@param InWorld UWorld
---@param InType ETransformConstraintType
---@return UTickableTransformConstraint
function UConstraintsScriptingLibrary:CreateFromType(InWorld, InType) end
---@param InWorld UWorld
---@param InParentHandle UTransformableHandle
---@param InChildHandle UTransformableHandle
---@param InConstraint UTickableTransformConstraint
---@param bMaintainOffset boolean
---@return boolean
function UConstraintsScriptingLibrary:AddConstraint(InWorld, InParentHandle, InChildHandle, InConstraint, bMaintainOffset) end


---@class UTickableConstraint : UObject
---@field ConstraintTick FConstraintTickFunction
---@field Active boolean
local UTickableConstraint = {}



---@class UTickableLookAtConstraint : UTickableTransformConstraint
---@field Axis FVector
local UTickableLookAtConstraint = {}



---@class UTickableParentConstraint : UTickableTransformConstraint
---@field OffsetTransform FTransform
---@field bScaling boolean
local UTickableParentConstraint = {}



---@class UTickableRotationConstraint : UTickableTransformConstraint
---@field OffsetRotation FQuat
local UTickableRotationConstraint = {}



---@class UTickableScaleConstraint : UTickableTransformConstraint
---@field OffsetScale FVector
local UTickableScaleConstraint = {}



---@class UTickableTransformConstraint : UTickableConstraint
---@field ParentTRSHandle UTransformableHandle
---@field ChildTRSHandle UTransformableHandle
---@field bMaintainOffset boolean
---@field Weight float
---@field bDynamicOffset boolean
---@field Type ETransformConstraintType
local UTickableTransformConstraint = {}



---@class UTickableTranslationConstraint : UTickableTransformConstraint
---@field OffsetTranslation FVector
local UTickableTranslationConstraint = {}



---@class UTransformableComponentHandle : UTransformableHandle
---@field Component TWeakObjectPtr<USceneComponent>
---@field SocketName FName
local UTransformableComponentHandle = {}



---@class UTransformableHandle : UObject
---@field ConstraintBindingID FMovieSceneObjectBindingID
local UTransformableHandle = {}



