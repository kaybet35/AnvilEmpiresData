---@meta

---@class AAbstractNavData : ANavigationData
AAbstractNavData = {}


---@class ANavMeshBoundsVolume : AVolume
---@field SupportedAgents FNavAgentSelector
ANavMeshBoundsVolume = {}



---@class ANavModifierVolume : AVolume
---@field AreaClass TSubclassOf<UNavArea>
---@field bMaskFillCollisionUnderneathForNavmesh boolean
ANavModifierVolume = {}

---@param NewAreaClass TSubclassOf<UNavArea>
function ANavModifierVolume:SetAreaClass(NewAreaClass) end


---@class ANavSystemConfigOverride : AActor
---@field NavigationSystemConfig UNavigationSystemConfig
---@field OverridePolicy ENavSystemOverridePolicy
---@field bLoadOnClient boolean
ANavSystemConfigOverride = {}



---@class ANavigationData : AActor
---@field RenderingComp UPrimitiveComponent
---@field NavDataConfig FNavDataConfig
---@field bEnableDrawing boolean
---@field bForceRebuildOnLoad boolean
---@field bAutoDestroyWhenNoNavigation boolean
---@field bCanBeMainNavData boolean
---@field bCanSpawnOnRebuild boolean
---@field bRebuildAtRuntime boolean
---@field RuntimeGeneration ERuntimeGenerationType
---@field ObservedPathsTickInterval float
---@field DataVersion uint32
---@field SupportedAreas TArray<FSupportedAreaData>
ANavigationData = {}



---@class ANavigationGraph : ANavigationData
ANavigationGraph = {}


---@class ANavigationGraphNode : AActor
ANavigationGraphNode = {}


---@class ANavigationTestingActor : AActor
---@field CapsuleComponent UCapsuleComponent
---@field InvokerComponent UNavigationInvokerComponent
---@field bActAsNavigationInvoker boolean
---@field NavAgentProps FNavAgentProperties
---@field QueryingExtent FVector
---@field MyNavData ANavigationData
---@field ProjectedLocation FVector
---@field bProjectedLocationValid boolean
---@field bSearchStart boolean
---@field CostLimitFactor float
---@field MinimumCostLimit float
---@field bBacktracking boolean
---@field bUseHierarchicalPathfinding boolean
---@field bGatherDetailedInfo boolean
---@field bDrawDistanceToWall boolean
---@field bShowNodePool boolean
---@field bShowBestPath boolean
---@field bShowDiffWithPreviousStep boolean
---@field bShouldBeVisibleInGame boolean
---@field CostDisplayMode ENavCostDisplay::Type
---@field TextCanvasOffset FVector2D
---@field bPathExist boolean
---@field bPathIsPartial boolean
---@field bPathSearchOutOfNodes boolean
---@field PathfindingTime float
---@field PathCost float
---@field PathfindingSteps int32
---@field OtherActor ANavigationTestingActor
---@field FilterClass TSubclassOf<UNavigationQueryFilter>
---@field ShowStepIndex int32
---@field OffsetFromCornersDistance float
ANavigationTestingActor = {}



