---@meta

---@class ABuoyancyManager : AActor
---@field BuoyancyComponents TArray<UBuoyancyComponent>
ABuoyancyManager = {}

---@param WorldContextObject UObject
---@param Manager ABuoyancyManager
---@return boolean
function ABuoyancyManager:GetBuoyancyComponentManager(WorldContextObject, Manager) end


---@class AWaterBody : AActor
---@field SplineComp UWaterSplineComponent
---@field WaterSplineMetadata UWaterSplineMetadata
---@field WaterBodyComponent UWaterBodyComponent
---@field WaterBodyIndex int32
---@field WaterBodyType EWaterBodyType
---@field WaterWaves UWaterWavesBase
AWaterBody = {}

---@param InWaterWaves UWaterWavesBase
function AWaterBody:SetWaterWaves(InWaterWaves) end
---@param InMaterial UMaterialInterface
function AWaterBody:SetWaterMaterial(InMaterial) end
---@param bShapeOrPositionChanged boolean
---@param bWeightmapSettingsChanged boolean
function AWaterBody:OnWaterBodyChanged(bShapeOrPositionChanged, bWeightmapSettingsChanged) end
---@param InKey float
---@return FVector
function AWaterBody:GetWaterVelocityVectorAtSplineInputKey(InKey) end
---@param InKey float
---@return float
function AWaterBody:GetWaterVelocityAtSplineInputKey(InKey) end
---@return UWaterSplineComponent
function AWaterBody:GetWaterSpline() end
---@return UMaterialInstanceDynamic
function AWaterBody:GetWaterMaterialInstance() end
---@return EWaterBodyType
function AWaterBody:GetWaterBodyType() end
---@return UWaterBodyComponent
function AWaterBody:GetWaterBodyComponent() end
---@return UMaterialInstanceDynamic
function AWaterBody:GetRiverToOceanTransitionMaterialInstance() end
---@return UMaterialInstanceDynamic
function AWaterBody:GetRiverToLakeTransitionMaterialInstance() end
---@return TArray<AWaterBodyIsland>
function AWaterBody:GetIslands() end
---@return TArray<AWaterBodyExclusionVolume>
function AWaterBody:GetExclusionVolumes() end
---@param InKey float
---@return float
function AWaterBody:GetAudioIntensityAtSplineInputKey(InKey) end


---@class AWaterBodyCustom : AWaterBody
AWaterBodyCustom = {}


---@class AWaterBodyExclusionVolume : APhysicsVolume
---@field bExcludeAllOverlappingWaterBodies boolean
---@field WaterBodiesToExclude TArray<AWaterBody>
AWaterBodyExclusionVolume = {}



---@class AWaterBodyIsland : AActor
---@field SplineComp UWaterSplineComponent
AWaterBodyIsland = {}

---@return UWaterSplineComponent
function AWaterBodyIsland:GetWaterSpline() end


---@class AWaterBodyLake : AWaterBody
AWaterBodyLake = {}


---@class AWaterBodyOcean : AWaterBody
AWaterBodyOcean = {}


---@class AWaterBodyRiver : AWaterBody
AWaterBodyRiver = {}


---@class AWaterZone : AActor
---@field WaterInfoTexture UTextureRenderTarget2D
---@field OwnedWaterBodies TArray<TWeakObjectPtr<UWaterBodyComponent>>
---@field RenderTargetResolution FIntPoint
---@field WaterMesh UWaterMeshComponent
---@field ZoneExtent FVector2D
---@field CaptureZOffset float
---@field bHalfPrecisionTexture boolean
---@field VelocityBlurRadius int32
---@field TessellatedWaterMeshExtent FVector
---@field NonTessellatedLODSectionScale uint32
---@field OverlapPriority int32
---@field bEnableNonTessellatedLODMesh boolean
AWaterZone = {}



