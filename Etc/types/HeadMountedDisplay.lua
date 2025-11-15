---@meta

---@class FXRDeviceId
---@field SystemName FName
---@field DeviceID int32
local FXRDeviceId = {}



---@class FXRGestureConfig
---@field bTap boolean
---@field bHold boolean
---@field AxisGesture ESpatialInputGestureAxis
---@field bNavigationAxisX boolean
---@field bNavigationAxisY boolean
---@field bNavigationAxisZ boolean
local FXRGestureConfig = {}



---@class FXRHMDData
---@field bValid boolean
---@field DeviceName FName
---@field ApplicationInstanceID FGuid
---@field TrackingStatus ETrackingStatus
---@field Position FVector
---@field Rotation FQuat
local FXRHMDData = {}



---@class FXRMotionControllerData
---@field bValid boolean
---@field DeviceName FName
---@field ApplicationInstanceID FGuid
---@field DeviceVisualType EXRVisualType
---@field HandIndex EControllerHand
---@field TrackingStatus ETrackingStatus
---@field GripPosition FVector
---@field GripRotation FQuat
---@field AimPosition FVector
---@field AimRotation FQuat
---@field HandKeyPositions TArray<FVector>
---@field HandKeyRotations TArray<FQuat>
---@field HandKeyRadii TArray<float>
---@field bIsGrasped boolean
local FXRMotionControllerData = {}



---@class UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase
---@field OnModelLoaded FAsyncTask_LoadXRDeviceVisComponentOnModelLoaded
---@field OnLoadFailure FAsyncTask_LoadXRDeviceVisComponentOnLoadFailure
---@field SpawnedComponent UPrimitiveComponent
local UAsyncTask_LoadXRDeviceVisComponent = {}

---@param Target AActor
---@param SystemName FName
---@param DeviceName FName
---@param bManualAttachment boolean
---@param RelativeTransform FTransform
---@param XRDeviceId FXRDeviceId
---@param NewComponent UPrimitiveComponent
---@return UAsyncTask_LoadXRDeviceVisComponent
function UAsyncTask_LoadXRDeviceVisComponent:AddNamedDeviceVisualizationComponentAsync(Target, SystemName, DeviceName, bManualAttachment, RelativeTransform, XRDeviceId, NewComponent) end
---@param Target AActor
---@param XRDeviceId FXRDeviceId
---@param bManualAttachment boolean
---@param RelativeTransform FTransform
---@param NewComponent UPrimitiveComponent
---@return UAsyncTask_LoadXRDeviceVisComponent
function UAsyncTask_LoadXRDeviceVisComponent:AddDeviceVisualizationComponentAsync(Target, XRDeviceId, bManualAttachment, RelativeTransform, NewComponent) end


---@class UHandKeypointConversion : UBlueprintFunctionLibrary
local UHandKeypointConversion = {}

---@param Input EHandKeypoint
---@return int32
function UHandKeypointConversion:Conv_HandKeypointToInt32(Input) end


---@class UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary
local UHeadMountedDisplayFunctionLibrary = {}

