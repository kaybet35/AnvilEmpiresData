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
ADatasmithAreaLightActor = {}



---@class ADatasmithImportedSequencesActor : AActor
---@field ImportedSequences TArray<ULevelSequence>
ADatasmithImportedSequencesActor = {}

---@param SequenceToPlay ULevelSequence
function ADatasmithImportedSequencesActor:PlayLevelSequence(SequenceToPlay) end


---@class ADatasmithSceneActor : AActor
---@field Scene UDatasmithScene
---@field RelatedActors TMap<FName, TSoftObjectPtr<AActor>>
ADatasmithSceneActor = {}



---@class FDatasmithAssetImportOptions
---@field PackagePath FName
FDatasmithAssetImportOptions = {}



---@class FDatasmithCameraFilmbackSettingsTemplate
---@field SensorWidth float
---@field SensorHeight float
FDatasmithCameraFilmbackSettingsTemplate = {}



---@class FDatasmithCameraFocusSettingsTemplate
---@field FocusMethod ECameraFocusMethod
---@field ManualFocusDistance float
FDatasmithCameraFocusSettingsTemplate = {}



---@class FDatasmithCameraLensSettingsTemplate
---@field MaxFStop float
FDatasmithCameraLensSettingsTemplate = {}



---@class FDatasmithCameraLookatTrackingSettingsTemplate
---@field bEnableLookAtTracking boolean
---@field bAllowRoll boolean
---@field ActorToTrack TSoftObjectPtr<AActor>
FDatasmithCameraLookatTrackingSettingsTemplate = {}



---@class FDatasmithImportBaseOptions
---@field SceneHandling EDatasmithImportScene
---@field bIncludeGeometry boolean
---@field bIncludeMaterial boolean
---@field bIncludeLight boolean
---@field bIncludeCamera boolean
---@field bIncludeAnimation boolean
---@field AssetOptions FDatasmithAssetImportOptions
---@field StaticMeshOptions FDatasmithStaticMeshImportOptions
FDatasmithImportBaseOptions = {}



---@class FDatasmithImportInfo
FDatasmithImportInfo = {}


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
FDatasmithMeshBuildSettingsTemplate = {}



---@class FDatasmithMeshSectionInfoMapTemplate
---@field Map TMap<uint32, FDatasmithMeshSectionInfoTemplate>
FDatasmithMeshSectionInfoMapTemplate = {}



---@class FDatasmithMeshSectionInfoTemplate
---@field MaterialIndex int32
FDatasmithMeshSectionInfoTemplate = {}



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
FDatasmithPostProcessSettingsTemplate = {}



---@class FDatasmithReimportOptions
---@field bUpdateActors boolean
---@field bRespawnDeletedActors boolean
FDatasmithReimportOptions = {}



---@class FDatasmithRetessellationOptions : FDatasmithTessellationOptions
---@field RetessellationRule EDatasmithCADRetessellationRule
FDatasmithRetessellationOptions = {}



---@class FDatasmithStaticMaterialTemplate
---@field MaterialSlotName FName
---@field MaterialInterface UMaterialInterface
FDatasmithStaticMaterialTemplate = {}



---@class FDatasmithStaticMeshImportOptions
---@field MinLightmapResolution EDatasmithImportLightmapMin
---@field MaxLightmapResolution EDatasmithImportLightmapMax
---@field bGenerateLightmapUVs boolean
---@field bRemoveDegenerates boolean
FDatasmithStaticMeshImportOptions = {}



---@class FDatasmithStaticParameterSetTemplate
---@field StaticSwitchParameters TMap<FName, boolean>
FDatasmithStaticParameterSetTemplate = {}



---@class FDatasmithTessellationOptions
---@field ChordTolerance float
---@field MaxEdgeLength float
---@field NormalTolerance float
---@field StitchingTechnique EDatasmithCADStitchingTechnique
FDatasmithTessellationOptions = {}



---@class UDatasmithActorTemplate : UDatasmithObjectTemplate
---@field Layers TSet<FName>
---@field Tags TSet<FName>
UDatasmithActorTemplate = {}



---@class UDatasmithAdditionalData : UObject
UDatasmithAdditionalData = {}


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
UDatasmithAreaLightActorTemplate = {}



---@class UDatasmithAssetImportData : UAssetImportData
UDatasmithAssetImportData = {}


---@class UDatasmithAssetUserData : UAssetUserData
---@field MetaData TMap<FName, FString>
UDatasmithAssetUserData = {}



---@class UDatasmithCADImportSceneData : UDatasmithSceneImportData
UDatasmithCADImportSceneData = {}


---@class UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate
---@field LookatTrackingSettings FDatasmithCameraLookatTrackingSettingsTemplate
UDatasmithCineCameraActorTemplate = {}



---@class UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate
---@field FilmbackSettings FDatasmithCameraFilmbackSettingsTemplate
---@field LensSettings FDatasmithCameraLensSettingsTemplate
---@field FocusSettings FDatasmithCameraFocusSettingsTemplate
---@field CurrentFocalLength float
---@field CurrentAperture float
---@field PostProcessSettings FDatasmithPostProcessSettingsTemplate
UDatasmithCineCameraComponentTemplate = {}



