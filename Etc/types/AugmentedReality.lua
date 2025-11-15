---@meta

---@class AARActor : AActor
local AARActor = {}

---@param InComponentClass TSubclassOf<UARComponent>
---@param NativeID FGuid
---@return UARComponent
function AARActor:AddARComponent(InComponentClass, NativeID) end


---@class AAROriginActor : AActor
local AAROriginActor = {}


---@class AARSharedWorldGameMode : AGameMode
---@field BufferSizePerChunk int32
local AARSharedWorldGameMode = {}

---@param ImageData TArray<uint8>
function AARSharedWorldGameMode:SetPreviewImageData(ImageData) end
function AARSharedWorldGameMode:SetARWorldSharingIsReady() end
---@param ARWorldData TArray<uint8>
function AARSharedWorldGameMode:SetARSharedWorldData(ARWorldData) end
---@return AARSharedWorldGameState
function AARSharedWorldGameMode:GetARSharedWorldGameState() end


---@class AARSharedWorldGameState : AGameState
---@field PreviewImageData TArray<uint8>
---@field ARWorldData TArray<uint8>
---@field PreviewImageBytesTotal int32
---@field ARWorldBytesTotal int32
---@field PreviewImageBytesDelivered int32
---@field ARWorldBytesDelivered int32
local AARSharedWorldGameState = {}

function AARSharedWorldGameState:K2_OnARWorldMapIsReady() end


---@class AARSharedWorldPlayerController : APlayerController
local AARSharedWorldPlayerController = {}

function AARSharedWorldPlayerController:ServerMarkReadyForReceiving() end
---@param Offset int32
---@param Buffer TArray<uint8>
function AARSharedWorldPlayerController:ClientUpdatePreviewImageData(Offset, Buffer) end
---@param Offset int32
---@param Buffer TArray<uint8>
function AARSharedWorldPlayerController:ClientUpdateARWorldData(Offset, Buffer) end
---@param PreviewImageSize int32
---@param ARWorldDataSize int32
function AARSharedWorldPlayerController:ClientInitSharedWorld(PreviewImageSize, ARWorldDataSize) end


---@class AARSkyLight : ASkyLight
---@field CaptureProbe UAREnvironmentCaptureProbe
local AARSkyLight = {}

---@param InCaptureProbe UAREnvironmentCaptureProbe
function AARSkyLight:SetEnvironmentCaptureProbe(InCaptureProbe) end


---@class FARCameraIntrinsics
---@field ImageResolution FIntPoint
---@field FocalLength FVector2D
---@field PrincipalPoint FVector2D
local FARCameraIntrinsics = {}



---@class FAREnvironmentProbeUpdatePayload
---@field WorldTransform FTransform
local FAREnvironmentProbeUpdatePayload = {}



---@class FARFaceUpdatePayload
---@field SessionPayload FARSessionPayload
---@field LeftEyePosition FVector
---@field RightEyePosition FVector
---@field LookAtTarget FVector
local FARFaceUpdatePayload = {}



---@class FARGeoAnchorUpdatePayload
---@field SessionPayload FARSessionPayload
---@field WorldTransform FTransform
---@field Longitude float
---@field Latitude float
---@field AltitudeMeters float
---@field AltitudeSource EARAltitudeSource
---@field AnchorName FString
local FARGeoAnchorUpdatePayload = {}



---@class FARImageUpdatePayload
---@field SessionPayload FARSessionPayload
---@field WorldTransform FTransform
---@field DetectedImage UARCandidateImage
---@field EstimatedSize FVector2D
local FARImageUpdatePayload = {}



---@class FARMeshUpdatePayload
---@field SessionPayload FARSessionPayload
---@field WorldTransform FTransform
---@field ObjectClassification EARObjectClassification
local FARMeshUpdatePayload = {}



---@class FARObjectUpdatePayload
---@field WorldTransform FTransform
local FARObjectUpdatePayload = {}



---@class FARPlaneUpdatePayload
---@field SessionPayload FARSessionPayload
---@field WorldTransform FTransform
---@field Center FVector
---@field Extents FVector
---@field BoundaryVertices TArray<FVector>
---@field ObjectClassification EARObjectClassification
local FARPlaneUpdatePayload = {}



---@class FARPointUpdatePayload
local FARPointUpdatePayload = {}


---@class FARPose2D
---@field SkeletonDefinition FARSkeletonDefinition
---@field JointLocations TArray<FVector2D>
---@field IsJointTracked TArray<boolean>
local FARPose2D = {}



---@class FARPose3D
---@field SkeletonDefinition FARSkeletonDefinition
---@field JointTransforms TArray<FTransform>
---@field IsJointTracked TArray<boolean>
---@field JointTransformSpace EARJointTransformSpace
local FARPose3D = {}



---@class FARPoseUpdatePayload
---@field WorldTransform FTransform
---@field JointTransforms TArray<FTransform>
local FARPoseUpdatePayload = {}



---@class FARQRCodeUpdatePayload
---@field SessionPayload FARSessionPayload
---@field WorldTransform FTransform
---@field Extents FVector
---@field QRCode FString
local FARQRCodeUpdatePayload = {}



---@class FARSessionPayload
---@field ConfigFlags int32
---@field DefaultMeshMaterial UMaterialInterface
---@field DefaultWireframeMeshMaterial UMaterialInterface
local FARSessionPayload = {}



---@class FARSessionStatus
---@field AdditionalInfo FString
---@field Status EARSessionStatus
local FARSessionStatus = {}



---@class FARSharedWorldReplicationState
---@field PreviewImageOffset int32
---@field ARWorldOffset int32
local FARSharedWorldReplicationState = {}



---@class FARSkeletonDefinition
---@field NumJoints int32
---@field JointNames TArray<FName>
---@field ParentIndices TArray<int32>
local FARSkeletonDefinition = {}



---@class FARTraceResult
---@field DistanceFromCamera float
---@field TraceChannel EARLineTraceChannels
---@field LocalTransform FTransform
---@field TrackedGeometry UARTrackedGeometry
local FARTraceResult = {}



