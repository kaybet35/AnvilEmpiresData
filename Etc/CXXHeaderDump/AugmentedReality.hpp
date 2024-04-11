#ifndef UE4SS_SDK_AugmentedReality_HPP
#define UE4SS_SDK_AugmentedReality_HPP

#include "AugmentedReality_enums.hpp"

struct FARCameraIntrinsics
{
    FIntPoint ImageResolution;                                                        // 0x0000 (size: 0x8)
    FVector2D FocalLength;                                                            // 0x0008 (size: 0x10)
    FVector2D PrincipalPoint;                                                         // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FAREnvironmentProbeUpdatePayload
{
    FTransform WorldTransform;                                                        // 0x0000 (size: 0x60)

}; // Size: 0x60

struct FARFaceUpdatePayload
{
    FARSessionPayload SessionPayload;                                                 // 0x0000 (size: 0x18)
    FVector LeftEyePosition;                                                          // 0x0018 (size: 0x18)
    FVector RightEyePosition;                                                         // 0x0030 (size: 0x18)
    FVector LookAtTarget;                                                             // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FARGeoAnchorUpdatePayload
{
    FARSessionPayload SessionPayload;                                                 // 0x0000 (size: 0x18)
    FTransform WorldTransform;                                                        // 0x0020 (size: 0x60)
    float Longitude;                                                                  // 0x0080 (size: 0x4)
    float Latitude;                                                                   // 0x0084 (size: 0x4)
    float AltitudeMeters;                                                             // 0x0088 (size: 0x4)
    EARAltitudeSource AltitudeSource;                                                 // 0x008C (size: 0x1)
    FString AnchorName;                                                               // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FARImageUpdatePayload
{
    FARSessionPayload SessionPayload;                                                 // 0x0000 (size: 0x18)
    FTransform WorldTransform;                                                        // 0x0020 (size: 0x60)
    class UARCandidateImage* DetectedImage;                                           // 0x0080 (size: 0x8)
    FVector2D EstimatedSize;                                                          // 0x0088 (size: 0x10)

}; // Size: 0xA0

struct FARMeshUpdatePayload
{
    FARSessionPayload SessionPayload;                                                 // 0x0000 (size: 0x18)
    FTransform WorldTransform;                                                        // 0x0020 (size: 0x60)
    EARObjectClassification ObjectClassification;                                     // 0x0080 (size: 0x1)

}; // Size: 0x90

struct FARObjectUpdatePayload
{
    FTransform WorldTransform;                                                        // 0x0000 (size: 0x60)

}; // Size: 0x60

struct FARPlaneUpdatePayload
{
    FARSessionPayload SessionPayload;                                                 // 0x0000 (size: 0x18)
    FTransform WorldTransform;                                                        // 0x0020 (size: 0x60)
    FVector Center;                                                                   // 0x0080 (size: 0x18)
    FVector Extents;                                                                  // 0x0098 (size: 0x18)
    TArray<FVector> BoundaryVertices;                                                 // 0x00B0 (size: 0x10)
    EARObjectClassification ObjectClassification;                                     // 0x00C0 (size: 0x1)

}; // Size: 0xD0

struct FARPointUpdatePayload
{
}; // Size: 0x1

struct FARPose2D
{
    FARSkeletonDefinition SkeletonDefinition;                                         // 0x0000 (size: 0x28)
    TArray<FVector2D> JointLocations;                                                 // 0x0028 (size: 0x10)
    TArray<bool> IsJointTracked;                                                      // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FARPose3D
{
    FARSkeletonDefinition SkeletonDefinition;                                         // 0x0000 (size: 0x28)
    TArray<FTransform> JointTransforms;                                               // 0x0028 (size: 0x10)
    TArray<bool> IsJointTracked;                                                      // 0x0038 (size: 0x10)
    EARJointTransformSpace JointTransformSpace;                                       // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FARPoseUpdatePayload
{
    FTransform WorldTransform;                                                        // 0x0000 (size: 0x60)
    TArray<FTransform> JointTransforms;                                               // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FARQRCodeUpdatePayload
{
    FARSessionPayload SessionPayload;                                                 // 0x0000 (size: 0x18)
    FTransform WorldTransform;                                                        // 0x0020 (size: 0x60)
    FVector Extents;                                                                  // 0x0080 (size: 0x18)
    FString QRCode;                                                                   // 0x0098 (size: 0x10)

}; // Size: 0xB0

struct FARSessionPayload
{
    int32 ConfigFlags;                                                                // 0x0000 (size: 0x4)
    class UMaterialInterface* DefaultMeshMaterial;                                    // 0x0008 (size: 0x8)
    class UMaterialInterface* DefaultWireframeMeshMaterial;                           // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FARSessionStatus
{
    FString AdditionalInfo;                                                           // 0x0000 (size: 0x10)
    EARSessionStatus Status;                                                          // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FARSharedWorldReplicationState
{
    int32 PreviewImageOffset;                                                         // 0x0000 (size: 0x4)
    int32 ARWorldOffset;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FARSkeletonDefinition
{
    int32 NumJoints;                                                                  // 0x0000 (size: 0x4)
    TArray<FName> JointNames;                                                         // 0x0008 (size: 0x10)
    TArray<int32> ParentIndices;                                                      // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FARTraceResult
{
    float DistanceFromCamera;                                                         // 0x0000 (size: 0x4)
    EARLineTraceChannels TraceChannel;                                                // 0x0004 (size: 0x1)
    FTransform LocalTransform;                                                        // 0x0010 (size: 0x60)
    class UARTrackedGeometry* TrackedGeometry;                                        // 0x0070 (size: 0x8)

}; // Size: 0x90

struct FARVideoFormat
{
    int32 FPS;                                                                        // 0x0000 (size: 0x4)
    int32 Width;                                                                      // 0x0004 (size: 0x4)
    int32 Height;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FTrackedGeometryGroup
{
    class AARActor* ARActor;                                                          // 0x0000 (size: 0x8)
    class UARComponent* ARComponent;                                                  // 0x0008 (size: 0x8)
    class UARTrackedGeometry* TrackedGeometry;                                        // 0x0010 (size: 0x8)

}; // Size: 0x18

class AARActor : public AActor
{

    class UARComponent* AddARComponent(TSubclassOf<class UARComponent> InComponentClass, const FGuid& NativeID);
}; // Size: 0x290

class AAROriginActor : public AActor
{
}; // Size: 0x290

class AARSharedWorldGameMode : public AGameMode
{
    int32 BufferSizePerChunk;                                                         // 0x0378 (size: 0x4)

    void SetPreviewImageData(TArray<uint8> ImageData);
    void SetARWorldSharingIsReady();
    void SetARSharedWorldData(TArray<uint8> ARWorldData);
    class AARSharedWorldGameState* GetARSharedWorldGameState();
}; // Size: 0x3E0

class AARSharedWorldGameState : public AGameState
{
    TArray<uint8> PreviewImageData;                                                   // 0x0300 (size: 0x10)
    TArray<uint8> ARWorldData;                                                        // 0x0310 (size: 0x10)
    int32 PreviewImageBytesTotal;                                                     // 0x0320 (size: 0x4)
    int32 ARWorldBytesTotal;                                                          // 0x0324 (size: 0x4)
    int32 PreviewImageBytesDelivered;                                                 // 0x0328 (size: 0x4)
    int32 ARWorldBytesDelivered;                                                      // 0x032C (size: 0x4)

    void K2_OnARWorldMapIsReady();
}; // Size: 0x338

class AARSharedWorldPlayerController : public APlayerController
{

    void ServerMarkReadyForReceiving();
    void ClientUpdatePreviewImageData(int32 Offset, const TArray<uint8>& Buffer);
    void ClientUpdateARWorldData(int32 Offset, const TArray<uint8>& Buffer);
    void ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize);
}; // Size: 0x858

class AARSkyLight : public ASkyLight
{
    class UAREnvironmentCaptureProbe* CaptureProbe;                                   // 0x02A0 (size: 0x8)

    void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
}; // Size: 0x2B0

class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
}; // Size: 0x50

class UARBasicLightEstimate : public UARLightEstimate
{
    float AmbientIntensityLumens;                                                     // 0x0028 (size: 0x4)
    float AmbientColorTemperatureKelvin;                                              // 0x002C (size: 0x4)
    FLinearColor AmbientColor;                                                        // 0x0030 (size: 0x10)

    float GetAmbientIntensityLumens();
    float GetAmbientColorTemperatureKelvin();
    FLinearColor GetAmbientColor();
}; // Size: 0x40

class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UnpinComponent(class USceneComponent* ComponentToUnpin);
    bool ToggleARCapture(const bool bOnOff, const EARCaptureType CaptureType);
    void StopARSession();
    void StartARSession(class UARSessionConfig* SessionConfig);
    void SetEnabledXRCamera(bool bOnOff);
    void SetARWorldScale(float InWorldScale);
    void SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection);
    void SetAlignmentTransform(const FTransform& InAlignmentTransform);
    bool SaveARPinToLocalStore(FName InSaveName, class UARPin* InPin);
    FIntPoint ResizeXRCamera(const FIntPoint& InSize);
    void RemovePin(class UARPin* PinToRemove);
    void RemoveARPinFromLocalStore(FName InSaveName);
    void RemoveAllARPinsFromLocalStore();
    class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, const FName DebugName);
    bool PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin);
    class UARPin* PinComponent(class USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const FName DebugName);
    void PauseARSession();
    TMap<class FName, class UARPin*> LoadARPinsFromLocalStore();
    TArray<FARTraceResult> LineTraceTrackedObjects3D(const FVector Start, const FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    TArray<FARTraceResult> LineTraceTrackedObjects(const FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    bool IsSessionTypeSupported(EARSessionType SessionType);
    bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
    bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);
    bool IsARSupported();
    bool IsARPinLocalStoreSupported();
    bool IsARPinLocalStoreReady();
    EARWorldMappingState GetWorldMappingStatus();
    EARTrackingQualityReason GetTrackingQualityReason();
    EARTrackingQuality GetTrackingQuality();
    TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);
    class UARSessionConfig* GetSessionConfig();
    TArray<FVector> GetPointCloud();
    class UARTexture* GetPersonSegmentationImage();
    class UARTexture* GetPersonSegmentationDepthImage();
    bool GetObjectClassificationAtLocation(const FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff);
    int32 GetNumberOfTrackedFacesSupported();
    class UARLightEstimate* GetCurrentLightEstimate();
    bool GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics);
    class UARTextureCameraImage* GetCameraImage();
    class UARTextureCameraDepth* GetCameraDepth();
    float GetARWorldScale();
    class UARTexture* GetARTexture(EARTextureType TextureType);
    FARSessionStatus GetARSessionStatus();
    TArray<class UARTrackedPose*> GetAllTrackedPoses();
    TArray<class UARTrackedPoint*> GetAllTrackedPoints();
    TArray<class UARPlaneGeometry*> GetAllTrackedPlanes();
    TArray<class UARTrackedImage*> GetAllTrackedImages();
    TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
    TArray<FARPose2D> GetAllTracked2DPoses();
    TArray<class UARPin*> GetAllPins();
    TArray<class UARTrackedGeometry*> GetAllGeometriesByClass(TSubclassOf<class UARTrackedGeometry> GeometryClass);
    TArray<class UARTrackedGeometry*> GetAllGeometries();
    FTransform GetAlignmentTransform();
    TArray<class UARTrackedPoint*> FindTrackedPointsByName(FString PointName);
    void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds);
    void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds);
    void CalculateClosestIntersection(const TArray<FVector>& StartPoints, const TArray<FVector>& EndPoints, FVector& ClosestIntersection);
    void CalculateAlignmentTransform(const FTransform& TransformInFirstCoordinateSystem, const FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform);
    bool AddTrackedPointWithName(const FTransform& WorldTransform, FString PointName, bool bDeletePointsWithSameName);
    class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth);
    bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);
}; // Size: 0x28