---@class FBuoyancyData
---@field Pontoons TArray<FSphericalPontoon>
---@field bCenterPontoonsOnCOM boolean
---@field BuoyancyCoefficient float
---@field BuoyancyDamp float
---@field BuoyancyDamp2 float
---@field BuoyancyRampMinVelocity float
---@field BuoyancyRampMaxVelocity float
---@field BuoyancyRampMax float
---@field MaxBuoyantForce float
---@field bApplyDragForcesInWater boolean
---@field DragCoefficient float
---@field DragCoefficient2 float
---@field AngularDragCoefficient float
---@field MaxDragSpeed float
---@field bApplyRiverForces boolean
---@field RiverPontoonIndex int32
---@field WaterShorePushFactor float
---@field RiverTraversalPathWidth float
---@field MaxShorePushForce float
---@field WaterVelocityStrength float
---@field MaxWaterForce float
---@field bAlwaysAllowLateralPush boolean
---@field bAllowCurrentWhenMovingFastUpstream boolean
---@field bApplyDownstreamAngularRotation boolean
---@field DownstreamAxisOfRotation FVector
---@field DownstreamRotationStrength float
---@field DownstreamRotationStiffness float
---@field DownstreamRotationAngularDamping float
---@field DownstreamMaxAcceleration float
FBuoyancyData = {}



---@class FGerstnerWave
---@field WaveLength float
---@field Amplitude float
---@field Steepness float
---@field Direction FVector
---@field WaveVector FVector2D
---@field WaveSpeed float
---@field WKA float
---@field Q float
---@field PhaseOffset float
FGerstnerWave = {}



---@class FGerstnerWaveOctave
---@field NumWaves int32
---@field AmplitudeScale float
---@field MainDirection float
---@field SpreadAngle float
---@field bUniformSpread boolean
FGerstnerWaveOctave = {}



---@class FSphericalPontoon
---@field CenterSocket FName
---@field RelativeLocation FVector
---@field Radius float
---@field bFXEnabled boolean
---@field LocalForce FVector
---@field CenterLocation FVector
---@field SocketRotation FQuat
---@field Offset FVector
---@field WaterHeight float
---@field WaterDepth float
---@field ImmersionDepth float
---@field WaterPlaneLocation FVector
---@field WaterPlaneNormal FVector
---@field WaterSurfacePosition FVector
---@field WaterVelocity FVector
---@field WaterBodyIndex int32
---@field bIsInWater boolean
---@field CurrentWaterBodyComponent UWaterBodyComponent
FSphericalPontoon = {}



---@class FUnderwaterPostProcessSettings
---@field bEnabled boolean
---@field Priority float
---@field BlendRadius float
---@field BlendWeight float
---@field PostProcessSettings FPostProcessSettings
---@field UnderwaterPostProcessMaterial UMaterialInterface
FUnderwaterPostProcessSettings = {}



---@class FWaterBodyHeightmapSettings
---@field BlendMode EWaterBrushBlendType
---@field bInvertShape boolean
---@field FalloffSettings FWaterFalloffSettings
---@field Effects FWaterBrushEffects
---@field Priority int32
FWaterBodyHeightmapSettings = {}



---@class FWaterBodyWeightmapSettings
---@field FalloffWidth float
---@field EdgeOffset float
---@field ModulationTexture UTexture2D
---@field TextureTiling float
---@field TextureInfluence float
---@field Midpoint float
---@field FinalOpacity float
FWaterBodyWeightmapSettings = {}



---@class FWaterBrushEffectBlurring
---@field bBlurShape boolean
---@field Radius int32
FWaterBrushEffectBlurring = {}



---@class FWaterBrushEffectCurlNoise
---@field Curl1Amount float
---@field Curl2Amount float
---@field Curl1Tiling float
---@field Curl2Tiling float
FWaterBrushEffectCurlNoise = {}



---@class FWaterBrushEffectCurves
---@field bUseCurveChannel boolean
---@field ElevationCurveAsset UCurveFloat
---@field ChannelEdgeOffset float
---@field ChannelDepth float
---@field CurveRampWidth float
FWaterBrushEffectCurves = {}



---@class FWaterBrushEffectDisplacement
---@field DisplacementHeight float
---@field DisplacementTiling float
---@field Texture UTexture2D
---@field Midpoint float
---@field Channel FLinearColor
---@field WeightmapInfluence float
FWaterBrushEffectDisplacement = {}



---@class FWaterBrushEffectSmoothBlending
---@field InnerSmoothDistance float
---@field OuterSmoothDistance float
FWaterBrushEffectSmoothBlending = {}



---@class FWaterBrushEffectTerracing
---@field TerraceAlpha float
---@field TerraceSpacing float
---@field TerraceSmoothness float
---@field MaskLength float
---@field MaskStartOffset float
FWaterBrushEffectTerracing = {}