---@class FARVideoFormat
---@field FPS int32
---@field Width int32
---@field Height int32
local FARVideoFormat = {}



---@class FTrackedGeometryGroup
---@field ARActor AARActor
---@field ARComponent UARComponent
---@field TrackedGeometry UARTrackedGeometry
local FTrackedGeometryGroup = {}



---@class UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase
local UARBaseAsyncTaskBlueprintProxy = {}


---@class UARBasicLightEstimate : UARLightEstimate
---@field AmbientIntensityLumens float
---@field AmbientColorTemperatureKelvin float
---@field AmbientColor FLinearColor
local UARBasicLightEstimate = {}

---@return float
function UARBasicLightEstimate:GetAmbientIntensityLumens() end
---@return float
function UARBasicLightEstimate:GetAmbientColorTemperatureKelvin() end
---@return FLinearColor
function UARBasicLightEstimate:GetAmbientColor() end


---@class UARBlueprintLibrary : UBlueprintFunctionLibrary
local UARBlueprintLibrary = {}

---@param ComponentToUnpin USceneComponent
function UARBlueprintLibrary:UnpinComponent(ComponentToUnpin) end
---@param bOnOff boolean
---@param CaptureType EARCaptureType
---@return boolean
function UARBlueprintLibrary:ToggleARCapture(bOnOff, CaptureType) end
function UARBlueprintLibrary:StopARSession() end
---@param SessionConfig UARSessionConfig
function UARBlueprintLibrary:StartARSession(SessionConfig) end
---@param bOnOff boolean
function UARBlueprintLibrary:SetEnabledXRCamera(bOnOff) end
---@param InWorldScale float
function UARBlueprintLibrary:SetARWorldScale(InWorldScale) end
---@param OriginLocation FVector
---@param OriginRotation FRotator
---@param bIsTransformInWorldSpace boolean
---@param bMaintainUpDirection boolean
function UARBlueprintLibrary:SetARWorldOriginLocationAndRotation(OriginLocation, OriginRotation, bIsTransformInWorldSpace, bMaintainUpDirection) end
---@param InAlignmentTransform FTransform
function UARBlueprintLibrary:SetAlignmentTransform(InAlignmentTransform) end
---@param InSaveName FName
---@param InPin UARPin
---@return boolean
function UARBlueprintLibrary:SaveARPinToLocalStore(InSaveName, InPin) end
---@param InSize FIntPoint
---@return FIntPoint
function UARBlueprintLibrary:ResizeXRCamera(InSize) end
---@param PinToRemove UARPin
function UARBlueprintLibrary:RemovePin(PinToRemove) end
---@param InSaveName FName
function UARBlueprintLibrary:RemoveARPinFromLocalStore(InSaveName) end
function UARBlueprintLibrary:RemoveAllARPinsFromLocalStore() end
---@param ComponentToPin USceneComponent
---@param TraceResult FARTraceResult
---@param DebugName FName
---@return UARPin
function UARBlueprintLibrary:PinComponentToTraceResult(ComponentToPin, TraceResult, DebugName) end
---@param ComponentToPin USceneComponent
---@param Pin UARPin
---@return boolean
function UARBlueprintLibrary:PinComponentToARPin(ComponentToPin, Pin) end
---@param ComponentToPin USceneComponent
---@param PinToWorldTransform FTransform
---@param TrackedGeometry UARTrackedGeometry
---@param DebugName FName
---@return UARPin
function UARBlueprintLibrary:PinComponent(ComponentToPin, PinToWorldTransform, TrackedGeometry, DebugName) end
function UARBlueprintLibrary:PauseARSession() end
---@return TMap<FName, UARPin>
function UARBlueprintLibrary:LoadARPinsFromLocalStore() end
---@param Start FVector
---@param End FVector
---@param bTestFeaturePoints boolean
---@param bTestGroundPlane boolean
---@param bTestPlaneExtents boolean
---@param bTestPlaneBoundaryPolygon boolean
---@return TArray<FARTraceResult>
function UARBlueprintLibrary:LineTraceTrackedObjects3D(Start, End, bTestFeaturePoints, bTestGroundPlane, bTestPlaneExtents, bTestPlaneBoundaryPolygon) end
---@param ScreenCoord FVector2D
---@param bTestFeaturePoints boolean
---@param bTestGroundPlane boolean
---@param bTestPlaneExtents boolean
---@param bTestPlaneBoundaryPolygon boolean
---@return TArray<FARTraceResult>
function UARBlueprintLibrary:LineTraceTrackedObjects(ScreenCoord, bTestFeaturePoints, bTestGroundPlane, bTestPlaneExtents, bTestPlaneBoundaryPolygon) end
---@param SessionType EARSessionType
---@return boolean
function UARBlueprintLibrary:IsSessionTypeSupported(SessionType) end
---@param SessionType EARSessionType
---@param SessionTrackingFeature EARSessionTrackingFeature
---@return boolean
function UARBlueprintLibrary:IsSessionTrackingFeatureSupported(SessionType, SessionTrackingFeature) end
---@param SessionType EARSessionType
---@param SceneReconstructionMethod EARSceneReconstruction
---@return boolean
function UARBlueprintLibrary:IsSceneReconstructionSupported(SessionType, SceneReconstructionMethod) end
---@return boolean
function UARBlueprintLibrary:IsARSupported() end
---@return boolean
function UARBlueprintLibrary:IsARPinLocalStoreSupported() end
---@return boolean
function UARBlueprintLibrary:IsARPinLocalStoreReady() end
---@return EARWorldMappingState
function UARBlueprintLibrary:GetWorldMappingStatus() end
---@return EARTrackingQualityReason
function UARBlueprintLibrary:GetTrackingQualityReason() end
---@return EARTrackingQuality
function UARBlueprintLibrary:GetTrackingQuality() end
---@param SessionType EARSessionType
---@return TArray<FARVideoFormat>
function UARBlueprintLibrary:GetSupportedVideoFormats(SessionType) end
---@return UARSessionConfig
function UARBlueprintLibrary:GetSessionConfig() end
---@return TArray<FVector>
function UARBlueprintLibrary:GetPointCloud() end
---@return UARTexture
function UARBlueprintLibrary:GetPersonSegmentationImage() end
---@return UARTexture
function UARBlueprintLibrary:GetPersonSegmentationDepthImage() end
---@param InWorldLocation FVector
---@param OutClassification EARObjectClassification
---@param OutClassificationLocation FVector
---@param MaxLocationDiff float
---@return boolean
function UARBlueprintLibrary:GetObjectClassificationAtLocation(InWorldLocation, OutClassification, OutClassificationLocation, MaxLocationDiff) end
---@return int32
function UARBlueprintLibrary:GetNumberOfTrackedFacesSupported() end
---@return UARLightEstimate
function UARBlueprintLibrary:GetCurrentLightEstimate() end
---@param OutCameraIntrinsics FARCameraIntrinsics
---@return boolean
function UARBlueprintLibrary:GetCameraIntrinsics(OutCameraIntrinsics) end
---@return UARTextureCameraImage
function UARBlueprintLibrary:GetCameraImage() end
---@return UARTextureCameraDepth
function UARBlueprintLibrary:GetCameraDepth() end
---@return float
function UARBlueprintLibrary:GetARWorldScale() end
---@param TextureType EARTextureType
---@return UARTexture
function UARBlueprintLibrary:GetARTexture(TextureType) end
---@return FARSessionStatus
function UARBlueprintLibrary:GetARSessionStatus() end
---@return TArray<UARTrackedPose>
function UARBlueprintLibrary:GetAllTrackedPoses() end
---@return TArray<UARTrackedPoint>
function UARBlueprintLibrary:GetAllTrackedPoints() end
---@return TArray<UARPlaneGeometry>
function UARBlueprintLibrary:GetAllTrackedPlanes() end
---@return TArray<UARTrackedImage>
function UARBlueprintLibrary:GetAllTrackedImages() end
---@return TArray<UAREnvironmentCaptureProbe>
function UARBlueprintLibrary:GetAllTrackedEnvironmentCaptureProbes() end
---@return TArray<FARPose2D>
function UARBlueprintLibrary:GetAllTracked2DPoses() end
---@return TArray<UARPin>
function UARBlueprintLibrary:GetAllPins() end
---@param GeometryClass TSubclassOf<UARTrackedGeometry>
---@return TArray<UARTrackedGeometry>
function UARBlueprintLibrary:GetAllGeometriesByClass(GeometryClass) end
---@return TArray<UARTrackedGeometry>
function UARBlueprintLibrary:GetAllGeometries() end
---@return FTransform
function UARBlueprintLibrary:GetAlignmentTransform() end
---@param PointName FString
---@return TArray<UARTrackedPoint>
function UARBlueprintLibrary:FindTrackedPointsByName(PointName) end
---@param TrackedGeometry UARTrackedGeometry
---@param WorldContextObject UObject
---@param Color FLinearColor
---@param OutlineThickness float
---@param PersistForSeconds float
function UARBlueprintLibrary:DebugDrawTrackedGeometry(TrackedGeometry, WorldContextObject, Color, OutlineThickness, PersistForSeconds) end
---@param ARPin UARPin
---@param WorldContextObject UObject
---@param Color FLinearColor
---@param Scale float
---@param PersistForSeconds float
function UARBlueprintLibrary:DebugDrawPin(ARPin, WorldContextObject, Color, Scale, PersistForSeconds) end
---@param StartPoints TArray<FVector>
---@param EndPoints TArray<FVector>
---@param ClosestIntersection FVector
function UARBlueprintLibrary:CalculateClosestIntersection(StartPoints, EndPoints, ClosestIntersection) end
---@param TransformInFirstCoordinateSystem FTransform
---@param TransformInSecondCoordinateSystem FTransform
---@param AlignmentTransform FTransform
function UARBlueprintLibrary:CalculateAlignmentTransform(TransformInFirstCoordinateSystem, TransformInSecondCoordinateSystem, AlignmentTransform) end
---@param WorldTransform FTransform
---@param PointName FString
---@param bDeletePointsWithSameName boolean
---@return boolean
function UARBlueprintLibrary:AddTrackedPointWithName(WorldTransform, PointName, bDeletePointsWithSameName) end
---@param SessionConfig UARSessionConfig
---@param CandidateTexture UTexture2D
---@param FriendlyName FString
---@param PhysicalWidth float
---@return UARCandidateImage
function UARBlueprintLibrary:AddRuntimeCandidateImage(SessionConfig, CandidateTexture, FriendlyName, PhysicalWidth) end
---@param Location FVector
---@param Extent FVector
---@return boolean
function UARBlueprintLibrary:AddManualEnvironmentCaptureProbe(Location, Extent) end