class UARCandidateImage : public UDataAsset
{
    class UTexture2D* CandidateTexture;                                               // 0x0030 (size: 0x8)
    FString FriendlyName;                                                             // 0x0038 (size: 0x10)
    float Width;                                                                      // 0x0048 (size: 0x4)
    float Height;                                                                     // 0x004C (size: 0x4)
    EARCandidateImageOrientation Orientation;                                         // 0x0050 (size: 0x1)

    float GetPhysicalWidth();
    float GetPhysicalHeight();
    EARCandidateImageOrientation GetOrientation();
    FString GetFriendlyName();
    class UTexture2D* GetCandidateTexture();
}; // Size: 0x58

class UARCandidateObject : public UDataAsset
{
    TArray<uint8> CandidateObjectData;                                                // 0x0030 (size: 0x10)
    FString FriendlyName;                                                             // 0x0040 (size: 0x10)
    FBox BoundingBox;                                                                 // 0x0050 (size: 0x38)

    void SetFriendlyName(FString NewName);
    void SetCandidateObjectData(const TArray<uint8>& InCandidateObject);
    void SetBoundingBox(const FBox& InBoundingBox);
    FString GetFriendlyName();
    TArray<uint8> GetCandidateObjectData();
    FBox GetBoundingBox();
}; // Size: 0x88

