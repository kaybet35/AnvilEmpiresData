---@meta

---@class FActiveCameraAnimationInfo
---@field Sequence UCameraAnimationSequence
---@field Params FCameraAnimationParams
---@field Handle FCameraAnimationHandle
---@field Player UCameraAnimationSequencePlayer
---@field CameraStandIn UCameraAnimationSequenceCameraStandIn
---@field EaseInCurrentTime float
---@field EaseOutCurrentTime float
---@field bIsEasingIn boolean
---@field bIsEasingOut boolean
FActiveCameraAnimationInfo = {}



---@class FCameraAnimationHandle
FCameraAnimationHandle = {}


---@class FCameraAnimationParams
---@field PlayRate float
---@field Scale float
---@field EaseInType ECameraAnimationEasingType
---@field EaseInDuration float
---@field EaseOutType ECameraAnimationEasingType
---@field EaseOutDuration float
---@field bLoop boolean
---@field bRandomStartTime boolean
---@field DurationOverride float
---@field PlaySpace ECameraAnimationPlaySpace
---@field UserPlaySpaceRot FRotator
FCameraAnimationParams = {}



---@class FFOscillator
---@field Amplitude float
---@field Frequency float
---@field InitialOffset EInitialOscillatorOffset
---@field Waveform EOscillatorWaveform
FFOscillator = {}



---@class FPerlinNoiseShaker
---@field Amplitude float
---@field Frequency float
FPerlinNoiseShaker = {}



---@class FROscillator
---@field Pitch FFOscillator
---@field Yaw FFOscillator
---@field Roll FFOscillator
FROscillator = {}



---@class FVOscillator
---@field X FFOscillator
---@field Y FFOscillator
---@field Z FFOscillator
FVOscillator = {}



---@class FWaveOscillator
---@field Amplitude float
---@field Frequency float
---@field InitialOffsetType EInitialWaveOscillatorOffsetType
FWaveOscillator = {}



---@class UCameraAnimationCameraModifier : UCameraModifier
---@field ActiveAnimations TArray<FActiveCameraAnimationInfo>
---@field NextInstanceSerialNumber uint16
UCameraAnimationCameraModifier = {}

---@param Handle FCameraAnimationHandle
---@param bImmediate boolean
function UCameraAnimationCameraModifier:StopCameraAnimation(Handle, bImmediate) end
---@param Sequence UCameraAnimationSequence
---@param bImmediate boolean
function UCameraAnimationCameraModifier:StopAllCameraAnimationsOf(Sequence, bImmediate) end
---@param bImmediate boolean
function UCameraAnimationCameraModifier:StopAllCameraAnimations(bImmediate) end
---@param Sequence UCameraAnimationSequence
---@param Params FCameraAnimationParams
---@return FCameraAnimationHandle
function UCameraAnimationCameraModifier:PlayCameraAnimation(Sequence, Params) end
---@param Handle FCameraAnimationHandle
---@return boolean
function UCameraAnimationCameraModifier:IsCameraAnimationActive(Handle) end
---@param PlayerController APlayerController
---@return UCameraAnimationCameraModifier
function UCameraAnimationCameraModifier:GetCameraAnimationCameraModifierFromPlayerController(PlayerController) end
---@param WorldContextObject UObject
---@param ControllerId int32
---@return UCameraAnimationCameraModifier
function UCameraAnimationCameraModifier:GetCameraAnimationCameraModifierFromID(WorldContextObject, ControllerId) end
---@param WorldContextObject UObject
---@param PlayerIndex int32
---@return UCameraAnimationCameraModifier
function UCameraAnimationCameraModifier:GetCameraAnimationCameraModifier(WorldContextObject, PlayerIndex) end


---@class UCompositeCameraShakePattern : UCameraShakePattern
---@field ChildPatterns TArray<UCameraShakePattern>
UCompositeCameraShakePattern = {}



---@class UConstantCameraShakePattern : USimpleCameraShakePattern
---@field LocationOffset FVector
---@field RotationOffset FRotator
UConstantCameraShakePattern = {}



---@class UDefaultCameraShakeBase : UCameraShakeBase
UDefaultCameraShakeBase = {}


---@class UGameplayCamerasFunctionLibrary : UBlueprintFunctionLibrary
UGameplayCamerasFunctionLibrary = {}

---@param CameraAnimationPlaySpace ECameraAnimationPlaySpace
---@return ECameraShakePlaySpace
function UGameplayCamerasFunctionLibrary:Conv_CameraShakePlaySpace(CameraAnimationPlaySpace) end
---@param CameraShakePlaySpace ECameraShakePlaySpace
---@return ECameraAnimationPlaySpace
function UGameplayCamerasFunctionLibrary:Conv_CameraAnimationPlaySpace(CameraShakePlaySpace) end
---@param PlayerCameraManager APlayerCameraManager
---@return UCameraAnimationCameraModifier
function UGameplayCamerasFunctionLibrary:Conv_CameraAnimationCameraModifier(PlayerCameraManager) end


---@class UGameplayCamerasSubsystem : UWorldSubsystem
UGameplayCamerasSubsystem = {}

