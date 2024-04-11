---@meta

---@class ANiagaraActor : AActor
---@field NiagaraComponent UNiagaraComponent
---@field bDestroyOnSystemFinish boolean
ANiagaraActor = {}

---@param bShouldDestroyOnSystemFinish boolean
function ANiagaraActor:SetDestroyOnSystemFinish(bShouldDestroyOnSystemFinish) end
---@param FinishedComponent UNiagaraComponent
function ANiagaraActor:OnNiagaraSystemFinished(FinishedComponent) end


---@class ANiagaraLensEffectBase : ANiagaraActor
---@field DesiredRelativeTransform FTransform
---@field BaseAuthoredFOV float
---@field bAllowMultipleInstances boolean
---@field bResetWhenRetriggered boolean
---@field EmittersToTreatAsSame TArray<TSubclassOf<AActor>>
---@field OwningCameraManager APlayerCameraManager
ANiagaraLensEffectBase = {}



---@class ANiagaraPerfBaselineActor : AActor
---@field Controller UNiagaraBaselineController
---@field Label UTextRenderComponent
ANiagaraPerfBaselineActor = {}



---@class ANiagaraPreviewBase : AActor
ANiagaraPreviewBase = {}

---@param InSystem UNiagaraSystem
function ANiagaraPreviewBase:SetSystem(InSystem) end
---@param InXAxisText FText
---@param InYAxisText FText
function ANiagaraPreviewBase:SetLabelText(InXAxisText, InYAxisText) end


---@class ANiagaraPreviewGrid : AActor
---@field System UNiagaraSystem
---@field ResetMode ENiagaraPreviewGridResetMode
---@field PreviewAxisX UNiagaraPreviewAxis
---@field PreviewAxisY UNiagaraPreviewAxis
---@field PreviewClass TSubclassOf<ANiagaraPreviewBase>
---@field SpacingX float
---@field SpacingY float
---@field NumX int32
---@field NumY int32
---@field PreviewComponents TArray<UChildActorComponent>
ANiagaraPreviewGrid = {}

---@param bPaused boolean
function ANiagaraPreviewGrid:SetPaused(bPaused) end
---@param OutPreviews TArray<UNiagaraComponent>
function ANiagaraPreviewGrid:GetPreviews(OutPreviews) end
function ANiagaraPreviewGrid:DeactivatePreviews() end
---@param bReset boolean
function ANiagaraPreviewGrid:ActivatePreviews(bReset) end


---@class FBasicParticleData
---@field Position FVector
---@field Size float
---@field Velocity FVector
FBasicParticleData = {}



---@class FEmitterCompiledScriptPair
FEmitterCompiledScriptPair = {}


---@class FMeshTriCoordinate
---@field Tri int32
---@field BaryCoord FVector3f
FMeshTriCoordinate = {}



---@class FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field BoolChannel FMovieSceneBoolChannel
FMovieSceneNiagaraBoolParameterSectionTemplate = {}



---@class FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field RedChannel FMovieSceneFloatChannel
---@field GreenChannel FMovieSceneFloatChannel
---@field BlueChannel FMovieSceneFloatChannel
---@field AlphaChannel FMovieSceneFloatChannel
FMovieSceneNiagaraColorParameterSectionTemplate = {}



---@class FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field FloatChannel FMovieSceneFloatChannel
FMovieSceneNiagaraFloatParameterSectionTemplate = {}



---@class FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field IntegerChannel FMovieSceneIntegerChannel
FMovieSceneNiagaraIntegerParameterSectionTemplate = {}



---@class FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
---@field Parameter FNiagaraVariable
FMovieSceneNiagaraParameterSectionTemplate = {}



---@class FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
---@field SpawnSectionStartFrame FFrameNumber
---@field SpawnSectionEndFrame FFrameNumber
---@field SpawnSectionStartBehavior ENiagaraSystemSpawnSectionStartBehavior
---@field SpawnSectionEvaluateBehavior ENiagaraSystemSpawnSectionEvaluateBehavior
---@field SpawnSectionEndBehavior ENiagaraSystemSpawnSectionEndBehavior
---@field AgeUpdateMode ENiagaraAgeUpdateMode
---@field bAllowScalability boolean
FMovieSceneNiagaraSystemTrackImplementation = {}



---@class FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
FMovieSceneNiagaraSystemTrackTemplate = {}


---@class FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
---@field VectorChannels FMovieSceneFloatChannel
---@field ChannelsUsed int32
FMovieSceneNiagaraVectorParameterSectionTemplate = {}



---@class FNCPool
---@field FreeElements TArray<FNCPoolElement>
FNCPool = {}



---@class FNCPoolElement
---@field Component UNiagaraComponent
FNCPoolElement = {}



---@class FNDIStaticMeshSectionFilter
---@field AllowedMaterialSlots TArray<int32>
FNDIStaticMeshSectionFilter = {}



---@class FNiagaraAssetVersion
---@field MajorVersion int32
---@field MinorVersion int32
---@field VersionGuid FGuid
---@field bIsVisibleInVersionSelector boolean
FNiagaraAssetVersion = {}



---@class FNiagaraBakerCameraSettings
---@field ViewMode ENiagaraBakerViewMode
---@field ViewportLocation FVector
---@field ViewportRotation FRotator
---@field OrbitDistance float
---@field FOV float
---@field OrthoWidth float
---@field bUseAspectRatio boolean
---@field AspectRatio float
FNiagaraBakerCameraSettings = {}



---@class FNiagaraBakerTextureSettings
---@field OutputName FName
---@field SourceBinding FNiagaraBakerTextureSource
---@field bUseFrameSize boolean
---@field FrameSize FIntPoint
---@field TextureSize FIntPoint
---@field GeneratedTexture UTexture2D
FNiagaraBakerTextureSettings = {}



---@class FNiagaraBakerTextureSource
---@field DisplayString FString
---@field SourceName FName
FNiagaraBakerTextureSource = {}



---@class FNiagaraBool
---@field Value int32
FNiagaraBool = {}



---@class FNiagaraBoolParameterMetaData
---@field DisplayMode ENiagaraBoolDisplayMode
---@field OverrideNameTrue FName
---@field OverrideNameFalse FName
---@field IconOverrideTrue UTexture2D
---@field IconOverrideFalse UTexture2D
FNiagaraBoolParameterMetaData = {}



---@class FNiagaraBoundParameter
---@field Parameter FNiagaraVariable
---@field SrcOffset int32
---@field DestOffset int32
FNiagaraBoundParameter = {}



---@class FNiagaraCollisionEventPayload
---@field CollisionPos FVector
---@field CollisionNormal FVector
---@field CollisionVelocity FVector
---@field ParticleIndex int32
---@field PhysicalMaterialIndex int32
FNiagaraCollisionEventPayload = {}



---@class FNiagaraCompileDependency
---@field LinkerErrorMessage FString
---@field NodeGuid FGuid
---@field PinGuid FGuid
---@field StackGuids TArray<FGuid>
---@field DependentVariable FNiagaraVariableBase
---@field bDependentVariableFromCustomIterationNamespace boolean
FNiagaraCompileDependency = {}



---@class FNiagaraCompileHashVisitorDebugInfo
---@field Object FString
---@field PropertyKeys TArray<FString>
---@field PropertyValues TArray<FString>
FNiagaraCompileHashVisitorDebugInfo = {}



---@class FNiagaraCompilerTag
---@field Variable FNiagaraVariable
---@field StringValue FString
FNiagaraCompilerTag = {}



---@class FNiagaraComponentPropertyBinding
---@field AttributeBinding FNiagaraVariableAttributeBinding
---@field PropertyName FName
---@field PropertyType FNiagaraTypeDefinition
---@field MetadataSetterName FName
---@field PropertySetterParameterDefaults TMap<FString, FString>
FNiagaraComponentPropertyBinding = {}



---@class FNiagaraCulledComponentInfo
FNiagaraCulledComponentInfo = {}


---@class FNiagaraDataInterfaceEmitterBinding
---@field BindingMode ENiagaraDataInterfaceEmitterBindingMode
---@field EmitterName FName
FNiagaraDataInterfaceEmitterBinding = {}



---@class FNiagaraDataInterfaceSplineLUT
---@field Positions TArray<FVector>
---@field Scales TArray<FVector>
---@field Rotations TArray<FQuat>
---@field SplineLength float
---@field SplineDistanceStep float
---@field InvSplineDistanceStep float
---@field MaxIndex int32
FNiagaraDataInterfaceSplineLUT = {}



---@class FNiagaraDataSetCompiledData
---@field Variables TArray<FNiagaraVariable>
---@field VariableLayouts TArray<FNiagaraVariableLayoutInfo>
---@field ID FNiagaraDataSetID
---@field TotalFloatComponents uint32
---@field TotalInt32Components uint32
---@field TotalHalfComponents uint32
---@field bRequiresPersistentIDs boolean
---@field SimTarget ENiagaraSimTarget
FNiagaraDataSetCompiledData = {}



---@class FNiagaraDataSetID
---@field Name FName
---@field Type ENiagaraDataSetType
FNiagaraDataSetID = {}



---@class FNiagaraDataSetProperties
---@field ID FNiagaraDataSetID
---@field Variables TArray<FNiagaraVariable>
FNiagaraDataSetProperties = {}



---@class FNiagaraDebugHUDSettingsData
---@field bHudEnabled boolean
---@field bHudRenderingEnabled boolean
---@field bValidateSystemSimulationDataBuffers boolean
---@field bValidateParticleDataBuffers boolean
---@field bOverviewEnabled boolean
---@field OverviewMode ENiagaraDebugHUDOverviewMode
---@field OverviewFont ENiagaraDebugHudFont
---@field OverviewLocation FVector2D
---@field bShowRegisteredComponents boolean
---@field bOverviewShowFilteredSystemOnly boolean
---@field ActorFilter FString
---@field bComponentFilterEnabled boolean
---@field ComponentFilter FString
---@field bSystemFilterEnabled boolean
---@field SystemFilter FString
---@field bEmitterFilterEnabled boolean
---@field EmitterFilter FString
---@field bActorFilterEnabled boolean
---@field SystemDebugVerbosity ENiagaraDebugHudVerbosity
---@field SystemEmitterVerbosity ENiagaraDebugHudVerbosity
---@field DataInterfaceVerbosity ENiagaraDebugHudVerbosity
---@field bSystemShowBounds boolean
---@field bSystemShowActiveOnlyInWorld boolean
---@field bShowSystemVariables boolean
---@field SystemVariables TArray<FNiagaraDebugHUDVariable>
---@field SystemTextOptions FNiagaraDebugHudTextOptions
---@field bShowParticleVariables boolean
---@field bEnableGpuParticleReadback boolean
---@field bShowParticleIndex boolean
---@field ParticlesVariables TArray<FNiagaraDebugHUDVariable>
---@field ParticleTextOptions FNiagaraDebugHudTextOptions
---@field bShowParticlesVariablesWithSystem boolean
---@field bShowParticleVariablesVertical boolean
---@field bUseMaxParticlesToDisplay boolean
---@field bUseParticleDisplayClip boolean
---@field ParticleDisplayClip FVector2D
---@field bUseParticleDisplayCenterRadius boolean
---@field ParticleDisplayCenterRadius float
---@field MaxParticlesToDisplay int32
---@field PerfReportFrames int32
---@field PerfSampleMode ENiagaraDebugHUDPerfSampleMode
---@field PerfGraphMode ENiagaraDebugHUDPerfGraphMode
---@field PerfHistoryFrames int32
---@field PerfGraphTimeRange float
---@field PerfGraphSize FVector2D
---@field PerfGraphAxisColor FLinearColor
---@field bEnableSmoothing boolean
---@field SmoothingWidth int32
---@field DefaultBackgroundColor FLinearColor
---@field OverviewHeadingColor FLinearColor
---@field OverviewDetailColor FLinearColor
---@field OverviewDetailHighlightColor FLinearColor
---@field InWorldErrorTextColor FLinearColor
---@field InWorldTextColor FLinearColor
---@field MessageInfoTextColor FLinearColor
---@field MessageWarningTextColor FLinearColor
---@field MessageErrorTextColor FLinearColor
---@field SystemColorTableOpacity float
---@field SystemColorSeed uint32
---@field SystemColorHSVMin FVector
---@field SystemColorHSVMax FVector
---@field PlaybackMode ENiagaraDebugPlaybackMode
---@field bPlaybackRateEnabled boolean
---@field PlaybackRate float
---@field bLoopTimeEnabled boolean
---@field LoopTime float
---@field bShowGlobalBudgetInfo boolean
FNiagaraDebugHUDSettingsData = {}



---@class FNiagaraDebugHUDVariable
---@field bEnabled boolean
---@field Name FString
FNiagaraDebugHUDVariable = {}



---@class FNiagaraDebugHudTextOptions
---@field Font ENiagaraDebugHudFont
---@field HorizontalAlignment ENiagaraDebugHudHAlign
---@field VerticalAlignment ENiagaraDebugHudVAlign
---@field ScreenOffset FVector2D
FNiagaraDebugHudTextOptions = {}



---@class FNiagaraDebuggerAcceptConnection
---@field SessionId FGuid
---@field InstanceId FGuid
FNiagaraDebuggerAcceptConnection = {}



---@class FNiagaraDebuggerConnectionClosed
---@field SessionId FGuid
---@field InstanceId FGuid
FNiagaraDebuggerConnectionClosed = {}



---@class FNiagaraDebuggerExecuteConsoleCommand
---@field Command FString
---@field bRequiresWorld boolean
FNiagaraDebuggerExecuteConsoleCommand = {}



---@class FNiagaraDebuggerOutlinerUpdate
---@field OutlinerData FNiagaraOutlinerData
FNiagaraDebuggerOutlinerUpdate = {}



---@class FNiagaraDebuggerRequestConnection
---@field SessionId FGuid
---@field InstanceId FGuid
FNiagaraDebuggerRequestConnection = {}



---@class FNiagaraDetailsLevelScaleOverrides
---@field Low float
---@field Medium float
---@field High float
---@field Epic float
---@field Cine float
FNiagaraDetailsLevelScaleOverrides = {}



---@class FNiagaraDeviceProfileStateEntry
---@field ProfileName FName
---@field QualityLevelMask uint32
---@field SetQualityLevelMask uint32
FNiagaraDeviceProfileStateEntry = {}



---@class FNiagaraEmitterCompiledData
---@field SpawnAttributes TArray<FName>
---@field EmitterSpawnIntervalVar FNiagaraVariable
---@field EmitterInterpSpawnStartDTVar FNiagaraVariable
---@field EmitterSpawnGroupVar FNiagaraVariable
---@field EmitterAgeVar FNiagaraVariable
---@field EmitterRandomSeedVar FNiagaraVariable
---@field EmitterInstanceSeedVar FNiagaraVariable
---@field EmitterTotalSpawnedParticlesVar FNiagaraVariable
---@field DataSetCompiledData FNiagaraDataSetCompiledData
FNiagaraEmitterCompiledData = {}



---@class FNiagaraEmitterHandle
---@field ID FGuid
---@field IdName FName
---@field bIsEnabled boolean
---@field Name FName
---@field Instance UNiagaraEmitter
---@field VersionedInstance FVersionedNiagaraEmitter
FNiagaraEmitterHandle = {}