class UARComponent : public USceneComponent
{
    FGuid NativeID;                                                                   // 0x02A0 (size: 0x10)
    bool bUseDefaultReplication;                                                      // 0x02E0 (size: 0x1)
    class UMaterialInterface* DefaultMeshMaterial;                                    // 0x02E8 (size: 0x8)
    class UMaterialInterface* DefaultWireframeMeshMaterial;                           // 0x02F0 (size: 0x8)
    class UMRMeshComponent* MRMeshComponent;                                          // 0x02F8 (size: 0x8)
    class UARTrackedGeometry* MyTrackedGeometry;                                      // 0x0300 (size: 0x8)

    void UpdateVisualization();
    void SetNativeID(FGuid NativeID);
    void ReceiveRemove();
    void OnRep_Payload();
    class UMRMeshComponent* GetMRMesh();
}; // Size: 0x320

class UARDependencyHandler : public UObject
{

    void StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo);
    void RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult);
    void InstallARService(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult);
    class UARDependencyHandler* GetARDependencyHandler();
    void CheckARServiceAvailability(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability);
}; // Size: 0x28

class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
    FVector Extent;                                                                   // 0x0158 (size: 0x18)
    class UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;               // 0x0170 (size: 0x8)

    FVector GetExtent();
    class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
}; // Size: 0x180