---@class FWaterBrushEffects
---@field Blurring FWaterBrushEffectBlurring
---@field CurlNoise FWaterBrushEffectCurlNoise
---@field Displacement FWaterBrushEffectDisplacement
---@field SmoothBlending FWaterBrushEffectSmoothBlending
---@field Terracing FWaterBrushEffectTerracing
FWaterBrushEffects = {}



---@class FWaterCurveSettings
---@field bUseCurveChannel boolean
---@field ElevationCurveAsset UCurveFloat
---@field ChannelEdgeOffset float
---@field ChannelDepth float
---@field CurveRampWidth float
FWaterCurveSettings = {}



---@class FWaterFalloffSettings
---@field FalloffMode EWaterBrushFalloffMode
---@field FalloffAngle float
---@field FalloffWidth float
---@field EdgeOffset float
---@field ZOffset float
FWaterFalloffSettings = {}



---@class FWaterSplineCurveDefaults
---@field DefaultDepth float
---@field DefaultWidth float
---@field DefaultVelocity float
---@field DefaultAudioIntensity float
FWaterSplineCurveDefaults = {}



---@class IWaterBrushActorInterface : IInterface
IWaterBrushActorInterface = {}


---@class UBuoyancyComponent : UActorComponent
---@field Pontoons TArray<FSphericalPontoon>
---@field OnEnteredWaterDelegate FBuoyancyComponentOnEnteredWaterDelegate
---@field OnExitedWaterDelegate FBuoyancyComponentOnExitedWaterDelegate
---@field BuoyancyData FBuoyancyData
---@field CurrentWaterBodyComponents TArray<UWaterBodyComponent>
---@field SimulatingComponent UPrimitiveComponent
UBuoyancyComponent = {}

---@param Pontoon FSphericalPontoon
function UBuoyancyComponent:OnPontoonExitedWater(Pontoon) end
---@param Pontoon FSphericalPontoon
function UBuoyancyComponent:OnPontoonEnteredWater(Pontoon) end
---@return boolean
function UBuoyancyComponent:IsOverlappingWaterBody() end
---@return boolean
function UBuoyancyComponent:IsInWaterBody() end
---@param OutWaterPlaneLocation FVector
---@param OutWaterPlaneNormal FVector
---@param OutWaterSurfacePosition FVector
---@param OutWaterDepth float
---@param OutWaterBodyIdx int32
---@param OutWaterVelocity FVector
function UBuoyancyComponent:GetLastWaterSurfaceInfo(OutWaterPlaneLocation, OutWaterPlaneNormal, OutWaterSurfacePosition, OutWaterDepth, OutWaterBodyIdx, OutWaterVelocity) end
---@return TArray<UWaterBodyComponent>
function UBuoyancyComponent:GetCurrentWaterBodyComponents() end


---@class UDEPRECATED_CustomMeshGenerator : UDEPRECATED_WaterBodyGenerator
---@field MeshComp UStaticMeshComponent
UDEPRECATED_CustomMeshGenerator = {}



---@class UDEPRECATED_LakeGenerator : UDEPRECATED_WaterBodyGenerator
---@field LakeMeshComp UStaticMeshComponent
---@field LakeCollisionComp UBoxComponent
---@field LakeCollision ULakeCollisionComponent
UDEPRECATED_LakeGenerator = {}



---@class UDEPRECATED_OceanGenerator : UDEPRECATED_WaterBodyGenerator
---@field CollisionBoxes TArray<UOceanBoxCollisionComponent>
---@field CollisionHullSets TArray<UOceanCollisionComponent>
UDEPRECATED_OceanGenerator = {}



---@class UDEPRECATED_RiverGenerator : UDEPRECATED_WaterBodyGenerator
---@field SplineMeshComponents TArray<USplineMeshComponent>
UDEPRECATED_RiverGenerator = {}



---@class UDEPRECATED_WaterBodyGenerator : UObject
UDEPRECATED_WaterBodyGenerator = {}


---@class UEnvQueryTest_InsideWaterBody : UEnvQueryTest
---@field bIncludeWaves boolean
---@field bSimpleWaves boolean
---@field bIgnoreExclusionVolumes boolean
UEnvQueryTest_InsideWaterBody = {}



---@class UGerstnerWaterWaveGeneratorBase : UObject
UGerstnerWaterWaveGeneratorBase = {}

