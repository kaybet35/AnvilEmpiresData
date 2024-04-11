---@meta

---@class AConstraintsActor : AActor
---@field ConstraintsManager UConstraintsManager
AConstraintsActor = {}



---@class FConstraintAndActiveChannel
---@field Constraint TSoftObjectPtr<UTickableConstraint>
---@field ActiveChannel FMovieSceneConstraintChannel
---@field ConstraintCopyToSpawn UTickableConstraint
FConstraintAndActiveChannel = {}



---@class FConstraintTickFunction : FTickFunction
FConstraintTickFunction = {}


---@class FMovieSceneConstraintChannel : FMovieSceneBoolChannel
FMovieSceneConstraintChannel = {}


---@class UConstraintsManager : UObject
---@field OnConstraintAdded_BP FConstraintsManagerOnConstraintAdded_BP
---@field OnConstraintRemoved_BP FConstraintsManagerOnConstraintRemoved_BP
---@field Constraints TArray<UTickableConstraint>
UConstraintsManager = {}



---@class UConstraintsScriptingLibrary : UBlueprintFunctionLibrary
UConstraintsScriptingLibrary = {}

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
UTickableConstraint = {}



---@class UTickableLookAtConstraint : UTickableTransformConstraint
---@field Axis FVector
UTickableLookAtConstraint = {}



---@class UTickableParentConstraint : UTickableTransformConstraint
---@field OffsetTransform FTransform
---@field bScaling boolean
UTickableParentConstraint = {}



---@class UTickableRotationConstraint : UTickableTransformConstraint
---@field OffsetRotation FQuat
UTickableRotationConstraint = {}



---@class UTickableScaleConstraint : UTickableTransformConstraint
---@field OffsetScale FVector
UTickableScaleConstraint = {}



---@class UTickableTransformConstraint : UTickableConstraint
---@field ParentTRSHandle UTransformableHandle
---@field ChildTRSHandle UTransformableHandle
---@field bMaintainOffset boolean
---@field Weight float
---@field bDynamicOffset boolean
---@field Type ETransformConstraintType
UTickableTransformConstraint = {}



---@class UTickableTranslationConstraint : UTickableTransformConstraint
---@field OffsetTranslation FVector
UTickableTranslationConstraint = {}



---@class UTransformableComponentHandle : UTransformableHandle
---@field Component TWeakObjectPtr<USceneComponent>
---@field SocketName FName
UTransformableComponentHandle = {}



---@class UTransformableHandle : UObject
---@field ConstraintBindingID FMovieSceneObjectBindingID
UTransformableHandle = {}