class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
    EARTextureType TextureType;                                                       // 0x0290 (size: 0x1)
    float Timestamp;                                                                  // 0x0294 (size: 0x4)
    FGuid ExternalTextureGuid;                                                        // 0x0298 (size: 0x10)
    FVector2D Size;                                                                   // 0x02A8 (size: 0x10)

}; // Size: 0x2C0

class UAREnvironmentProbeComponent : public UARComponent
{
    FAREnvironmentProbeUpdatePayload ReplicatedPayload;                               // 0x0320 (size: 0x60)

    void ServerUpdatePayload(const FAREnvironmentProbeUpdatePayload& NewPayload);
    void ReceiveUpdate(const FAREnvironmentProbeUpdatePayload& Payload);
    void ReceiveAdd(const FAREnvironmentProbeUpdatePayload& Payload);
}; // Size: 0x380

class UARFaceComponent : public UARComponent
{
    EARFaceTransformMixing TransformSetting;                                          // 0x0320 (size: 0x1)
    bool bUpdateVertexNormal;                                                         // 0x0321 (size: 0x1)
    bool bFaceOutOfScreen;                                                            // 0x0322 (size: 0x1)
    FARFaceUpdatePayload ReplicatedPayload;                                           // 0x0328 (size: 0x60)

    void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARFaceUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARFaceUpdatePayload& Payload);
    void ReceiveAdd(const FARFaceUpdatePayload& Payload);
}; // Size: 0x3B0

class UARFaceGeometry : public UARTrackedGeometry
{
    FVector LookAtTarget;                                                             // 0x0158 (size: 0x18)
    bool bIsTracked;                                                                  // 0x0170 (size: 0x1)
    TMap<EARFaceBlendShape, float> BlendShapes;                                       // 0x0178 (size: 0x50)
    FTransform LeftEyeTransform;                                                      // 0x0200 (size: 0x60)
    FTransform RightEyeTransform;                                                     // 0x0260 (size: 0x60)

    FTransform GetWorldSpaceEyeTransform(EAREye Eye);
    FTransform GetLocalSpaceEyeTransform(EAREye Eye);
    float GetBlendShapeValue(EARFaceBlendShape BlendShape);
    TMap<EARFaceBlendShape, float> GetBlendShapes();
}; // Size: 0x2C0

class UARGeoAnchor : public UARTrackedGeometry
{

    float GetLongitude();
    float GetLatitude();
    EARAltitudeSource GetAltitudeSource();
    float GetAltitudeMeters();
}; // Size: 0x170

class UARGeoAnchorComponent : public UARComponent
{
    FARGeoAnchorUpdatePayload ReplicatedPayload;                                      // 0x0320 (size: 0xA0)

    void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARGeoAnchorUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARGeoAnchorUpdatePayload& Payload);
    void ReceiveAdd(const FARGeoAnchorUpdatePayload& Payload);
}; // Size: 0x3C0

class UARGeoTrackingSupport : public UObject
{

    class UARGeoTrackingSupport* GetGeoTrackingSupport();
    EARGeoTrackingStateReason GetGeoTrackingStateReason();
    EARGeoTrackingState GetGeoTrackingState();
    EARGeoTrackingAccuracy GetGeoTrackingAccuracy();
    bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, FString OptionalAnchorName);
    bool AddGeoAnchorAtLocation(float Longitude, float Latitude, FString OptionalAnchorName);
}; // Size: 0x28

class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnSuccess OnSuccess;                  // 0x0050 (size: 0x10)
    void ARGetCandidateObjectPin(class UARCandidateObject* SavedObject);
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnFailed OnFailed;                    // 0x0060 (size: 0x10)
    void ARGetCandidateObjectPin(class UARCandidateObject* SavedObject);

    class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, FVector Location, FVector Extent);
}; // Size: 0xB0

class UARImageComponent : public UARComponent
{
    FARImageUpdatePayload ReplicatedPayload;                                          // 0x0320 (size: 0xA0)

    void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARImageUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARImageUpdatePayload& Payload);
    void ReceiveAdd(const FARImageUpdatePayload& Payload);
}; // Size: 0x3C0

class UARLifeCycleComponent : public USceneComponent
{
    FARLifeCycleComponentOnARActorSpawnedDelegate OnARActorSpawnedDelegate;           // 0x02A0 (size: 0x10)
    void InstanceARActorSpawnedDelegate(UClass* ComponentClass, FGuid NativeID, class AARActor* SpawnedActor);
    FARLifeCycleComponentOnARActorToBeDestroyedDelegate OnARActorToBeDestroyedDelegate; // 0x02B0 (size: 0x10)
    void InstanceARActorToBeDestroyedDelegate(class AARActor* Actor);

    void ServerSpawnARActor(UClass* ComponentClass, FGuid NativeID);
    void ServerDestroyARActor(class AARActor* Actor);
    void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor);
    void InstanceARActorSpawnedDelegate__DelegateSignature(UClass* ComponentClass, FGuid NativeID, class AARActor* SpawnedActor);
}; // Size: 0x2D0

class UARLightEstimate : public UObject
{
}; // Size: 0x28