---@param OutWaves TArray<FGerstnerWave>
function UGerstnerWaterWaveGeneratorBase:GenerateGerstnerWaves(OutWaves) end


---@class UGerstnerWaterWaveGeneratorSimple : UGerstnerWaterWaveGeneratorBase
---@field NumWaves int32
---@field Seed int32
---@field Randomness float
---@field MinWavelength float
---@field MaxWavelength float
---@field WavelengthFalloff float
---@field MinAmplitude float
---@field MaxAmplitude float
---@field AmplitudeFalloff float
---@field WindAngleDeg float
---@field DirectionAngularSpreadDeg float
---@field SmallWaveSteepness float
---@field LargeWaveSteepness float
---@field SteepnessFalloff float
UGerstnerWaterWaveGeneratorSimple = {}



---@class UGerstnerWaterWaveGeneratorSpectrum : UGerstnerWaterWaveGeneratorBase
---@field SpectrumType EWaveSpectrumType
---@field Octaves TArray<FGerstnerWaveOctave>
UGerstnerWaterWaveGeneratorSpectrum = {}



---@class UGerstnerWaterWaveSubsystem : UEngineSubsystem
UGerstnerWaterWaveSubsystem = {}


---@class UGerstnerWaterWaves : UWaterWaves
---@field GerstnerWaveGenerator UGerstnerWaterWaveGeneratorBase
---@field GerstnerWaves TArray<FGerstnerWave>
---@field MaxWaveHeight float
UGerstnerWaterWaves = {}



---@class ULakeCollisionComponent : UPrimitiveComponent
---@field CachedBodySetup UBodySetup
---@field BoxExtent FVector
ULakeCollisionComponent = {}



---@class UNiagaraDataInterfaceWater : UNiagaraDataInterface
---@field SourceBodyComponent UWaterBodyComponent
UNiagaraDataInterfaceWater = {}



---@class UNiagaraWaterFunctionLibrary : UBlueprintFunctionLibrary
UNiagaraWaterFunctionLibrary = {}

---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param WaterBodyComponent UWaterBodyComponent
function UNiagaraWaterFunctionLibrary:SetWaterBodyComponent(NiagaraSystem, OverrideName, WaterBodyComponent) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param WaterBody AWaterBody
function UNiagaraWaterFunctionLibrary:SetWaterBody(NiagaraSystem, OverrideName, WaterBody) end


---@class UOceanBoxCollisionComponent : UBoxComponent
UOceanBoxCollisionComponent = {}


---@class UOceanCollisionComponent : UPrimitiveComponent
---@field CachedBodySetup UBodySetup
UOceanCollisionComponent = {}



---@class UWaterBodyComponent : UPrimitiveComponent
---@field PhysicalMaterial UPhysicalMaterial
---@field TargetWaveMaskDepth float
---@field MaxWaveHeightOffset float
---@field UnderwaterPostProcessSettings FUnderwaterPostProcessSettings
---@field CurveSettings FWaterCurveSettings
---@field WaterMaterial UMaterialInterface
---@field WaterHLODMaterial UMaterialInterface
---@field WaterLODMaterial UMaterialInterface
---@field UnderwaterPostProcessMaterial UMaterialInterface
---@field WaterInfoMaterial UMaterialInterface
---@field WaterHeightmapSettings FWaterBodyHeightmapSettings
---@field ShapeDilation float
---@field CollisionHeightOffset float
---@field bAffectsLandscape boolean
---@field WaterBodyIndex int32
---@field WaterMeshOverride UStaticMesh
---@field bAlwaysGenerateWaterMeshTiles boolean
---@field OverlapMaterialPriority int32
---@field WaterSplineMetadata UWaterSplineMetadata
---@field WaterMID UMaterialInstanceDynamic
---@field WaterLODMID UMaterialInstanceDynamic
---@field UnderwaterPostProcessMID UMaterialInstanceDynamic
---@field WaterInfoMID UMaterialInstanceDynamic
---@field WaterBodyIslands TArray<TSoftObjectPtr<AWaterBodyIsland>>
---@field WaterBodyExclusionVolumes TArray<TSoftObjectPtr<AWaterBodyExclusionVolume>>
---@field Landscape TWeakObjectPtr<ALandscapeProxy>
---@field OwningWaterZone TSoftObjectPtr<AWaterZone>
---@field WaterZoneOverride TSoftObjectPtr<AWaterZone>
---@field CurrentPostProcessSettings FPostProcessSettings
---@field WaterNavAreaClass TSubclassOf<UNavAreaBase>
---@field FixedWaterDepth double
UWaterBodyComponent = {}

