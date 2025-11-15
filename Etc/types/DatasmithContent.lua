---@meta

---@class ADatasmithAreaLightActor : AActor
---@field Mobility EComponentMobility::Type
---@field LightType EDatasmithAreaLightActorType
---@field LightShape EDatasmithAreaLightActorShape
---@field Dimensions FVector2D
---@field Intensity float
---@field IntensityUnits ELightUnits
---@field Color FLinearColor
---@field Temperature float
---@field IESTexture UTextureLightProfile
---@field bUseIESBrightness boolean
---@field IESBrightnessScale float
---@field Rotation FRotator
---@field SourceRadius float
---@field SourceLength float
---@field AttenuationRadius float
---@field SpotlightInnerAngle float
---@field SpotlightOuterAngle float
local ADatasmithAreaLightActor = {}



---@class ADatasmithImportedSequencesActor : AActor
---@field ImportedSequences TArray<ULevelSequence>
local ADatasmithImportedSequencesActor = {}

---@param SequenceToPlay ULevelSequence
function ADatasmithImportedSequencesActor:PlayLevelSequence(SequenceToPlay) end


---@class ADatasmithSceneActor : AActor
---@field Scene UDatasmithScene
---@field RelatedActors TMap<FName, TSoftObjectPtr<AActor>>
local ADatasmithSceneActor = {}



---@class FDatasmithAssetImportOptions
---@field PackagePath FName
local FDatasmithAssetImportOptions = {}



---@class FDatasmithCameraFilmbackSettingsTemplate
---@field SensorWidth float
---@field SensorHeight float
local FDatasmithCameraFilmbackSettingsTemplate = {}



---@class FDatasmithCameraFocusSettingsTemplate
---@field FocusMethod ECameraFocusMethod
---@field ManualFocusDistance float
local FDatasmithCameraFocusSettingsTemplate = {}



---@class FDatasmithCameraLensSettingsTemplate
---@field MaxFStop float
local FDatasmithCameraLensSettingsTemplate = {}



---@class FDatasmithCameraLookatTrackingSettingsTemplate
---@field bEnableLookAtTracking boolean
---@field bAllowRoll boolean
---@field ActorToTrack TSoftObjectPtr<AActor>
local FDatasmithCameraLookatTrackingSettingsTemplate = {}



---@class FDatasmithImportBaseOptions
---@field SceneHandling EDatasmithImportScene
---@field bIncludeGeometry boolean
---@field bIncludeMaterial boolean
---@field bIncludeLight boolean
---@field bIncludeCamera boolean
---@field bIncludeAnimation boolean
---@field AssetOptions FDatasmithAssetImportOptions
---@field StaticMeshOptions FDatasmithStaticMeshImportOptions
local FDatasmithImportBaseOptions = {}



---@class FDatasmithImportInfo
local FDatasmithImportInfo = {}


---@class FDatasmithMeshBuildSettingsTemplate
---@field bUseMikkTSpace boolean
---@field bRecomputeNormals boolean
---@field bRecomputeTangents boolean
---@field bRemoveDegenerates boolean
---@field bUseHighPrecisionTangentBasis boolean
---@field bUseFullPrecisionUVs boolean
---@field bGenerateLightmapUVs boolean
---@field MinLightmapResolution int32
---@field SrcLightmapIndex int32
---@field DstLightmapIndex int32
local FDatasmithMeshBuildSettingsTemplate = {}



---@class FDatasmithMeshSectionInfoMapTemplate
---@field Map TMap<uint32, FDatasmithMeshSectionInfoTemplate>
local FDatasmithMeshSectionInfoMapTemplate = {}



---@class FDatasmithMeshSectionInfoTemplate
---@field MaterialIndex int32
local FDatasmithMeshSectionInfoTemplate = {}