---@class UARCandidateImage : UDataAsset
---@field CandidateTexture UTexture2D
---@field FriendlyName FString
---@field Width float
---@field Height float
---@field Orientation EARCandidateImageOrientation
local UARCandidateImage = {}

---@return float
function UARCandidateImage:GetPhysicalWidth() end
---@return float
function UARCandidateImage:GetPhysicalHeight() end
---@return EARCandidateImageOrientation
function UARCandidateImage:GetOrientation() end
---@return FString
function UARCandidateImage:GetFriendlyName() end
---@return UTexture2D
function UARCandidateImage:GetCandidateTexture() end


---@class UARCandidateObject : UDataAsset
---@field CandidateObjectData TArray<uint8>
---@field FriendlyName FString
---@field BoundingBox FBox
local UARCandidateObject = {}

---@param NewName FString
function UARCandidateObject:SetFriendlyName(NewName) end
---@param InCandidateObject TArray<uint8>
function UARCandidateObject:SetCandidateObjectData(InCandidateObject) end
---@param InBoundingBox FBox
function UARCandidateObject:SetBoundingBox(InBoundingBox) end
---@return FString
function UARCandidateObject:GetFriendlyName() end
---@return TArray<uint8>
function UARCandidateObject:GetCandidateObjectData() end
---@return FBox
function UARCandidateObject:GetBoundingBox() end