---@param PlayerController APlayerController
---@param Handle FCameraAnimationHandle
---@param bImmediate boolean
function UGameplayCamerasSubsystem:StopCameraAnimation(PlayerController, Handle, bImmediate) end
---@param PlayerController APlayerController
---@param Sequence UCameraAnimationSequence
---@param bImmediate boolean
function UGameplayCamerasSubsystem:StopAllCameraAnimationsOf(PlayerController, Sequence, bImmediate) end
---@param PlayerController APlayerController
---@param bImmediate boolean
function UGameplayCamerasSubsystem:StopAllCameraAnimations(PlayerController, bImmediate) end
---@param PlayerController APlayerController
---@param Sequence UCameraAnimationSequence
---@param Params FCameraAnimationParams
---@return FCameraAnimationHandle
function UGameplayCamerasSubsystem:PlayCameraAnimation(PlayerController, Sequence, Params) end
---@param PlayerController APlayerController
---@param Handle FCameraAnimationHandle
---@return boolean
function UGameplayCamerasSubsystem:IsCameraAnimationActive(PlayerController, Handle) end


---@class ULegacyCameraShake : UCameraShakeBase
---@field OscillationDuration float
---@field OscillationBlendInTime float
---@field OscillationBlendOutTime float
---@field RotOscillation FROscillator
---@field LocOscillation FVOscillator
---@field FOVOscillation FFOscillator
---@field AnimPlayRate float
---@field AnimScale float
---@field AnimBlendInTime float
---@field AnimBlendOutTime float
---@field RandomAnimSegmentDuration float
---@field AnimSequence UCameraAnimationSequence
---@field bRandomAnimSegment boolean
---@field OscillatorTimeRemaining float
---@field SequenceShakePattern USequenceCameraShakePattern
ULegacyCameraShake = {}

---@param PlayerCameraManager APlayerCameraManager
---@param ShakeClass TSubclassOf<ULegacyCameraShake>
---@param SourceComponent UCameraShakeSourceComponent
---@param Scale float
---@param PlaySpace ECameraShakePlaySpace
---@param UserPlaySpaceRot FRotator
---@return ULegacyCameraShake
function ULegacyCameraShake:StartLegacyCameraShakeFromSource(PlayerCameraManager, ShakeClass, SourceComponent, Scale, PlaySpace, UserPlaySpaceRot) end
---@param PlayerCameraManager APlayerCameraManager
---@param ShakeClass TSubclassOf<ULegacyCameraShake>
---@param Scale float
---@param PlaySpace ECameraShakePlaySpace
---@param UserPlaySpaceRot FRotator
---@return ULegacyCameraShake
function ULegacyCameraShake:StartLegacyCameraShake(PlayerCameraManager, ShakeClass, Scale, PlaySpace, UserPlaySpaceRot) end
---@param bImmediately boolean
function ULegacyCameraShake:ReceiveStopShake(bImmediately) end
---@param Scale float
function ULegacyCameraShake:ReceivePlayShake(Scale) end
---@return boolean
function ULegacyCameraShake:ReceiveIsFinished() end
---@param DeltaTime float
---@param Alpha float
---@param POV FMinimalViewInfo
---@param ModifiedPOV FMinimalViewInfo
function ULegacyCameraShake:BlueprintUpdateCameraShake(DeltaTime, Alpha, POV, ModifiedPOV) end


---@class ULegacyCameraShakeFunctionLibrary : UBlueprintFunctionLibrary
ULegacyCameraShakeFunctionLibrary = {}

---@param CameraShake UCameraShakeBase
---@return ULegacyCameraShake
function ULegacyCameraShakeFunctionLibrary:Conv_LegacyCameraShake(CameraShake) end


---@class ULegacyCameraShakePattern : UCameraShakePattern
ULegacyCameraShakePattern = {}


---@class UPerlinNoiseCameraShakePattern : USimpleCameraShakePattern
---@field LocationAmplitudeMultiplier float
---@field LocationFrequencyMultiplier float
---@field X FPerlinNoiseShaker
---@field Y FPerlinNoiseShaker
---@field Z FPerlinNoiseShaker
---@field RotationAmplitudeMultiplier float
---@field RotationFrequencyMultiplier float
---@field Pitch FPerlinNoiseShaker
---@field Yaw FPerlinNoiseShaker
---@field Roll FPerlinNoiseShaker
---@field FOV FPerlinNoiseShaker
UPerlinNoiseCameraShakePattern = {}



---@class USimpleCameraShakePattern : UCameraShakePattern
---@field Duration float
---@field BlendInTime float
---@field BlendOutTime float
USimpleCameraShakePattern = {}



---@class UTestCameraShake : UCameraShakeBase
UTestCameraShake = {}


---@class UWaveOscillatorCameraShakePattern : USimpleCameraShakePattern
---@field LocationAmplitudeMultiplier float
---@field LocationFrequencyMultiplier float
---@field X FWaveOscillator
---@field Y FWaveOscillator
---@field Z FWaveOscillator
---@field RotationAmplitudeMultiplier float
---@field RotationFrequencyMultiplier float
---@field Pitch FWaveOscillator
---@field Yaw FWaveOscillator
---@field Roll FWaveOscillator
---@field FOV FWaveOscillator
UWaveOscillatorCameraShakePattern = {}



