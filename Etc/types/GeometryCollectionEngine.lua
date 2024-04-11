---@meta

---@class AGeometryCollectionActor : AActor
---@field GeometryCollectionComponent UGeometryCollectionComponent
---@field GeometryCollectionDebugDrawComponent UGeometryCollectionDebugDrawComponent
AGeometryCollectionActor = {}

---@param Start FVector
---@param End FVector
---@param OutHit FHitResult
---@return boolean
function AGeometryCollectionActor:RaycastSingle(Start, End, OutHit) end


---@class AGeometryCollectionDebugDrawActor : AActor
---@field WarningMessage FGeometryCollectionDebugDrawWarningMessage
---@field SelectedRigidBody FGeometryCollectionDebugDrawActorSelectedRigidBody
---@field bDebugDrawWholeCollection boolean
---@field bDebugDrawHierarchy boolean
---@field bDebugDrawClustering boolean
---@field HideGeometry EGeometryCollectionDebugDrawActorHideGeometry
---@field bShowRigidBodyId boolean
---@field bShowRigidBodyCollision boolean
---@field bCollisionAtOrigin boolean
---@field bShowRigidBodyTransform boolean
---@field bShowRigidBodyInertia boolean
---@field bShowRigidBodyVelocity boolean
---@field bShowRigidBodyForce boolean
---@field bShowRigidBodyInfos boolean
---@field bShowTransformIndex boolean
---@field bShowTransform boolean
---@field bShowParent boolean
---@field bShowLevel boolean
---@field bShowConnectivityEdges boolean
---@field bShowGeometryIndex boolean
---@field bShowGeometryTransform boolean
---@field bShowBoundingBox boolean
---@field bShowFaces boolean
---@field bShowFaceIndices boolean
---@field bShowFaceNormals boolean
---@field bShowSingleFace boolean
---@field SingleFaceIndex int32
---@field bShowVertices boolean
---@field bShowVertexIndices boolean
---@field bShowVertexNormals boolean
---@field bUseActiveVisualization boolean
---@field PointThickness float
---@field LineThickness float
---@field bTextShadow boolean
---@field TextScale float
---@field NormalScale float
---@field AxisScale float
---@field ArrowScale float
---@field RigidBodyIdColor FColor
---@field RigidBodyTransformScale float
---@field RigidBodyCollisionColor FColor
---@field RigidBodyInertiaColor FColor
---@field RigidBodyVelocityColor FColor
---@field RigidBodyForceColor FColor
---@field RigidBodyInfoColor FColor
---@field TransformIndexColor FColor
---@field TransformScale float
---@field LevelColor FColor
---@field ParentColor FColor
---@field ConnectivityEdgeThickness float
---@field GeometryIndexColor FColor
---@field GeometryTransformScale float
---@field BoundingBoxColor FColor
---@field FaceColor FColor
---@field FaceIndexColor FColor
---@field FaceNormalColor FColor
---@field SingleFaceColor FColor
---@field VertexColor FColor
---@field VertexIndexColor FColor
---@field VertexNormalColor FColor
---@field SpriteComponent UBillboardComponent
AGeometryCollectionDebugDrawActor = {}



---@class AGeometryCollectionISMPoolActor : AActor
---@field ISMPoolComp UGeometryCollectionISMPoolComponent
AGeometryCollectionISMPoolActor = {}



---@class AGeometryCollectionRenderLevelSetActor : AActor
---@field TargetVolumeTexture UVolumeTexture
---@field RayMarchMaterial UMaterial
---@field SurfaceTolerance float
---@field Isovalue float
---@field Enabled boolean
---@field RenderVolumeBoundingBox boolean
AGeometryCollectionRenderLevelSetActor = {}



---@class FChaosBreakingEventData
---@field Location FVector
---@field Velocity FVector
---@field Mass float
FChaosBreakingEventData = {}



---@class FChaosBreakingEventRequestSettings
---@field MaxNumberOfResults int32
---@field MinRadius float
---@field MinSpeed float
---@field MinMass float
---@field MaxDistance float
---@field SortMethod EChaosBreakingSortMethod
FChaosBreakingEventRequestSettings = {}



---@class FChaosCollisionEventData
---@field Location FVector
---@field Normal FVector
---@field Velocity1 FVector
---@field Velocity2 FVector
---@field Mass1 float
---@field Mass2 float
---@field Impulse FVector
FChaosCollisionEventData = {}