---@class UARComponent : USceneComponent
---@field NativeID FGuid
---@field bUseDefaultReplication boolean
---@field DefaultMeshMaterial UMaterialInterface
---@field DefaultWireframeMeshMaterial UMaterialInterface
---@field MRMeshComponent UMRMeshComponent
---@field MyTrackedGeometry UARTrackedGeometry
local UARComponent = {}

function UARComponent:UpdateVisualization() end
---@param NativeID FGuid
function UARComponent:SetNativeID(NativeID) end
function UARComponent:ReceiveRemove() end
function UARComponent:OnRep_Payload() end
---@return UMRMeshComponent
function UARComponent:GetMRMesh() end


---@class UARDependencyHandler : UObject
local UARDependencyHandler = {}

---@param WorldContextObject UObject
---@param SessionConfig UARSessionConfig
---@param LatentInfo FLatentActionInfo
function UARDependencyHandler:StartARSessionLatent(WorldContextObject, SessionConfig, LatentInfo) end
---@param WorldContextObject UObject
---@param SessionConfig UARSessionConfig
---@param LatentInfo FLatentActionInfo
---@param OutPermissionResult EARServicePermissionRequestResult
function UARDependencyHandler:RequestARSessionPermission(WorldContextObject, SessionConfig, LatentInfo, OutPermissionResult) end
---@param WorldContextObject UObject
---@param LatentInfo FLatentActionInfo
---@param OutInstallResult EARServiceInstallRequestResult
function UARDependencyHandler:InstallARService(WorldContextObject, LatentInfo, OutInstallResult) end
---@return UARDependencyHandler
function UARDependencyHandler:GetARDependencyHandler() end
---@param WorldContextObject UObject
---@param LatentInfo FLatentActionInfo
---@param OutAvailability EARServiceAvailability
function UARDependencyHandler:CheckARServiceAvailability(WorldContextObject, LatentInfo, OutAvailability) end


---@class UAREnvironmentCaptureProbe : UARTrackedGeometry
---@field Extent FVector
---@field EnvironmentCaptureTexture UAREnvironmentCaptureProbeTexture
local UAREnvironmentCaptureProbe = {}

---@return FVector
function UAREnvironmentCaptureProbe:GetExtent() end
---@return UAREnvironmentCaptureProbeTexture
function UAREnvironmentCaptureProbe:GetEnvironmentCaptureTexture() end


---@class UAREnvironmentCaptureProbeTexture : UTextureCube
---@field TextureType EARTextureType
---@field Timestamp float
---@field ExternalTextureGuid FGuid
---@field Size FVector2D
local UAREnvironmentCaptureProbeTexture = {}



---@class UAREnvironmentProbeComponent : UARComponent
---@field ReplicatedPayload FAREnvironmentProbeUpdatePayload
local UAREnvironmentProbeComponent = {}

---@param NewPayload FAREnvironmentProbeUpdatePayload
function UAREnvironmentProbeComponent:ServerUpdatePayload(NewPayload) end
---@param Payload FAREnvironmentProbeUpdatePayload
function UAREnvironmentProbeComponent:ReceiveUpdate(Payload) end
---@param Payload FAREnvironmentProbeUpdatePayload
function UAREnvironmentProbeComponent:ReceiveAdd(Payload) end


---@class UARFaceComponent : UARComponent
---@field TransformSetting EARFaceTransformMixing
---@field bUpdateVertexNormal boolean
---@field bFaceOutOfScreen boolean
---@field ReplicatedPayload FARFaceUpdatePayload
local UARFaceComponent = {}

---@param NewDebugMode EFaceComponentDebugMode
function UARFaceComponent:SetFaceComponentDebugMode(NewDebugMode) end
---@param NewPayload FARFaceUpdatePayload
function UARFaceComponent:ServerUpdatePayload(NewPayload) end
---@param Payload FARFaceUpdatePayload
function UARFaceComponent:ReceiveUpdate(Payload) end
---@param Payload FARFaceUpdatePayload
function UARFaceComponent:ReceiveAdd(Payload) end


---@class UARFaceGeometry : UARTrackedGeometry
---@field LookAtTarget FVector
---@field bIsTracked boolean
---@field BlendShapes TMap<EARFaceBlendShape, float>
---@field LeftEyeTransform FTransform
---@field RightEyeTransform FTransform
local UARFaceGeometry = {}

---@param Eye EAREye
---@return FTransform
function UARFaceGeometry:GetWorldSpaceEyeTransform(Eye) end
---@param Eye EAREye
---@return FTransform
function UARFaceGeometry:GetLocalSpaceEyeTransform(Eye) end
---@param BlendShape EARFaceBlendShape
---@return float
function UARFaceGeometry:GetBlendShapeValue(BlendShape) end
---@return TMap<EARFaceBlendShape, float>
function UARFaceGeometry:GetBlendShapes() end


---@class UARGeoAnchor : UARTrackedGeometry
local UARGeoAnchor = {}

---@return float
function UARGeoAnchor:GetLongitude() end
---@return float
function UARGeoAnchor:GetLatitude() end
---@return EARAltitudeSource
function UARGeoAnchor:GetAltitudeSource() end
---@return float
function UARGeoAnchor:GetAltitudeMeters() end


---@class UARGeoAnchorComponent : UARComponent
---@field ReplicatedPayload FARGeoAnchorUpdatePayload
local UARGeoAnchorComponent = {}

---@param NewDebugMode EGeoAnchorComponentDebugMode
function UARGeoAnchorComponent:SetGeoAnchorComponentDebugMode(NewDebugMode) end
---@param NewPayload FARGeoAnchorUpdatePayload
function UARGeoAnchorComponent:ServerUpdatePayload(NewPayload) end
---@param Payload FARGeoAnchorUpdatePayload
function UARGeoAnchorComponent:ReceiveUpdate(Payload) end
---@param Payload FARGeoAnchorUpdatePayload
function UARGeoAnchorComponent:ReceiveAdd(Payload) end