class UARMeshComponent : public UARComponent
{
    FARMeshUpdatePayload ReplicatedPayload;                                           // 0x0320 (size: 0x90)

    void ServerUpdatePayload(const FARMeshUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARMeshUpdatePayload& Payload);
    void ReceiveAdd(const FARMeshUpdatePayload& Payload);
}; // Size: 0x3B0

class UARMeshGeometry : public UARTrackedGeometry
{

    bool GetObjectClassificationAtLocation(const FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff);
}; // Size: 0x160

class UARObjectComponent : public UARComponent
{
    FARObjectUpdatePayload ReplicatedPayload;                                         // 0x0320 (size: 0x60)

    void ServerUpdatePayload(const FARObjectUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARObjectUpdatePayload& Payload);
    void ReceiveAdd(const FARObjectUpdatePayload& Payload);
}; // Size: 0x380

class UARPin : public UObject
{
    class UARTrackedGeometry* TrackedGeometry;                                        // 0x0028 (size: 0x8)
    class USceneComponent* PinnedComponent;                                           // 0x0030 (size: 0x8)
    FTransform LocalToTrackingTransform;                                              // 0x0040 (size: 0x60)
    FTransform LocalToAlignedTrackingTransform;                                       // 0x00A0 (size: 0x60)
    EARTrackingState TrackingState;                                                   // 0x0100 (size: 0x1)
    FARPinOnARTrackingStateChanged OnARTrackingStateChanged;                          // 0x0120 (size: 0x10)
    void OnARTrackingStateChanged(EARTrackingState NewTrackingState);
    FARPinOnARTransformUpdated OnARTransformUpdated;                                  // 0x0130 (size: 0x10)
    void OnARTransformUpdated(const FTransform& OldToNewTransform);

    EARTrackingState GetTrackingState();
    class UARTrackedGeometry* GetTrackedGeometry();
    class USceneComponent* GetPinnedComponent();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    FName GetDebugName();
    void DebugDraw(class UWorld* World, const FLinearColor& Color, float Scale, float PersistForSeconds);
}; // Size: 0x150

class UARPlaneComponent : public UARComponent
{
    FARPlaneUpdatePayload ReplicatedPayload;                                          // 0x0320 (size: 0xD0)

    void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);
    void SetObjectClassificationDebugColors(const TMap<class EARObjectClassification, class FLinearColor>& InColors);
    void ServerUpdatePayload(const FARPlaneUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARPlaneUpdatePayload& Payload);
    void ReceiveAdd(const FARPlaneUpdatePayload& Payload);
    TMap<class EARObjectClassification, class FLinearColor> GetObjectClassificationDebugColors();
}; // Size: 0x3F0

class UARPlaneGeometry : public UARTrackedGeometry
{
    EARPlaneOrientation Orientation;                                                  // 0x0158 (size: 0x1)
    FVector Center;                                                                   // 0x0160 (size: 0x18)
    FVector Extent;                                                                   // 0x0178 (size: 0x18)
    TArray<FVector> BoundaryPolygon;                                                  // 0x0190 (size: 0x10)
    class UARPlaneGeometry* SubsumedBy;                                               // 0x01A0 (size: 0x8)

    class UARPlaneGeometry* GetSubsumedBy();
    EARPlaneOrientation GetOrientation();
    FVector GetExtent();
    FVector GetCenter();
    TArray<FVector> GetBoundaryPolygonInLocalSpace();
}; // Size: 0x1B0

class UARPointComponent : public UARComponent
{
    FARPointUpdatePayload ReplicatedPayload;                                          // 0x0320 (size: 0x1)

    void ServerUpdatePayload(const FARPointUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARPointUpdatePayload& Payload);
    void ReceiveAdd(const FARPointUpdatePayload& Payload);
}; // Size: 0x330

class UARPoseComponent : public UARComponent
{
    FARPoseUpdatePayload ReplicatedPayload;                                           // 0x0320 (size: 0x70)

    void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARPoseUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARPoseUpdatePayload& Payload);
    void ReceiveAdd(const FARPoseUpdatePayload& Payload);
}; // Size: 0x390

class UARQRCodeComponent : public UARComponent
{
    FARQRCodeUpdatePayload ReplicatedPayload;                                         // 0x0320 (size: 0xB0)

    void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARQRCodeUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARQRCodeUpdatePayload& Payload);
    void ReceiveAdd(const FARQRCodeUpdatePayload& Payload);
}; // Size: 0x3D0

class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FARSaveWorldAsyncTaskBlueprintProxyOnSuccess OnSuccess;                           // 0x0050 (size: 0x10)
    void ARSaveWorldPin(const TArray<uint8>& SavedWorld);
    FARSaveWorldAsyncTaskBlueprintProxyOnFailed OnFailed;                             // 0x0060 (size: 0x10)
    void ARSaveWorldPin(const TArray<uint8>& SavedWorld);

    class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);
}; // Size: 0x80