---@param InWaterMaterial UMaterialInterface
---@param InUnderWaterPostProcessMaterial UMaterialInterface
function UWaterBodyComponent:SetWaterAndUnderWaterPostProcessMaterial(InWaterMaterial, InUnderWaterPostProcessMaterial) end
---@param bShapeOrPositionChanged boolean
---@param bWeightmapSettingsChanged boolean
function UWaterBodyComponent:OnWaterBodyChanged(bShapeOrPositionChanged, bWeightmapSettingsChanged) end
---@return UWaterWavesBase
function UWaterBodyComponent:GetWaterWaves() end
---@param InKey float
---@return float
function UWaterBodyComponent:GetWaterVelocityAtSplineInputKey(InKey) end
---@param InLocation FVector
---@param OutWaterSurfaceLocation FVector
---@param OutWaterSurfaceNormal FVector
---@param OutWaterVelocity FVector
---@param OutWaterDepth float
---@param bIncludeDepth boolean
function UWaterBodyComponent:GetWaterSurfaceInfoAtLocation(InLocation, OutWaterSurfaceLocation, OutWaterSurfaceNormal, OutWaterVelocity, OutWaterDepth, bIncludeDepth) end
---@return UWaterSplineComponent
function UWaterBodyComponent:GetWaterSpline() end
---@return UMaterialInstanceDynamic
function UWaterBodyComponent:GetWaterMaterialInstance() end
---@return UMaterialInterface
function UWaterBodyComponent:GetWaterMaterial() end
---@return UMaterialInstanceDynamic
function UWaterBodyComponent:GetWaterLODMaterialInstance() end
---@return UMaterialInstanceDynamic
function UWaterBodyComponent:GetWaterInfoMaterialInstance() end
---@return AWaterBody
function UWaterBodyComponent:GetWaterBodyActor() end
---@return UMaterialInstanceDynamic
function UWaterBodyComponent:GetUnderwaterPostProcessMaterialInstance() end
---@return TArray<UPrimitiveComponent>
function UWaterBodyComponent:GetStandardRenderableComponents() end
---@return UMaterialInstanceDynamic
function UWaterBodyComponent:GetRiverToOceanTransitionMaterialInstance() end
---@return UMaterialInstanceDynamic
function UWaterBodyComponent:GetRiverToLakeTransitionMaterialInstance() end
---@return float
function UWaterBodyComponent:GetMaxWaveHeight() end
---@return TArray<AWaterBodyIsland>
function UWaterBodyComponent:GetIslands() end
---@return TArray<AWaterBodyExclusionVolume>
function UWaterBodyComponent:GetExclusionVolumes() end
---@param bInOnlyEnabledComponents boolean
---@return TArray<UPrimitiveComponent>
function UWaterBodyComponent:GetCollisionComponents(bInOnlyEnabledComponents) end


---@class UWaterBodyCustomComponent : UWaterBodyComponent
---@field MeshComp UStaticMeshComponent
UWaterBodyCustomComponent = {}



---@class UWaterBodyHLODBuilder : UHLODBuilder
UWaterBodyHLODBuilder = {}


---@class UWaterBodyLakeComponent : UWaterBodyComponent
---@field LakeMeshComp UStaticMeshComponent
---@field LakeCollision ULakeCollisionComponent
UWaterBodyLakeComponent = {}



---@class UWaterBodyOceanComponent : UWaterBodyComponent
---@field CollisionBoxes TArray<UOceanBoxCollisionComponent>
---@field CollisionHullSets TArray<UOceanCollisionComponent>
---@field VisualExtents FVector2D
---@field CollisionExtents FVector
---@field HeightOffset float
UWaterBodyOceanComponent = {}



---@class UWaterBodyRiverComponent : UWaterBodyComponent
---@field SplineMeshComponents TArray<USplineMeshComponent>
---@field LakeTransitionMaterial UMaterialInterface
---@field LakeTransitionMID UMaterialInstanceDynamic
---@field OceanTransitionMaterial UMaterialInterface
---@field OceanTransitionMID UMaterialInstanceDynamic
UWaterBodyRiverComponent = {}