---@class FNiagaraEmitterNameSettingsRef
---@field SystemName FName
---@field EmitterName FString
FNiagaraEmitterNameSettingsRef = {}



---@class FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
---@field bOverrideSpawnCountScale boolean
FNiagaraEmitterScalabilityOverride = {}



---@class FNiagaraEmitterScalabilityOverrides
---@field Overrides TArray<FNiagaraEmitterScalabilityOverride>
FNiagaraEmitterScalabilityOverrides = {}



---@class FNiagaraEmitterScalabilitySettings
---@field Platforms FNiagaraPlatformSet
---@field bScaleSpawnCount boolean
---@field SpawnCountScale float
FNiagaraEmitterScalabilitySettings = {}



---@class FNiagaraEmitterScalabilitySettingsArray
---@field Settings TArray<FNiagaraEmitterScalabilitySettings>
FNiagaraEmitterScalabilitySettingsArray = {}



---@class FNiagaraEmitterScriptProperties
---@field Script UNiagaraScript
---@field EventReceivers TArray<FNiagaraEventReceiverProperties>
---@field EventGenerators TArray<FNiagaraEventGeneratorProperties>
FNiagaraEmitterScriptProperties = {}



---@class FNiagaraEnumParameterMetaData
---@field OverrideName FName
---@field IconOverride UTexture2D
---@field bUseColorOverride boolean
---@field ColorOverride FLinearColor
FNiagaraEnumParameterMetaData = {}



---@class FNiagaraEventGeneratorProperties
---@field MaxEventsPerFrame int32
---@field ID FName
---@field DataSetCompiledData FNiagaraDataSetCompiledData
FNiagaraEventGeneratorProperties = {}



---@class FNiagaraEventReceiverProperties
---@field Name FName
---@field SourceEventGenerator FName
---@field SourceEmitter FName
FNiagaraEventReceiverProperties = {}



---@class FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
---@field ExecutionMode EScriptExecutionMode
---@field SpawnNumber uint32
---@field MaxEventsPerFrame uint32
---@field SourceEmitterID FGuid
---@field SourceEventName FName
---@field bRandomSpawnNumber boolean
---@field MinSpawnNumber uint32
---@field UpdateAttributeInitialValues boolean
FNiagaraEventScriptProperties = {}



---@class FNiagaraFloat
---@field Value float
FNiagaraFloat = {}



---@class FNiagaraFunctionSignature
---@field Name FName
---@field Inputs TArray<FNiagaraVariable>
---@field Outputs TArray<FNiagaraVariable>
---@field OwnerName FName
---@field bRequiresContext boolean
---@field bRequiresExecPin boolean
---@field bMemberFunction boolean
---@field bExperimental boolean
---@field bSupportsCPU boolean
---@field bSupportsGPU boolean
---@field bWriteFunction boolean
---@field bReadFunction boolean
---@field bSoftDeprecatedFunction boolean
---@field bIsCompileTagGenerator boolean
---@field bHidden boolean
---@field ModuleUsageBitmask int32
---@field ContextStageIndex int32
---@field FunctionSpecifiers TMap<FName, FName>
FNiagaraFunctionSignature = {}



---@class FNiagaraGlobalBudgetScaling
---@field bCullByGlobalBudget boolean
---@field bScaleMaxDistanceByGlobalBudgetUse boolean
---@field bScaleMaxInstanceCountByGlobalBudgetUse boolean
---@field bScaleSystemInstanceCountByGlobalBudgetUse boolean
---@field MaxGlobalBudgetUsage float
---@field MaxDistanceScaleByGlobalBudgetUse FNiagaraLinearRamp
---@field MaxInstanceCountScaleByGlobalBudgetUse FNiagaraLinearRamp
---@field MaxSystemInstanceCountScaleByGlobalBudgetUse FNiagaraLinearRamp
FNiagaraGlobalBudgetScaling = {}



---@class FNiagaraGraphViewSettings
---@field Location FVector2D
---@field Zoom float
---@field bIsValid boolean
FNiagaraGraphViewSettings = {}



---@class FNiagaraHalf
---@field Value uint16
FNiagaraHalf = {}



---@class FNiagaraHalfVector2
---@field X uint16
---@field Y uint16
FNiagaraHalfVector2 = {}



---@class FNiagaraHalfVector3
---@field X uint16
---@field Y uint16
---@field Z uint16
FNiagaraHalfVector3 = {}



---@class FNiagaraHalfVector4
---@field X uint16
---@field Y uint16
---@field Z uint16
---@field W uint16
FNiagaraHalfVector4 = {}



---@class FNiagaraID
---@field Index int32
---@field AcquireTag int32
FNiagaraID = {}



---@class FNiagaraInputConditionMetadata
---@field InputName FName
---@field TargetValues TArray<FString>
FNiagaraInputConditionMetadata = {}



---@class FNiagaraInt32
---@field Value int32
FNiagaraInt32 = {}



---@class FNiagaraLinearRamp
---@field StartX float
---@field StartY float
---@field EndX float
---@field EndY float
FNiagaraLinearRamp = {}



---@class FNiagaraLwcStructConverter
---@field ConversionSteps TArray<FNiagaraStructConversionStep>
FNiagaraLwcStructConverter = {}



---@class FNiagaraMaterialAttributeBinding
---@field MaterialParameterName FName
---@field NiagaraVariable FNiagaraVariableBase
---@field ResolvedNiagaraVariable FNiagaraVariableBase
---@field NiagaraChildVariable FNiagaraVariableBase
FNiagaraMaterialAttributeBinding = {}



---@class FNiagaraMatrix
---@field Row0 FVector4f
---@field Row1 FVector4f
---@field Row2 FVector4f
---@field Row3 FVector4f
FNiagaraMatrix = {}



---@class FNiagaraMeshMaterialOverride
---@field ExplicitMat UMaterialInterface
---@field UserParamBinding FNiagaraUserParameterBinding
FNiagaraMeshMaterialOverride = {}



---@class FNiagaraMeshRendererMeshProperties
---@field Mesh UStaticMesh
---@field UserParamBinding FNiagaraUserParameterBinding
---@field Scale FVector
---@field Rotation FRotator
---@field PivotOffset FVector
---@field PivotOffsetSpace ENiagaraMeshPivotOffsetSpace
FNiagaraMeshRendererMeshProperties = {}



---@class FNiagaraModuleDependency
---@field ID FName
---@field Type ENiagaraModuleDependencyType
---@field ScriptConstraint ENiagaraModuleDependencyScriptConstraint
---@field RequiredVersion FString
---@field OnlyEvaluateInScriptUsage int32
---@field Description FText
FNiagaraModuleDependency = {}



---@class FNiagaraNumeric
FNiagaraNumeric = {}


---@class FNiagaraOutlinerCaptureSettings
---@field bTriggerCapture boolean
---@field CaptureDelayFrames uint32
---@field bGatherPerfData boolean
---@field SimCacheCaptureFrames uint32
FNiagaraOutlinerCaptureSettings = {}



---@class FNiagaraOutlinerData
---@field WorldData TMap<FString, FNiagaraOutlinerWorldData>
FNiagaraOutlinerData = {}



---@class FNiagaraOutlinerEmitterInstanceData
---@field EmitterName FString
---@field SimTarget ENiagaraSimTarget
---@field ExecState ENiagaraExecutionState
---@field NumParticles int32
---@field bRequiresPersistentIDs boolean
FNiagaraOutlinerEmitterInstanceData = {}



---@class FNiagaraOutlinerSystemData
---@field SystemInstances TArray<FNiagaraOutlinerSystemInstanceData>
---@field AveragePerFrameTime FNiagaraOutlinerTimingData
---@field MaxPerFrameTime FNiagaraOutlinerTimingData
---@field AveragePerInstanceTime FNiagaraOutlinerTimingData
---@field MaxPerInstanceTime FNiagaraOutlinerTimingData
FNiagaraOutlinerSystemData = {}



---@class FNiagaraOutlinerSystemInstanceData
---@field ComponentName FString
---@field LWCTile FVector3f
---@field Emitters TArray<FNiagaraOutlinerEmitterInstanceData>
---@field ActualExecutionState ENiagaraExecutionState
---@field RequestedExecutionState ENiagaraExecutionState
---@field ScalabilityState FNiagaraScalabilityState
---@field bPendingKill boolean
---@field bUsingCullProxy boolean
---@field PoolMethod ENCPoolMethod
---@field AverageTime FNiagaraOutlinerTimingData
---@field MaxTime FNiagaraOutlinerTimingData
---@field TickGroup ETickingGroup
---@field GpuTickStage ENiagaraGpuComputeTickStage::Type
---@field bIsSolo boolean
---@field bRequiresDistanceFieldData boolean
---@field bRequiresDepthBuffer boolean
---@field bRequiresEarlyViewData boolean
---@field bRequiresViewUniformBuffer boolean
---@field bRequiresRayTracingScene boolean
FNiagaraOutlinerSystemInstanceData = {}



---@class FNiagaraOutlinerTimingData
---@field GameThread float
---@field RenderThread float
FNiagaraOutlinerTimingData = {}



---@class FNiagaraOutlinerWorldData
---@field Systems TMap<FString, FNiagaraOutlinerSystemData>
---@field bHasBegunPlay boolean
---@field WorldType uint8
---@field NetMode uint8
---@field AveragePerFrameTime FNiagaraOutlinerTimingData
---@field MaxPerFrameTime FNiagaraOutlinerTimingData
FNiagaraOutlinerWorldData = {}



---@class FNiagaraParameterDataSetBinding
---@field ParameterOffset int32
---@field DataSetComponentOffset int32
FNiagaraParameterDataSetBinding = {}



---@class FNiagaraParameterDataSetBindingCollection
---@field FloatOffsets TArray<FNiagaraParameterDataSetBinding>
---@field Int32Offsets TArray<FNiagaraParameterDataSetBinding>
FNiagaraParameterDataSetBindingCollection = {}



---@class FNiagaraParameterMap
FNiagaraParameterMap = {}


---@class FNiagaraParameterStore
---@field Owner TWeakObjectPtr<UObject>
---@field SortedParameterOffsets TArray<FNiagaraVariableWithOffset>
---@field ParameterData TArray<uint8>
---@field DataInterfaces TArray<UNiagaraDataInterface>
---@field UObjects TArray<UObject>
---@field OriginalPositionData TArray<FNiagaraPositionSource>
FNiagaraParameterStore = {}



---@class FNiagaraParameters
---@field Parameters TArray<FNiagaraVariable>
FNiagaraParameters = {}



---@class FNiagaraPerfBaselineStats
---@field PerInstanceAvg_GT float
---@field PerInstanceAvg_RT float
---@field PerInstanceMax_GT float
---@field PerInstanceMax_RT float
FNiagaraPerfBaselineStats = {}



---@class FNiagaraPlatformSet
---@field QualityLevelMask int32
---@field DeviceProfileStates TArray<FNiagaraDeviceProfileStateEntry>
---@field CVarConditions TArray<FNiagaraPlatformSetCVarCondition>
FNiagaraPlatformSet = {}



---@class FNiagaraPlatformSetCVarCondition
---@field CVarName FName
---@field PassResponse ENiagaraCVarConditionResponse
---@field FailResponse ENiagaraCVarConditionResponse
---@field Value boolean
---@field MinInt int32
---@field MaxInt int32
---@field MinFloat float
---@field MaxFloat float
---@field bUseMinInt boolean
---@field bUseMaxInt boolean
---@field bUseMinFloat boolean
---@field bUseMaxFloat boolean
FNiagaraPlatformSetCVarCondition = {}



---@class FNiagaraPlatformSetConflictEntry
---@field ProfileName FName
---@field QualityLevelMask int32
FNiagaraPlatformSetConflictEntry = {}



---@class FNiagaraPlatformSetConflictInfo
---@field SetAIndex int32
---@field SetBIndex int32
---@field Conflicts TArray<FNiagaraPlatformSetConflictEntry>
FNiagaraPlatformSetConflictInfo = {}



---@class FNiagaraPlatformSetRedirect
---@field ProfileNames TArray<FName>
---@field Mode ENiagaraDeviceProfileRedirectMode
---@field RedirectProfileName FName
---@field CVarConditionEnabled FNiagaraPlatformSetCVarCondition
---@field CVarConditionDisabled FNiagaraPlatformSetCVarCondition
FNiagaraPlatformSetRedirect = {}



---@class FNiagaraPosition : FVector3f
FNiagaraPosition = {}


---@class FNiagaraPositionSource
---@field Name FName
---@field Value FVector
FNiagaraPositionSource = {}



---@class FNiagaraRandInfo
---@field Seed1 int32
---@field Seed2 int32
---@field Seed3 int32
FNiagaraRandInfo = {}



---@class FNiagaraRendererMaterialParameters
---@field AttributeBindings TArray<FNiagaraMaterialAttributeBinding>
---@field ScalarParameters TArray<FNiagaraRendererMaterialScalarParameter>
---@field VectorParameters TArray<FNiagaraRendererMaterialVectorParameter>
---@field TextureParameters TArray<FNiagaraRendererMaterialTextureParameter>
FNiagaraRendererMaterialParameters = {}



---@class FNiagaraRendererMaterialScalarParameter
---@field MaterialParameterName FName
---@field Value float
FNiagaraRendererMaterialScalarParameter = {}



---@class FNiagaraRendererMaterialTextureParameter
---@field MaterialParameterName FName
---@field Texture UTexture
FNiagaraRendererMaterialTextureParameter = {}



---@class FNiagaraRendererMaterialVectorParameter
---@field MaterialParameterName FName
---@field Value FLinearColor
FNiagaraRendererMaterialVectorParameter = {}



---@class FNiagaraRequestSimpleClientInfoMessage
FNiagaraRequestSimpleClientInfoMessage = {}


---@class FNiagaraRibbonShapeCustomVertex
---@field Position FVector2f
---@field Normal FVector2f
---@field TextureV float
FNiagaraRibbonShapeCustomVertex = {}



---@class FNiagaraRibbonUVSettings
---@field DistributionMode ENiagaraRibbonUVDistributionMode
---@field LeadingEdgeMode ENiagaraRibbonUVEdgeMode
---@field TrailingEdgeMode ENiagaraRibbonUVEdgeMode
---@field TilingLength float
---@field Offset FVector2D
---@field Scale FVector2D
---@field bEnablePerParticleUOverride boolean
---@field bEnablePerParticleVRangeOverride boolean
FNiagaraRibbonUVSettings = {}



---@class FNiagaraScalabilityManager
---@field EffectType UNiagaraEffectType
---@field ManagedComponents TArray<UNiagaraComponent>
FNiagaraScalabilityManager = {}



---@class FNiagaraScalabilityState
---@field Significance float
---@field LastVisibleTime float
---@field bCulled boolean
---@field bPreviousCulled boolean
---@field bCulledByDistance boolean
---@field bCulledByInstanceCount boolean
---@field bCulledByVisibility boolean
---@field bCulledByGlobalBudget boolean
FNiagaraScalabilityState = {}



---@class FNiagaraScriptDataInterfaceCompileInfo
---@field Name FName
---@field UserPtrIdx int32
---@field Type FNiagaraTypeDefinition
---@field RegisteredParameterMapRead FName
---@field RegisteredParameterMapWrite FName
---@field bIsPlaceholder boolean
FNiagaraScriptDataInterfaceCompileInfo = {}



