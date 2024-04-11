---@meta

---@class FChaosDestructionEvent
---@field Position FVector
---@field Normal FVector
---@field Velocity FVector
---@field AngularVelocity FVector
---@field ExtentMin float
---@field ExtentMax float
---@field ParticleID int32
---@field Time float
---@field Type int32
FChaosDestructionEvent = {}



---@class UNiagaraDataInterfaceChaosDestruction : UNiagaraDataInterface
---@field ChaosSolverActorSet TSet<AChaosSolverActor>
---@field DataSourceType EDataSourceTypeEnum
---@field DataProcessFrequency int32
---@field MaxNumberOfDataEntriesToSpawn int32
---@field DoSpawn boolean
---@field SpawnMultiplierMinMax FVector2D
---@field SpawnChance float
---@field ImpulseToSpawnMinMax FVector2D
---@field SpeedToSpawnMinMax FVector2D
---@field MassToSpawnMinMax FVector2D
---@field ExtentMinToSpawnMinMax FVector2D
---@field ExtentMaxToSpawnMinMax FVector2D
---@field VolumeToSpawnMinMax FVector2D
---@field SolverTimeToSpawnMinMax FVector2D
---@field SurfaceTypeToSpawn int32
---@field LocationFilteringMode ELocationFilteringModeEnum
---@field LocationXToSpawn ELocationXToSpawnEnum
---@field LocationXToSpawnMinMax FVector2D
---@field LocationYToSpawn ELocationYToSpawnEnum
---@field LocationYToSpawnMinMax FVector2D
---@field LocationZToSpawn ELocationZToSpawnEnum
---@field LocationZToSpawnMinMax FVector2D
---@field TrailMinSpeedToSpawn float
---@field DataSortingType EDataSortTypeEnum
---@field bGetExternalCollisionData boolean
---@field DoSpatialHash boolean
---@field SpatialHashVolumeMin FVector
---@field SpatialHashVolumeMax FVector
---@field SpatialHashVolumeCellSize FVector
---@field MaxDataPerCell int32
---@field bApplyMaterialsFilter boolean
---@field ChaosBreakingMaterialSet TSet<UPhysicalMaterial>
---@field bGetExternalBreakingData boolean
---@field bGetExternalTrailingData boolean
---@field RandomPositionMagnitudeMinMax FVector2D
---@field InheritedVelocityMultiplier float
---@field RandomVelocityGenerationType ERandomVelocityGenerationTypeEnum
---@field RandomVelocityMagnitudeMinMax FVector2D
---@field SpreadAngleMax float
---@field VelocityOffsetMin FVector
---@field VelocityOffsetMax FVector
---@field FinalVelocityMagnitudeMinMax FVector2D
---@field MaxLatency float
---@field DebugType EDebugTypeEnum
---@field LastSpawnedPointID int32
---@field LastSpawnTime float
---@field SolverTime float
---@field TimeStampOfLastProcessedData float
UNiagaraDataInterfaceChaosDestruction = {}



---@class UNiagaraDataInterfaceGeometryCollection : UNiagaraDataInterface
---@field GeometryCollectionActor AGeometryCollectionActor
UNiagaraDataInterfaceGeometryCollection = {}



---@class UNiagaraDataInterfacePhysicsField : UNiagaraDataInterface
UNiagaraDataInterfacePhysicsField = {}


