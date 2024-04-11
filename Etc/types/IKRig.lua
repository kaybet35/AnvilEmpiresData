---@meta

---@class FAnimNode_IKRig : FAnimNode_CustomProperty
---@field Source FPoseLink
---@field RigDefinitionAsset UIKRigDefinition
---@field Goals TArray<FIKRigGoal>
---@field bStartFromRefPose boolean
---@field AlphaInputType EAnimAlphaInputType
---@field bAlphaBoolEnabled boolean
---@field Alpha float
---@field AlphaScaleBias FInputScaleBias
---@field AlphaBoolBlend FInputAlphaBoolBlend
---@field AlphaCurveName FName
---@field AlphaScaleBiasClamp FInputScaleBiasClamp
---@field IKRigProcessor UIKRigProcessor
---@field ActualAlpha float
FAnimNode_IKRig = {}



---@class FAnimNode_RetargetPoseFromMesh : FAnimNode_Base
---@field SourceMeshComponent TWeakObjectPtr<USkeletalMeshComponent>
---@field bUseAttachedParent boolean
---@field IKRetargeterAsset UIKRetargeter
---@field CustomRetargetProfile FRetargetProfile
---@field bSuppressWarnings boolean
---@field bCopyCurves boolean
---@field Processor UIKRetargetProcessor
FAnimNode_RetargetPoseFromMesh = {}



---@class FBoneChain
---@field ChainName FName
---@field StartBone FBoneReference
---@field EndBone FBoneReference
---@field IKGoalName FName
FBoneChain = {}



---@class FGoalBone
FGoalBone = {}


---@class FIKRetargetPose
---@field RootTranslationOffset FVector
---@field BoneRotationOffsets TMap<FName, FQuat>
FIKRetargetPose = {}



---@class FIKRigGoal
---@field Name FName
---@field TransformSource EIKRigGoalTransformSource
---@field SourceBone FBoneReference
---@field Position FVector
---@field Rotation FRotator
---@field PositionAlpha float
---@field RotationAlpha float
---@field PositionSpace EIKRigGoalSpace
---@field RotationSpace EIKRigGoalSpace
---@field FinalBlendedPosition FVector
---@field FinalBlendedRotation FQuat
FIKRigGoal = {}



---@class FIKRigGoalContainer
FIKRigGoalContainer = {}


---@class FIKRigInputSkeleton
FIKRigInputSkeleton = {}


---@class FIKRigSkeleton
---@field BoneNames TArray<FName>
---@field ParentIndices TArray<int32>
---@field ExcludedBones TArray<FName>
---@field CurrentPoseGlobal TArray<FTransform>
---@field CurrentPoseLocal TArray<FTransform>
---@field RefPoseGlobal TArray<FTransform>
FIKRigSkeleton = {}



---@class FLimbLink
FLimbLink = {}


---@class FLimbSolver
FLimbSolver = {}


---@class FLimbSolverSettings
---@field ReachPrecision float
---@field HingeRotationAxis EAxis::Type
---@field MaxIterations int32
---@field bEnableLimit boolean
---@field MinRotationAngle float
---@field bAveragePull boolean
---@field PullDistribution float
---@field ReachStepAlpha float
---@field bEnableTwistCorrection boolean
---@field EndBoneForwardAxis EAxis::Type
FLimbSolverSettings = {}



---@class FRetargetChainMap
---@field SourceChain FName
---@field TargetChain FName
FRetargetChainMap = {}



---@class FRetargetDefinition
---@field RootBone FName
---@field BoneChains TArray<FBoneChain>
FRetargetDefinition = {}



---@class FRetargetGlobalSettings
---@field bEnableRoot boolean
---@field bEnableFK boolean
---@field bEnableIK boolean
---@field bWarping boolean
---@field DirectionSource EWarpingDirectionSource
---@field ForwardDirection EBasicAxis
---@field DirectionChain FName
---@field WarpForwards float
---@field SidewaysOffset float
---@field WarpSplay float
FRetargetGlobalSettings = {}