---@class FNiagaraScriptDataInterfaceInfo
---@field DataInterface UNiagaraDataInterface
---@field Name FName
---@field UserPtrIdx int32
---@field Type FNiagaraTypeDefinition
---@field RegisteredParameterMapRead FName
---@field RegisteredParameterMapWrite FName
FNiagaraScriptDataInterfaceInfo = {}



---@class FNiagaraScriptDataUsageInfo
---@field bReadsAttributeData boolean
FNiagaraScriptDataUsageInfo = {}



---@class FNiagaraScriptExecutionPaddingInfo
---@field SrcOffset uint16
---@field DestOffset uint16
---@field SrcSize uint16
---@field DestSize uint16
FNiagaraScriptExecutionPaddingInfo = {}



---@class FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
---@field ParameterSize int32
---@field PaddedParameterSize uint32
---@field PaddingInfo TArray<FNiagaraScriptExecutionPaddingInfo>
---@field bInitialized boolean
FNiagaraScriptExecutionParameterStore = {}



---@class FNiagaraScriptHighlight
---@field Color FLinearColor
---@field DisplayName FText
FNiagaraScriptHighlight = {}



---@class FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
FNiagaraScriptInstanceParameterStore = {}


---@class FNiagaraScriptVariableBinding
---@field Name FName
FNiagaraScriptVariableBinding = {}



---@class FNiagaraSimCacheCreateParameters
---@field AttributeCaptureMode ENiagaraSimCacheAttributeCaptureMode
---@field bAllowRebasing boolean
---@field bAllowDataInterfaceCaching boolean
---@field RebaseIncludeAttributes TArray<FName>
---@field RebaseExcludeAttributes TArray<FName>
---@field ExplicitCaptureAttributes TArray<FName>
FNiagaraSimCacheCreateParameters = {}



---@class FNiagaraSimCacheDataBuffers
---@field NumInstances uint32
---@field FloatData TArray<uint8>
---@field HalfData TArray<uint8>
---@field Int32Data TArray<uint8>
---@field IDToIndexTable TArray<int32>
---@field IDAcquireTag uint32
FNiagaraSimCacheDataBuffers = {}



---@class FNiagaraSimCacheDataBuffersLayout
---@field LayoutName FName
---@field SimTarget ENiagaraSimTarget
---@field Variables TArray<FNiagaraSimCacheVariable>
---@field FloatCount uint16
---@field HalfCount uint16
---@field Int32Count uint16
---@field bLocalSpace boolean
---@field RebaseVariableNames TArray<FName>
FNiagaraSimCacheDataBuffersLayout = {}



---@class FNiagaraSimCacheEmitterFrame
---@field LocalBounds FBox
---@field TotalSpawnedParticles int32
---@field ParticleDataBuffers FNiagaraSimCacheDataBuffers
FNiagaraSimCacheEmitterFrame = {}



---@class FNiagaraSimCacheFrame
---@field LocalToWorld FTransform
---@field LWCTile FVector3f
---@field SystemData FNiagaraSimCacheSystemFrame
---@field EmitterData TArray<FNiagaraSimCacheEmitterFrame>
FNiagaraSimCacheFrame = {}



---@class FNiagaraSimCacheLayout
---@field SystemLayout FNiagaraSimCacheDataBuffersLayout
---@field EmitterLayouts TArray<FNiagaraSimCacheDataBuffersLayout>
FNiagaraSimCacheLayout = {}



---@class FNiagaraSimCacheSystemFrame
---@field LocalBounds FBox
---@field SystemDataBuffers FNiagaraSimCacheDataBuffers
FNiagaraSimCacheSystemFrame = {}



---@class FNiagaraSimCacheVariable
---@field Variable FNiagaraVariableBase
---@field FloatOffset uint16
---@field FloatCount uint16
---@field HalfOffset uint16
---@field HalfCount uint16
---@field Int32Offset uint16
---@field Int32Count uint16
FNiagaraSimCacheVariable = {}



---@class FNiagaraSimpleClientInfo
---@field Systems TArray<FString>
---@field Actors TArray<FString>
---@field Components TArray<FString>
---@field Emitters TArray<FString>
FNiagaraSimpleClientInfo = {}



---@class FNiagaraSpawnInfo
---@field Count int32
---@field InterpStartDt float
---@field IntervalDt float
---@field SpawnGroup int32
FNiagaraSpawnInfo = {}



---@class FNiagaraStackSection
---@field SectionIdentifier FName
---@field SectionDisplayName FText
---@field Categories TArray<FText>
---@field bEnabled boolean
FNiagaraStackSection = {}



---@class FNiagaraStatScope
---@field FullName FName
---@field FriendlyName FName
FNiagaraStatScope = {}



---@class FNiagaraStructConversionStep
---@field SourceBytes int32
---@field SourceOffset int32
---@field SimulationBytes int32
---@field SimulationOffset int32
---@field ConversionType ENiagaraStructConversionType
FNiagaraStructConversionStep = {}



---@class FNiagaraSystemCompileRequest
---@field RootObjects TArray<UObject>
FNiagaraSystemCompileRequest = {}



---@class FNiagaraSystemCompiledData
---@field InstanceParamStore FNiagaraParameterStore
---@field DataSetCompiledData FNiagaraDataSetCompiledData
---@field SpawnInstanceParamsDataSetCompiledData FNiagaraDataSetCompiledData
---@field UpdateInstanceParamsDataSetCompiledData FNiagaraDataSetCompiledData
---@field SpawnInstanceGlobalBinding FNiagaraParameterDataSetBindingCollection
---@field SpawnInstanceSystemBinding FNiagaraParameterDataSetBindingCollection
---@field SpawnInstanceOwnerBinding FNiagaraParameterDataSetBindingCollection
---@field SpawnInstanceEmitterBindings TArray<FNiagaraParameterDataSetBindingCollection>
---@field UpdateInstanceGlobalBinding FNiagaraParameterDataSetBindingCollection
---@field UpdateInstanceSystemBinding FNiagaraParameterDataSetBindingCollection
---@field UpdateInstanceOwnerBinding FNiagaraParameterDataSetBindingCollection
---@field UpdateInstanceEmitterBindings TArray<FNiagaraParameterDataSetBindingCollection>
FNiagaraSystemCompiledData = {}



---@class FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
---@field bOverrideDistanceSettings boolean
---@field bOverrideInstanceCountSettings boolean
---@field bOverridePerSystemInstanceCountSettings boolean
---@field bOverrideVisibilitySettings boolean
---@field bOverrideGlobalBudgetScalingSettings boolean
---@field bOverrideCullProxySettings boolean
FNiagaraSystemScalabilityOverride = {}



---@class FNiagaraSystemScalabilityOverrides
---@field Overrides TArray<FNiagaraSystemScalabilityOverride>
FNiagaraSystemScalabilityOverrides = {}



---@class FNiagaraSystemScalabilitySettings
---@field Platforms FNiagaraPlatformSet
---@field bCullByDistance boolean
---@field bCullMaxInstanceCount boolean
---@field bCullPerSystemMaxInstanceCount boolean
---@field MaxDistance float
---@field bCullByMaxTimeWithoutRender boolean
---@field MaxInstances int32
---@field MaxSystemInstances int32
---@field MaxTimeWithoutRender float
---@field CullProxyMode ENiagaraCullProxyMode
---@field MaxSystemProxies int32
---@field VisibilityCulling FNiagaraSystemVisibilityCullingSettings
---@field BudgetScaling FNiagaraGlobalBudgetScaling
FNiagaraSystemScalabilitySettings = {}



---@class FNiagaraSystemScalabilitySettingsArray
---@field Settings TArray<FNiagaraSystemScalabilitySettings>
FNiagaraSystemScalabilitySettingsArray = {}



---@class FNiagaraSystemSimCacheCaptureReply
---@field ComponentName FName
---@field SimCacheData TArray<uint8>
FNiagaraSystemSimCacheCaptureReply = {}



---@class FNiagaraSystemSimCacheCaptureRequest
---@field ComponentName FName
---@field CaptureDelayFrames uint32
---@field CaptureFrames uint32
FNiagaraSystemSimCacheCaptureRequest = {}



---@class FNiagaraSystemUpdateContext
---@field ComponentsToReset TArray<UNiagaraComponent>
---@field ComponentsToReInit TArray<UNiagaraComponent>
---@field ComponentsToNotifySimDestroy TArray<UNiagaraComponent>
---@field SystemSimsToDestroy TArray<UNiagaraSystem>
---@field SystemSimsToRecache TArray<UNiagaraSystem>
FNiagaraSystemUpdateContext = {}



---@class FNiagaraSystemVisibilityCullingSettings
---@field bCullWhenNotRendered boolean
---@field bCullByViewFrustum boolean
---@field bAllowPreCullingByViewFrustum boolean
---@field MaxTimeOutsideViewFrustum float
---@field MaxTimeWithoutRender float
FNiagaraSystemVisibilityCullingSettings = {}



---@class FNiagaraTypeDefinition
---@field ClassStructOrEnum UObject
---@field UnderlyingType uint16
---@field Flags uint8
FNiagaraTypeDefinition = {}



---@class FNiagaraTypeDefinitionHandle
---@field RegisteredTypeIndex int32
FNiagaraTypeDefinitionHandle = {}



---@class FNiagaraTypeLayoutInfo
---@field FloatComponentByteOffsets TArray<uint32>
---@field FloatComponentRegisterOffsets TArray<uint32>
---@field Int32ComponentByteOffsets TArray<uint32>
---@field Int32ComponentRegisterOffsets TArray<uint32>
---@field HalfComponentByteOffsets TArray<uint32>
---@field HalfComponentRegisterOffsets TArray<uint32>
FNiagaraTypeLayoutInfo = {}



---@class FNiagaraUObjectPropertyReaderRemap
---@field GraphName FName
---@field RemapName FName
FNiagaraUObjectPropertyReaderRemap = {}



---@class FNiagaraUserParameterBinding
---@field Parameter FNiagaraVariable
FNiagaraUserParameterBinding = {}



---@class FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
---@field UserParameterRedirects TMap<FNiagaraVariable, FNiagaraVariable>
FNiagaraUserRedirectionParameterStore = {}



---@class FNiagaraVMExecutableByteCode
---@field Data TArray<uint8>
---@field UncompressedSize int32
FNiagaraVMExecutableByteCode = {}



---@class FNiagaraVMExecutableData
---@field ByteCode FNiagaraVMExecutableByteCode
---@field OptimizedByteCode FNiagaraVMExecutableByteCode
---@field NumTempRegisters int32
---@field NumUserPtrs int32
---@field CompileTags TArray<FNiagaraCompilerTag>
---@field ScriptLiterals TArray<uint8>
---@field Attributes TArray<FNiagaraVariable>
---@field DataUsage FNiagaraScriptDataUsageInfo
---@field DataInterfaceInfo TArray<FNiagaraScriptDataInterfaceCompileInfo>
---@field CalledVMExternalFunctions TArray<FVMExternalFunctionBindingInfo>
---@field ReadDataSets TArray<FNiagaraDataSetID>
---@field WriteDataSets TArray<FNiagaraDataSetProperties>
---@field StatScopes TArray<FNiagaraStatScope>
---@field ShaderScriptParametersMetadata FNiagaraShaderScriptParametersMetadata
---@field LastCompileStatus ENiagaraScriptCompileStatus
---@field SimulationStageMetaData TArray<FSimulationStageMetaData>
---@field ExperimentalContextData TArray<uint8>
---@field bReadsSignificanceIndex boolean
---@field bNeedsGPUContextInit boolean
FNiagaraVMExecutableData = {}



---@class FNiagaraVMExecutableDataId
---@field CompilerVersionID FGuid
---@field ScriptUsageType ENiagaraScriptUsage
---@field ScriptUsageTypeID FGuid
---@field bUsesRapidIterationParams boolean
---@field bDisableDebugSwitches boolean
---@field bInterpolatedSpawn boolean
---@field bRequiresPersistentIDs boolean
---@field BaseScriptID FGuid
---@field BaseScriptCompileHash FNiagaraCompileHash
---@field ScriptVersionID FGuid
FNiagaraVMExecutableDataId = {}



---@class FNiagaraVariable : FNiagaraVariableBase
---@field VarData TArray<uint8>
FNiagaraVariable = {}



---@class FNiagaraVariableAttributeBinding
---@field ParamMapVariable FNiagaraVariableBase
---@field DataSetVariable FNiagaraVariable
---@field RootVariable FNiagaraVariable
---@field BindingSourceMode ENiagaraBindingSource
---@field bBindingExistsOnSource boolean
---@field bIsCachedParticleValue boolean
FNiagaraVariableAttributeBinding = {}



---@class FNiagaraVariableBase
---@field Name FName
---@field TypeDefHandle FNiagaraTypeDefinitionHandle
FNiagaraVariableBase = {}



---@class FNiagaraVariableDataInterfaceBinding
---@field BoundVariable FNiagaraVariable
FNiagaraVariableDataInterfaceBinding = {}



---@class FNiagaraVariableInfo
---@field Variable FNiagaraVariable
---@field Definition FText
---@field DataInterface UNiagaraDataInterface
FNiagaraVariableInfo = {}



---@class FNiagaraVariableLayoutInfo
---@field FloatComponentStart uint32
---@field Int32ComponentStart uint32
---@field HalfComponentStart uint32
---@field LayoutInfo FNiagaraTypeLayoutInfo
FNiagaraVariableLayoutInfo = {}



---@class FNiagaraVariableMetaData
---@field Description FText
---@field CategoryName FText
---@field bAdvancedDisplay boolean
---@field bDisplayInOverviewStack boolean
---@field InlineParameterSortPriority int32
---@field bOverrideColor boolean
---@field InlineParameterColorOverride FLinearColor
---@field InlineParameterEnumOverrides TArray<FNiagaraEnumParameterMetaData>
---@field bEnableBoolOverride boolean
---@field InlineParameterBoolOverride FNiagaraBoolParameterMetaData
---@field EditorSortPriority int32
---@field bInlineEditConditionToggle boolean
---@field EditCondition FNiagaraInputConditionMetadata
---@field VisibleCondition FNiagaraInputConditionMetadata
---@field PropertyMetaData TMap<FName, FString>
---@field ParentAttribute FName
---@field AlternateAliases TArray<FName>
---@field VariableGuid FGuid
---@field bIsStaticSwitch boolean
---@field StaticSwitchDefaultValue int32
FNiagaraVariableMetaData = {}



---@class FNiagaraVariableWithOffset : FNiagaraVariableBase
---@field Offset int32
---@field StructConverter FNiagaraLwcStructConverter
FNiagaraVariableWithOffset = {}



---@class FNiagaraVariant
---@field Object UObject
---@field DataInterface UNiagaraDataInterface
---@field Bytes TArray<uint8>
---@field CurrentMode ENiagaraVariantMode
FNiagaraVariant = {}



---@class FNiagaraWildcard
FNiagaraWildcard = {}


---@class FNiagaraWorldManagerTickFunction : FTickFunction
FNiagaraWorldManagerTickFunction = {}