---@class FDatasmithPostProcessSettingsTemplate
---@field bOverride_WhiteTemp boolean
---@field bOverride_ColorSaturation boolean
---@field bOverride_VignetteIntensity boolean
---@field bOverride_AutoExposureMethod boolean
---@field bOverride_CameraISO boolean
---@field bOverride_CameraShutterSpeed boolean
---@field bOverride_DepthOfFieldFstop boolean
---@field WhiteTemp float
---@field VignetteIntensity float
---@field ColorSaturation FVector4
---@field AutoExposureMethod EAutoExposureMethod
---@field CameraISO float
---@field CameraShutterSpeed float
---@field DepthOfFieldFstop float
local FDatasmithPostProcessSettingsTemplate = {}



---@class FDatasmithReimportOptions
---@field bUpdateActors boolean
---@field bRespawnDeletedActors boolean
local FDatasmithReimportOptions = {}



---@class FDatasmithRetessellationOptions : FDatasmithTessellationOptions
---@field RetessellationRule EDatasmithCADRetessellationRule
local FDatasmithRetessellationOptions = {}



---@class FDatasmithStaticMaterialTemplate
---@field MaterialSlotName FName
---@field MaterialInterface UMaterialInterface
local FDatasmithStaticMaterialTemplate = {}



---@class FDatasmithStaticMeshImportOptions
---@field MinLightmapResolution EDatasmithImportLightmapMin
---@field MaxLightmapResolution EDatasmithImportLightmapMax
---@field bGenerateLightmapUVs boolean
---@field bRemoveDegenerates boolean
local FDatasmithStaticMeshImportOptions = {}



---@class FDatasmithStaticParameterSetTemplate
---@field StaticSwitchParameters TMap<FName, boolean>
local FDatasmithStaticParameterSetTemplate = {}



---@class FDatasmithTessellationOptions
---@field ChordTolerance float
---@field MaxEdgeLength float
---@field NormalTolerance float
---@field StitchingTechnique EDatasmithCADStitchingTechnique
local FDatasmithTessellationOptions = {}



---@class UDatasmithActorTemplate : UDatasmithObjectTemplate
---@field LayerS TSet<FName>
---@field Tags TSet<FName>
local UDatasmithActorTemplate = {}



---@class UDatasmithAdditionalData : UObject
local UDatasmithAdditionalData = {}


---@class UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate
---@field LightType EDatasmithAreaLightActorType
---@field LightShape EDatasmithAreaLightActorShape
---@field Dimensions FVector2D
---@field Color FLinearColor
---@field Intensity float
---@field IntensityUnits ELightUnits
---@field Temperature float
---@field IESTexture TSoftObjectPtr<UTextureLightProfile>
---@field bUseIESBrightness boolean
---@field IESBrightnessScale float
---@field Rotation FRotator
---@field SourceRadius float
---@field SourceLength float
---@field AttenuationRadius float
local UDatasmithAreaLightActorTemplate = {}



---@class UDatasmithAssetImportData : UAssetImportData
local UDatasmithAssetImportData = {}


---@class UDatasmithAssetUserData : UAssetUserData
---@field MetaData TMap<FName, FString>
local UDatasmithAssetUserData = {}



---@class UDatasmithCADImportSceneData : UDatasmithSceneImportData
local UDatasmithCADImportSceneData = {}


---@class UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate
---@field LookatTrackingSettings FDatasmithCameraLookatTrackingSettingsTemplate
local UDatasmithCineCameraActorTemplate = {}



---@class UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate
---@field FilmbackSettings FDatasmithCameraFilmbackSettingsTemplate
---@field LensSettings FDatasmithCameraLensSettingsTemplate
---@field FocusSettings FDatasmithCameraFocusSettingsTemplate
---@field CurrentFocalLength float
---@field CurrentAperture float
---@field PostProcessSettings FDatasmithPostProcessSettingsTemplate
local UDatasmithCineCameraComponentTemplate = {}



---@class UDatasmithCommonTessellationOptions : UDatasmithOptionsBase
---@field Options FDatasmithTessellationOptions
local UDatasmithCommonTessellationOptions = {}



---@class UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary
local UDatasmithContentBlueprintLibrary = {}