---@class FRetargetProfile
---@field bApplyTargetRetargetPose boolean
---@field TargetRetargetPoseName FName
---@field bApplySourceRetargetPose boolean
---@field SourceRetargetPoseName FName
---@field bApplyChainSettings boolean
---@field ChainSettings TMap<FName, FTargetChainSettings>
---@field bApplyRootSettings boolean
---@field RootSettings FTargetRootSettings
---@field bApplyGlobalSettings boolean
---@field GlobalSettings FRetargetGlobalSettings
FRetargetProfile = {}



---@class FTargetChainFKSettings
---@field EnableFK boolean
---@field RotationMode ERetargetRotationMode
---@field RotationAlpha float
---@field TranslationMode ERetargetTranslationMode
---@field TranslationAlpha float
---@field PoleVectorMatching float
---@field PoleVectorOffset float
FTargetChainFKSettings = {}



---@class FTargetChainIKSettings
---@field EnableIK boolean
---@field BlendToSource float
---@field BlendToSourceWeights FVector
---@field StaticOffset FVector
---@field StaticLocalOffset FVector
---@field StaticRotationOffset FRotator
---@field Extension float
---@field bAffectedByIKWarping boolean
FTargetChainIKSettings = {}



---@class FTargetChainSettings
---@field FK FTargetChainFKSettings
---@field IK FTargetChainIKSettings
---@field SpeedPlanting FTargetChainSpeedPlantSettings
FTargetChainSettings = {}



---@class FTargetChainSpeedPlantSettings
---@field EnableSpeedPlanting boolean
---@field SpeedCurveName FName
---@field SpeedThreshold float
---@field UnplantStiffness float
---@field UnplantCriticalDamping float
FTargetChainSpeedPlantSettings = {}



---@class FTargetRootSettings
---@field RotationAlpha float
---@field TranslationAlpha float
---@field BlendToSource float
---@field BlendToSourceWeights FVector
---@field ScaleHorizontal float
---@field ScaleVertical float
---@field TranslationOffset FVector
---@field RotationOffset FRotator
---@field AffectIKHorizontal float
---@field AffectIKVertical float
FTargetRootSettings = {}



---@class IIKGoalCreatorInterface : IInterface
IIKGoalCreatorInterface = {}

---@param OutGoals TMap<FName, FIKRigGoal>
function IIKGoalCreatorInterface:AddIKGoals(OutGoals) end


---@class UIKRetargetGlobalSettings : UObject
---@field Settings FRetargetGlobalSettings
UIKRetargetGlobalSettings = {}



---@class UIKRetargetProcessor : UObject
---@field IKRigProcessor UIKRigProcessor
UIKRetargetProcessor = {}



---@class UIKRetargeter : UObject
---@field SourceIKRigAsset TSoftObjectPtr<UIKRigDefinition>
---@field TargetIKRigAsset TSoftObjectPtr<UIKRigDefinition>
---@field ChainMapping TArray<FRetargetChainMap>
---@field ChainSettings TArray<URetargetChainSettings>
---@field RootSettings URetargetRootSettings
---@field GlobalSettings UIKRetargetGlobalSettings
---@field Profiles TMap<FName, FRetargetProfile>
---@field CurrentProfile FName
---@field SourceRetargetPoses TMap<FName, FIKRetargetPose>
---@field TargetRetargetPoses TMap<FName, FIKRetargetPose>
---@field CurrentSourceRetargetPose FName
---@field CurrentTargetRetargetPose FName
---@field RetargetPoses TMap<FName, FIKRetargetPose>
---@field CurrentRetargetPose FName
UIKRetargeter = {}