---@class FChaosCollisionEventRequestSettings
---@field MaxNumberResults int32
---@field MinMass float
---@field MinSpeed float
---@field MinImpulse float
---@field MaxDistance float
---@field SortMethod EChaosCollisionSortMethod
FChaosCollisionEventRequestSettings = {}



---@class FChaosRemovalEventData
---@field Location FVector
---@field Mass float
---@field ParticleIndex int32
FChaosRemovalEventData = {}



---@class FChaosRemovalEventRequestSettings
---@field MaxNumberOfResults int32
---@field MinMass float
---@field MaxDistance float
---@field SortMethod EChaosRemovalSortMethod
FChaosRemovalEventRequestSettings = {}



---@class FChaosTrailingEventData
---@field Location FVector
---@field Velocity FVector
---@field AngularVelocity FVector
---@field Mass float
---@field ParticleIndex int32
FChaosTrailingEventData = {}



---@class FChaosTrailingEventRequestSettings
---@field MaxNumberOfResults int32
---@field MinMass float
---@field MinSpeed float
---@field MinAngularSpeed float
---@field MaxDistance float
---@field SortMethod EChaosTrailingSortMethod
FChaosTrailingEventRequestSettings = {}



---@class FGeomComponentCacheParameters
---@field CacheMode EGeometryCollectionCacheType
---@field TargetCache UGeometryCollectionCache
---@field ReverseCacheBeginTime float
---@field SaveCollisionData boolean
---@field DoGenerateCollisionData boolean
---@field CollisionDataSizeMax int32
---@field DoCollisionDataSpatialHash boolean
---@field CollisionDataSpatialHashRadius float
---@field MaxCollisionPerCell int32
---@field SaveBreakingData boolean
---@field DoGenerateBreakingData boolean
---@field BreakingDataSizeMax int32
---@field DoBreakingDataSpatialHash boolean
---@field BreakingDataSpatialHashRadius float
---@field MaxBreakingPerCell int32
---@field SaveTrailingData boolean
---@field DoGenerateTrailingData boolean
---@field TrailingDataSizeMax int32
---@field TrailingMinSpeedThreshold float
---@field TrailingMinVolumeThreshold float
FGeomComponentCacheParameters = {}



---@class FGeometryCollectionAutoInstanceMesh
---@field StaticMesh FSoftObjectPath
---@field Materials TArray<UMaterialInterface>
FGeometryCollectionAutoInstanceMesh = {}



---@class FGeometryCollectionCollisionParticleData
---@field CollisionParticlesFraction float
---@field MaximumCollisionParticles int32
FGeometryCollectionCollisionParticleData = {}



---@class FGeometryCollectionCollisionTypeData
---@field CollisionType ECollisionTypeEnum
---@field ImplicitType EImplicitTypeEnum
---@field LevelSet FGeometryCollectionLevelSetData
---@field CollisionParticles FGeometryCollectionCollisionParticleData
---@field CollisionObjectReductionPercentage float
---@field CollisionMarginFraction float
FGeometryCollectionCollisionTypeData = {}



---@class FGeometryCollectionDamagePropagationData
---@field bEnabled boolean
---@field BreakDamagePropagationFactor float
---@field ShockDamagePropagationFactor float
FGeometryCollectionDamagePropagationData = {}



---@class FGeometryCollectionDebugDrawActorSelectedRigidBody
---@field ID int32
---@field Solver AChaosSolverActor
---@field GeometryCollection AGeometryCollectionActor
FGeometryCollectionDebugDrawActorSelectedRigidBody = {}



---@class FGeometryCollectionDebugDrawWarningMessage
FGeometryCollectionDebugDrawWarningMessage = {}


---@class FGeometryCollectionEmbeddedExemplar
---@field StaticMeshExemplar FSoftObjectPath
---@field StartCullDistance float
---@field EndCullDistance float
---@field InstanceCount int32
FGeometryCollectionEmbeddedExemplar = {}



---@class FGeometryCollectionLevelSetData
---@field MinLevelSetResolution int32
---@field MaxLevelSetResolution int32
---@field MinClusterLevelSetResolution int32
---@field MaxClusterLevelSetResolution int32
FGeometryCollectionLevelSetData = {}