---@class ARecastNavMesh : ANavigationData
---@field bDrawTriangleEdges boolean
---@field bDrawPolyEdges boolean
---@field bDrawFilledPolys boolean
---@field bDrawNavMeshEdges boolean
---@field bDrawTileBounds boolean
---@field bDrawPathCollidingGeometry boolean
---@field bDrawTileLabels boolean
---@field bDrawPolygonLabels boolean
---@field bDrawDefaultPolygonCost boolean
---@field bDrawPolygonFlags boolean
---@field bDrawLabelsOnPathNodes boolean
---@field bDrawNavLinks boolean
---@field bDrawFailedNavLinks boolean
---@field bDrawClusters boolean
---@field bDrawOctree boolean
---@field bDrawOctreeDetails boolean
---@field bDrawMarkedForbiddenPolys boolean
---@field bDistinctlyDrawTilesBeingBuilt boolean
---@field DrawOffset float
---@field TileGenerationDebug FRecastNavMeshTileGenerationDebug
---@field bFixedTilePoolSize boolean
---@field TilePoolSize int32
---@field TileSizeUU float
---@field CellSize float
---@field CellHeight float
---@field AgentRadius float
---@field AgentHeight float
---@field AgentMaxSlope float
---@field AgentMaxStepHeight float
---@field MinRegionArea float
---@field MergeRegionSize float
---@field MaxSimplificationError float
---@field MaxSimultaneousTileGenerationJobsCount int32
---@field TileNumberHardLimit int32
---@field PolyRefTileBits int32
---@field PolyRefNavPolyBits int32
---@field PolyRefSaltBits int32
---@field NavMeshOriginOffset FVector
---@field DefaultDrawDistance float
---@field DefaultMaxSearchNodes float
---@field DefaultMaxHierarchicalSearchNodes float
---@field RegionPartitioning ERecastPartitioning::Type
---@field LayerPartitioning ERecastPartitioning::Type
---@field RegionChunkSplits int32
---@field LayerChunkSplits int32
---@field bSortNavigationAreasByCost boolean
---@field bIsWorldPartitioned boolean
---@field bPerformVoxelFiltering boolean
---@field bMarkLowHeightAreas boolean
---@field bUseExtraTopCellWhenMarkingAreas boolean
---@field bFilterLowSpanSequences boolean
---@field bFilterLowSpanFromTileCache boolean
---@field bDoFullyAsyncNavDataGathering boolean
---@field bUseBetterOffsetsFromCorners boolean
---@field bStoreEmptyTileLayers boolean
---@field bUseVirtualFilters boolean
---@field bUseVirtualGeometryFilteringAndDirtying boolean
---@field bAllowNavLinkAsPathEnd boolean
---@field TimeSliceFilterLedgeSpansMaxYProcess int32
---@field TimeSliceLongDurationDebug double
---@field bUseVoxelCache boolean
---@field TileSetUpdateInterval float
---@field HeuristicScale float
---@field VerticalDeviationFromGroundCompensation float
ARecastNavMesh = {}

---@param Bounds FBox
---@param OldArea TSubclassOf<UNavArea>
---@param NewArea TSubclassOf<UNavArea>
---@param ReplaceLinks boolean
---@return boolean
function ARecastNavMesh:K2_ReplaceAreaInTileBounds(Bounds, OldArea, NewArea, ReplaceLinks) end


---@class FNavCollisionBox
---@field Offset FVector
---@field Extent FVector
FNavCollisionBox = {}



---@class FNavCollisionCylinder
---@field Offset FVector
---@field Radius float
---@field Height float
FNavCollisionCylinder = {}



---@class FNavGraphEdge
FNavGraphEdge = {}


---@class FNavGraphNode
---@field Owner UObject
FNavGraphNode = {}



---@class FNavLinkCustomInstanceData : FActorComponentInstanceData
---@field NavLinkUserId uint32
FNavLinkCustomInstanceData = {}



---@class FNavigationFilterArea
---@field AreaClass TSubclassOf<UNavArea>
---@field TravelCostOverride float
---@field EnteringCostOverride float
---@field bIsExcluded boolean
---@field bOverrideTravelCost boolean
---@field bOverrideEnteringCost boolean
FNavigationFilterArea = {}



---@class FNavigationFilterFlags
---@field bNavFlag0 boolean
---@field bNavFlag1 boolean
---@field bNavFlag2 boolean
---@field bNavFlag3 boolean
---@field bNavFlag4 boolean
---@field bNavFlag5 boolean
---@field bNavFlag6 boolean
---@field bNavFlag7 boolean
---@field bNavFlag8 boolean
---@field bNavFlag9 boolean
---@field bNavFlag10 boolean
---@field bNavFlag11 boolean
---@field bNavFlag12 boolean
---@field bNavFlag13 boolean
---@field bNavFlag14 boolean
---@field bNavFlag15 boolean
FNavigationFilterFlags = {}