---@param RetargetProfile FRetargetProfile
---@param RootSettings FTargetRootSettings
function UIKRetargeter:SetRootSettingsInRetargetProfile(RetargetProfile, RootSettings) end
---@param RetargetProfile FRetargetProfile
---@param GlobalSettings FRetargetGlobalSettings
function UIKRetargeter:SetGlobalSettingsInRetargetProfile(RetargetProfile, GlobalSettings) end
---@param RetargetProfile FRetargetProfile
---@param SpeedPlantSettings FTargetChainSpeedPlantSettings
---@param TargetChainName FName
function UIKRetargeter:SetChainSpeedPlantSettingsInRetargetProfile(RetargetProfile, SpeedPlantSettings, TargetChainName) end
---@param RetargetProfile FRetargetProfile
---@param ChainSettings FTargetChainSettings
---@param TargetChainName FName
function UIKRetargeter:SetChainSettingsInRetargetProfile(RetargetProfile, ChainSettings, TargetChainName) end
---@param RetargetProfile FRetargetProfile
---@param IKSettings FTargetChainIKSettings
---@param TargetChainName FName
function UIKRetargeter:SetChainIKSettingsInRetargetProfile(RetargetProfile, IKSettings, TargetChainName) end
---@param RetargetProfile FRetargetProfile
---@param FKSettings FTargetChainFKSettings
---@param TargetChainName FName
function UIKRetargeter:SetChainFKSettingsInRetargetProfile(RetargetProfile, FKSettings, TargetChainName) end
---@param RetargetProfile FRetargetProfile
---@return FTargetRootSettings
function UIKRetargeter:GetRootSettingsFromRetargetProfile(RetargetProfile) end
---@param RetargetAsset UIKRetargeter
---@param OptionalProfileName FName
---@param OutSettings FTargetRootSettings
function UIKRetargeter:GetRootSettingsFromRetargetAsset(RetargetAsset, OptionalProfileName, OutSettings) end
---@param RetargetProfile FRetargetProfile
---@return FRetargetGlobalSettings
function UIKRetargeter:GetGlobalSettingsFromRetargetProfile(RetargetProfile) end
---@param RetargetAsset UIKRetargeter
---@param OptionalProfileName FName
---@param OutSettings FRetargetGlobalSettings
function UIKRetargeter:GetGlobalSettingsFromRetargetAsset(RetargetAsset, OptionalProfileName, OutSettings) end
---@param RetargetAsset UIKRetargeter
---@param IKGoalName FName
---@return FTargetChainSettings
function UIKRetargeter:GetChainUsingGoalFromRetargetAsset(RetargetAsset, IKGoalName) end
---@param RetargetProfile FRetargetProfile
---@param TargetChainName FName
---@return FTargetChainSettings
function UIKRetargeter:GetChainSettingsFromRetargetProfile(RetargetProfile, TargetChainName) end
---@param RetargetAsset UIKRetargeter
---@param TargetChainName FName
---@param OptionalProfileName FName
---@return FTargetChainSettings
function UIKRetargeter:GetChainSettingsFromRetargetAsset(RetargetAsset, TargetChainName, OptionalProfileName) end


---@class UIKRigComponent : UActorComponent
UIKRigComponent = {}

---@param GoalName FName
---@param Transform FTransform
---@param PositionAlpha float
---@param RotationAlpha float
function UIKRigComponent:SetIKRigGoalTransform(GoalName, Transform, PositionAlpha, RotationAlpha) end
---@param GoalName FName
---@param Position FVector
---@param Rotation FQuat
---@param PositionAlpha float
---@param RotationAlpha float
function UIKRigComponent:SetIKRigGoalPositionAndRotation(GoalName, Position, Rotation, PositionAlpha, RotationAlpha) end
---@param Goal FIKRigGoal
function UIKRigComponent:SetIKRigGoal(Goal) end
function UIKRigComponent:ClearAllGoals() end


---@class UIKRigDefinition : UObject
---@field PreviewSkeletalMesh TSoftObjectPtr<USkeletalMesh>
---@field Skeleton FIKRigSkeleton
---@field Goals TArray<UIKRigEffectorGoal>
---@field Solvers TArray<UIKRigSolver>
---@field RetargetDefinition FRetargetDefinition
UIKRigDefinition = {}



---@class UIKRigEffectorGoal : UObject
---@field GoalName FName
---@field BoneName FName
---@field PositionAlpha float
---@field RotationAlpha float
---@field CurrentTransform FTransform
---@field InitialTransform FTransform
UIKRigEffectorGoal = {}



---@class UIKRigPBIKSolver : UIKRigSolver
---@field RootBone FName
---@field Iterations int32
---@field MassMultiplier float
---@field MinMassMultiplier float
---@field bAllowStretch boolean
---@field RootBehavior EPBIKRootBehavior
---@field bStartSolveFromInputPose boolean
---@field Effectors TArray<UIKRig_FBIKEffector>
---@field BoneSettings TArray<UIKRig_PBIKBoneSettings>
UIKRigPBIKSolver = {}



---@class UIKRigProcessor : UObject
---@field Solvers TArray<UIKRigSolver>
UIKRigProcessor = {}