---@class UWaterMeshComponent : UMeshComponent
---@field ForceCollapseDensityLevel int32
---@field FarDistanceMaterial UMaterialInterface
---@field FarDistanceMeshExtent float
---@field TileSize float
---@field ExtentInTiles FIntPoint
---@field UsedMaterials TSet<UMaterialInterface>
---@field TessellationFactor int32
---@field LODScale float
UWaterMeshComponent = {}

---@return boolean
function UWaterMeshComponent:IsEnabled() end


---@class UWaterRuntimeSettings : UDeveloperSettings
---@field CollisionChannelForWaterTraces ECollisionChannel
---@field MaterialParameterCollection TSoftObjectPtr<UMaterialParameterCollection>
---@field WaterBodyIconWorldZOffset float
---@field DefaultWaterCollisionProfileName FName
---@field DefaultWaterInfoMaterial TSoftObjectPtr<UMaterialInterface>
---@field WaterBodyRiverComponentClass TSubclassOf<UWaterBodyRiverComponent>
---@field WaterBodyLakeComponentClass TSubclassOf<UWaterBodyLakeComponent>
---@field WaterBodyOceanComponentClass TSubclassOf<UWaterBodyOceanComponent>
---@field WaterBodyCustomComponentClass TSubclassOf<UWaterBodyCustomComponent>
UWaterRuntimeSettings = {}



---@class UWaterSplineComponent : USplineComponent
---@field WaterSplineDefaults FWaterSplineCurveDefaults
---@field PreviousWaterSplineDefaults FWaterSplineCurveDefaults
UWaterSplineComponent = {}



---@class UWaterSplineMetadata : USplineMetadata
---@field Depth FInterpCurveFloat
---@field WaterVelocityScalar FInterpCurveFloat
---@field RiverWidth FInterpCurveFloat
---@field AudioIntensity FInterpCurveFloat
---@field WaterVelocity FInterpCurveVector
UWaterSplineMetadata = {}



---@class UWaterSubsystem : UTickableWorldSubsystem
---@field BuoyancyManager ABuoyancyManager
---@field OnCameraUnderwaterStateChanged FWaterSubsystemOnCameraUnderwaterStateChanged
---@field OnWaterScalabilityChanged FWaterSubsystemOnWaterScalabilityChanged
---@field DefaultRiverMesh UStaticMesh
---@field DefaultLakeMesh UStaticMesh
---@field MaterialParameterCollection UMaterialParameterCollection
UWaterSubsystem = {}

---@param InFloodHeight float
function UWaterSubsystem:SetOceanFloodHeight(InFloodHeight) end
---@param Message FString
---@param bWarning boolean
function UWaterSubsystem:PrintToWaterLog(Message, bWarning) end
---@return boolean
function UWaterSubsystem:IsWaterRenderingEnabled() end
---@return boolean
function UWaterSubsystem:IsUnderwaterPostProcessEnabled() end
---@return boolean
function UWaterSubsystem:IsShallowWaterSimulationEnabled() end
---@return float
function UWaterSubsystem:GetWaterTimeSeconds() end
---@return float
function UWaterSubsystem:GetSmoothedWorldTimeSeconds() end
---@return int32
function UWaterSubsystem:GetShallowWaterSimulationRenderTargetSize() end
---@return int32
function UWaterSubsystem:GetShallowWaterMaxImpulseForces() end
---@return int32
function UWaterSubsystem:GetShallowWaterMaxDynamicForces() end
---@return float
function UWaterSubsystem:GetOceanTotalHeight() end
---@return float
function UWaterSubsystem:GetOceanFloodHeight() end
---@return float
function UWaterSubsystem:GetOceanBaseHeight() end
---@return float
function UWaterSubsystem:GetCameraUnderwaterDepth() end


---@class UWaterWaves : UWaterWavesBase
UWaterWaves = {}


---@class UWaterWavesAsset : UObject
---@field WaterWaves UWaterWaves
UWaterWavesAsset = {}



---@class UWaterWavesAssetReference : UWaterWavesBase
---@field WaterWavesAsset UWaterWavesAsset
UWaterWavesAssetReference = {}



---@class UWaterWavesBase : UObject
UWaterWavesBase = {}