---@class UARGeoTrackingSupport : UObject
local UARGeoTrackingSupport = {}

---@return UARGeoTrackingSupport
function UARGeoTrackingSupport:GetGeoTrackingSupport() end
---@return EARGeoTrackingStateReason
function UARGeoTrackingSupport:GetGeoTrackingStateReason() end
---@return EARGeoTrackingState
function UARGeoTrackingSupport:GetGeoTrackingState() end
---@return EARGeoTrackingAccuracy
function UARGeoTrackingSupport:GetGeoTrackingAccuracy() end
---@param Longitude float
---@param Latitude float
---@param AltitudeMeters float
---@param OptionalAnchorName FString
---@return boolean
function UARGeoTrackingSupport:AddGeoAnchorAtLocationWithAltitude(Longitude, Latitude, AltitudeMeters, OptionalAnchorName) end
---@param Longitude float
---@param Latitude float
---@param OptionalAnchorName FString
---@return boolean
function UARGeoTrackingSupport:AddGeoAnchorAtLocation(Longitude, Latitude, OptionalAnchorName) end


---@class UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
---@field OnSuccess FARGetCandidateObjectAsyncTaskBlueprintProxyOnSuccess
---@field OnFailed FARGetCandidateObjectAsyncTaskBlueprintProxyOnFailed
local UARGetCandidateObjectAsyncTaskBlueprintProxy = {}

---@param WorldContextObject UObject
---@param Location FVector
---@param Extent FVector
---@return UARGetCandidateObjectAsyncTaskBlueprintProxy
function UARGetCandidateObjectAsyncTaskBlueprintProxy:ARGetCandidateObject(WorldContextObject, Location, Extent) end


---@class UARImageComponent : UARComponent
---@field ReplicatedPayload FARImageUpdatePayload
local UARImageComponent = {}

---@param NewDebugMode EImageComponentDebugMode
function UARImageComponent:SetImageComponentDebugMode(NewDebugMode) end
---@param NewPayload FARImageUpdatePayload
function UARImageComponent:ServerUpdatePayload(NewPayload) end
---@param Payload FARImageUpdatePayload
function UARImageComponent:ReceiveUpdate(Payload) end
---@param Payload FARImageUpdatePayload
function UARImageComponent:ReceiveAdd(Payload) end


---@class UARLifeCycleComponent : USceneComponent
---@field OnARActorSpawnedDelegate FARLifeCycleComponentOnARActorSpawnedDelegate
---@field OnARActorToBeDestroyedDelegate FARLifeCycleComponentOnARActorToBeDestroyedDelegate
local UARLifeCycleComponent = {}

---@param ComponentClass UClass
---@param NativeID FGuid
function UARLifeCycleComponent:ServerSpawnARActor(ComponentClass, NativeID) end
---@param Actor AARActor
function UARLifeCycleComponent:ServerDestroyARActor(Actor) end
---@param Actor AARActor
function UARLifeCycleComponent:InstanceARActorToBeDestroyedDelegate__DelegateSignature(Actor) end
---@param ComponentClass UClass
---@param NativeID FGuid
---@param SpawnedActor AARActor
function UARLifeCycleComponent:InstanceARActorSpawnedDelegate__DelegateSignature(ComponentClass, NativeID, SpawnedActor) end


---@class UARLightEstimate : UObject
local UARLightEstimate = {}


---@class UARMeshComponent : UARComponent
---@field ReplicatedPayload FARMeshUpdatePayload
local UARMeshComponent = {}

---@param NewPayload FARMeshUpdatePayload
function UARMeshComponent:ServerUpdatePayload(NewPayload) end
---@param Payload FARMeshUpdatePayload
function UARMeshComponent:ReceiveUpdate(Payload) end
---@param Payload FARMeshUpdatePayload
function UARMeshComponent:ReceiveAdd(Payload) end


---@class UARMeshGeometry : UARTrackedGeometry
local UARMeshGeometry = {}

---@param InWorldLocation FVector
---@param OutClassification EARObjectClassification
---@param OutClassificationLocation FVector
---@param MaxLocationDiff float
---@return boolean
function UARMeshGeometry:GetObjectClassificationAtLocation(InWorldLocation, OutClassification, OutClassificationLocation, MaxLocationDiff) end


---@class UARObjectComponent : UARComponent
---@field ReplicatedPayload FARObjectUpdatePayload
local UARObjectComponent = {}

---@param NewPayload FARObjectUpdatePayload
function UARObjectComponent:ServerUpdatePayload(NewPayload) end
---@param Payload FARObjectUpdatePayload
function UARObjectComponent:ReceiveUpdate(Payload) end
---@param Payload FARObjectUpdatePayload
function UARObjectComponent:ReceiveAdd(Payload) end


---@class UARPin : UObject
---@field TrackedGeometry UARTrackedGeometry
---@field PinnedComponent USceneComponent
---@field LocalToTrackingTransform FTransform
---@field LocalToAlignedTrackingTransform FTransform
---@field TrackingState EARTrackingState
---@field OnARTrackingStateChanged FARPinOnARTrackingStateChanged
---@field OnARTransformUpdated FARPinOnARTransformUpdated
local UARPin = {}

---@return EARTrackingState
function UARPin:GetTrackingState() end
---@return UARTrackedGeometry
function UARPin:GetTrackedGeometry() end
---@return USceneComponent
function UARPin:GetPinnedComponent() end
---@return FTransform
function UARPin:GetLocalToWorldTransform() end
---@return FTransform
function UARPin:GetLocalToTrackingTransform() end
---@return FName
function UARPin:GetDebugName() end
---@param World UWorld
---@param Color FLinearColor
---@param Scale float
---@param PersistForSeconds float
function UARPin:DebugDraw(World, Color, Scale, PersistForSeconds) end


---@class UARPlaneComponent : UARComponent
---@field ReplicatedPayload FARPlaneUpdatePayload
local UARPlaneComponent = {}