---@param ExternalTrackingTransform FTransform
function UHeadMountedDisplayFunctionLibrary:UpdateExternalTrackingHMDPosition(ExternalTrackingTransform) end
---@param ActionName FName
---@param InDelegate FSetXRTimedInputActionDelegateInDelegate
function UHeadMountedDisplayFunctionLibrary:SetXRTimedInputActionDelegate(ActionName, InDelegate) end
---@param InDisconnectedDelegate FSetXRDisconnectDelegateInDisconnectedDelegate
function UHeadMountedDisplayFunctionLibrary:SetXRDisconnectDelegate(InDisconnectedDelegate) end
---@param WorldContext UObject
---@param NewScale float
function UHeadMountedDisplayFunctionLibrary:SetWorldToMetersScale(WorldContext, NewScale) end
---@param Origin EHMDTrackingOrigin::Type
function UHeadMountedDisplayFunctionLibrary:SetTrackingOrigin(Origin) end
---@param InTexture UTexture
function UHeadMountedDisplayFunctionLibrary:SetSpectatorScreenTexture(InTexture) end
---@param EyeRectMin FVector2D
---@param EyeRectMax FVector2D
---@param TextureRectMin FVector2D
---@param TextureRectMax FVector2D
---@param bDrawEyeFirst boolean
---@param bClearBlack boolean
---@param bUseAlpha boolean
function UHeadMountedDisplayFunctionLibrary:SetSpectatorScreenModeTexturePlusEyeLayout(EyeRectMin, EyeRectMax, TextureRectMin, TextureRectMax, bDrawEyeFirst, bClearBlack, bUseAlpha) end
---@param Mode ESpectatorScreenMode
function UHeadMountedDisplayFunctionLibrary:SetSpectatorScreenMode(Mode) end
---@param Near float
---@param Far float
function UHeadMountedDisplayFunctionLibrary:SetClippingPlanes(Near, Far) end
---@param Yaw float
---@param Options EOrientPositionSelector::Type
function UHeadMountedDisplayFunctionLibrary:ResetOrientationAndPosition(Yaw, Options) end
---@return boolean
function UHeadMountedDisplayFunctionLibrary:IsSpectatorScreenModeControllable() end
---@return boolean
function UHeadMountedDisplayFunctionLibrary:IsInLowPersistenceMode() end
---@return boolean
function UHeadMountedDisplayFunctionLibrary:IsHeadMountedDisplayEnabled() end
---@return boolean
function UHeadMountedDisplayFunctionLibrary:IsHeadMountedDisplayConnected() end
---@param XRDeviceId FXRDeviceId
---@return boolean
function UHeadMountedDisplayFunctionLibrary:IsDeviceTracking(XRDeviceId) end
---@return boolean
function UHeadMountedDisplayFunctionLibrary:HasValidTrackingPosition() end
---@return int32
function UHeadMountedDisplayFunctionLibrary:GetXRSystemFlags() end
---@param WorldContext UObject
---@return float
function UHeadMountedDisplayFunctionLibrary:GetWorldToMetersScale(WorldContext) end
---@param bUseFocus boolean
---@param bHasFocus boolean
function UHeadMountedDisplayFunctionLibrary:GetVRFocusState(bUseFocus, bHasFocus) end
---@return FString
function UHeadMountedDisplayFunctionLibrary:GetVersionString() end
---@param WorldContext UObject
---@return FTransform
function UHeadMountedDisplayFunctionLibrary:GetTrackingToWorldTransform(WorldContext) end
---@param Origin FVector
---@param Rotation FRotator
---@param LeftFOV float
---@param RightFOV float
---@param TopFOV float
---@param BottomFOV float
---@param Distance float
---@param NearPlane float
---@param FarPlane float
---@param IsActive boolean
---@param Index int32
function UHeadMountedDisplayFunctionLibrary:GetTrackingSensorParameters(Origin, Rotation, LeftFOV, RightFOV, TopFOV, BottomFOV, Distance, NearPlane, FarPlane, IsActive, Index) end
---@param Origin EHMDTrackingOrigin::Type
---@param OutTransform FTransform
---@return boolean
function UHeadMountedDisplayFunctionLibrary:GetTrackingOriginTransform(Origin, OutTransform) end
---@return EHMDTrackingOrigin::Type
function UHeadMountedDisplayFunctionLibrary:GetTrackingOrigin() end
---@param CameraOrigin FVector
---@param CameraRotation FRotator
---@param HFOV float
---@param VFOV float
---@param CameraDistance float
---@param NearPlane float
---@param FarPlane float
function UHeadMountedDisplayFunctionLibrary:GetPositionalTrackingCameraParameters(CameraOrigin, CameraRotation, HFOV, VFOV, CameraDistance, NearPlane, FarPlane) end
---@param OutTransform FTransform
---@param OutRect FVector2D
---@return boolean
function UHeadMountedDisplayFunctionLibrary:GetPlayAreaRect(OutTransform, OutRect) end
---@param Origin EHMDTrackingOrigin::Type
---@return FVector2D
function UHeadMountedDisplayFunctionLibrary:GetPlayAreaBounds(Origin) end
---@return float
function UHeadMountedDisplayFunctionLibrary:GetPixelDensity() end
---@param DeviceRotation FRotator
---@param DevicePosition FVector
function UHeadMountedDisplayFunctionLibrary:GetOrientationAndPosition(DeviceRotation, DevicePosition) end
---@return int32
function UHeadMountedDisplayFunctionLibrary:GetNumOfTrackingSensors() end
---@param WorldContext UObject
---@param Hand EControllerHand
---@param MotionControllerData FXRMotionControllerData
function UHeadMountedDisplayFunctionLibrary:GetMotionControllerData(WorldContext, Hand, MotionControllerData) end
---@return EHMDWornState::Type
function UHeadMountedDisplayFunctionLibrary:GetHMDWornState() end
---@return FName
function UHeadMountedDisplayFunctionLibrary:GetHMDDeviceName() end
---@param WorldContext UObject
---@param HMDData FXRHMDData
function UHeadMountedDisplayFunctionLibrary:GetHMDData(WorldContext, HMDData) end
---@param WorldContext UObject
---@param XRDeviceId FXRDeviceId
---@param bIsTracked boolean
---@param Orientation FRotator
---@param bHasPositionalTracking boolean
---@param Position FVector
function UHeadMountedDisplayFunctionLibrary:GetDeviceWorldPose(WorldContext, XRDeviceId, bIsTracked, Orientation, bHasPositionalTracking, Position) end
---@param XRDeviceId FXRDeviceId
---@param bIsTracked boolean
---@param Orientation FRotator
---@param bHasPositionalTracking boolean
---@param Position FVector
function UHeadMountedDisplayFunctionLibrary:GetDevicePose(XRDeviceId, bIsTracked, Orientation, bHasPositionalTracking, Position) end
---@param Hand EControllerHand
---@param InteractionProfile FString
---@return boolean
function UHeadMountedDisplayFunctionLibrary:GetCurrentInteractionProfile(Hand, InteractionProfile) end
---@param WorldContext UObject
---@param ControllerIndex int32
---@param MotionSource FName
---@param Time FTimespan
---@param bTimeWasUsed boolean
---@param Orientation FRotator
---@param Position FVector
---@param bProvidedLinearVelocity boolean
---@param LinearVelocity FVector
---@param bProvidedAngularVelocity boolean
---@param AngularVelocityRadPerSec FVector
---@param bProvidedLinearAcceleration boolean
---@param LinearAcceleration FVector
---@return boolean
function UHeadMountedDisplayFunctionLibrary:GetControllerTransformForTime(WorldContext, ControllerIndex, MotionSource, Time, bTimeWasUsed, Orientation, Position, bProvidedLinearVelocity, LinearVelocity, bProvidedAngularVelocity, AngularVelocityRadPerSec, bProvidedLinearAcceleration, LinearAcceleration) end
---@param SystemId FName
---@param DeviceType EXRTrackedDeviceType
---@return TArray<FXRDeviceId>
function UHeadMountedDisplayFunctionLibrary:EnumerateTrackedDevices(SystemId, DeviceType) end
---@param bEnable boolean
function UHeadMountedDisplayFunctionLibrary:EnableLowPersistenceMode(bEnable) end
---@param bEnable boolean
---@return boolean
function UHeadMountedDisplayFunctionLibrary:EnableHMD(bEnable) end
function UHeadMountedDisplayFunctionLibrary:DisconnectRemoteXRDevice() end
---@param IpAddress FString
---@param BitRate int32
---@return EXRDeviceConnectionResult::Type
function UHeadMountedDisplayFunctionLibrary:ConnectRemoteXRDevice(IpAddress, BitRate) end
---@param GestureConfig FXRGestureConfig
---@return boolean
function UHeadMountedDisplayFunctionLibrary:ConfigureGestures(GestureConfig) end
---@param ActionPath FName
function UHeadMountedDisplayFunctionLibrary:ClearXRTimedInputActionDelegate(ActionPath) end
---@param ExternalTrackingTransform FTransform
function UHeadMountedDisplayFunctionLibrary:CalibrateExternalTrackingToHMD(ExternalTrackingTransform) end
---@param InKey FKey
---@param InteractionProfile FString
---@param Hand EControllerHand
---@param MotionSource FName
---@param Indentifier FString
---@param Component FString
function UHeadMountedDisplayFunctionLibrary:BreakKey(InKey, InteractionProfile, Hand, MotionSource, Indentifier, Component) end