---@class FGeometryCollectionRepData
FGeometryCollectionRepData = {}


---@class FGeometryCollectionSizeSpecificData
---@field MaxSize float
---@field CollisionShapes TArray<FGeometryCollectionCollisionTypeData>
---@field DamageThreshold int32
FGeometryCollectionSizeSpecificData = {}



---@class FGeometryCollectionSource
---@field SourceGeometryObject FSoftObjectPath
---@field LocalTransform FTransform
---@field SourceMaterial TArray<UMaterialInterface>
---@field bAddInternalMaterials boolean
---@field bSplitComponents boolean
FGeometryCollectionSource = {}



---@class UChaosDestructionListener : USceneComponent
---@field bIsCollisionEventListeningEnabled boolean
---@field bIsBreakingEventListeningEnabled boolean
---@field bIsTrailingEventListeningEnabled boolean
---@field bIsRemovalEventListeningEnabled boolean
---@field CollisionEventRequestSettings FChaosCollisionEventRequestSettings
---@field BreakingEventRequestSettings FChaosBreakingEventRequestSettings
---@field TrailingEventRequestSettings FChaosTrailingEventRequestSettings
---@field RemovalEventRequestSettings FChaosRemovalEventRequestSettings
---@field ChaosSolverActors TSet<AChaosSolverActor>
---@field GeometryCollectionActors TSet<AGeometryCollectionActor>
---@field OnCollisionEvents FChaosDestructionListenerOnCollisionEvents
---@field OnBreakingEvents FChaosDestructionListenerOnBreakingEvents
---@field OnTrailingEvents FChaosDestructionListenerOnTrailingEvents
---@field OnRemovalEvents FChaosDestructionListenerOnRemovalEvents
UChaosDestructionListener = {}

---@param TrailingEvents TArray<FChaosTrailingEventData>
---@param SortMethod EChaosTrailingSortMethod
function UChaosDestructionListener:SortTrailingEvents(TrailingEvents, SortMethod) end
---@param RemovalEvents TArray<FChaosRemovalEventData>
---@param SortMethod EChaosRemovalSortMethod
function UChaosDestructionListener:SortRemovalEvents(RemovalEvents, SortMethod) end
---@param CollisionEvents TArray<FChaosCollisionEventData>
---@param SortMethod EChaosCollisionSortMethod
function UChaosDestructionListener:SortCollisionEvents(CollisionEvents, SortMethod) end
---@param BreakingEvents TArray<FChaosBreakingEventData>
---@param SortMethod EChaosBreakingSortMethod
function UChaosDestructionListener:SortBreakingEvents(BreakingEvents, SortMethod) end
---@param InSettings FChaosTrailingEventRequestSettings
function UChaosDestructionListener:SetTrailingEventRequestSettings(InSettings) end
---@param bIsEnabled boolean
function UChaosDestructionListener:SetTrailingEventEnabled(bIsEnabled) end
---@param InSettings FChaosRemovalEventRequestSettings
function UChaosDestructionListener:SetRemovalEventRequestSettings(InSettings) end
---@param bIsEnabled boolean
function UChaosDestructionListener:SetRemovalEventEnabled(bIsEnabled) end
---@param InSettings FChaosCollisionEventRequestSettings
function UChaosDestructionListener:SetCollisionEventRequestSettings(InSettings) end
---@param bIsEnabled boolean
function UChaosDestructionListener:SetCollisionEventEnabled(bIsEnabled) end
---@param InSettings FChaosBreakingEventRequestSettings
function UChaosDestructionListener:SetBreakingEventRequestSettings(InSettings) end
---@param bIsEnabled boolean
function UChaosDestructionListener:SetBreakingEventEnabled(bIsEnabled) end
---@param GeometryCollectionActor AGeometryCollectionActor
function UChaosDestructionListener:RemoveGeometryCollectionActor(GeometryCollectionActor) end
---@param ChaosSolverActor AChaosSolverActor
function UChaosDestructionListener:RemoveChaosSolverActor(ChaosSolverActor) end
---@return boolean
function UChaosDestructionListener:IsEventListening() end
---@param GeometryCollectionActor AGeometryCollectionActor
function UChaosDestructionListener:AddGeometryCollectionActor(GeometryCollectionActor) end
---@param ChaosSolverActor AChaosSolverActor
function UChaosDestructionListener:AddChaosSolverActor(ChaosSolverActor) end