---@param NewDebugMode EPlaneComponentDebugMode
function UARPlaneComponent:SetPlaneComponentDebugMode(NewDebugMode) end
---@param InColors TMap<EARObjectClassification, FLinearColor>
function UARPlaneComponent:SetObjectClassificationDebugColors(InColors) end
---@param NewPayload FARPlaneUpdatePayload
function UARPlaneComponent:ServerUpdatePayload(NewPayload) end
---@param Payload FARPlaneUpdatePayload
function UARPlaneComponent:ReceiveUpdate(Payload) end
---@param Payload FARPlaneUpdatePayload
function UARPlaneComponent:ReceiveAdd(Payload) end
---@return TMap<EARObjectClassification, FLinearColor>
function UARPlaneComponent:GetObjectClassificationDebugColors() end


---@class UARPlaneGeometry : UARTrackedGeometry
---@field Orientation EARPlaneOrientation
---@field Center FVector
---@field Extent FVector
---@field BoundaryPolygon TArray<FVector>
---@field SubsumedBy UARPlaneGeometry
local UARPlaneGeometry = {}

---@return UARPlaneGeometry
function UARPlaneGeometry:GetSubsumedBy() end
---@return EARPlaneOrientation
function UARPlaneGeometry:GetOrientation() end
---@return FVector
function UARPlaneGeometry:GetExtent() end
---@return FVector
function UARPlaneGeometry:GetCenter() end
---@return TArray<FVector>
function UARPlaneGeometry:GetBoundaryPolygonInLocalSpace() end


---@class UARPointComponent : UARComponent
---@field ReplicatedPayload FARPointUpdatePayload
local UARPointComponent = {}

---@param NewPayload FARPointUpdatePayload
function UARPointComponent:ServerUpdatePayload(NewPayload) end
---@param Payload FARPointUpdatePayload
function UARPointComponent:ReceiveUpdate(Payload) end
---@param Payload FARPointUpdatePayload
function UARPointComponent:ReceiveAdd(Payload) end


---@class UARPoseComponent : UARComponent
---@field ReplicatedPayload FARPoseUpdatePayload
local UARPoseComponent = {}

---@param NewDebugMode EPoseComponentDebugMode
function UARPoseComponent:SetPoseComponentDebugMode(NewDebugMode) end
---@param NewPayload FARPoseUpdatePayload
function UARPoseComponent:ServerUpdatePayload(NewPayload) end
---@param Payload FARPoseUpdatePayload
function UARPoseComponent:ReceiveUpdate(Payload) end
---@param Payload FARPoseUpdatePayload
function UARPoseComponent:ReceiveAdd(Payload) end


---@class UARQRCodeComponent : UARComponent
---@field ReplicatedPayload FARQRCodeUpdatePayload
local UARQRCodeComponent = {}

---@param NewDebugMode EQRCodeComponentDebugMode
function UARQRCodeComponent:SetQRCodeComponentDebugMode(NewDebugMode) end
---@param NewPayload FARQRCodeUpdatePayload
function UARQRCodeComponent:ServerUpdatePayload(NewPayload) end
---@param Payload FARQRCodeUpdatePayload
function UARQRCodeComponent:ReceiveUpdate(Payload) end
---@param Payload FARQRCodeUpdatePayload
function UARQRCodeComponent:ReceiveAdd(Payload) end


---@class UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
---@field OnSuccess FARSaveWorldAsyncTaskBlueprintProxyOnSuccess
---@field OnFailed FARSaveWorldAsyncTaskBlueprintProxyOnFailed
local UARSaveWorldAsyncTaskBlueprintProxy = {}

---@param WorldContextObject UObject
---@return UARSaveWorldAsyncTaskBlueprintProxy
function UARSaveWorldAsyncTaskBlueprintProxy:ARSaveWorld(WorldContextObject) end


---@class UARSessionConfig : UDataAsset
---@field bGenerateMeshDataFromTrackedGeometry boolean
---@field bGenerateCollisionForMeshData boolean
---@field bGenerateNavMeshForMeshData boolean
---@field bUseMeshDataForOcclusion boolean
---@field bRenderMeshDataInWireframe boolean
---@field bTrackSceneObjects boolean
---@field bUsePersonSegmentationForOcclusion boolean
---@field bUseSceneDepthForOcclusion boolean
---@field bUseAutomaticImageScaleEstimation boolean
---@field bUseStandardOnboardingUX boolean
---@field WorldAlignment EARWorldAlignment
---@field SessionType EARSessionType
---@field PlaneDetectionMode EARPlaneDetectionMode
---@field bHorizontalPlaneDetection boolean
---@field bVerticalPlaneDetection boolean
---@field bEnableAutoFocus boolean
---@field LightEstimationMode EARLightEstimationMode
---@field FrameSyncMode EARFrameSyncMode
---@field bEnableAutomaticCameraOverlay boolean
---@field bEnableAutomaticCameraTracking boolean
---@field bResetCameraTracking boolean
---@field bResetTrackedObjects boolean
---@field CandidateImages TArray<UARCandidateImage>
---@field MaxNumSimultaneousImagesTracked int32
---@field EnvironmentCaptureProbeType EAREnvironmentCaptureProbeType
---@field WorldMapData TArray<uint8>
---@field CandidateObjects TArray<UARCandidateObject>
---@field DesiredVideoFormat FARVideoFormat
---@field bUseOptimalVideoFormat boolean
---@field FaceTrackingDirection EARFaceTrackingDirection
---@field FaceTrackingUpdate EARFaceTrackingUpdate
---@field MaxNumberOfTrackedFaces int32
---@field SerializedARCandidateImageDatabase TArray<uint8>
---@field EnabledSessionTrackingFeature EARSessionTrackingFeature
---@field SceneReconstructionMethod EARSceneReconstruction
---@field PlaneComponentClass TSubclassOf<UARPlaneComponent>
---@field PointComponentClass TSubclassOf<UARPointComponent>
---@field FaceComponentClass TSubclassOf<UARFaceComponent>
---@field ImageComponentClass TSubclassOf<UARImageComponent>
---@field QRCodeComponentClass TSubclassOf<UARQRCodeComponent>
---@field PoseComponentClass TSubclassOf<UARPoseComponent>
---@field EnvironmentProbeComponentClass TSubclassOf<UAREnvironmentProbeComponent>
---@field ObjectComponentClass TSubclassOf<UARObjectComponent>
---@field MeshComponentClass TSubclassOf<UARMeshComponent>
---@field GeoAnchorComponentClass TSubclassOf<UARGeoAnchorComponent>
---@field DefaultMeshMaterial UMaterialInterface
---@field DefaultWireframeMeshMaterial UMaterialInterface
local UARSessionConfig = {}