---@class FParameterDefinitionsSubscription
FParameterDefinitionsSubscription = {}


---@class FVMExternalFunctionBindingInfo
---@field Name FName
---@field OwnerName FName
---@field InputParamLocations TArray<boolean>
---@field NumOutputs int32
---@field FunctionSpecifiers TArray<FVMFunctionSpecifier>
FVMExternalFunctionBindingInfo = {}



---@class FVMFunctionSpecifier
---@field Key FName
---@field Value FName
FVMFunctionSpecifier = {}



---@class FVersionedNiagaraEmitter
---@field Emitter UNiagaraEmitter
---@field Version FGuid
FVersionedNiagaraEmitter = {}



---@class FVersionedNiagaraEmitterData
---@field Version FNiagaraAssetVersion
---@field VersionChangeDescription FText
---@field UpdateScriptExecution ENiagaraPythonUpdateScriptReference
---@field PythonUpdateScript FString
---@field ScriptAsset FFilePath
---@field bDeprecated boolean
---@field DeprecationMessage FText
---@field bLocalSpace boolean
---@field bDeterminism boolean
---@field RandomSeed int32
---@field bInterpolatedSpawning boolean
---@field SimTarget ENiagaraSimTarget
---@field CalculateBoundsMode ENiagaraEmitterCalculateBoundMode
---@field FixedBounds FBox
---@field bRequiresPersistentIDs boolean
---@field bCombineEventSpawn boolean
---@field EventHandlerScriptProps TArray<FNiagaraEventScriptProperties>
---@field Platforms FNiagaraPlatformSet
---@field ScalabilityOverrides FNiagaraEmitterScalabilityOverrides
---@field bLimitDeltaTime boolean
---@field MaxGPUParticlesSpawnPerFrame int32
---@field MaxDeltaTimePerTick float
---@field AllocationMode EParticleAllocationMode
---@field PreAllocationCount int32
---@field UpdateScriptProps FNiagaraEmitterScriptProperties
---@field SpawnScriptProps FNiagaraEmitterScriptProperties
---@field RendererBindings FNiagaraParameterStore
---@field RendererProperties TArray<UNiagaraRendererProperties>
---@field SimulationStages TArray<UNiagaraSimulationStageBase>
---@field GPUComputeScript UNiagaraScript
---@field SharedEventGeneratorIds TArray<FName>
---@field CurrentScalabilitySettings FNiagaraEmitterScalabilitySettings
FVersionedNiagaraEmitterData = {}



---@class FVersionedNiagaraScriptData
FVersionedNiagaraScriptData = {}


---@class INiagaraParticleCallbackHandler : IInterface
INiagaraParticleCallbackHandler = {}

---@param Data TArray<FBasicParticleData>
---@param NiagaraSystem UNiagaraSystem
---@param SimulationPositionOffset FVector
function INiagaraParticleCallbackHandler:ReceiveParticleData(Data, NiagaraSystem, SimulationPositionOffset) end


---@class INiagaraPhysicsAssetDICollectorInterface : IInterface
INiagaraPhysicsAssetDICollectorInterface = {}


---@class UAsyncNiagaraCaptureSimCache : UBlueprintAsyncActionBase
---@field CaptureSimCache UNiagaraSimCache
---@field CaptureComponent UNiagaraComponent
---@field CaptureNumFrames int32
---@field CaptureFrameRate int32
---@field CaptureFrameCounter int32
---@field TimeOutCounter int32
---@field CaptureComplete FAsyncNiagaraCaptureSimCacheCaptureComplete
---@field bAdvanceSimulation boolean
---@field AdvanceDeltaTime float
UAsyncNiagaraCaptureSimCache = {}

---@param bSuccess boolean
function UAsyncNiagaraCaptureSimCache:OnCaptureComplete__DelegateSignature(bSuccess) end
---@param SimCache UNiagaraSimCache
---@param CreateParameters FNiagaraSimCacheCreateParameters
---@param NiagaraComponent UNiagaraComponent
---@param OutSimCache UNiagaraSimCache
---@param CaptureRate int32
---@param bAdvanceSimulation boolean
---@param AdvanceDeltaTime float
---@return UAsyncNiagaraCaptureSimCache
function UAsyncNiagaraCaptureSimCache:CaptureNiagaraSimCacheUntilComplete(SimCache, CreateParameters, NiagaraComponent, OutSimCache, CaptureRate, bAdvanceSimulation, AdvanceDeltaTime) end
---@param SimCache UNiagaraSimCache
---@param CreateParameters FNiagaraSimCacheCreateParameters
---@param NiagaraComponent UNiagaraComponent
---@param OutSimCache UNiagaraSimCache
---@param NumFrames int32
---@param CaptureRate int32
---@param bAdvanceSimulation boolean
---@param AdvanceDeltaTime float
---@return UAsyncNiagaraCaptureSimCache
function UAsyncNiagaraCaptureSimCache:CaptureNiagaraSimCacheMultiFrame(SimCache, CreateParameters, NiagaraComponent, OutSimCache, NumFrames, CaptureRate, bAdvanceSimulation, AdvanceDeltaTime) end


---@class UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack
UMovieSceneNiagaraBoolParameterTrack = {}


---@class UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack
UMovieSceneNiagaraColorParameterTrack = {}


---@class UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack
UMovieSceneNiagaraFloatParameterTrack = {}


---@class UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack
UMovieSceneNiagaraIntegerParameterTrack = {}


---@class UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack
---@field Parameter FNiagaraVariable
UMovieSceneNiagaraParameterTrack = {}



---@class UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection
---@field SectionStartBehavior ENiagaraSystemSpawnSectionStartBehavior
---@field SectionEvaluateBehavior ENiagaraSystemSpawnSectionEvaluateBehavior
---@field SectionEndBehavior ENiagaraSystemSpawnSectionEndBehavior
---@field AgeUpdateMode ENiagaraAgeUpdateMode
---@field bAllowScalability boolean
UMovieSceneNiagaraSystemSpawnSection = {}



---@class UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack
UMovieSceneNiagaraSystemTrack = {}


---@class UMovieSceneNiagaraTrack : UMovieSceneNameableTrack
---@field Sections TArray<UMovieSceneSection>
UMovieSceneNiagaraTrack = {}



---@class UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack
---@field ChannelsUsed int32
UMovieSceneNiagaraVectorParameterTrack = {}



---@class UNiagaraBakerOutput : UObject
---@field OutputName FString
UNiagaraBakerOutput = {}



---@class UNiagaraBakerOutputSimCache : UNiagaraBakerOutput
---@field SimCacheAssetPathFormat FString
---@field CreateParameters FNiagaraSimCacheCreateParameters
UNiagaraBakerOutputSimCache = {}



---@class UNiagaraBakerOutputTexture2D : UNiagaraBakerOutput
---@field SourceBinding FNiagaraBakerTextureSource
---@field bGenerateAtlas boolean
---@field bGenerateFrames boolean
---@field bExportFrames boolean
---@field bSetTextureAddressX boolean
---@field bSetTextureAddressY boolean
---@field FrameSize FIntPoint
---@field AtlasTextureSize FIntPoint
---@field TextureAddressX TextureAddress
---@field TextureAddressY TextureAddress
---@field AtlasAssetPathFormat FString
---@field FramesAssetPathFormat FString
---@field FramesExportPathFormat FString
UNiagaraBakerOutputTexture2D = {}



---@class UNiagaraBakerOutputVolumeTexture : UNiagaraBakerOutput
---@field SourceBinding FNiagaraBakerTextureSource
---@field bGenerateAtlas boolean
---@field bGenerateFrames boolean
---@field bExportFrames boolean
---@field AtlasAssetPathFormat FString
---@field FramesAssetPathFormat FString
---@field FramesExportPathFormat FString
UNiagaraBakerOutputVolumeTexture = {}



---@class UNiagaraBakerSettings : UObject
---@field StartSeconds float
---@field DurationSeconds float
---@field FramesPerSecond int32
---@field bPreviewLooping boolean
---@field FramesPerDimension FIntPoint
---@field Outputs TArray<UNiagaraBakerOutput>
---@field CameraSettings TArray<FNiagaraBakerCameraSettings>
---@field CurrentCameraIndex int32
---@field BakeQualityLevel FName
---@field bRenderComponentOnly boolean
---@field OutputTextures TArray<FNiagaraBakerTextureSettings>
---@field CameraViewportMode ENiagaraBakerViewMode
---@field CameraViewportLocation FVector
---@field CameraViewportRotation FRotator
---@field CameraOrbitDistance float
---@field CameraFOV float
---@field CameraOrthoWidth float
---@field bUseCameraAspectRatio boolean
---@field CameraAspectRatio float
UNiagaraBakerSettings = {}



---@class UNiagaraBaselineController : UObject
---@field TestDuration float
---@field EffectType UNiagaraEffectType
---@field Owner ANiagaraPerfBaselineActor
---@field System TSoftObjectPtr<UNiagaraSystem>
UNiagaraBaselineController = {}

---@return boolean
function UNiagaraBaselineController:OnTickTest() end
---@param DeltaTime float
function UNiagaraBaselineController:OnOwnerTick(DeltaTime) end
---@param Stats FNiagaraPerfBaselineStats
function UNiagaraBaselineController:OnEndTest(Stats) end
function UNiagaraBaselineController:OnBeginTest() end
---@return UNiagaraSystem
function UNiagaraBaselineController:GetSystem() end


---@class UNiagaraBaselineController_Basic : UNiagaraBaselineController
---@field NumInstances int32
---@field SpawnedComponents TArray<UNiagaraComponent>
UNiagaraBaselineController_Basic = {}



---@class UNiagaraComponent : UFXSystemComponent
---@field Asset UNiagaraSystem
---@field TickBehavior ENiagaraTickBehavior
---@field RandomSeedOffset int32
---@field OverrideParameters FNiagaraUserRedirectionParameterStore
---@field bForceSolo boolean
---@field bEnableGpuComputeDebug boolean
---@field bAutoDestroy boolean
---@field bRenderingEnabled boolean
---@field bAutoManageAttachment boolean
---@field bAutoAttachWeldSimulatedBodies boolean
---@field MaxTimeBeforeForceUpdateTransform float
---@field OnSystemFinished FNiagaraComponentOnSystemFinished
---@field AutoAttachParent TWeakObjectPtr<USceneComponent>
---@field AutoAttachSocketName FName
---@field AutoAttachLocationRule EAttachmentRule
---@field AutoAttachRotationRule EAttachmentRule
---@field AutoAttachScaleRule EAttachmentRule
---@field bAllowScalability boolean
---@field SimCache UNiagaraSimCache
---@field CullProxy UNiagaraCullProxyComponent
UNiagaraComponent = {}