---@class UGeometryCollection : UObject
---@field EnableClustering boolean
---@field ClusterGroupIndex int32
---@field MaxClusterLevel int32
---@field DamageThreshold TArray<float>
---@field bUseSizeSpecificDamageThreshold boolean
---@field PerClusterOnlyDamageThreshold boolean
---@field DamagePropagationData FGeometryCollectionDamagePropagationData
---@field ClusterConnectionType EClusterConnectionTypeEnum
---@field ConnectionGraphBoundsFilteringMargin float
---@field Materials TArray<UMaterialInterface>
---@field EmbeddedGeometryExemplar TArray<FGeometryCollectionEmbeddedExemplar>
---@field bUseFullPrecisionUVs boolean
---@field AutoInstanceMeshes TArray<FGeometryCollectionAutoInstanceMesh>
---@field RootProxy FSoftObjectPath
---@field bStripOnCook boolean
---@field EnableNanite boolean
---@field bMassAsDensity boolean
---@field Mass float
---@field MinimumMassClamp float
---@field bImportCollisionFromSource boolean
---@field bRemoveOnMaxSleep boolean
---@field MaximumSleepTime FVector2D
---@field RemovalDuration FVector2D
---@field bSlowMovingAsSleeping boolean
---@field SlowMovingVelocityThreshold float
---@field SizeSpecificData TArray<FGeometryCollectionSizeSpecificData>
---@field EnableRemovePiecesOnFracture boolean
---@field RemoveOnFractureMaterials TArray<UMaterialInterface>
---@field Dataflow UDataflow
---@field PersistentGuid FGuid
---@field StateGuid FGuid
---@field BoneSelectedMaterialIndex int32
UGeometryCollection = {}



---@class UGeometryCollectionCache : UObject
---@field RecordedData FRecordedTransformTrack
---@field SupportedCollection UGeometryCollection
---@field CompatibleCollectionState FGuid
UGeometryCollectionCache = {}



---@class UGeometryCollectionComponent : UMeshComponent
---@field ChaosSolverActor AChaosSolverActor
---@field RestCollection UGeometryCollection
---@field InitializationFields TArray<AFieldSystemActor>
---@field Simulating boolean
---@field ObjectType EObjectStateTypeEnum
---@field bForceMotionBlur boolean
---@field EnableClustering boolean
---@field ClusterGroupIndex int32
---@field MaxClusterLevel int32
---@field DamageThreshold TArray<float>
---@field bUseSizeSpecificDamageThreshold boolean
---@field DamagePropagationData FGeometryCollectionDamagePropagationData
---@field bAllowRemovalOnSleep boolean
---@field bAllowRemovalOnBreak boolean
---@field ClusterConnectionType EClusterConnectionTypeEnum
---@field CollisionGroup int32
---@field CollisionSampleFraction float
---@field LinearEtherDrag float
---@field AngularEtherDrag float
---@field PhysicalMaterial UChaosPhysicalMaterial
---@field InitialVelocityType EInitialVelocityTypeEnum
---@field InitialLinearVelocity FVector
---@field InitialAngularVelocity FVector
---@field PhysicalMaterialOverride UPhysicalMaterial
---@field CacheParameters FGeomComponentCacheParameters
---@field RestTransforms TArray<FTransform>
---@field NotifyGeometryCollectionPhysicsStateChange FGeometryCollectionComponentNotifyGeometryCollectionPhysicsStateChange
---@field NotifyGeometryCollectionPhysicsLoadingStateChange FGeometryCollectionComponentNotifyGeometryCollectionPhysicsLoadingStateChange
---@field OnChaosBreakEvent FGeometryCollectionComponentOnChaosBreakEvent
---@field OnChaosRemovalEvent FGeometryCollectionComponentOnChaosRemovalEvent
---@field OnChaosCrumblingEvent FGeometryCollectionComponentOnChaosCrumblingEvent
---@field DesiredCacheTime float
---@field CachePlayback boolean
---@field OnChaosPhysicsCollision FGeometryCollectionComponentOnChaosPhysicsCollision
---@field bNotifyBreaks boolean
---@field bNotifyCollisions boolean
---@field bNotifyTrailing boolean
---@field bNotifyRemovals boolean
---@field bNotifyCrumblings boolean
---@field bCrumblingEventIncludesChildren boolean
---@field bStoreVelocities boolean
---@field bShowBoneColors boolean
---@field ISMPool AGeometryCollectionISMPoolActor
---@field bEnableReplication boolean
---@field bEnableAbandonAfterLevel boolean
---@field ReplicationAbandonClusterLevel int32
---@field ReplicationAbandonAfterLevel int32
---@field RepData FGeometryCollectionRepData
---@field DummyBodySetup UBodySetup
---@field EmbeddedGeometryComponents TArray<UInstancedStaticMeshComponent>
UGeometryCollectionComponent = {}