---@class UMotionControllerComponent : UPrimitiveComponent
---@field PlayerIndex int32
---@field Hand EControllerHand
---@field MotionSource FName
---@field bDisableLowLatencyUpdate boolean
---@field CurrentTrackingStatus ETrackingStatus
---@field bDisplayDeviceModel boolean
---@field DisplayModelSource FName
---@field CustomDisplayMesh UStaticMesh
---@field DisplayMeshMaterialOverrides TArray<UMaterialInterface>
---@field DisplayComponent UPrimitiveComponent
local UMotionControllerComponent = {}

---@param NewSource EControllerHand
function UMotionControllerComponent:SetTrackingSource(NewSource) end
---@param NewSource FName
function UMotionControllerComponent:SetTrackingMotionSource(NewSource) end
---@param bShowControllerModel boolean
function UMotionControllerComponent:SetShowDeviceModel(bShowControllerModel) end
---@param NewDisplayModelSource FName
function UMotionControllerComponent:SetDisplayModelSource(NewDisplayModelSource) end
---@param NewDisplayMesh UStaticMesh
function UMotionControllerComponent:SetCustomDisplayMesh(NewDisplayMesh) end
---@param NewPlayer int32
function UMotionControllerComponent:SetAssociatedPlayerIndex(NewPlayer) end
function UMotionControllerComponent:OnMotionControllerUpdated() end
---@return boolean
function UMotionControllerComponent:IsTracked() end
---@return EControllerHand
function UMotionControllerComponent:GetTrackingSource() end
---@param InName FName
---@param bValueFound boolean
---@return float
function UMotionControllerComponent:GetParameterValue(InName, bValueFound) end
---@param jointIndex int32
---@param bValueFound boolean
---@return FVector
function UMotionControllerComponent:GetHandJointPosition(jointIndex, bValueFound) end