---@return boolean
function UARSessionConfig:ShouldResetTrackedObjects() end
---@return boolean
function UARSessionConfig:ShouldResetCameraTracking() end
---@return boolean
function UARSessionConfig:ShouldRenderCameraOverlay() end
---@return boolean
function UARSessionConfig:ShouldEnableCameraTracking() end
---@return boolean
function UARSessionConfig:ShouldEnableAutoFocus() end
---@param WorldMapData TArray<uint8>
function UARSessionConfig:SetWorldMapData(WorldMapData) end
---@param InSessionTrackingFeature EARSessionTrackingFeature
function UARSessionConfig:SetSessionTrackingFeatureToEnable(InSessionTrackingFeature) end
---@param InSceneReconstructionMethod EARSceneReconstruction
function UARSessionConfig:SetSceneReconstructionMethod(InSceneReconstructionMethod) end
---@param bNewValue boolean
function UARSessionConfig:SetResetTrackedObjects(bNewValue) end
---@param bNewValue boolean
function UARSessionConfig:SetResetCameraTracking(bNewValue) end
---@param InUpdate EARFaceTrackingUpdate
function UARSessionConfig:SetFaceTrackingUpdate(InUpdate) end
---@param InDirection EARFaceTrackingDirection
function UARSessionConfig:SetFaceTrackingDirection(InDirection) end
---@param bNewValue boolean
function UARSessionConfig:SetEnableAutoFocus(bNewValue) end
---@param NewFormat FARVideoFormat
function UARSessionConfig:SetDesiredVideoFormat(NewFormat) end
---@param InCandidateObjects TArray<UARCandidateObject>
function UARSessionConfig:SetCandidateObjectList(InCandidateObjects) end
---@return TArray<uint8>
function UARSessionConfig:GetWorldMapData() end
---@return EARWorldAlignment
function UARSessionConfig:GetWorldAlignment() end
---@return EARSessionType
function UARSessionConfig:GetSessionType() end
---@return EARSceneReconstruction
function UARSessionConfig:GetSceneReconstructionMethod() end
---@return EARPlaneDetectionMode
function UARSessionConfig:GetPlaneDetectionMode() end
---@return int32
function UARSessionConfig:GetMaxNumSimultaneousImagesTracked() end
---@return EARLightEstimationMode
function UARSessionConfig:GetLightEstimationMode() end
---@return EARFrameSyncMode
function UARSessionConfig:GetFrameSyncMode() end
---@return EARFaceTrackingUpdate
function UARSessionConfig:GetFaceTrackingUpdate() end
---@return EARFaceTrackingDirection
function UARSessionConfig:GetFaceTrackingDirection() end
---@return EAREnvironmentCaptureProbeType
function UARSessionConfig:GetEnvironmentCaptureProbeType() end
---@return EARSessionTrackingFeature
function UARSessionConfig:GetEnabledSessionTrackingFeature() end
---@return FARVideoFormat
function UARSessionConfig:GetDesiredVideoFormat() end
---@return TArray<UARCandidateObject>
function UARSessionConfig:GetCandidateObjectList() end
---@return TArray<UARCandidateImage>
function UARSessionConfig:GetCandidateImageList() end
---@param CandidateObject UARCandidateObject
function UARSessionConfig:AddCandidateObject(CandidateObject) end
---@param NewCandidateImage UARCandidateImage
function UARSessionConfig:AddCandidateImage(NewCandidateImage) end


---@class UARTexture : UTexture
---@field TextureType EARTextureType
---@field Timestamp float
---@field ExternalTextureGuid FGuid
---@field Size FVector2D
local UARTexture = {}



---@class UARTextureCameraDepth : UARTexture
---@field DepthQuality EARDepthQuality
---@field DepthAccuracy EARDepthAccuracy
---@field bIsTemporallySmoothed boolean
local UARTextureCameraDepth = {}



---@class UARTextureCameraImage : UARTexture
local UARTextureCameraImage = {}


---@class UARTraceResultDummy : UObject
local UARTraceResultDummy = {}


---@class UARTraceResultLibrary : UBlueprintFunctionLibrary
local UARTraceResultLibrary = {}

---@param TraceResult FARTraceResult
---@return UARTrackedGeometry
function UARTraceResultLibrary:GetTrackedGeometry(TraceResult) end
---@param TraceResult FARTraceResult
---@return EARLineTraceChannels
function UARTraceResultLibrary:GetTraceChannel(TraceResult) end
---@param TraceResult FARTraceResult
---@return FTransform
function UARTraceResultLibrary:GetLocalTransform(TraceResult) end
---@param TraceResult FARTraceResult
---@return FTransform
function UARTraceResultLibrary:GetLocalToWorldTransform(TraceResult) end
---@param TraceResult FARTraceResult
---@return FTransform
function UARTraceResultLibrary:GetLocalToTrackingTransform(TraceResult) end
---@param TraceResult FARTraceResult
---@return float
function UARTraceResultLibrary:GetDistanceFromCamera(TraceResult) end