---@class UIKRigSolver : UObject
---@field bIsEnabled boolean
UIKRigSolver = {}



---@class UIKRig_BodyMover : UIKRigSolver
---@field RootBone FName
---@field PositionAlpha float
---@field PositionPositiveX float
---@field PositionNegativeX float
---@field PositionPositiveY float
---@field PositionNegativeY float
---@field PositionPositiveZ float
---@field PositionNegativeZ float
---@field RotationAlpha float
---@field RotateXAlpha float
---@field RotateYAlpha float
---@field RotateZAlpha float
---@field Effectors TArray<UIKRig_BodyMoverEffector>
UIKRig_BodyMover = {}



---@class UIKRig_BodyMoverEffector : UObject
---@field GoalName FName
---@field BoneName FName
---@field InfluenceMultiplier float
UIKRig_BodyMoverEffector = {}



---@class UIKRig_FBIKEffector : UObject
---@field GoalName FName
---@field BoneName FName
---@field StrengthAlpha float
---@field PullChainAlpha float
---@field PinRotation float
---@field IndexInSolver int32
UIKRig_FBIKEffector = {}



---@class UIKRig_LimbEffector : UObject
---@field GoalName FName
---@field BoneName FName
UIKRig_LimbEffector = {}



---@class UIKRig_LimbSolver : UIKRigSolver
---@field RootName FName
---@field ReachPrecision float
---@field HingeRotationAxis EAxis::Type
---@field MaxIterations int32
---@field bEnableLimit boolean
---@field MinRotationAngle float
---@field bAveragePull boolean
---@field PullDistribution float
---@field ReachStepAlpha float
---@field bEnableTwistCorrection boolean
---@field EndBoneForwardAxis EAxis::Type
---@field Effector UIKRig_LimbEffector
UIKRig_LimbSolver = {}



---@class UIKRig_PBIKBoneSettings : UObject
---@field bone FName
---@field RotationStiffness float
---@field PositionStiffness float
---@field X EPBIKLimitType
---@field MinX float
---@field MaxX float
---@field Y EPBIKLimitType
---@field MinY float
---@field MaxY float
---@field Z EPBIKLimitType
---@field MinZ float
---@field MaxZ float
---@field bUsePreferredAngles boolean
---@field PreferredAngles FVector
UIKRig_PBIKBoneSettings = {}



---@class UIKRig_PoleSolver : UIKRigSolver
---@field RootName FName
---@field EndName FName
---@field Effector UIKRig_PoleSolverEffector
UIKRig_PoleSolver = {}



---@class UIKRig_PoleSolverEffector : UObject
---@field GoalName FName
---@field BoneName FName
---@field Alpha float
UIKRig_PoleSolverEffector = {}



---@class UIKRig_SetTransform : UIKRigSolver
---@field Goal FName
---@field RootBone FName
---@field Effector UIKRig_SetTransformEffector
UIKRig_SetTransform = {}



---@class UIKRig_SetTransformEffector : UObject
---@field bEnablePosition boolean
---@field bEnableRotation boolean
---@field Alpha float
UIKRig_SetTransformEffector = {}



---@class URetargetChainSettings : UObject
---@field SourceChain FName
---@field TargetChain FName
---@field Settings FTargetChainSettings
---@field CopyPoseUsingFK boolean
---@field RotationMode ERetargetRotationMode
---@field RotationAlpha float
---@field TranslationMode ERetargetTranslationMode
---@field TranslationAlpha float
---@field DriveIKGoal boolean
---@field BlendToSource float
---@field BlendToSourceWeights FVector
---@field StaticOffset FVector
---@field StaticLocalOffset FVector
---@field StaticRotationOffset FRotator
---@field Extension float
---@field UseSpeedCurveToPlantIK boolean
---@field SpeedCurveName FName
---@field VelocityThreshold float
---@field UnplantStiffness float
---@field UnplantCriticalDamping float
URetargetChainSettings = {}



---@class URetargetRootSettings : UObject
---@field Settings FTargetRootSettings
---@field RetargetRootTranslation boolean
---@field GlobalScaleHorizontal float
---@field GlobalScaleVertical float
---@field BlendToSource FVector
---@field StaticOffset FVector
---@field StaticRotationOffset FRotator
URetargetRootSettings = {}