---@class UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary
local UMotionTrackedDeviceFunctionLibrary = {}

---@param Enable boolean
function UMotionTrackedDeviceFunctionLibrary:SetIsControllerMotionTrackingEnabledByDefault(Enable) end
---@param PlayerIndex int32
---@param SourceName FName
---@return boolean
function UMotionTrackedDeviceFunctionLibrary:IsMotionTrackingEnabledForSource(PlayerIndex, SourceName) end
---@param PlayerIndex int32
---@param Hand EControllerHand
---@return boolean
function UMotionTrackedDeviceFunctionLibrary:IsMotionTrackingEnabledForDevice(PlayerIndex, Hand) end
---@param MotionControllerComponent UMotionControllerComponent
---@return boolean
function UMotionTrackedDeviceFunctionLibrary:IsMotionTrackingEnabledForComponent(MotionControllerComponent) end
---@return boolean
function UMotionTrackedDeviceFunctionLibrary:IsMotionTrackedDeviceCountManagementNecessary() end
---@param PlayerIndex int32
---@param SourceName FName
---@return boolean
function UMotionTrackedDeviceFunctionLibrary:IsMotionSourceTracking(PlayerIndex, SourceName) end
---@return int32
function UMotionTrackedDeviceFunctionLibrary:GetMotionTrackingEnabledControllerCount() end
---@return int32
function UMotionTrackedDeviceFunctionLibrary:GetMaximumMotionTrackedControllerCount() end
---@return FName
function UMotionTrackedDeviceFunctionLibrary:GetActiveTrackingSystemName() end
---@return TArray<FName>
function UMotionTrackedDeviceFunctionLibrary:EnumerateMotionSources() end
---@param PlayerIndex int32
---@param SourceName FName
---@return boolean
function UMotionTrackedDeviceFunctionLibrary:EnableMotionTrackingOfSource(PlayerIndex, SourceName) end
---@param PlayerIndex int32
---@param Hand EControllerHand
---@return boolean
function UMotionTrackedDeviceFunctionLibrary:EnableMotionTrackingOfDevice(PlayerIndex, Hand) end
---@param MotionControllerComponent UMotionControllerComponent
---@return boolean
function UMotionTrackedDeviceFunctionLibrary:EnableMotionTrackingForComponent(MotionControllerComponent) end
---@param PlayerIndex int32
---@param SourceName FName
function UMotionTrackedDeviceFunctionLibrary:DisableMotionTrackingOfSource(PlayerIndex, SourceName) end
---@param PlayerIndex int32
---@param Hand EControllerHand
function UMotionTrackedDeviceFunctionLibrary:DisableMotionTrackingOfDevice(PlayerIndex, Hand) end
---@param PlayerIndex int32
function UMotionTrackedDeviceFunctionLibrary:DisableMotionTrackingOfControllersForPlayer(PlayerIndex) end
function UMotionTrackedDeviceFunctionLibrary:DisableMotionTrackingOfAllControllers() end
---@param MotionControllerComponent UMotionControllerComponent
function UMotionTrackedDeviceFunctionLibrary:DisableMotionTrackingForComponent(MotionControllerComponent) end