class UARSessionConfig : public UDataAsset
{
    bool bGenerateMeshDataFromTrackedGeometry;                                        // 0x0030 (size: 0x1)
    bool bGenerateCollisionForMeshData;                                               // 0x0031 (size: 0x1)
    bool bGenerateNavMeshForMeshData;                                                 // 0x0032 (size: 0x1)
    bool bUseMeshDataForOcclusion;                                                    // 0x0033 (size: 0x1)
    bool bRenderMeshDataInWireframe;                                                  // 0x0034 (size: 0x1)
    bool bTrackSceneObjects;                                                          // 0x0035 (size: 0x1)
    bool bUsePersonSegmentationForOcclusion;                                          // 0x0036 (size: 0x1)
    bool bUseSceneDepthForOcclusion;                                                  // 0x0037 (size: 0x1)
    bool bUseAutomaticImageScaleEstimation;                                           // 0x0038 (size: 0x1)
    bool bUseStandardOnboardingUX;                                                    // 0x0039 (size: 0x1)
    EARWorldAlignment WorldAlignment;                                                 // 0x003A (size: 0x1)
    EARSessionType SessionType;                                                       // 0x003B (size: 0x1)
    EARPlaneDetectionMode PlaneDetectionMode;                                         // 0x003C (size: 0x1)
    bool bHorizontalPlaneDetection;                                                   // 0x003D (size: 0x1)
    bool bVerticalPlaneDetection;                                                     // 0x003E (size: 0x1)
    bool bEnableAutoFocus;                                                            // 0x003F (size: 0x1)
    EARLightEstimationMode LightEstimationMode;                                       // 0x0040 (size: 0x1)
    EARFrameSyncMode FrameSyncMode;                                                   // 0x0041 (size: 0x1)
    bool bEnableAutomaticCameraOverlay;                                               // 0x0042 (size: 0x1)
    bool bEnableAutomaticCameraTracking;                                              // 0x0043 (size: 0x1)
    bool bResetCameraTracking;                                                        // 0x0044 (size: 0x1)
    bool bResetTrackedObjects;                                                        // 0x0045 (size: 0x1)
    TArray<class UARCandidateImage*> CandidateImages;                                 // 0x0048 (size: 0x10)
    int32 MaxNumSimultaneousImagesTracked;                                            // 0x0058 (size: 0x4)
    EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType;                       // 0x005C (size: 0x1)
    TArray<uint8> WorldMapData;                                                       // 0x0060 (size: 0x10)
    TArray<class UARCandidateObject*> CandidateObjects;                               // 0x0070 (size: 0x10)
    FARVideoFormat DesiredVideoFormat;                                                // 0x0080 (size: 0xC)
    bool bUseOptimalVideoFormat;                                                      // 0x008C (size: 0x1)
    EARFaceTrackingDirection FaceTrackingDirection;                                   // 0x008D (size: 0x1)
    EARFaceTrackingUpdate FaceTrackingUpdate;                                         // 0x008E (size: 0x1)
    int32 MaxNumberOfTrackedFaces;                                                    // 0x0090 (size: 0x4)
    TArray<uint8> SerializedARCandidateImageDatabase;                                 // 0x0098 (size: 0x10)
    EARSessionTrackingFeature EnabledSessionTrackingFeature;                          // 0x00A8 (size: 0x1)
    EARSceneReconstruction SceneReconstructionMethod;                                 // 0x00A9 (size: 0x1)
    TSubclassOf<class UARPlaneComponent> PlaneComponentClass;                         // 0x00B0 (size: 0x8)
    TSubclassOf<class UARPointComponent> PointComponentClass;                         // 0x00B8 (size: 0x8)
    TSubclassOf<class UARFaceComponent> FaceComponentClass;                           // 0x00C0 (size: 0x8)
    TSubclassOf<class UARImageComponent> ImageComponentClass;                         // 0x00C8 (size: 0x8)
    TSubclassOf<class UARQRCodeComponent> QRCodeComponentClass;                       // 0x00D0 (size: 0x8)
    TSubclassOf<class UARPoseComponent> PoseComponentClass;                           // 0x00D8 (size: 0x8)
    TSubclassOf<class UAREnvironmentProbeComponent> EnvironmentProbeComponentClass;   // 0x00E0 (size: 0x8)
    TSubclassOf<class UARObjectComponent> ObjectComponentClass;                       // 0x00E8 (size: 0x8)
    TSubclassOf<class UARMeshComponent> MeshComponentClass;                           // 0x00F0 (size: 0x8)
    TSubclassOf<class UARGeoAnchorComponent> GeoAnchorComponentClass;                 // 0x00F8 (size: 0x8)
    class UMaterialInterface* DefaultMeshMaterial;                                    // 0x0100 (size: 0x8)
    class UMaterialInterface* DefaultWireframeMeshMaterial;                           // 0x0108 (size: 0x8)