---@param InVariableName FName
---@param InValue FVector4
function UNiagaraComponent:SetVariableVec4(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue FVector
function UNiagaraComponent:SetVariableVec3(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue FVector2D
function UNiagaraComponent:SetVariableVec2(InVariableName, InValue) end
---@param InVariableName FName
---@param TextureRenderTarget UTextureRenderTarget
function UNiagaraComponent:SetVariableTextureRenderTarget(InVariableName, TextureRenderTarget) end
---@param InVariableName FName
---@param Texture UTexture
function UNiagaraComponent:SetVariableTexture(InVariableName, Texture) end
---@param InVariableName FName
---@param InValue UStaticMesh
function UNiagaraComponent:SetVariableStaticMesh(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue FQuat
function UNiagaraComponent:SetVariableQuat(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue FVector
function UNiagaraComponent:SetVariablePosition(InVariableName, InValue) end
---@param InVariableName FName
---@param Object UObject
function UNiagaraComponent:SetVariableObject(InVariableName, Object) end
---@param InVariableName FName
---@param InValue FMatrix
function UNiagaraComponent:SetVariableMatrix(InVariableName, InValue) end
---@param InVariableName FName
---@param Object UMaterialInterface
function UNiagaraComponent:SetVariableMaterial(InVariableName, Object) end
---@param InVariableName FName
---@param InValue FLinearColor
function UNiagaraComponent:SetVariableLinearColor(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue int32
function UNiagaraComponent:SetVariableInt(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue float
function UNiagaraComponent:SetVariableFloat(InVariableName, InValue) end
---@param InVariableName FName
---@param InValue boolean
function UNiagaraComponent:SetVariableBool(InVariableName, InValue) end
---@param InVariableName FName
---@param Actor AActor
function UNiagaraComponent:SetVariableActor(InVariableName, Actor) end
---@param NewTickBehavior ENiagaraTickBehavior
function UNiagaraComponent:SetTickBehavior(NewTickBehavior) end
---@param LocalBounds FBox
function UNiagaraComponent:SetSystemFixedBounds(LocalBounds) end
---@param SimCache UNiagaraSimCache
---@param bResetSystem boolean
function UNiagaraComponent:SetSimCache(SimCache, bResetSystem) end
---@param InSeekDelta float
function UNiagaraComponent:SetSeekDelta(InSeekDelta) end
---@param bInRenderingEnabled boolean
function UNiagaraComponent:SetRenderingEnabled(bInRenderingEnabled) end
---@param NewRandomSeedOffset int32
function UNiagaraComponent:SetRandomSeedOffset(NewRandomSeedOffset) end
---@param bEnablePreviewLODDistance boolean
---@param PreviewLODDistance float
---@param PreviewMaxDistance float
function UNiagaraComponent:SetPreviewLODDistance(bEnablePreviewLODDistance, PreviewLODDistance, PreviewMaxDistance) end
---@param bInPaused boolean
function UNiagaraComponent:SetPaused(bInPaused) end
---@param InVariableName FString
---@param InValue FVector4
function UNiagaraComponent:SetNiagaraVariableVec4(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector
function UNiagaraComponent:SetNiagaraVariableVec3(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector2D
function UNiagaraComponent:SetNiagaraVariableVec2(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FQuat
function UNiagaraComponent:SetNiagaraVariableQuat(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector
function UNiagaraComponent:SetNiagaraVariablePosition(InVariableName, InValue) end
---@param InVariableName FString
---@param Object UObject
function UNiagaraComponent:SetNiagaraVariableObject(InVariableName, Object) end
---@param InVariableName FString
---@param InValue FMatrix
function UNiagaraComponent:SetNiagaraVariableMatrix(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FLinearColor
function UNiagaraComponent:SetNiagaraVariableLinearColor(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue int32
function UNiagaraComponent:SetNiagaraVariableInt(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue float
function UNiagaraComponent:SetNiagaraVariableFloat(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue boolean
function UNiagaraComponent:SetNiagaraVariableBool(InVariableName, InValue) end
---@param InVariableName FString
---@param Actor AActor
function UNiagaraComponent:SetNiagaraVariableActor(InVariableName, Actor) end
---@param InMaxTime float
function UNiagaraComponent:SetMaxSimTime(InMaxTime) end
---@param bLock boolean
function UNiagaraComponent:SetLockDesiredAgeDeltaTimeToSeekDelta(bLock) end
---@param bEnableDebug boolean
function UNiagaraComponent:SetGpuComputeDebug(bEnableDebug) end
---@param bInForceSolo boolean
function UNiagaraComponent:SetForceSolo(bInForceSolo) end
---@param bIsPlayerEffect boolean
function UNiagaraComponent:SetForceLocalPlayerEffect(bIsPlayerEffect) end
---@param EmitterName FName
---@param LocalBounds FBox
function UNiagaraComponent:SetEmitterFixedBounds(EmitterName, LocalBounds) end
---@param InDesiredAge float
function UNiagaraComponent:SetDesiredAge(InDesiredAge) end
---@param Dilation float
function UNiagaraComponent:SetCustomTimeDilation(Dilation) end
---@param bInCanRenderWhileSeeking boolean
function UNiagaraComponent:SetCanRenderWhileSeeking(bInCanRenderWhileSeeking) end
---@param bInAutoDestroy boolean
function UNiagaraComponent:SetAutoDestroy(bInAutoDestroy) end
---@param InAsset UNiagaraSystem
---@param bResetExistingOverrideParameters boolean
function UNiagaraComponent:SetAsset(InAsset, bResetExistingOverrideParameters) end
---@param bAllow boolean
function UNiagaraComponent:SetAllowScalability(bAllow) end
---@param InAgeUpdateMode ENiagaraAgeUpdateMode
function UNiagaraComponent:SetAgeUpdateMode(InAgeUpdateMode) end
---@param InDesiredAge float
function UNiagaraComponent:SeekToDesiredAge(InDesiredAge) end
function UNiagaraComponent:ResetSystem() end
function UNiagaraComponent:ReinitializeSystem() end
---@return boolean
function UNiagaraComponent:IsPaused() end
function UNiagaraComponent:InitForPerformanceBaseline() end
---@return ENiagaraTickBehavior
function UNiagaraComponent:GetTickBehavior() end
---@return FBox
function UNiagaraComponent:GetSystemFixedBounds() end
---@return UNiagaraSimCache
function UNiagaraComponent:GetSimCache() end
---@return float
function UNiagaraComponent:GetSeekDelta() end
---@return int32
function UNiagaraComponent:GetRandomSeedOffset() end
---@return boolean
function UNiagaraComponent:GetPreviewLODDistanceEnabled() end
---@return float
function UNiagaraComponent:GetPreviewLODDistance() end
---@param InEmitterName FString
---@param InValueName FString
---@return TArray<FVector>
function UNiagaraComponent:GetNiagaraParticleValueVec3_DebugOnly(InEmitterName, InValueName) end
---@param InEmitterName FString
---@param InValueName FString
---@return TArray<float>
function UNiagaraComponent:GetNiagaraParticleValues_DebugOnly(InEmitterName, InValueName) end
---@param InEmitterName FString
---@return TArray<FVector>
function UNiagaraComponent:GetNiagaraParticlePositions_DebugOnly(InEmitterName) end
---@return float
function UNiagaraComponent:GetMaxSimTime() end
---@return boolean
function UNiagaraComponent:GetLockDesiredAgeDeltaTimeToSeekDelta() end
---@return boolean
function UNiagaraComponent:GetForceSolo() end
---@return boolean
function UNiagaraComponent:GetForceLocalPlayerEffect() end
---@param EmitterName FName
---@return FBox
function UNiagaraComponent:GetEmitterFixedBounds(EmitterName) end
---@return float
function UNiagaraComponent:GetDesiredAge() end
---@param Name FString
---@return UNiagaraDataInterface
function UNiagaraComponent:GetDataInterface(Name) end
---@return float
function UNiagaraComponent:GetCustomTimeDilation() end
---@return UNiagaraSystem
function UNiagaraComponent:GetAsset() end
---@return boolean
function UNiagaraComponent:GetAllowScalability() end
---@return ENiagaraAgeUpdateMode
function UNiagaraComponent:GetAgeUpdateMode() end
function UNiagaraComponent:ClearSystemFixedBounds() end
---@param bResetSystem boolean
function UNiagaraComponent:ClearSimCache(bResetSystem) end
---@param EmitterName FName
function UNiagaraComponent:ClearEmitterFixedBounds(EmitterName) end
---@param SimulateTime float
---@param TickDeltaSeconds float
function UNiagaraComponent:AdvanceSimulationByTime(SimulateTime, TickDeltaSeconds) end
---@param TickCount int32
---@param TickDeltaSeconds float
function UNiagaraComponent:AdvanceSimulation(TickCount, TickDeltaSeconds) end


---@class UNiagaraComponentPool : UObject
---@field WorldParticleSystemPools TMap<UNiagaraSystem, FNCPool>
UNiagaraComponentPool = {}



---@class UNiagaraComponentRendererProperties : UNiagaraRendererProperties
---@field ComponentType TSubclassOf<USceneComponent>
---@field ComponentCountLimit uint32
---@field EnabledBinding FNiagaraVariableAttributeBinding
---@field RendererVisibilityTagBinding FNiagaraVariableAttributeBinding
---@field bAssignComponentsOnParticleID boolean
---@field bCreateComponentFirstParticleFrame boolean
---@field bOnlyActivateNewlyAquiredComponents boolean
---@field RendererVisibility int32
---@field TemplateComponent USceneComponent
---@field PropertyBindings TArray<FNiagaraComponentPropertyBinding>
UNiagaraComponentRendererProperties = {}



---@class UNiagaraComponentSettings : UObject
---@field SuppressActivationList TSet<FName>
---@field ForceAutoPooolingList TSet<FName>
---@field SuppressEmitterList TSet<FNiagaraEmitterNameSettingsRef>
---@field GPUEmitterAllowList TSet<FNiagaraEmitterNameSettingsRef>
---@field GpuDataInterfaceDenyList TSet<FName>
UNiagaraComponentSettings = {}



---@class UNiagaraConvertInPlaceUtilityBase : UObject
UNiagaraConvertInPlaceUtilityBase = {}


---@class UNiagaraCullProxyComponent : UNiagaraComponent
---@field Instances TArray<FNiagaraCulledComponentInfo>
UNiagaraCullProxyComponent = {}



---@class UNiagaraDIRigidMeshCollisionFunctionLibrary : UBlueprintFunctionLibrary
UNiagaraDIRigidMeshCollisionFunctionLibrary = {}

---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param SourceActors TArray<AActor>
function UNiagaraDIRigidMeshCollisionFunctionLibrary:SetSourceActors(NiagaraSystem, OverrideName, SourceActors) end


---@class UNiagaraDataInterface : UNiagaraDataInterfaceBase
UNiagaraDataInterface = {}


---@class UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface
---@field Texture UTexture
---@field TextureUserParameter FNiagaraUserParameterBinding
UNiagaraDataInterface2DArrayTexture = {}



---@class UNiagaraDataInterfaceActorComponent : UNiagaraDataInterface
---@field bRequireCurrentFrameData boolean
---@field SourceMode ENDIActorComponentSourceMode
---@field LocalPlayerIndex int32
---@field SourceActor TLazyObjectPtr<AActor>
---@field ActorOrComponentParameter FNiagaraUserParameterBinding
UNiagaraDataInterfaceActorComponent = {}



---@class UNiagaraDataInterfaceArray : UNiagaraDataInterfaceRWBase
---@field GpuSyncMode ENiagaraGpuSyncMode
---@field MaxElements int32
UNiagaraDataInterfaceArray = {}



---@class UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray
---@field BoolData TArray<boolean>
UNiagaraDataInterfaceArrayBool = {}



---@class UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray
---@field ColorData TArray<FLinearColor>
UNiagaraDataInterfaceArrayColor = {}



---@class UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray
---@field FloatData TArray<float>
UNiagaraDataInterfaceArrayFloat = {}



---@class UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray
---@field InternalFloatData TArray<FVector2f>
UNiagaraDataInterfaceArrayFloat2 = {}



---@class UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray
---@field InternalFloatData TArray<FVector3f>
UNiagaraDataInterfaceArrayFloat3 = {}



---@class UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray
---@field InternalFloatData TArray<FVector4f>
UNiagaraDataInterfaceArrayFloat4 = {}



---@class UNiagaraDataInterfaceArrayFunctionLibrary : UBlueprintFunctionLibrary
UNiagaraDataInterfaceArrayFunctionLibrary = {}

---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@param Value FVector
---@param bSizeToFit boolean
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayVectorValue(NiagaraSystem, OverrideName, Index, Value, bSizeToFit) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@param Value FVector4
---@param bSizeToFit boolean
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayVector4Value(NiagaraSystem, OverrideName, Index, Value, bSizeToFit) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<FVector4>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayVector4(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@param Value FVector2D
---@param bSizeToFit boolean
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayVector2DValue(NiagaraSystem, OverrideName, Index, Value, bSizeToFit) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<FVector2D>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayVector2D(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<FVector>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayVector(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@param Value int32
---@param bSizeToFit boolean
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayUInt8Value(NiagaraSystem, OverrideName, Index, Value, bSizeToFit) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<int32>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayUInt8(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@param Value FQuat
---@param bSizeToFit boolean
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayQuatValue(NiagaraSystem, OverrideName, Index, Value, bSizeToFit) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<FQuat>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayQuat(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@param Value FVector
---@param bSizeToFit boolean
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayPositionValue(NiagaraSystem, OverrideName, Index, Value, bSizeToFit) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<FVector>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayPosition(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@param Value int32
---@param bSizeToFit boolean
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayInt32Value(NiagaraSystem, OverrideName, Index, Value, bSizeToFit) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<int32>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayInt32(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@param Value float
---@param bSizeToFit boolean
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayFloatValue(NiagaraSystem, OverrideName, Index, Value, bSizeToFit) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<float>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayFloat(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@param Value FLinearColor
---@param bSizeToFit boolean
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayColorValue(NiagaraSystem, OverrideName, Index, Value, bSizeToFit) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<FLinearColor>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayColor(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@param Value boolean
---@param bSizeToFit boolean
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayBoolValue(NiagaraSystem, OverrideName, Index, Value, bSizeToFit) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param ArrayData TArray<boolean>
function UNiagaraDataInterfaceArrayFunctionLibrary:SetNiagaraArrayBool(NiagaraSystem, OverrideName, ArrayData) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@return FVector
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayVectorValue(NiagaraSystem, OverrideName, Index) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@return FVector4
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayVector4Value(NiagaraSystem, OverrideName, Index) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<FVector4>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayVector4(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@return FVector2D
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayVector2DValue(NiagaraSystem, OverrideName, Index) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<FVector2D>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayVector2D(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<FVector>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayVector(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@return int32
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayUInt8Value(NiagaraSystem, OverrideName, Index) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<int32>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayUInt8(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@return FQuat
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayQuatValue(NiagaraSystem, OverrideName, Index) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<FQuat>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayQuat(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@return FVector
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayPositionValue(NiagaraSystem, OverrideName, Index) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<FVector>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayPosition(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@return int32
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayInt32Value(NiagaraSystem, OverrideName, Index) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<int32>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayInt32(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@return float
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayFloatValue(NiagaraSystem, OverrideName, Index) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<float>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayFloat(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@return FLinearColor
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayColorValue(NiagaraSystem, OverrideName, Index) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<FLinearColor>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayColor(NiagaraSystem, OverrideName) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@param Index int32
---@return boolean
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayBoolValue(NiagaraSystem, OverrideName, Index) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FName
---@return TArray<boolean>
function UNiagaraDataInterfaceArrayFunctionLibrary:GetNiagaraArrayBool(NiagaraSystem, OverrideName) end


---@class UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray
---@field IntData TArray<int32>
UNiagaraDataInterfaceArrayInt32 = {}



---@class UNiagaraDataInterfaceArrayNiagaraID : UNiagaraDataInterfaceArray
---@field IntData TArray<FNiagaraID>
UNiagaraDataInterfaceArrayNiagaraID = {}



---@class UNiagaraDataInterfaceArrayPosition : UNiagaraDataInterfaceArray
---@field PositionData TArray<FNiagaraPosition>
UNiagaraDataInterfaceArrayPosition = {}



---@class UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray
---@field InternalQuatData TArray<FQuat4f>
UNiagaraDataInterfaceArrayQuat = {}



---@class UNiagaraDataInterfaceArrayUInt8 : UNiagaraDataInterfaceArray
---@field InternalIntData TArray<uint8>
UNiagaraDataInterfaceArrayUInt8 = {}



---@class UNiagaraDataInterfaceAsyncGpuTrace : UNiagaraDataInterface
---@field MaxTracesPerParticle int32
---@field MaxRetraces int32
---@field TraceProvider ENDICollisionQuery_AsyncGpuTraceProvider::Type
UNiagaraDataInterfaceAsyncGpuTrace = {}



---@class UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface
---@field Submix USoundSubmix
---@field Resolution int32
---@field ScopeInMilliseconds float
UNiagaraDataInterfaceAudioOscilloscope = {}



---@class UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface
---@field SoundToPlay USoundBase
---@field Attenuation USoundAttenuation
---@field Concurrency USoundConcurrency
---@field ParameterNames TArray<FName>
---@field bLimitPlaysPerTick boolean
---@field MaxPlaysPerTick int32
---@field bStopWhenComponentIsDestroyed boolean
---@field bAllowLoopingOneShotSounds boolean
UNiagaraDataInterfaceAudioPlayer = {}



---@class UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix
---@field Resolution int32
---@field MinimumFrequency float
---@field MaximumFrequency float
---@field NoiseFloorDb float
UNiagaraDataInterfaceAudioSpectrum = {}



---@class UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface
---@field Submix USoundSubmix
UNiagaraDataInterfaceAudioSubmix = {}



---@class UNiagaraDataInterfaceCamera : UNiagaraDataInterface
---@field PlayerControllerIndex int32
---@field bRequireCurrentFrameData boolean
UNiagaraDataInterfaceCamera = {}



---@class UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface
UNiagaraDataInterfaceCollisionQuery = {}


---@class UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase
---@field RedCurve FRichCurve
---@field GreenCurve FRichCurve
---@field BlueCurve FRichCurve
---@field AlphaCurve FRichCurve
UNiagaraDataInterfaceColorCurve = {}



---@class UNiagaraDataInterfaceCubeTexture : UNiagaraDataInterface
---@field Texture UTexture
---@field TextureUserParameter FNiagaraUserParameterBinding
UNiagaraDataInterfaceCubeTexture = {}



---@class UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface
---@field Seed uint32
UNiagaraDataInterfaceCurlNoise = {}



---@class UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase
---@field Curve FRichCurve
UNiagaraDataInterfaceCurve = {}



---@class UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface
---@field ShaderLUT TArray<float>
---@field LUTMinTime float
---@field LUTMaxTime float
---@field LUTInvTimeRange float
---@field LUTNumSamplesMinusOne float
---@field bUseLUT boolean
---@field bExposeCurve boolean
---@field ExposedName FName
---@field ExposedTexture UTexture2D
UNiagaraDataInterfaceCurveBase = {}



---@class UNiagaraDataInterfaceDebugDraw : UNiagaraDataInterface
---@field OverrideMaxLineInstances uint32
UNiagaraDataInterfaceDebugDraw = {}



---@class UNiagaraDataInterfaceEmitterProperties : UNiagaraDataInterface
---@field EmitterBinding FNiagaraDataInterfaceEmitterBinding
UNiagaraDataInterfaceEmitterProperties = {}



---@class UNiagaraDataInterfaceExport : UNiagaraDataInterface
---@field CallbackHandlerParameter FNiagaraUserParameterBinding
---@field GPUAllocationMode ENDIExport_GPUAllocationMode
---@field GPUAllocationFixedSize int32
---@field GPUAllocationPerParticleSize float
UNiagaraDataInterfaceExport = {}



---@class UNiagaraDataInterfaceGBuffer : UNiagaraDataInterface
UNiagaraDataInterfaceGBuffer = {}


---@class UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase
---@field NumCellsX int32
---@field NumCellsY int32
---@field NumCellsMaxAxis int32
---@field NumAttributes int32
---@field SetGridFromMaxAxis boolean
---@field WorldBBoxSize FVector2D
UNiagaraDataInterfaceGrid2D = {}



---@class UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D
---@field RenderTargetUserParameter FNiagaraUserParameterBinding
---@field OverrideBufferFormat ENiagaraGpuBufferFormat
---@field bOverrideFormat boolean
---@field ManagedRenderTargets TMap<uint64, UTextureRenderTarget2DArray>
UNiagaraDataInterfaceGrid2DCollection = {}

---@param Component UNiagaraComponent
---@param SizeX int32
---@param SizeY int32
function UNiagaraDataInterfaceGrid2DCollection:GetTextureSize(Component, SizeX, SizeY) end
---@param Component UNiagaraComponent
---@param SizeX int32
---@param SizeY int32
function UNiagaraDataInterfaceGrid2DCollection:GetRawTextureSize(Component, SizeX, SizeY) end
---@param Component UNiagaraComponent
---@param Dest UTextureRenderTarget2D
---@param AttributeIndex int32
---@return boolean
function UNiagaraDataInterfaceGrid2DCollection:FillTexture2D(Component, Dest, AttributeIndex) end
---@param Component UNiagaraComponent
---@param Dest UTextureRenderTarget2D
---@param TilesX int32
---@param TilesY int32
---@return boolean
function UNiagaraDataInterfaceGrid2DCollection:FillRawTexture2D(Component, Dest, TilesX, TilesY) end


---@class UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2DCollection
---@field EmitterName FString
---@field DIName FString
UNiagaraDataInterfaceGrid2DCollectionReader = {}



---@class UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase
---@field NumCells FIntVector
---@field CellSize float
---@field NumCellsMaxAxis int32
---@field SetResolutionMethod ESetResolutionMethod
---@field WorldBBoxSize FVector
UNiagaraDataInterfaceGrid3D = {}



---@class UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D
---@field NumAttributes int32
---@field RenderTargetUserParameter FNiagaraUserParameterBinding
---@field OverrideBufferFormat ENiagaraGpuBufferFormat
---@field bOverrideFormat boolean
UNiagaraDataInterfaceGrid3DCollection = {}

---@param Component UNiagaraComponent
---@param SizeX int32
---@param SizeY int32
---@param SizeZ int32
function UNiagaraDataInterfaceGrid3DCollection:GetTextureSize(Component, SizeX, SizeY, SizeZ) end
---@param Component UNiagaraComponent
---@param SizeX int32
---@param SizeY int32
---@param SizeZ int32
function UNiagaraDataInterfaceGrid3DCollection:GetRawTextureSize(Component, SizeX, SizeY, SizeZ) end
---@param Component UNiagaraComponent
---@param Dest UVolumeTexture
---@param AttributeIndex int32
---@return boolean
function UNiagaraDataInterfaceGrid3DCollection:FillVolumeTexture(Component, Dest, AttributeIndex) end
---@param Component UNiagaraComponent
---@param Dest UVolumeTexture
---@param TilesX int32
---@param TilesY int32
---@param TileZ int32
---@return boolean
function UNiagaraDataInterfaceGrid3DCollection:FillRawVolumeTexture(Component, Dest, TilesX, TilesY, TileZ) end


---@class UNiagaraDataInterfaceGrid3DCollectionReader : UNiagaraDataInterfaceGrid3DCollection
---@field EmitterName FString
---@field DIName FString
UNiagaraDataInterfaceGrid3DCollectionReader = {}



---@class UNiagaraDataInterfaceIntRenderTarget2D : UNiagaraDataInterfaceRWBase
---@field Size FIntPoint
---@field RenderTargetUserParameter FNiagaraUserParameterBinding
---@field ManagedRenderTargets TMap<uint64, UTextureRenderTarget2D>
UNiagaraDataInterfaceIntRenderTarget2D = {}



---@class UNiagaraDataInterfaceLandscape : UNiagaraDataInterface
---@field SourceLandscape AActor
---@field SourceMode ENDILandscape_SourceMode
---@field PhysicalMaterials TArray<UPhysicalMaterial>
UNiagaraDataInterfaceLandscape = {}



---@class UNiagaraDataInterfaceMeshRendererInfo : UNiagaraDataInterface
---@field MeshRenderer UNiagaraMeshRendererProperties
UNiagaraDataInterfaceMeshRendererInfo = {}



---@class UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D
---@field MaxNeighborsPerCell uint32
UNiagaraDataInterfaceNeighborGrid3D = {}



---@class UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface
UNiagaraDataInterfaceOcclusion = {}


---@class UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase
---@field EmitterName FString
UNiagaraDataInterfaceParticleRead = {}



---@class UNiagaraDataInterfacePhysicsAsset : UNiagaraDataInterface
---@field DefaultSource UPhysicsAsset
---@field SoftSourceActor TSoftObjectPtr<AActor>
---@field MeshUserParameter FNiagaraUserParameterBinding
UNiagaraDataInterfacePhysicsAsset = {}



---@class UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface
---@field Platforms FNiagaraPlatformSet
UNiagaraDataInterfacePlatformSet = {}



---@class UNiagaraDataInterfaceRWBase : UNiagaraDataInterface
UNiagaraDataInterfaceRWBase = {}


---@class UNiagaraDataInterfaceRasterizationGrid3D : UNiagaraDataInterfaceGrid3D
---@field NumAttributes int32
---@field Precision float
---@field ResetValue int32
UNiagaraDataInterfaceRasterizationGrid3D = {}



---@class UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase
---@field Size FIntPoint
---@field MipMapGeneration ENiagaraMipMapGeneration
---@field MipMapGenerationType ENiagaraMipMapGenerationType
---@field OverrideRenderTargetFormat ETextureRenderTargetFormat
---@field bInheritUserParameterSettings boolean
---@field bOverrideFormat boolean
---@field RenderTargetUserParameter FNiagaraUserParameterBinding
---@field ManagedRenderTargets TMap<uint64, UTextureRenderTarget2D>
UNiagaraDataInterfaceRenderTarget2D = {}



---@class UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase
---@field Size FIntVector
---@field OverrideRenderTargetFormat ETextureRenderTargetFormat
---@field bInheritUserParameterSettings boolean
---@field bOverrideFormat boolean
---@field RenderTargetUserParameter FNiagaraUserParameterBinding
---@field ManagedRenderTargets TMap<uint64, UTextureRenderTarget2DArray>
UNiagaraDataInterfaceRenderTarget2DArray = {}



---@class UNiagaraDataInterfaceRenderTargetCube : UNiagaraDataInterfaceRWBase
---@field Size int32
---@field OverrideRenderTargetFormat ETextureRenderTargetFormat
---@field bInheritUserParameterSettings boolean
---@field bOverrideFormat boolean
---@field RenderTargetUserParameter FNiagaraUserParameterBinding
---@field ManagedRenderTargets TMap<uint64, UTextureRenderTargetCube>
UNiagaraDataInterfaceRenderTargetCube = {}



---@class UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase
---@field Size FIntVector
---@field OverrideRenderTargetFormat ETextureRenderTargetFormat
---@field bInheritUserParameterSettings boolean
---@field bOverrideFormat boolean
---@field RenderTargetUserParameter FNiagaraUserParameterBinding
---@field ManagedRenderTargets TMap<uint64, UTextureRenderTargetVolume>
UNiagaraDataInterfaceRenderTargetVolume = {}



---@class UNiagaraDataInterfaceRigidMeshCollisionQuery : UNiagaraDataInterface
---@field ActorTags TArray<FName>
---@field ComponentTags TArray<FName>
---@field SourceActors TArray<TSoftObjectPtr<AActor>>
---@field OnlyUseMoveable boolean
---@field GlobalSearchAllowed boolean
---@field GlobalSearchForced boolean
---@field GlobalSearchFallback_Unscripted boolean
---@field MaxNumPrimitives int32
UNiagaraDataInterfaceRigidMeshCollisionQuery = {}



---@class UNiagaraDataInterfaceSimCacheReader : UNiagaraDataInterface
---@field SimCacheBinding FNiagaraUserParameterBinding
---@field SimCache UNiagaraSimCache
---@field EmitterBinding FName
UNiagaraDataInterfaceSimCacheReader = {}



---@class UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface
---@field GpuSyncMode ENiagaraGpuSyncMode
---@field InitialValue int32
UNiagaraDataInterfaceSimpleCounter = {}



---@class UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface
---@field SourceMode ENDISkeletalMesh_SourceMode
---@field SoftSourceActor TSoftObjectPtr<AActor>
---@field ComponentTags TArray<FName>
---@field SourceComponent USkeletalMeshComponent
---@field MeshUserParameter FNiagaraUserParameterBinding
---@field SkinningMode ENDISkeletalMesh_SkinningMode
---@field SamplingRegions TArray<FName>
---@field WholeMeshLOD int32
---@field FilteredBones TArray<FName>
---@field FilteredSockets TArray<FName>
---@field ExcludeBoneName FName
---@field bExcludeBone boolean
---@field UvSetIndex int32
---@field bRequireCurrentFrameData boolean
UNiagaraDataInterfaceSkeletalMesh = {}

---@param InSource AActor
---@param Reason EEndPlayReason::Type
function UNiagaraDataInterfaceSkeletalMesh:OnSourceEndPlay(InSource, Reason) end


---@class UNiagaraDataInterfaceSpline : UNiagaraDataInterface
---@field Source AActor
---@field SplineUserParameter FNiagaraUserParameterBinding
---@field bUseLUT boolean
---@field NumLUTSteps int32
UNiagaraDataInterfaceSpline = {}



---@class UNiagaraDataInterfaceSpriteRendererInfo : UNiagaraDataInterface
---@field SpriteRenderer UNiagaraSpriteRendererProperties
UNiagaraDataInterfaceSpriteRendererInfo = {}



---@class UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface
---@field SourceMode ENDIStaticMesh_SourceMode
---@field DefaultMesh UStaticMesh
---@field SoftSourceActor TSoftObjectPtr<AActor>
---@field SourceComponent UStaticMeshComponent
---@field SectionFilter FNDIStaticMeshSectionFilter
---@field bUsePhysicsBodyVelocity boolean
---@field FilteredSockets TArray<FName>
UNiagaraDataInterfaceStaticMesh = {}

---@param InSource AActor
---@param Reason EEndPlayReason::Type
function UNiagaraDataInterfaceStaticMesh:OnSourceEndPlay(InSource, Reason) end


---@class UNiagaraDataInterfaceTexture : UNiagaraDataInterface
---@field Texture UTexture
---@field TextureUserParameter FNiagaraUserParameterBinding
UNiagaraDataInterfaceTexture = {}



---@class UNiagaraDataInterfaceUObjectPropertyReader : UNiagaraDataInterface
---@field UObjectParameterBinding FNiagaraUserParameterBinding
---@field PropertyRemap TArray<FNiagaraUObjectPropertyReaderRemap>
---@field SourceActor TSoftObjectPtr<AActor>
---@field SourceActorComponentClass TObjectPtr<UClass>
UNiagaraDataInterfaceUObjectPropertyReader = {}

---@param NiagaraComponent UNiagaraComponent
---@param UserParameterName FName
---@param GraphName FName
---@param RemapName FName
function UNiagaraDataInterfaceUObjectPropertyReader:SetUObjectReaderPropertyRemap(NiagaraComponent, UserParameterName, GraphName, RemapName) end


---@class UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase
---@field XCurve FRichCurve
---@field YCurve FRichCurve
UNiagaraDataInterfaceVector2DCurve = {}



---@class UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase
---@field XCurve FRichCurve
---@field YCurve FRichCurve
---@field ZCurve FRichCurve
---@field WCurve FRichCurve
UNiagaraDataInterfaceVector4Curve = {}



---@class UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase
---@field XCurve FRichCurve
---@field YCurve FRichCurve
---@field ZCurve FRichCurve
UNiagaraDataInterfaceVectorCurve = {}



---@class UNiagaraDataInterfaceVectorField : UNiagaraDataInterface
---@field Field UVectorField
---@field bTileX boolean
---@field bTileY boolean
---@field bTileZ boolean
UNiagaraDataInterfaceVectorField = {}



---@class UNiagaraDataInterfaceVirtualTexture : UNiagaraDataInterface
---@field Texture URuntimeVirtualTexture
---@field TextureUserParameter FNiagaraUserParameterBinding
UNiagaraDataInterfaceVirtualTexture = {}



---@class UNiagaraDataInterfaceVolumeCache : UNiagaraDataInterface
---@field VolumeCache UVolumeCache
UNiagaraDataInterfaceVolumeCache = {}



---@class UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface
---@field Texture UTexture
---@field TextureUserParameter FNiagaraUserParameterBinding
UNiagaraDataInterfaceVolumeTexture = {}



---@class UNiagaraDebugHUDSettings : UObject
---@field Data FNiagaraDebugHUDSettingsData
UNiagaraDebugHUDSettings = {}



---@class UNiagaraEditorDataBase : UObject
UNiagaraEditorDataBase = {}


---@class UNiagaraEditorParametersAdapterBase : UObject
UNiagaraEditorParametersAdapterBase = {}


---@class UNiagaraEffectType : UObject
---@field bAllowCullingForLocalPlayers boolean
---@field UpdateFrequency ENiagaraScalabilityUpdateFrequency
---@field CullReaction ENiagaraCullReaction
---@field SignificanceHandler UNiagaraSignificanceHandler
---@field DetailLevelScalabilitySettings TArray<FNiagaraSystemScalabilitySettings>
---@field SystemScalabilitySettings FNiagaraSystemScalabilitySettingsArray
---@field EmitterScalabilitySettings FNiagaraEmitterScalabilitySettingsArray
---@field ValidationRules TArray<UNiagaraValidationRule>
---@field PerformanceBaselineController UNiagaraBaselineController
---@field PerfBaselineStats FNiagaraPerfBaselineStats
---@field PerfBaselineVersion FGuid
UNiagaraEffectType = {}



---@class UNiagaraEmitter : UObject
---@field ExposedVersion FGuid
---@field bVersioningEnabled boolean
---@field VersionData TArray<FVersionedNiagaraEmitterData>
---@field UniqueEmitterName FString
---@field RendererProperties TArray<UNiagaraRendererProperties>
---@field EventHandlerScriptProps TArray<FNiagaraEventScriptProperties>
---@field SimulationStages TArray<UNiagaraSimulationStageBase>
---@field GPUComputeScript UNiagaraScript
---@field SharedEventGeneratorIds TArray<FName>
UNiagaraEmitter = {}



---@class UNiagaraEventReceiverEmitterAction : UObject
UNiagaraEventReceiverEmitterAction = {}


---@class UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction
---@field NumParticles uint32
UNiagaraEventReceiverEmitterAction_SpawnParticles = {}



---@class UNiagaraFunctionLibrary : UBlueprintFunctionLibrary
UNiagaraFunctionLibrary = {}

---@param SpawnParams FFXSystemSpawnParameters
---@return UNiagaraComponent
function UNiagaraFunctionLibrary:SpawnSystemAttachedWithParams(SpawnParams) end
---@param SystemTemplate UNiagaraSystem
---@param AttachToComponent USceneComponent
---@param AttachPointName FName
---@param Location FVector
---@param Rotation FRotator
---@param LocationType EAttachLocation::Type
---@param bAutoDestroy boolean
---@param bAutoActivate boolean
---@param PoolingMethod ENCPoolMethod
---@param bPreCullCheck boolean
---@return UNiagaraComponent
function UNiagaraFunctionLibrary:SpawnSystemAttached(SystemTemplate, AttachToComponent, AttachPointName, Location, Rotation, LocationType, bAutoDestroy, bAutoActivate, PoolingMethod, bPreCullCheck) end
---@param SpawnParams FFXSystemSpawnParameters
---@return UNiagaraComponent
function UNiagaraFunctionLibrary:SpawnSystemAtLocationWithParams(SpawnParams) end
---@param WorldContextObject UObject
---@param SystemTemplate UNiagaraSystem
---@param Location FVector
---@param Rotation FRotator
---@param Scale FVector
---@param bAutoDestroy boolean
---@param bAutoActivate boolean
---@param PoolingMethod ENCPoolMethod
---@param bPreCullCheck boolean
---@return UNiagaraComponent
function UNiagaraFunctionLibrary:SpawnSystemAtLocation(WorldContextObject, SystemTemplate, Location, Rotation, Scale, bAutoDestroy, bAutoActivate, PoolingMethod, bPreCullCheck) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param Texture UVolumeTexture
function UNiagaraFunctionLibrary:SetVolumeTextureObject(NiagaraSystem, OverrideName, Texture) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param Texture UTexture
function UNiagaraFunctionLibrary:SetTextureObject(NiagaraSystem, OverrideName, Texture) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param Texture UTexture2DArray
function UNiagaraFunctionLibrary:SetTexture2DArrayObject(NiagaraSystem, OverrideName, Texture) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param SamplingRegions TArray<FName>
function UNiagaraFunctionLibrary:SetSkeletalMeshDataInterfaceSamplingRegions(NiagaraSystem, OverrideName, SamplingRegions) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param FilteredSockets TArray<FName>
function UNiagaraFunctionLibrary:SetSkeletalMeshDataInterfaceFilteredSockets(NiagaraSystem, OverrideName, FilteredSockets) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param FilteredBones TArray<FName>
function UNiagaraFunctionLibrary:SetSkeletalMeshDataInterfaceFilteredBones(NiagaraSystem, OverrideName, FilteredBones) end
---@param WorldContextObject UObject
---@param Primitive UPrimitiveComponent
---@param CollisionGroup int32
function UNiagaraFunctionLibrary:SetComponentNiagaraGPURayTracedCollisionGroup(WorldContextObject, Primitive, CollisionGroup) end
---@param WorldContextObject UObject
---@param Actor AActor
---@param CollisionGroup int32
function UNiagaraFunctionLibrary:SetActorNiagaraGPURayTracedCollisionGroup(WorldContextObject, Actor, CollisionGroup) end
---@param WorldContextObject UObject
---@param CollisionGroup int32
function UNiagaraFunctionLibrary:ReleaseNiagaraGPURayTracedCollisionGroup(WorldContextObject, CollisionGroup) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param StaticMeshComponent UStaticMeshComponent
function UNiagaraFunctionLibrary:OverrideSystemUserVariableStaticMeshComponent(NiagaraSystem, OverrideName, StaticMeshComponent) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param StaticMesh UStaticMesh
function UNiagaraFunctionLibrary:OverrideSystemUserVariableStaticMesh(NiagaraSystem, OverrideName, StaticMesh) end
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName FString
---@param SkeletalMeshComponent USkeletalMeshComponent
function UNiagaraFunctionLibrary:OverrideSystemUserVariableSkeletalMeshComponent(NiagaraSystem, OverrideName, SkeletalMeshComponent) end
---@param WorldContextObject UObject
---@param Collection UNiagaraParameterCollection
---@return UNiagaraParameterCollectionInstance
function UNiagaraFunctionLibrary:GetNiagaraParameterCollection(WorldContextObject, Collection) end
---@param WorldContextObject UObject
---@return int32
function UNiagaraFunctionLibrary:AcquireNiagaraGPURayTracedCollisionGroup(WorldContextObject) end


---@class UNiagaraLightRendererProperties : UNiagaraRendererProperties
---@field bUseInverseSquaredFalloff boolean
---@field bAffectsTranslucency boolean
---@field bAlphaScalesBrightness boolean
---@field bOverrideInverseExposureBlend boolean
---@field RadiusScale float
---@field DefaultExponent float
---@field ColorAdd FVector3f
---@field InverseExposureBlend float
---@field RendererVisibility int32
---@field LightRenderingEnabledBinding FNiagaraVariableAttributeBinding
---@field LightExponentBinding FNiagaraVariableAttributeBinding
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field ColorBinding FNiagaraVariableAttributeBinding
---@field RadiusBinding FNiagaraVariableAttributeBinding
---@field VolumetricScatteringBinding FNiagaraVariableAttributeBinding
---@field RendererVisibilityTagBinding FNiagaraVariableAttributeBinding
UNiagaraLightRendererProperties = {}



---@class UNiagaraMeshRendererProperties : UNiagaraRendererProperties
---@field Meshes TArray<FNiagaraMeshRendererMeshProperties>
---@field SourceMode ENiagaraRendererSourceDataMode
---@field SortMode ENiagaraSortMode
---@field bOverrideMaterials boolean
---@field bSortOnlyWhenTranslucent boolean
---@field SortPrecision ENiagaraRendererSortPrecision
---@field GpuTranslucentLatency ENiagaraRendererGpuTranslucentLatency
---@field bSubImageBlend boolean
---@field bEnableFrustumCulling boolean
---@field bEnableCameraDistanceCulling boolean
---@field bEnableMeshFlipbook boolean
---@field OverrideMaterials TArray<FNiagaraMeshMaterialOverride>
---@field SubImageSize FVector2D
---@field FacingMode ENiagaraMeshFacingMode
---@field bLockedAxisEnable boolean
---@field LockedAxis FVector
---@field LockedAxisSpace ENiagaraMeshLockedAxisSpace
---@field MinCameraDistance float
---@field MaxCameraDistance float
---@field RendererVisibility uint32
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field ColorBinding FNiagaraVariableAttributeBinding
---@field VelocityBinding FNiagaraVariableAttributeBinding
---@field MeshOrientationBinding FNiagaraVariableAttributeBinding
---@field ScaleBinding FNiagaraVariableAttributeBinding
---@field SubImageIndexBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterialBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterial1Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial2Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial3Binding FNiagaraVariableAttributeBinding
---@field MaterialRandomBinding FNiagaraVariableAttributeBinding
---@field CustomSortingBinding FNiagaraVariableAttributeBinding
---@field NormalizedAgeBinding FNiagaraVariableAttributeBinding
---@field CameraOffsetBinding FNiagaraVariableAttributeBinding
---@field RendererVisibilityTagBinding FNiagaraVariableAttributeBinding
---@field MeshIndexBinding FNiagaraVariableAttributeBinding
---@field MaterialParameters FNiagaraRendererMaterialParameters
---@field PrevPositionBinding FNiagaraVariableAttributeBinding
---@field PrevScaleBinding FNiagaraVariableAttributeBinding
---@field PrevMeshOrientationBinding FNiagaraVariableAttributeBinding
---@field PrevCameraOffsetBinding FNiagaraVariableAttributeBinding
---@field PrevVelocityBinding FNiagaraVariableAttributeBinding
---@field ParticleMesh UStaticMesh
---@field PivotOffset FVector
---@field PivotOffsetSpace ENiagaraMeshPivotOffsetSpace
UNiagaraMeshRendererProperties = {}



---@class UNiagaraMessageDataBase : UObject
UNiagaraMessageDataBase = {}


---@class UNiagaraParameterCollection : UObject
---@field Namespace FName
---@field Parameters TArray<FNiagaraVariable>
---@field SourceMaterialCollection UMaterialParameterCollection
---@field DefaultInstance UNiagaraParameterCollectionInstance
---@field CompileId FGuid
UNiagaraParameterCollection = {}



---@class UNiagaraParameterCollectionInstance : UObject
---@field Collection UNiagaraParameterCollection
---@field OverridenParameters TArray<FNiagaraVariable>
---@field ParameterStorage FNiagaraParameterStore
UNiagaraParameterCollectionInstance = {}

---@param InVariableName FString
---@param InValue FVector
function UNiagaraParameterCollectionInstance:SetVectorParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector4
function UNiagaraParameterCollectionInstance:SetVector4Parameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FVector2D
function UNiagaraParameterCollectionInstance:SetVector2DParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FQuat
function UNiagaraParameterCollectionInstance:SetQuatParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue int32
function UNiagaraParameterCollectionInstance:SetIntParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue float
function UNiagaraParameterCollectionInstance:SetFloatParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue FLinearColor
function UNiagaraParameterCollectionInstance:SetColorParameter(InVariableName, InValue) end
---@param InVariableName FString
---@param InValue boolean
function UNiagaraParameterCollectionInstance:SetBoolParameter(InVariableName, InValue) end
---@param InVariableName FString
---@return FVector
function UNiagaraParameterCollectionInstance:GetVectorParameter(InVariableName) end
---@param InVariableName FString
---@return FVector4
function UNiagaraParameterCollectionInstance:GetVector4Parameter(InVariableName) end
---@param InVariableName FString
---@return FVector2D
function UNiagaraParameterCollectionInstance:GetVector2DParameter(InVariableName) end
---@param InVariableName FString
---@return FQuat
function UNiagaraParameterCollectionInstance:GetQuatParameter(InVariableName) end
---@param InVariableName FString
---@return int32
function UNiagaraParameterCollectionInstance:GetIntParameter(InVariableName) end
---@param InVariableName FString
---@return float
function UNiagaraParameterCollectionInstance:GetFloatParameter(InVariableName) end
---@param InVariableName FString
---@return FLinearColor
function UNiagaraParameterCollectionInstance:GetColorParameter(InVariableName) end
---@param InVariableName FString
---@return boolean
function UNiagaraParameterCollectionInstance:GetBoolParameter(InVariableName) end


---@class UNiagaraParameterDefinitionsBase : UObject
UNiagaraParameterDefinitionsBase = {}


---@class UNiagaraPrecompileContainer : UObject
---@field Scripts TArray<UNiagaraScript>
---@field System UNiagaraSystem
UNiagaraPrecompileContainer = {}



---@class UNiagaraPreviewAxis : UObject
UNiagaraPreviewAxis = {}

---@return int32
function UNiagaraPreviewAxis:Num() end
---@param PreviewComponent UNiagaraComponent
---@param PreviewIndex int32
---@param bIsXAxis boolean
---@param OutLabelText FString
function UNiagaraPreviewAxis:ApplyToPreview(PreviewComponent, PreviewIndex, bIsXAxis, OutLabelText) end


---@class UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis
---@field Param FName
---@field Count int32
UNiagaraPreviewAxis_InterpParamBase = {}



---@class UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase
---@field Min float
---@field Max float
UNiagaraPreviewAxis_InterpParamFloat = {}



---@class UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase
---@field Min int32
---@field Max int32
UNiagaraPreviewAxis_InterpParamInt32 = {}



---@class UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase
---@field Min FLinearColor
---@field Max FLinearColor
UNiagaraPreviewAxis_InterpParamLinearColor = {}



---@class UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase
---@field Min FVector
---@field Max FVector
UNiagaraPreviewAxis_InterpParamVector = {}



---@class UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase
---@field Min FVector2D
---@field Max FVector2D
UNiagaraPreviewAxis_InterpParamVector2D = {}



---@class UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase
---@field Min FVector4
---@field Max FVector4
UNiagaraPreviewAxis_InterpParamVector4 = {}



---@class UNiagaraRendererProperties : UNiagaraMergeable
---@field Platforms FNiagaraPlatformSet
---@field SortOrderHint int32
---@field MotionVectorSetting ENiagaraRendererMotionVectorSetting
---@field RendererEnabledBinding FNiagaraVariableAttributeBinding
---@field bIsEnabled boolean
---@field bAllowInCullProxies boolean
---@field OuterEmitterVersion FGuid
---@field bMotionBlurEnabled boolean
UNiagaraRendererProperties = {}



---@class UNiagaraRibbonRendererProperties : UNiagaraRendererProperties
---@field Material UMaterialInterface
---@field MaterialUserParamBinding FNiagaraUserParameterBinding
---@field FacingMode ENiagaraRibbonFacingMode
---@field UV0Settings FNiagaraRibbonUVSettings
---@field UV1Settings FNiagaraRibbonUVSettings
---@field MaxNumRibbons int32
---@field bUseGPUInit boolean
---@field DrawDirection ENiagaraRibbonDrawDirection
---@field Shape ENiagaraRibbonShapeMode
---@field bEnableAccurateGeometry boolean
---@field WidthSegmentationCount int32
---@field MultiPlaneCount int32
---@field TubeSubdivisions int32
---@field CustomVertices TArray<FNiagaraRibbonShapeCustomVertex>
---@field CurveTension float
---@field TessellationMode ENiagaraRibbonTessellationMode
---@field TessellationFactor int32
---@field bUseConstantFactor boolean
---@field TessellationAngle float
---@field bScreenSpaceTessellation boolean
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field ColorBinding FNiagaraVariableAttributeBinding
---@field VelocityBinding FNiagaraVariableAttributeBinding
---@field NormalizedAgeBinding FNiagaraVariableAttributeBinding
---@field RibbonTwistBinding FNiagaraVariableAttributeBinding
---@field RibbonWidthBinding FNiagaraVariableAttributeBinding
---@field RibbonFacingBinding FNiagaraVariableAttributeBinding
---@field RibbonIdBinding FNiagaraVariableAttributeBinding
---@field RibbonLinkOrderBinding FNiagaraVariableAttributeBinding
---@field MaterialRandomBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterialBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterial1Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial2Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial3Binding FNiagaraVariableAttributeBinding
---@field RibbonUVDistance FNiagaraVariableAttributeBinding
---@field U0OverrideBinding FNiagaraVariableAttributeBinding
---@field V0RangeOverrideBinding FNiagaraVariableAttributeBinding
---@field U1OverrideBinding FNiagaraVariableAttributeBinding
---@field V1RangeOverrideBinding FNiagaraVariableAttributeBinding
---@field MaterialParameters FNiagaraRendererMaterialParameters
---@field PrevPositionBinding FNiagaraVariableAttributeBinding
---@field PrevRibbonWidthBinding FNiagaraVariableAttributeBinding
---@field PrevRibbonFacingBinding FNiagaraVariableAttributeBinding
---@field PrevRibbonTwistBinding FNiagaraVariableAttributeBinding
UNiagaraRibbonRendererProperties = {}



---@class UNiagaraScratchPadContainer : UObject
UNiagaraScratchPadContainer = {}


---@class UNiagaraScript : UNiagaraScriptBase
---@field Usage ENiagaraScriptUsage
---@field UsageId FGuid
---@field RapidIterationParameters FNiagaraParameterStore
---@field ScriptExecutionParamStore FNiagaraScriptExecutionParameterStore
---@field ScriptExecutionBoundParameters TArray<FNiagaraBoundParameter>
---@field CachedScriptVMId FNiagaraVMExecutableDataId
---@field CachedScriptVM FNiagaraVMExecutableData
---@field CachedParameterCollectionReferences TArray<UNiagaraParameterCollection>
---@field CachedDefaultDataInterfaces TArray<FNiagaraScriptDataInterfaceInfo>
UNiagaraScript = {}

function UNiagaraScript:RaiseOnGPUCompilationComplete() end


---@class UNiagaraScriptSourceBase : UObject
UNiagaraScriptSourceBase = {}


---@class UNiagaraSettings : UDeveloperSettings
---@field bSystemsSupportLargeWorldCoordinates boolean
---@field bEnforceStrictStackTypes boolean
---@field bExperimentalVMEnabled boolean
---@field DefaultEffectType FSoftObjectPath
---@field PositionPinTypeColor FLinearColor
---@field QualityLevels TArray<FText>
---@field ComponentRendererWarningsPerClass TMap<FString, FText>
---@field DefaultRenderTargetFormat ETextureRenderTargetFormat
---@field DefaultGridFormat ENiagaraGpuBufferFormat
---@field DefaultRendererMotionVectorSetting ENiagaraDefaultRendererMotionVectorSetting
---@field DefaultPixelCoverageMode ENiagaraDefaultRendererPixelCoverageMode
---@field DefaultSortPrecision ENiagaraDefaultSortPrecision
---@field DefaultGpuTranslucentLatency ENiagaraDefaultGpuTranslucentLatency
---@field DefaultLightInverseExposureBlend float
---@field NDISkelMesh_GpuMaxInfluences ENDISkelMesh_GpuMaxInfluences::Type
---@field NDISkelMesh_GpuUniformSamplingFormat ENDISkelMesh_GpuUniformSamplingFormat::Type
---@field NDISkelMesh_AdjacencyTriangleIndexFormat ENDISkelMesh_AdjacencyTriangleIndexFormat::Type
---@field NDIStaticMesh_AllowDistanceFields boolean
---@field NDICollisionQuery_AsyncGpuTraceProviderOrder TArray<ENDICollisionQuery_AsyncGpuTraceProvider::Type>
---@field PlatformSetRedirects TArray<FNiagaraPlatformSetRedirect>
UNiagaraSettings = {}



---@class UNiagaraSignificanceHandler : UObject
UNiagaraSignificanceHandler = {}


---@class UNiagaraSignificanceHandlerAge : UNiagaraSignificanceHandler
UNiagaraSignificanceHandlerAge = {}


---@class UNiagaraSignificanceHandlerDistance : UNiagaraSignificanceHandler
UNiagaraSignificanceHandlerDistance = {}


---@class UNiagaraSimCache : UObject
---@field SoftNiagaraSystem TSoftObjectPtr<UNiagaraSystem>
---@field StartSeconds float
---@field DurationSeconds float
---@field CreateParameters FNiagaraSimCacheCreateParameters
---@field bNeedsReadComponentMappingRecache boolean
---@field CacheLayout FNiagaraSimCacheLayout
---@field CacheFrames TArray<FNiagaraSimCacheFrame>
---@field DataInterfaceStorage TMap<FNiagaraVariableBase, UObject>
UNiagaraSimCache = {}

---@param OutValues TArray<FVector>
---@param AttributeName FName
---@param EmitterName FName
---@param FrameIndex int32
function UNiagaraSimCache:ReadVectorAttribute(OutValues, AttributeName, EmitterName, FrameIndex) end
---@param OutValues TArray<FVector4>
---@param AttributeName FName
---@param EmitterName FName
---@param FrameIndex int32
function UNiagaraSimCache:ReadVector4Attribute(OutValues, AttributeName, EmitterName, FrameIndex) end
---@param OutValues TArray<FVector2D>
---@param AttributeName FName
---@param EmitterName FName
---@param FrameIndex int32
function UNiagaraSimCache:ReadVector2Attribute(OutValues, AttributeName, EmitterName, FrameIndex) end
---@param OutValues TArray<FQuat>
---@param Quat FQuat
---@param AttributeName FName
---@param EmitterName FName
---@param FrameIndex int32
function UNiagaraSimCache:ReadQuatAttributeWithRebase(OutValues, Quat, AttributeName, EmitterName, FrameIndex) end
---@param OutValues TArray<FQuat>
---@param AttributeName FName
---@param EmitterName FName
---@param bLocalSpaceToWorld boolean
---@param FrameIndex int32
function UNiagaraSimCache:ReadQuatAttribute(OutValues, AttributeName, EmitterName, bLocalSpaceToWorld, FrameIndex) end
---@param OutValues TArray<FVector>
---@param Transform FTransform
---@param AttributeName FName
---@param EmitterName FName
---@param FrameIndex int32
function UNiagaraSimCache:ReadPositionAttributeWithRebase(OutValues, Transform, AttributeName, EmitterName, FrameIndex) end
---@param OutValues TArray<FVector>
---@param AttributeName FName
---@param EmitterName FName
---@param bLocalSpaceToWorld boolean
---@param FrameIndex int32
function UNiagaraSimCache:ReadPositionAttribute(OutValues, AttributeName, EmitterName, bLocalSpaceToWorld, FrameIndex) end
---@param OutValues TArray<int32>
---@param AttributeName FName
---@param EmitterName FName
---@param FrameIndex int32
function UNiagaraSimCache:ReadIntAttribute(OutValues, AttributeName, EmitterName, FrameIndex) end
---@param OutValues TArray<float>
---@param AttributeName FName
---@param EmitterName FName
---@param FrameIndex int32
function UNiagaraSimCache:ReadFloatAttribute(OutValues, AttributeName, EmitterName, FrameIndex) end
---@param OutValues TArray<FLinearColor>
---@param AttributeName FName
---@param EmitterName FName
---@param FrameIndex int32
function UNiagaraSimCache:ReadColorAttribute(OutValues, AttributeName, EmitterName, FrameIndex) end
---@return boolean
function UNiagaraSimCache:IsEmpty() end
---@return boolean
function UNiagaraSimCache:IsCacheValid() end
---@return float
function UNiagaraSimCache:GetStartSeconds() end
---@return int32
function UNiagaraSimCache:GetNumFrames() end
---@return int32
function UNiagaraSimCache:GetNumEmitters() end
---@return TArray<FName>
function UNiagaraSimCache:GetEmitterNames() end
---@param EmitterIndex int32
---@return FName
function UNiagaraSimCache:GetEmitterName(EmitterIndex) end
---@return ENiagaraSimCacheAttributeCaptureMode
function UNiagaraSimCache:GetAttributeCaptureMode() end


---@class UNiagaraSimCacheFunctionLibrary : UBlueprintFunctionLibrary
UNiagaraSimCacheFunctionLibrary = {}

---@param WorldContextObject UObject
---@return UNiagaraSimCache
function UNiagaraSimCacheFunctionLibrary:CreateNiagaraSimCache(WorldContextObject) end
---@param SimCache UNiagaraSimCache
---@param CreateParameters FNiagaraSimCacheCreateParameters
---@param NiagaraComponent UNiagaraComponent
---@param OutSimCache UNiagaraSimCache
---@param bAdvanceSimulation boolean
---@param AdvanceDeltaTime float
---@return boolean
function UNiagaraSimCacheFunctionLibrary:CaptureNiagaraSimCacheImmediate(SimCache, CreateParameters, NiagaraComponent, OutSimCache, bAdvanceSimulation, AdvanceDeltaTime) end


---@class UNiagaraSimulationStageBase : UNiagaraMergeable
---@field Script UNiagaraScript
---@field SimulationStageName FName
---@field bEnabled boolean
UNiagaraSimulationStageBase = {}



---@class UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase
---@field EnabledBinding FNiagaraVariableAttributeBinding
---@field ElementCountBinding FNiagaraVariableAttributeBinding
---@field ElementCountXBinding FNiagaraVariableAttributeBinding
---@field ElementCountYBinding FNiagaraVariableAttributeBinding
---@field ElementCountZBinding FNiagaraVariableAttributeBinding
---@field IterationSource ENiagaraIterationSource
---@field Iterations int32
---@field NumIterationsBinding FNiagaraVariableAttributeBinding
---@field bSpawnOnly boolean
---@field ExecuteBehavior ENiagaraSimStageExecuteBehavior
---@field bDisablePartialParticleUpdate boolean
---@field DataInterface FNiagaraVariableDataInterfaceBinding
---@field bParticleIterationStateEnabled boolean
---@field ParticleIterationStateBinding FNiagaraVariableAttributeBinding
---@field ParticleIterationStateRange FIntPoint
---@field bGpuDispatchForceLinear boolean
---@field bOverrideGpuDispatchType boolean
---@field OverrideGpuDispatchType ENiagaraGpuDispatchType
---@field bOverrideGpuDispatchNumThreads boolean
---@field OverrideGpuDispatchNumThreads FIntVector
UNiagaraSimulationStageGeneric = {}



---@class UNiagaraSpriteRendererProperties : UNiagaraRendererProperties
---@field Material UMaterialInterface
---@field SourceMode ENiagaraRendererSourceDataMode
---@field MaterialUserParamBinding FNiagaraUserParameterBinding
---@field Alignment ENiagaraSpriteAlignment
---@field FacingMode ENiagaraSpriteFacingMode
---@field PivotInUVSpace FVector2D
---@field MacroUVRadius float
---@field SortMode ENiagaraSortMode
---@field SubImageSize FVector2D
---@field bSubImageBlend boolean
---@field bRemoveHMDRollInVR boolean
---@field bSortOnlyWhenTranslucent boolean
---@field SortPrecision ENiagaraRendererSortPrecision
---@field GpuTranslucentLatency ENiagaraRendererGpuTranslucentLatency
---@field PixelCoverageMode ENiagaraRendererPixelCoverageMode
---@field PixelCoverageBlend float
---@field MinFacingCameraBlendDistance float
---@field MaxFacingCameraBlendDistance float
---@field bEnableCameraDistanceCulling boolean
---@field MinCameraDistance float
---@field MaxCameraDistance float
---@field RendererVisibility uint32
---@field PositionBinding FNiagaraVariableAttributeBinding
---@field ColorBinding FNiagaraVariableAttributeBinding
---@field VelocityBinding FNiagaraVariableAttributeBinding
---@field SpriteRotationBinding FNiagaraVariableAttributeBinding
---@field SpriteSizeBinding FNiagaraVariableAttributeBinding
---@field SpriteFacingBinding FNiagaraVariableAttributeBinding
---@field SpriteAlignmentBinding FNiagaraVariableAttributeBinding
---@field SubImageIndexBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterialBinding FNiagaraVariableAttributeBinding
---@field DynamicMaterial1Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial2Binding FNiagaraVariableAttributeBinding
---@field DynamicMaterial3Binding FNiagaraVariableAttributeBinding
---@field CameraOffsetBinding FNiagaraVariableAttributeBinding
---@field UVScaleBinding FNiagaraVariableAttributeBinding
---@field PivotOffsetBinding FNiagaraVariableAttributeBinding
---@field MaterialRandomBinding FNiagaraVariableAttributeBinding
---@field CustomSortingBinding FNiagaraVariableAttributeBinding
---@field NormalizedAgeBinding FNiagaraVariableAttributeBinding
---@field RendererVisibilityTagBinding FNiagaraVariableAttributeBinding
---@field MaterialParameters FNiagaraRendererMaterialParameters
---@field PrevPositionBinding FNiagaraVariableAttributeBinding
---@field PrevVelocityBinding FNiagaraVariableAttributeBinding
---@field PrevSpriteRotationBinding FNiagaraVariableAttributeBinding
---@field PrevSpriteSizeBinding FNiagaraVariableAttributeBinding
---@field PrevSpriteFacingBinding FNiagaraVariableAttributeBinding
---@field PrevSpriteAlignmentBinding FNiagaraVariableAttributeBinding
---@field PrevCameraOffsetBinding FNiagaraVariableAttributeBinding
---@field PrevPivotOffsetBinding FNiagaraVariableAttributeBinding
UNiagaraSpriteRendererProperties = {}



---@class UNiagaraSystem : UFXSystemAsset
---@field bSupportLargeWorldCoordinates boolean
---@field bOverrideCastShadow boolean
---@field bOverrideReceivesDecals boolean
---@field bOverrideRenderCustomDepth boolean
---@field bOverrideCustomDepthStencilValue boolean
---@field bOverrideCustomDepthStencilWriteMask boolean
---@field bOverrideTranslucencySortPriority boolean
---@field bOverrideTranslucencySortDistanceOffset boolean
---@field bCastShadow boolean
---@field bReceivesDecals boolean
---@field bRenderCustomDepth boolean
---@field bDisableExperimentalVM boolean
---@field CustomDepthStencilWriteMask ERendererStencilMask
---@field CustomDepthStencilValue int32
---@field TranslucencySortPriority int32
---@field TranslucencySortDistanceOffset float
---@field bDumpDebugSystemInfo boolean
---@field bDumpDebugEmitterInfo boolean
---@field bRequireCurrentFrameData boolean
---@field bFixedBounds boolean
---@field EffectType UNiagaraEffectType
---@field bOverrideScalabilitySettings boolean
---@field bOverrideAllowCullingForLocalPlayers boolean
---@field bAllowCullingForLocalPlayersOverride boolean
---@field ScalabilityOverrides TArray<FNiagaraSystemScalabilityOverride>
---@field SystemScalabilityOverrides FNiagaraSystemScalabilityOverrides
---@field EmitterHandles TArray<FNiagaraEmitterHandle>
---@field ParameterCollectionOverrides TArray<UNiagaraParameterCollectionInstance>
---@field SystemSpawnScript UNiagaraScript
---@field SystemUpdateScript UNiagaraScript
---@field SystemCompiledData FNiagaraSystemCompiledData
---@field ExposedParameters FNiagaraUserRedirectionParameterStore
---@field FixedBounds FBox
---@field bAutoDeactivate boolean
---@field bDeterminism boolean
---@field RandomSeed int32
---@field WarmupTime float
---@field WarmupTickCount int32
---@field WarmupTickDelta float
---@field bFixedTickDelta boolean
---@field FixedTickDeltaTime float
---@field bHasSystemScriptDIsWithPerInstanceData boolean
---@field bNeedsGPUContextInitForDataInterfaces boolean
---@field UserDINamesReadInSystemScripts TArray<FName>
UNiagaraSystem = {}



---@class UNiagaraValidationRule : UObject
UNiagaraValidationRule = {}


---@class UVolumeCache : UObject
---@field FilePath FString
---@field CacheType EVolumeCacheType
---@field Resolution FIntVector
---@field FrameRangeStart int32
---@field FrameRangeEnd int32
UVolumeCache = {}