---@class UARTrackableNotifyComponent : UActorComponent
---@field OnAddTrackedGeometry FARTrackableNotifyComponentOnAddTrackedGeometry
---@field OnUpdateTrackedGeometry FARTrackableNotifyComponentOnUpdateTrackedGeometry
---@field OnRemoveTrackedGeometry FARTrackableNotifyComponentOnRemoveTrackedGeometry
---@field OnAddTrackedPlane FARTrackableNotifyComponentOnAddTrackedPlane
---@field OnUpdateTrackedPlane FARTrackableNotifyComponentOnUpdateTrackedPlane
---@field OnRemoveTrackedPlane FARTrackableNotifyComponentOnRemoveTrackedPlane
---@field OnAddTrackedPoint FARTrackableNotifyComponentOnAddTrackedPoint
---@field OnUpdateTrackedPoint FARTrackableNotifyComponentOnUpdateTrackedPoint
---@field OnRemoveTrackedPoint FARTrackableNotifyComponentOnRemoveTrackedPoint
---@field OnAddTrackedImage FARTrackableNotifyComponentOnAddTrackedImage
---@field OnUpdateTrackedImage FARTrackableNotifyComponentOnUpdateTrackedImage
---@field OnRemoveTrackedImage FARTrackableNotifyComponentOnRemoveTrackedImage
---@field OnAddTrackedFace FARTrackableNotifyComponentOnAddTrackedFace
---@field OnUpdateTrackedFace FARTrackableNotifyComponentOnUpdateTrackedFace
---@field OnRemoveTrackedFace FARTrackableNotifyComponentOnRemoveTrackedFace
---@field OnAddTrackedEnvProbe FARTrackableNotifyComponentOnAddTrackedEnvProbe
---@field OnUpdateTrackedEnvProbe FARTrackableNotifyComponentOnUpdateTrackedEnvProbe
---@field OnRemoveTrackedEnvProbe FARTrackableNotifyComponentOnRemoveTrackedEnvProbe
---@field OnAddTrackedObject FARTrackableNotifyComponentOnAddTrackedObject
---@field OnUpdateTrackedObject FARTrackableNotifyComponentOnUpdateTrackedObject
---@field OnRemoveTrackedObject FARTrackableNotifyComponentOnRemoveTrackedObject
local UARTrackableNotifyComponent = {}



---@class UARTrackedGeometry : UObject
---@field UniqueId FGuid
---@field LocalToTrackingTransform FTransform
---@field LocalToAlignedTrackingTransform FTransform
---@field TrackingState EARTrackingState
---@field UnderlyingMesh UMRMeshComponent
---@field ObjectClassification EARObjectClassification
---@field SpatialMeshUsageFlags EARSpatialMeshUsageFlags
---@field LastUpdateFrameNumber int32
---@field DebugName FName
local UARTrackedGeometry = {}

---@return boolean
function UARTrackedGeometry:IsTracked() end
---@param InFlag EARSpatialMeshUsageFlags
---@return boolean
function UARTrackedGeometry:HasSpatialMeshUsageFlag(InFlag) end
---@return UMRMeshComponent
function UARTrackedGeometry:GetUnderlyingMesh() end
---@return EARTrackingState
function UARTrackedGeometry:GetTrackingState() end
---@return EARObjectClassification
function UARTrackedGeometry:GetObjectClassification() end
---@return FString
function UARTrackedGeometry:GetName() end
---@return FTransform
function UARTrackedGeometry:GetLocalToWorldTransform() end
---@return FTransform
function UARTrackedGeometry:GetLocalToTrackingTransform() end
---@return float
function UARTrackedGeometry:GetLastUpdateTimestamp() end
---@return int32
function UARTrackedGeometry:GetLastUpdateFrameNumber() end
---@return FName
function UARTrackedGeometry:GetDebugName() end


---@class UARTrackedImage : UARTrackedGeometry
---@field DetectedImage UARCandidateImage
---@field EstimatedSize FVector2D
local UARTrackedImage = {}

---@return FVector2D
function UARTrackedImage:GetEstimateSize() end
---@return UARCandidateImage
function UARTrackedImage:GetDetectedImage() end


---@class UARTrackedObject : UARTrackedGeometry
---@field DetectedObject UARCandidateObject
local UARTrackedObject = {}

---@return UARCandidateObject
function UARTrackedObject:GetDetectedObject() end


---@class UARTrackedPoint : UARTrackedGeometry
local UARTrackedPoint = {}


---@class UARTrackedPose : UARTrackedGeometry
---@field TrackedPose FARPose3D
local UARTrackedPose = {}

---@return FARPose3D
function UARTrackedPose:GetTrackedPoseData() end


---@class UARTrackedQRCode : UARTrackedImage
---@field QRCode FString
---@field Version int32
local UARTrackedQRCode = {}



---@class UARTypesDummyClass : UObject
local UARTypesDummyClass = {}


---@class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
---@field OnSuccess FCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxyOnSuccess
---@field OnFailed FCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxyOnFailed
local UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy = {}

---@param bIsAvailable boolean
---@param Error FString
function UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy:GeoTrackingAvailabilityDelegate__DelegateSignature(bIsAvailable, Error) end
---@param WorldContextObject UObject
---@param Longitude float
---@param Latitude float
---@return UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
function UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy:CheckGeoTrackingAvailabilityAtLocation(WorldContextObject, Longitude, Latitude) end
---@param WorldContextObject UObject
---@return UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
function UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy:CheckGeoTrackingAvailability(WorldContextObject) end


---@class UGetGeoLocationAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy
---@field OnSuccess FGetGeoLocationAsyncTaskBlueprintProxyOnSuccess
---@field OnFailed FGetGeoLocationAsyncTaskBlueprintProxyOnFailed
local UGetGeoLocationAsyncTaskBlueprintProxy = {}

---@param Longitude float
---@param Latitude float
---@param Altitude float
---@param Error FString
function UGetGeoLocationAsyncTaskBlueprintProxy:GetGeoLocationDelegate__DelegateSignature(Longitude, Latitude, Altitude, Error) end
---@param WorldContextObject UObject
---@param WorldPosition FVector
---@return UGetGeoLocationAsyncTaskBlueprintProxy
function UGetGeoLocationAsyncTaskBlueprintProxy:GetGeoLocationAtWorldPosition(WorldContextObject, WorldPosition) end