---@param RestCollectionIn UGeometryCollection
function UGeometryCollectionComponent:SetRestCollection(RestCollectionIn) end
---@param bNewNotifyRemovals boolean
function UGeometryCollectionComponent:SetNotifyRemovals(bNewNotifyRemovals) end
---@param bNewNotifyCrumblings boolean
function UGeometryCollectionComponent:SetNotifyCrumblings(bNewNotifyCrumblings) end
---@param bNewNotifyBreaks boolean
function UGeometryCollectionComponent:SetNotifyBreaks(bNewNotifyBreaks) end
function UGeometryCollectionComponent:RemoveAllAnchors() end
---@param CollisionInfo FChaosPhysicsCollisionInfo
function UGeometryCollectionComponent:ReceivePhysicsCollision(CollisionInfo) end
---@param FracturedComponent UGeometryCollectionComponent
function UGeometryCollectionComponent:NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(FracturedComponent) end
---@param FracturedComponent UGeometryCollectionComponent
function UGeometryCollectionComponent:NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(FracturedComponent) end
---@param ItemIndex int32
---@param OutMass float
---@param OutExtents FBox
function UGeometryCollectionComponent:GetMassAndExtents(ItemIndex, OutMass, OutExtents) end
---@param ItemIndex int32
---@return int32
function UGeometryCollectionComponent:GetInitialLevel(ItemIndex) end
---@param ItemIndex int32
function UGeometryCollectionComponent:CrumbleCluster(ItemIndex) end
function UGeometryCollectionComponent:CrumbleActiveClusters() end
---@param Enabled boolean
---@param Target EGeometryCollectionPhysicsTypeEnum
---@param MetaData UFieldSystemMetaData
---@param Field UFieldNodeBase
function UGeometryCollectionComponent:ApplyPhysicsField(Enabled, Target, MetaData, Field) end
---@param ItemIndex int32
---@param LinearVelocity FVector
function UGeometryCollectionComponent:ApplyLinearVelocity(ItemIndex, LinearVelocity) end
---@param Radius float
---@param Position FVector
function UGeometryCollectionComponent:ApplyKinematicField(Radius, Position) end
---@param ItemIndex int32
---@param Location FVector
---@param Radius float
---@param PropagationDepth int32
---@param PropagationFactor float
---@param Strain float
function UGeometryCollectionComponent:ApplyInternalStrain(ItemIndex, Location, Radius, PropagationDepth, PropagationFactor, Strain) end
---@param ItemIndex int32
---@param Location FVector
---@param Radius float
---@param PropagationDepth int32
---@param PropagationFactor float
---@param Strain float
function UGeometryCollectionComponent:ApplyExternalStrain(ItemIndex, Location, Radius, PropagationDepth, PropagationFactor, Strain) end
---@param ItemIndex int32
---@param LinearVelocity FVector
function UGeometryCollectionComponent:ApplyBreakingLinearVelocity(ItemIndex, LinearVelocity) end
---@param ItemIndex int32
---@param AngularVelocity FVector
function UGeometryCollectionComponent:ApplyBreakingAngularVelocity(ItemIndex, AngularVelocity) end
---@param ItemIndex int32
---@param AngularVelocity FVector
function UGeometryCollectionComponent:ApplyAngularVelocity(ItemIndex, AngularVelocity) end


---@class UGeometryCollectionDebugDrawComponent : UActorComponent
---@field GeometryCollectionDebugDrawActor AGeometryCollectionDebugDrawActor
---@field GeometryCollectionRenderLevelSetActor AGeometryCollectionRenderLevelSetActor
UGeometryCollectionDebugDrawComponent = {}



---@class UGeometryCollectionISMPoolComponent : USceneComponent
UGeometryCollectionISMPoolComponent = {}