---@class UDatasmithCommonTessellationOptions : UDatasmithOptionsBase
---@field Options FDatasmithTessellationOptions
UDatasmithCommonTessellationOptions = {}



---@class UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary
UDatasmithContentBlueprintLibrary = {}

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
UDatasmithCustomActionBase = {}


---@class UDatasmithDecalComponentTemplate : UDatasmithObjectTemplate
---@field SortOrder int32
---@field DecalSize FVector
---@field Material UMaterialInterface
UDatasmithDecalComponentTemplate = {}



---@class UDatasmithDeltaGenAssetImportData : UDatasmithAssetImportData
UDatasmithDeltaGenAssetImportData = {}


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
UDatasmithDeltaGenSceneImportData = {}



---@class UDatasmithFBXSceneImportData : UDatasmithSceneImportData
---@field bGenerateLightmapUVs boolean
---@field TexturesDir FString
---@field IntermediateSerialization uint8
---@field bColorizeMaterials boolean
UDatasmithFBXSceneImportData = {}



---@class UDatasmithGLTFSceneImportData : UDatasmithSceneImportData
---@field Generator FString
---@field Version float
---@field Author FString
---@field License FString
---@field Source FString
UDatasmithGLTFSceneImportData = {}



---@class UDatasmithIFCSceneImportData : UDatasmithSceneImportData
UDatasmithIFCSceneImportData = {}


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
UDatasmithImportOptions = {}



---@class UDatasmithLandscapeTemplate : UDatasmithObjectTemplate
---@field LandscapeMaterial UMaterialInterface
---@field StaticLightingLOD int32
UDatasmithLandscapeTemplate = {}



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
UDatasmithLightComponentTemplate = {}



---@class UDatasmithMDLSceneImportData : UDatasmithSceneImportData
UDatasmithMDLSceneImportData = {}


---@class UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate
---@field ParentMaterial TSoftObjectPtr<UMaterialInterface>
---@field ScalarParameterValues TMap<FName, float>
---@field VectorParameterValues TMap<FName, FLinearColor>
---@field TextureParameterValues TMap<FName, TSoftObjectPtr<UTexture>>
---@field StaticParameters FDatasmithStaticParameterSetTemplate
UDatasmithMaterialInstanceTemplate = {}



---@class UDatasmithObjectTemplate : UObject
UDatasmithObjectTemplate = {}


---@class UDatasmithOptionsBase : UObject
UDatasmithOptionsBase = {}


---@class UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate
---@field IntensityUnits ELightUnits
---@field SourceRadius float
---@field SourceLength float
---@field AttenuationRadius float
UDatasmithPointLightComponentTemplate = {}



---@class UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate
---@field Settings FDatasmithPostProcessSettingsTemplate
---@field bEnabled boolean
---@field bUnbound boolean
UDatasmithPostProcessVolumeTemplate = {}



---@class UDatasmithScene : UObject
UDatasmithScene = {}


---@class UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate
---@field RelativeTransform FTransform
---@field Mobility EComponentMobility::Type
---@field AttachParent TSoftObjectPtr<USceneComponent>
---@field bVisible boolean
---@field bCastShadow boolean
---@field Tags TSet<FName>
UDatasmithSceneComponentTemplate = {}



---@class UDatasmithSceneImportData : UAssetImportData
UDatasmithSceneImportData = {}


---@class UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate
---@field SourceType ESkyLightSourceType
---@field CubemapResolution int32
---@field Cubemap UTextureCube
UDatasmithSkyLightComponentTemplate = {}



---@class UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate
---@field InnerConeAngle float
---@field OuterConeAngle float
UDatasmithSpotLightComponentTemplate = {}



---@class UDatasmithStaticMeshCADImportData : UDatasmithStaticMeshImportData
UDatasmithStaticMeshCADImportData = {}


---@class UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate
---@field StaticMesh UStaticMesh
---@field OverrideMaterials TArray<UMaterialInterface>
UDatasmithStaticMeshComponentTemplate = {}



---@class UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData
---@field SourceMeshName FString
UDatasmithStaticMeshGLTFImportData = {}



---@class UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData
---@field SourceGlobalId FString
UDatasmithStaticMeshIFCImportData = {}



---@class UDatasmithStaticMeshImportData : UDatasmithAssetImportData
UDatasmithStaticMeshImportData = {}


---@class UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate
---@field SectionInfoMap FDatasmithMeshSectionInfoMapTemplate
---@field LightMapCoordinateIndex int32
---@field LightMapResolution int32
---@field BuildSettings TArray<FDatasmithMeshBuildSettingsTemplate>
---@field StaticMaterials TArray<FDatasmithStaticMaterialTemplate>
UDatasmithStaticMeshTemplate = {}



---@class UDatasmithTranslatedSceneImportData : UDatasmithSceneImportData
UDatasmithTranslatedSceneImportData = {}


---@class UDatasmithVREDAssetImportData : UDatasmithAssetImportData
UDatasmithVREDAssetImportData = {}


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
UDatasmithVREDSceneImportData = {}