---@class FRecastNavMeshGenerationProperties
---@field TilePoolSize int32
---@field TileSizeUU float
---@field CellSize float
---@field CellHeight float
---@field AgentRadius float
---@field AgentHeight float
---@field AgentMaxSlope float
---@field AgentMaxStepHeight float
---@field MinRegionArea float
---@field MergeRegionSize float
---@field MaxSimplificationError float
---@field TileNumberHardLimit int32
---@field RegionPartitioning ERecastPartitioning::Type
---@field LayerPartitioning ERecastPartitioning::Type
---@field RegionChunkSplits int32
---@field LayerChunkSplits int32
---@field bSortNavigationAreasByCost boolean
---@field bPerformVoxelFiltering boolean
---@field bMarkLowHeightAreas boolean
---@field bUseExtraTopCellWhenMarkingAreas boolean
---@field bFilterLowSpanSequences boolean
---@field bFilterLowSpanFromTileCache boolean
---@field bFixedTilePoolSize boolean
---@field bIsWorldPartitioned boolean
FRecastNavMeshGenerationProperties = {}



---@class FRecastNavMeshTileGenerationDebug
---@field bEnabled boolean
---@field TileCoordinate FIntVector
---@field bHeightfieldSolidFromRasterization boolean
---@field bHeightfieldSolidPostInclusionBoundsFiltering boolean
---@field bHeightfieldSolidPostHeightFiltering boolean
---@field bCompactHeightfield boolean
---@field bCompactHeightfieldEroded boolean
---@field bCompactHeightfieldRegions boolean
---@field bCompactHeightfieldDistances boolean
---@field bTileCacheLayerAreas boolean
---@field bTileCacheLayerRegions boolean
---@field bTileCacheContours boolean
---@field bTileCachePolyMesh boolean
---@field bTileCacheDetailMesh boolean
FRecastNavMeshTileGenerationDebug = {}



---@class FSupportedAreaData
---@field AreaClassName FString
---@field AreaID int32
---@field AreaClass TObjectPtr<UClass>
FSupportedAreaData = {}



---@class INavLinkCustomInterface : IInterface
INavLinkCustomInterface = {}


---@class INavLinkHostInterface : IInterface
INavLinkHostInterface = {}


---@class INavNodeInterface : IInterface
INavNodeInterface = {}


---@class INavigationPathGenerator : IInterface
INavigationPathGenerator = {}


---@class UCrowdManagerBase : UObject
UCrowdManagerBase = {}


---@class UNavArea : UNavAreaBase
---@field DefaultCost float
---@field FixedAreaEnteringCost float
---@field DrawColor FColor
---@field SupportedAgents FNavAgentSelector
---@field bSupportsAgent0 boolean
---@field bSupportsAgent1 boolean
---@field bSupportsAgent2 boolean
---@field bSupportsAgent3 boolean
---@field bSupportsAgent4 boolean
---@field bSupportsAgent5 boolean
---@field bSupportsAgent6 boolean
---@field bSupportsAgent7 boolean
---@field bSupportsAgent8 boolean
---@field bSupportsAgent9 boolean
---@field bSupportsAgent10 boolean
---@field bSupportsAgent11 boolean
---@field bSupportsAgent12 boolean
---@field bSupportsAgent13 boolean
---@field bSupportsAgent14 boolean
---@field bSupportsAgent15 boolean
UNavArea = {}



---@class UNavAreaMeta : UNavArea
UNavAreaMeta = {}


---@class UNavAreaMeta_SwitchByAgent : UNavAreaMeta
---@field Agent0Area TSubclassOf<UNavArea>
---@field Agent1Area TSubclassOf<UNavArea>
---@field Agent2Area TSubclassOf<UNavArea>
---@field Agent3Area TSubclassOf<UNavArea>
---@field Agent4Area TSubclassOf<UNavArea>
---@field Agent5Area TSubclassOf<UNavArea>
---@field Agent6Area TSubclassOf<UNavArea>
---@field Agent7Area TSubclassOf<UNavArea>
---@field Agent8Area TSubclassOf<UNavArea>
---@field Agent9Area TSubclassOf<UNavArea>
---@field Agent10Area TSubclassOf<UNavArea>
---@field Agent11Area TSubclassOf<UNavArea>
---@field Agent12Area TSubclassOf<UNavArea>
---@field Agent13Area TSubclassOf<UNavArea>
---@field Agent14Area TSubclassOf<UNavArea>
---@field Agent15Area TSubclassOf<UNavArea>
UNavAreaMeta_SwitchByAgent = {}