    bool ShouldResetTrackedObjects();
    bool ShouldResetCameraTracking();
    bool ShouldRenderCameraOverlay();
    bool ShouldEnableCameraTracking();
    bool ShouldEnableAutoFocus();
    void SetWorldMapData(TArray<uint8> WorldMapData);
    void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
    void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);
    void SetResetTrackedObjects(bool bNewValue);
    void SetResetCameraTracking(bool bNewValue);
    void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
    void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
    void SetEnableAutoFocus(bool bNewValue);
    void SetDesiredVideoFormat(FARVideoFormat NewFormat);
    void SetCandidateObjectList(const TArray<class UARCandidateObject*>& InCandidateObjects);
    TArray<uint8> GetWorldMapData();
    EARWorldAlignment GetWorldAlignment();
    EARSessionType GetSessionType();
    EARSceneReconstruction GetSceneReconstructionMethod();
    EARPlaneDetectionMode GetPlaneDetectionMode();
    int32 GetMaxNumSimultaneousImagesTracked();
    EARLightEstimationMode GetLightEstimationMode();
    EARFrameSyncMode GetFrameSyncMode();
    EARFaceTrackingUpdate GetFaceTrackingUpdate();
    EARFaceTrackingDirection GetFaceTrackingDirection();
    EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
    EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
    FARVideoFormat GetDesiredVideoFormat();
    TArray<class UARCandidateObject*> GetCandidateObjectList();
    TArray<class UARCandidateImage*> GetCandidateImageList();
    void AddCandidateObject(class UARCandidateObject* CandidateObject);
    void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
}; // Size: 0x110

class UARTexture : public UTexture
{
    EARTextureType TextureType;                                                       // 0x01F0 (size: 0x1)
    float Timestamp;                                                                  // 0x01F4 (size: 0x4)
    FGuid ExternalTextureGuid;                                                        // 0x01F8 (size: 0x10)
    FVector2D Size;                                                                   // 0x0208 (size: 0x10)

}; // Size: 0x220

class UARTextureCameraDepth : public UARTexture
{
    EARDepthQuality DepthQuality;                                                     // 0x0218 (size: 0x1)
    EARDepthAccuracy DepthAccuracy;                                                   // 0x0219 (size: 0x1)
    bool bIsTemporallySmoothed;                                                       // 0x021A (size: 0x1)

}; // Size: 0x220

class UARTextureCameraImage : public UARTexture
{
}; // Size: 0x220

class UARTraceResultDummy : public UObject
{
}; // Size: 0x28

class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{

    class UARTrackedGeometry* GetTrackedGeometry(const FARTraceResult& TraceResult);
    EARLineTraceChannels GetTraceChannel(const FARTraceResult& TraceResult);
    FTransform GetLocalTransform(const FARTraceResult& TraceResult);
    FTransform GetLocalToWorldTransform(const FARTraceResult& TraceResult);
    FTransform GetLocalToTrackingTransform(const FARTraceResult& TraceResult);
    float GetDistanceFromCamera(const FARTraceResult& TraceResult);
}; // Size: 0x28