---@class UVRNotificationsComponent : UActorComponent
---@field HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate FVRNotificationsComponentHMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate
---@field HMDTrackingInitializedDelegate FVRNotificationsComponentHMDTrackingInitializedDelegate
---@field HMDRecenteredDelegate FVRNotificationsComponentHMDRecenteredDelegate
---@field HMDLostDelegate FVRNotificationsComponentHMDLostDelegate
---@field HMDReconnectedDelegate FVRNotificationsComponentHMDReconnectedDelegate
---@field HMDConnectCanceledDelegate FVRNotificationsComponentHMDConnectCanceledDelegate
---@field HMDPutOnHeadDelegate FVRNotificationsComponentHMDPutOnHeadDelegate
---@field HMDRemovedFromHeadDelegate FVRNotificationsComponentHMDRemovedFromHeadDelegate
---@field VRControllerRecenteredDelegate FVRNotificationsComponentVRControllerRecenteredDelegate
---@field XRTrackingOriginChangedDelegate FVRNotificationsComponentXRTrackingOriginChangedDelegate
---@field XRPlayAreaChangedDelegate FVRNotificationsComponentXRPlayAreaChangedDelegate
local UVRNotificationsComponent = {}



---@class UXRAssetFunctionLibrary : UBlueprintFunctionLibrary
local UXRAssetFunctionLibrary = {}

---@param Target AActor
---@param SystemName FName
---@param DeviceName FName
---@param bManualAttachment boolean
---@param RelativeTransform FTransform
---@param XRDeviceId FXRDeviceId
---@return UPrimitiveComponent
function UXRAssetFunctionLibrary:AddNamedDeviceVisualizationComponentBlocking(Target, SystemName, DeviceName, bManualAttachment, RelativeTransform, XRDeviceId) end
---@param Target AActor
---@param XRDeviceId FXRDeviceId
---@param bManualAttachment boolean
---@param RelativeTransform FTransform
---@return UPrimitiveComponent
function UXRAssetFunctionLibrary:AddDeviceVisualizationComponentBlocking(Target, XRDeviceId, bManualAttachment, RelativeTransform) end


---@class UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary
local UXRLoadingScreenFunctionLibrary = {}

function UXRLoadingScreenFunctionLibrary:ShowLoadingScreen() end
---@param Texture UTexture
---@param Scale FVector2D
---@param Offset FVector
---@param bShowLoadingMovie boolean
---@param bShowOnSet boolean
function UXRLoadingScreenFunctionLibrary:SetLoadingScreen(Texture, Scale, Offset, bShowLoadingMovie, bShowOnSet) end
function UXRLoadingScreenFunctionLibrary:HideLoadingScreen() end
function UXRLoadingScreenFunctionLibrary:ClearLoadingScreenSplashes() end
---@param Texture UTexture
---@param Translation FVector
---@param Rotation FRotator
---@param Size FVector2D
---@param DeltaRotation FRotator
---@param bClearBeforeAdd boolean
function UXRLoadingScreenFunctionLibrary:AddLoadingScreenSplash(Texture, Translation, Rotation, Size, DeltaRotation, bClearBeforeAdd) end