---@class UNavArea_Default : UNavArea
UNavArea_Default = {}


---@class UNavArea_LowHeight : UNavArea
UNavArea_LowHeight = {}


---@class UNavArea_Null : UNavArea
UNavArea_Null = {}


---@class UNavArea_Obstacle : UNavArea
UNavArea_Obstacle = {}


---@class UNavCollision : UNavCollisionBase
---@field CylinderCollision TArray<FNavCollisionCylinder>
---@field BoxCollision TArray<FNavCollisionBox>
---@field AreaClass TSubclassOf<UNavArea>
---@field bGatherConvexGeometry boolean
---@field bCreateOnClient boolean
UNavCollision = {}



---@class UNavLinkComponent : UPrimitiveComponent
---@field Links TArray<FNavigationLink>
UNavLinkComponent = {}



---@class UNavLinkCustomComponent : UNavRelevantComponent
---@field NavLinkUserId uint32
---@field EnabledAreaClass TSubclassOf<UNavArea>
---@field DisabledAreaClass TSubclassOf<UNavArea>
---@field SupportedAgents FNavAgentSelector
---@field LinkRelativeStart FVector
---@field LinkRelativeEnd FVector
---@field LinkDirection ENavLinkDirection::Type
---@field bLinkEnabled boolean
---@field bNotifyWhenEnabled boolean
---@field bNotifyWhenDisabled boolean
---@field bCreateBoxObstacle boolean
---@field ObstacleOffset FVector
---@field ObstacleExtent FVector
---@field ObstacleAreaClass TSubclassOf<UNavArea>
---@field BroadcastRadius float
---@field BroadcastInterval float
---@field BroadcastChannel ECollisionChannel
UNavLinkCustomComponent = {}



---@class UNavLinkRenderingComponent : UPrimitiveComponent
UNavLinkRenderingComponent = {}


---@class UNavLinkTrivial : UNavLinkDefinition
UNavLinkTrivial = {}


---@class UNavMeshRenderingComponent : UDebugDrawComponent
UNavMeshRenderingComponent = {}


---@class UNavModifierComponent : UNavRelevantComponent
---@field AreaClass TSubclassOf<UNavArea>
---@field FailsafeExtent FVector
---@field bIncludeAgentHeight boolean
UNavModifierComponent = {}

---@param NewAreaClass TSubclassOf<UNavArea>
function UNavModifierComponent:SetAreaClass(NewAreaClass) end


---@class UNavRelevantComponent : UActorComponent
---@field bAttachToOwnersRoot boolean
---@field CachedNavParent UObject
UNavRelevantComponent = {}

---@param bRelevant boolean
function UNavRelevantComponent:SetNavigationRelevancy(bRelevant) end


---@class UNavTestRenderingComponent : UDebugDrawComponent
UNavTestRenderingComponent = {}


---@class UNavigationGraphNodeComponent : USceneComponent
---@field Node FNavGraphNode
---@field NextNodeComponent UNavigationGraphNodeComponent
---@field PrevNodeComponent UNavigationGraphNodeComponent
UNavigationGraphNodeComponent = {}



---@class UNavigationInvokerComponent : UActorComponent
---@field TileGenerationRadius float
---@field TileRemovalRadius float
UNavigationInvokerComponent = {}



---@class UNavigationPath : UObject
---@field PathUpdatedNotifier FNavigationPathPathUpdatedNotifier
---@field PathPoints TArray<FVector>
---@field RecalculateOnInvalidation ENavigationOptionFlag::Type
UNavigationPath = {}