class UARTrackableNotifyComponent : public UActorComponent
{
    FARTrackableNotifyComponentOnAddTrackedGeometry OnAddTrackedGeometry;             // 0x00A0 (size: 0x10)
    void TrackableDelegate(class UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnUpdateTrackedGeometry OnUpdateTrackedGeometry;       // 0x00B0 (size: 0x10)
    void TrackableDelegate(class UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnRemoveTrackedGeometry OnRemoveTrackedGeometry;       // 0x00C0 (size: 0x10)
    void TrackableDelegate(class UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnAddTrackedPlane OnAddTrackedPlane;                   // 0x00D0 (size: 0x10)
    void TrackablePlaneDelegate(class UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnUpdateTrackedPlane OnUpdateTrackedPlane;             // 0x00E0 (size: 0x10)
    void TrackablePlaneDelegate(class UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnRemoveTrackedPlane OnRemoveTrackedPlane;             // 0x00F0 (size: 0x10)
    void TrackablePlaneDelegate(class UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnAddTrackedPoint OnAddTrackedPoint;                   // 0x0100 (size: 0x10)
    void TrackablePointDelegate(class UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnUpdateTrackedPoint OnUpdateTrackedPoint;             // 0x0110 (size: 0x10)
    void TrackablePointDelegate(class UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnRemoveTrackedPoint OnRemoveTrackedPoint;             // 0x0120 (size: 0x10)
    void TrackablePointDelegate(class UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnAddTrackedImage OnAddTrackedImage;                   // 0x0130 (size: 0x10)
    void TrackableImageDelegate(class UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnUpdateTrackedImage OnUpdateTrackedImage;             // 0x0140 (size: 0x10)
    void TrackableImageDelegate(class UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnRemoveTrackedImage OnRemoveTrackedImage;             // 0x0150 (size: 0x10)
    void TrackableImageDelegate(class UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnAddTrackedFace OnAddTrackedFace;                     // 0x0160 (size: 0x10)
    void TrackableFaceDelegate(class UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnUpdateTrackedFace OnUpdateTrackedFace;               // 0x0170 (size: 0x10)
    void TrackableFaceDelegate(class UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnRemoveTrackedFace OnRemoveTrackedFace;               // 0x0180 (size: 0x10)
    void TrackableFaceDelegate(class UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnAddTrackedEnvProbe OnAddTrackedEnvProbe;             // 0x0190 (size: 0x10)
    void TrackableEnvProbeDelegate(class UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnUpdateTrackedEnvProbe OnUpdateTrackedEnvProbe;       // 0x01A0 (size: 0x10)
    void TrackableEnvProbeDelegate(class UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnRemoveTrackedEnvProbe OnRemoveTrackedEnvProbe;       // 0x01B0 (size: 0x10)
    void TrackableEnvProbeDelegate(class UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnAddTrackedObject OnAddTrackedObject;                 // 0x01C0 (size: 0x10)
    void TrackableObjectDelegate(class UARTrackedObject* TrackedObject);
    FARTrackableNotifyComponentOnUpdateTrackedObject OnUpdateTrackedObject;           // 0x01D0 (size: 0x10)
    void TrackableObjectDelegate(class UARTrackedObject* TrackedObject);
    FARTrackableNotifyComponentOnRemoveTrackedObject OnRemoveTrackedObject;           // 0x01E0 (size: 0x10)
    void TrackableObjectDelegate(class UARTrackedObject* TrackedObject);

}; // Size: 0x1F0

class UARTrackedGeometry : public UObject
{
    FGuid UniqueId;                                                                   // 0x0028 (size: 0x10)
    FTransform LocalToTrackingTransform;                                              // 0x0040 (size: 0x60)
    FTransform LocalToAlignedTrackingTransform;                                       // 0x00A0 (size: 0x60)
    EARTrackingState TrackingState;                                                   // 0x0100 (size: 0x1)
    class UMRMeshComponent* UnderlyingMesh;                                           // 0x0110 (size: 0x8)
    EARObjectClassification ObjectClassification;                                     // 0x0118 (size: 0x1)
    EARSpatialMeshUsageFlags SpatialMeshUsageFlags;                                   // 0x0119 (size: 0x1)
    int32 LastUpdateFrameNumber;                                                      // 0x0130 (size: 0x4)
    FName DebugName;                                                                  // 0x0140 (size: 0x8)

    bool IsTracked();
    bool HasSpatialMeshUsageFlag(const EARSpatialMeshUsageFlags InFlag);
    class UMRMeshComponent* GetUnderlyingMesh();
    EARTrackingState GetTrackingState();
    EARObjectClassification GetObjectClassification();
    FString GetName();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    float GetLastUpdateTimestamp();
    int32 GetLastUpdateFrameNumber();
    FName GetDebugName();
}; // Size: 0x160

class UARTrackedImage : public UARTrackedGeometry
{
    class UARCandidateImage* DetectedImage;                                           // 0x0158 (size: 0x8)
    FVector2D EstimatedSize;                                                          // 0x0160 (size: 0x10)

    FVector2D GetEstimateSize();
    class UARCandidateImage* GetDetectedImage();
}; // Size: 0x170

class UARTrackedObject : public UARTrackedGeometry
{
    class UARCandidateObject* DetectedObject;                                         // 0x0158 (size: 0x8)

    class UARCandidateObject* GetDetectedObject();
}; // Size: 0x160

class UARTrackedPoint : public UARTrackedGeometry
{
}; // Size: 0x160

class UARTrackedPose : public UARTrackedGeometry
{
    FARPose3D TrackedPose;                                                            // 0x0158 (size: 0x50)

    FARPose3D GetTrackedPoseData();
}; // Size: 0x1B0

class UARTrackedQRCode : public UARTrackedImage
{
    FString QRCode;                                                                   // 0x0170 (size: 0x10)
    int32 Version;                                                                    // 0x0180 (size: 0x4)

}; // Size: 0x190

class UARTypesDummyClass : public UObject
{
}; // Size: 0x28

class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxyOnSuccess OnSuccess;          // 0x0050 (size: 0x10)
    void GeoTrackingAvailabilityDelegate(bool bIsAvailable, FString Error);
    FCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxyOnFailed OnFailed;            // 0x0060 (size: 0x10)
    void GeoTrackingAvailabilityDelegate(bool bIsAvailable, FString Error);

    void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error);
    class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude);
    class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(class UObject* WorldContextObject);
}; // Size: 0xA0

class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FGetGeoLocationAsyncTaskBlueprintProxyOnSuccess OnSuccess;                        // 0x0050 (size: 0x10)
    void GetGeoLocationDelegate(float Longitude, float Latitude, float Altitude, FString Error);
    FGetGeoLocationAsyncTaskBlueprintProxyOnFailed OnFailed;                          // 0x0060 (size: 0x10)
    void GetGeoLocationDelegate(float Longitude, float Latitude, float Altitude, FString Error);

    void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error);
    class UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const FVector& WorldPosition);
}; // Size: 0xA8

#endif