---@param Object UObject
---@param Key FName
---@param bPartialMatchKey boolean
---@return TArray<FString>
function UDatasmithContentBlueprintLibrary:GetDatasmithUserDataValuesForKey(Object, Key, bPartialMatchKey) end
---@param Object UObject
---@param Key FName
---@param bPartialMatchKey boolean
---@return FString
function UDatasmithContentBlueprintLibrary:GetDatasmithUserDataValueForKey(Object, Key, bPartialMatchKey) end
---@param Object UObject
---@param StringToMatch FString
---@param OutKeys TArray<FName>
---@param OutValues TArray<FString>
function UDatasmithContentBlueprintLibrary:GetDatasmithUserDataKeysAndValuesForValue(Object, StringToMatch, OutKeys, OutValues) end
---@param Object UObject
---@return UDatasmithAssetUserData
function UDatasmithContentBlueprintLibrary:GetDatasmithUserData(Object) end


---@class UDatasmithCustomActionBase : UObject
local UDatasmithCustomActionBase = {}


---@class UDatasmithDecalComponentTemplate : UDatasmithObjectTemplate
---@field SortOrder int32
---@field DecalSize FVector
---@field Material UMaterialInterface
local UDatasmithDecalComponentTemplate = {}



---@class UDatasmithDeltaGenAssetImportData : UDatasmithAssetImportData
local UDatasmithDeltaGenAssetImportData = {}


---@class UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData
---@field bMergeNodes boolean
---@field bOptimizeDuplicatedNodes boolean
---@field bRemoveInvisibleNodes boolean
---@field bSimplifyNodeHierarchy boolean
---@field bImportVar boolean
---@field VarPath FString
---@field bImportPos boolean
---@field PosPath FString
---@field bImportTml boolean
---@field TmlPath FString
local UDatasmithDeltaGenSceneImportData = {}



---@class UDatasmithFBXSceneImportData : UDatasmithSceneImportData
---@field bGenerateLightmapUVs boolean
---@field TexturesDir FString
---@field IntermediateSerialization uint8
---@field bColorizeMaterials boolean
local UDatasmithFBXSceneImportData = {}



---@class UDatasmithGLTFSceneImportData : UDatasmithSceneImportData
---@field Generator FString
---@field Version float
---@field Author FString
---@field License FString
---@field Source FString
local UDatasmithGLTFSceneImportData = {}



---@class UDatasmithIFCSceneImportData : UDatasmithSceneImportData
local UDatasmithIFCSceneImportData = {}


---@class UDatasmithImportOptions : UDatasmithOptionsBase
---@field SearchPackagePolicy EDatasmithImportSearchPackagePolicy
---@field MaterialConflictPolicy EDatasmithImportAssetConflictPolicy
---@field TextureConflictPolicy EDatasmithImportAssetConflictPolicy
---@field StaticMeshActorImportPolicy EDatasmithImportActorPolicy
---@field LightImportPolicy EDatasmithImportActorPolicy
---@field CameraImportPolicy EDatasmithImportActorPolicy
---@field OtherActorImportPolicy EDatasmithImportActorPolicy
---@field MaterialQuality EDatasmithImportMaterialQuality
---@field BaseOptions FDatasmithImportBaseOptions
---@field ReimportOptions FDatasmithReimportOptions
---@field Filename FString
---@field FilePath FString
---@field SourceUri FString
local UDatasmithImportOptions = {}



---@class UDatasmithLandscapeTemplate : UDatasmithObjectTemplate
---@field LandscapeMaterial UMaterialInterface
---@field StaticLightingLOD int32
local UDatasmithLandscapeTemplate = {}



---@class UDatasmithLightComponentTemplate : UDatasmithObjectTemplate
---@field bVisible boolean
---@field CastShadows boolean
---@field bUseTemperature boolean
---@field bUseIESBrightness boolean
---@field Intensity float
---@field Temperature float
---@field IESBrightnessScale float
---@field LightColor FLinearColor
---@field LightFunctionMaterial UMaterialInterface
---@field IESTexture UTextureLightProfile
local UDatasmithLightComponentTemplate = {}