---@return boolean
function UNavigationPath:IsValid() end
---@return boolean
function UNavigationPath:IsStringPulled() end
---@return boolean
function UNavigationPath:IsPartial() end
---@return float
function UNavigationPath:GetPathLength() end
---@return float
function UNavigationPath:GetPathCost() end
---@return FString
function UNavigationPath:GetDebugString() end
---@param DoRecalculation ENavigationOptionFlag::Type
function UNavigationPath:EnableRecalculationOnInvalidation(DoRecalculation) end
---@param bShouldDrawDebugData boolean
---@param PathColor FLinearColor
function UNavigationPath:EnableDebugDrawing(bShouldDrawDebugData, PathColor) end


---@class UNavigationQueryFilter : UObject
---@field Areas TArray<FNavigationFilterArea>
---@field IncludeFlags FNavigationFilterFlags
---@field ExcludeFlags FNavigationFilterFlags
UNavigationQueryFilter = {}



---@class UNavigationSystemModuleConfig : UNavigationSystemConfig
---@field bStrictlyStatic boolean
---@field bCreateOnClient boolean
---@field bAutoSpawnMissingNavData boolean
---@field bSpawnNavDataInNavBoundsLevel boolean
UNavigationSystemModuleConfig = {}



---@class UNavigationSystemV1 : UNavigationSystemBase
---@field MainNavData ANavigationData
---@field AbstractNavData ANavigationData
---@field DefaultAgentName FName
---@field CrowdManagerClass TSoftClassPtr<UCrowdManagerBase>
---@field bAutoCreateNavigationData boolean
---@field bSpawnNavDataInNavBoundsLevel boolean
---@field bAllowClientSideNavigation boolean
---@field bShouldDiscardSubLevelNavData boolean
---@field bTickWhilePaused boolean
---@field bSupportRebuilding boolean
---@field bInitialBuildingLocked boolean
---@field bSkipAgentHeightCheckWhenPickingNavData boolean
---@field GeometryExportVertexCountWarningThreshold int32
---@field bGenerateNavigationOnlyAroundNavigationInvokers boolean
---@field ActiveTilesUpdateInterval float
---@field DataGatheringMode ENavDataGatheringModeConfig
---@field DirtyAreaWarningSizeThreshold float
---@field GatheringNavModifiersWarningLimitTime float
---@field SupportedAgents TArray<FNavDataConfig>
---@field SupportedAgentsMask FNavAgentSelector
---@field BuildBounds FBox
---@field NavDataSet TArray<ANavigationData>
---@field NavDataRegistrationQueue TArray<ANavigationData>
---@field OnNavDataRegisteredEvent FNavigationSystemV1OnNavDataRegisteredEvent
---@field OnNavigationGenerationFinishedDelegate FNavigationSystemV1OnNavigationGenerationFinishedDelegate
---@field OperationMode FNavigationSystemRunMode
UNavigationSystemV1 = {}

---@param Invoker AActor
function UNavigationSystemV1:UnregisterNavigationInvoker(Invoker) end
---@param MaxNumberOfJobs int32
function UNavigationSystemV1:SetMaxSimultaneousTileGenerationJobsCount(MaxNumberOfJobs) end
---@param NewMode ENavDataGatheringModeConfig
function UNavigationSystemV1:SetGeometryGatheringMode(NewMode) end
function UNavigationSystemV1:ResetMaxSimultaneousTileGenerationJobsCount() end
---@param Invoker AActor
---@param TileGenerationRadius float
---@param TileRemovalRadius float
function UNavigationSystemV1:RegisterNavigationInvoker(Invoker, TileGenerationRadius, TileRemovalRadius) end
---@param NavVolume ANavMeshBoundsVolume
function UNavigationSystemV1:OnNavigationBoundsUpdated(NavVolume) end
---@param WorldContextObject UObject
---@param RayStart FVector
---@param RayEnd FVector
---@param HitLocation FVector
---@param FilterClass TSubclassOf<UNavigationQueryFilter>
---@param Querier AController
---@return boolean
function UNavigationSystemV1:NavigationRaycast(WorldContextObject, RayStart, RayEnd, HitLocation, FilterClass, Querier) end
---@param Object UObject
---@param OldArea TSubclassOf<UNavArea>
---@param NewArea TSubclassOf<UNavArea>
---@return boolean
function UNavigationSystemV1:K2_ReplaceAreaInOctreeData(Object, OldArea, NewArea) end
---@param WorldContextObject UObject
---@param Point FVector
---@param ProjectedLocation FVector
---@param NavData ANavigationData
---@param FilterClass TSubclassOf<UNavigationQueryFilter>
---@param QueryExtent FVector
---@return boolean
function UNavigationSystemV1:K2_ProjectPointToNavigation(WorldContextObject, Point, ProjectedLocation, NavData, FilterClass, QueryExtent) end
---@param WorldContextObject UObject
---@param Origin FVector
---@param RandomLocation FVector
---@param Radius float
---@param NavData ANavigationData
---@param FilterClass TSubclassOf<UNavigationQueryFilter>
---@return boolean
function UNavigationSystemV1:K2_GetRandomReachablePointInRadius(WorldContextObject, Origin, RandomLocation, Radius, NavData, FilterClass) end
---@param WorldContextObject UObject
---@param Origin FVector
---@param RandomLocation FVector
---@param Radius float
---@param NavData ANavigationData
---@param FilterClass TSubclassOf<UNavigationQueryFilter>
---@return boolean
function UNavigationSystemV1:K2_GetRandomPointInNavigableRadius(WorldContextObject, Origin, RandomLocation, Radius, NavData, FilterClass) end
---@param WorldContextObject UObject
---@param Origin FVector
---@param RandomLocation FVector
---@param Radius float
---@param NavData ANavigationData
---@param FilterClass TSubclassOf<UNavigationQueryFilter>
---@return boolean
function UNavigationSystemV1:K2_GetRandomLocationInNavigableRadius(WorldContextObject, Origin, RandomLocation, Radius, NavData, FilterClass) end
---@param WorldContextObject UObject
---@return boolean
function UNavigationSystemV1:IsNavigationBeingBuiltOrLocked(WorldContextObject) end
---@param WorldContextObject UObject
---@return boolean
function UNavigationSystemV1:IsNavigationBeingBuilt(WorldContextObject) end
---@param WorldContextObject UObject
---@param PathStart FVector
---@param PathEnd FVector
---@param PathLength float
---@param NavData ANavigationData
---@param FilterClass TSubclassOf<UNavigationQueryFilter>
---@return ENavigationQueryResult::Type
function UNavigationSystemV1:GetPathLength(WorldContextObject, PathStart, PathEnd, PathLength, NavData, FilterClass) end
---@param WorldContextObject UObject
---@param PathStart FVector
---@param PathEnd FVector
---@param PathCost float
---@param NavData ANavigationData
---@param FilterClass TSubclassOf<UNavigationQueryFilter>
---@return ENavigationQueryResult::Type
function UNavigationSystemV1:GetPathCost(WorldContextObject, PathStart, PathEnd, PathCost, NavData, FilterClass) end
---@param WorldContextObject UObject
---@return UNavigationSystemV1
function UNavigationSystemV1:GetNavigationSystem(WorldContextObject) end
---@param WorldContextObject UObject
---@param PathStart FVector
---@param PathEnd FVector
---@param PathfindingContext AActor
---@param FilterClass TSubclassOf<UNavigationQueryFilter>
---@return UNavigationPath
function UNavigationSystemV1:FindPathToLocationSynchronously(WorldContextObject, PathStart, PathEnd, PathfindingContext, FilterClass) end
---@param WorldContextObject UObject
---@param PathStart FVector
---@param GoalActor AActor
---@param TetherDistance float
---@param PathfindingContext AActor
---@param FilterClass TSubclassOf<UNavigationQueryFilter>
---@return UNavigationPath
function UNavigationSystemV1:FindPathToActorSynchronously(WorldContextObject, PathStart, GoalActor, TetherDistance, PathfindingContext, FilterClass) end


---@class URecastFilter_UseDefaultArea : UNavigationQueryFilter
URecastFilter_UseDefaultArea = {}


---@class URecastNavMeshDataChunk : UNavigationDataChunk
URecastNavMeshDataChunk = {}