---@class UDatasmithMDLSceneImportData : UDatasmithSceneImportData
local UDatasmithMDLSceneImportData = {}


---@class UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate
---@field ParentMaterial TSoftObjectPtr<UMaterialInterface>
---@field ScalarParameterValues TMap<FName, float>
---@field VectorParameterValues TMap<FName, FLinearColor>
---@field TextureParameterValues TMap<FName, TSoftObjectPtr<UTexture>>
---@field StaticParameters FDatasmithStaticParameterSetTemplate
local UDatasmithMaterialInstanceTemplate = {}



---@class UDatasmithObjectTemplate : UObject
local UDatasmithObjectTemplate = {}


---@class UDatasmithOptionsBase : UObject
local UDatasmithOptionsBase = {}


---@class UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate
---@field IntensityUnits ELightUnits
---@field SourceRadius float
---@field SourceLength float
---@field AttenuationRadius float
local UDatasmithPointLightComponentTemplate = {}



---@class UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate
---@field Settings FDatasmithPostProcessSettingsTemplate
---@field bEnabled boolean
---@field bUnbound boolean
local UDatasmithPostProcessVolumeTemplate = {}



---@class UDatasmithScene : UObject
local UDatasmithScene = {}


---@class UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate
---@field RelativeTransform FTransform
---@field Mobility EComponentMobility::Type
---@field AttachParent TSoftObjectPtr<USceneComponent>
---@field bVisible boolean
---@field bCastShadow boolean
---@field Tags TSet<FName>
local UDatasmithSceneComponentTemplate = {}



---@class UDatasmithSceneImportData : UAssetImportData
local UDatasmithSceneImportData = {}


---@class UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate
---@field SourceType ESkyLightSourceType
---@field CubemapResolution int32
---@field Cubemap UTextureCube
local UDatasmithSkyLightComponentTemplate = {}



---@class UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate
---@field InnerConeAngle float
---@field OuterConeAngle float
local UDatasmithSpotLightComponentTemplate = {}



---@class UDatasmithStaticMeshCADImportData : UDatasmithStaticMeshImportData
local UDatasmithStaticMeshCADImportData = {}


---@class UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate
---@field StaticMesh UStaticMesh
---@field OverrideMaterials TArray<UMaterialInterface>
local UDatasmithStaticMeshComponentTemplate = {}



---@class UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData
---@field SourceMeshName FString
local UDatasmithStaticMeshGLTFImportData = {}



---@class UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData
---@field SourceGlobalId FString
local UDatasmithStaticMeshIFCImportData = {}



---@class UDatasmithStaticMeshImportData : UDatasmithAssetImportData
local UDatasmithStaticMeshImportData = {}


---@class UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate
---@field SectionInfoMap FDatasmithMeshSectionInfoMapTemplate
---@field LightMapCoordinateIndex int32
---@field LightMapResolution int32
---@field BuildSettings TArray<FDatasmithMeshBuildSettingsTemplate>
---@field StaticMaterials TArray<FDatasmithStaticMaterialTemplate>
local UDatasmithStaticMeshTemplate = {}



---@class UDatasmithTranslatedSceneImportData : UDatasmithSceneImportData
local UDatasmithTranslatedSceneImportData = {}


---@class UDatasmithVREDAssetImportData : UDatasmithAssetImportData
local UDatasmithVREDAssetImportData = {}


---@class UDatasmithVREDSceneImportData : UDatasmithFBXSceneImportData
---@field bMergeNodes boolean
---@field bOptimizeDuplicatedNodes boolean
---@field bImportMats boolean
---@field MatsPath FString
---@field bImportVar boolean
---@field bCleanVar boolean
---@field VarPath FString
---@field bImportLightInfo boolean
---@field LightInfoPath FString
---@field bImportClipInfo boolean
---@field ClipInfoPath FString
local UDatasmithVREDSceneImportData = {}



