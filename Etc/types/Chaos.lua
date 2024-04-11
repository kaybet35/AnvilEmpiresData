---@meta

---@class FChaosSolverConfiguration
---@field PositionIterations int32
---@field VelocityIterations int32
---@field ProjectionIterations int32
---@field CollisionMarginFraction float
---@field CollisionMarginMax float
---@field CollisionCullDistance float
---@field CollisionMaxPushOutVelocity float
---@field ClusterConnectionFactor float
---@field ClusterUnionConnectionType EClusterUnionMethod
---@field bGenerateCollisionData boolean
---@field CollisionFilterSettings FSolverCollisionFilterSettings
---@field bGenerateBreakData boolean
---@field BreakingFilterSettings FSolverBreakingFilterSettings
---@field bGenerateTrailingData boolean
---@field TrailingFilterSettings FSolverTrailingFilterSettings
---@field Iterations int32
---@field PushOutIterations int32
---@field bGenerateContactGraph boolean
FChaosSolverConfiguration = {}



---@class FManagedArrayCollection
FManagedArrayCollection = {}


---@class FRecordedFrame
---@field Transforms TArray<FTransform>
---@field TransformIndices TArray<int32>
---@field PreviousTransformIndices TArray<int32>
---@field DisabledFlags TArray<boolean>
---@field Collisions TArray<FSolverCollisionData>
---@field Breakings TArray<FSolverBreakingData>
---@field Trailings TSet<FSolverTrailingData>
---@field Timestamp float
FRecordedFrame = {}



---@class FRecordedTransformTrack
---@field Records TArray<FRecordedFrame>
FRecordedTransformTrack = {}



---@class FSolverBreakingData
---@field Location FVector
---@field Velocity FVector
---@field AngularVelocity FVector
---@field Mass float
---@field ParticleIndex int32
---@field ParticleIndexMesh int32
FSolverBreakingData = {}



---@class FSolverBreakingFilterSettings
---@field FilterEnabled boolean
---@field MinMass float
---@field MinSpeed float
---@field MinVolume float
FSolverBreakingFilterSettings = {}



---@class FSolverCollisionData
---@field Location FVector
---@field AccumulatedImpulse FVector
---@field Normal FVector
---@field Velocity1 FVector
---@field Velocity2 FVector
---@field AngularVelocity1 FVector
---@field AngularVelocity2 FVector
---@field Mass1 float
---@field Mass2 float
---@field ParticleIndex int32
---@field LevelsetIndex int32
---@field ParticleIndexMesh int32
---@field LevelsetIndexMesh int32
FSolverCollisionData = {}



---@class FSolverCollisionFilterSettings
---@field FilterEnabled boolean
---@field MinMass float
---@field MinSpeed float
---@field MinImpulse float
FSolverCollisionFilterSettings = {}



---@class FSolverRemovalFilterSettings
---@field FilterEnabled boolean
---@field MinMass float
---@field MinVolume float
FSolverRemovalFilterSettings = {}



---@class FSolverTrailingData
---@field Location FVector
---@field Velocity FVector
---@field AngularVelocity FVector
---@field Mass float
---@field ParticleIndex int32
---@field ParticleIndexMesh int32
FSolverTrailingData = {}



---@class FSolverTrailingFilterSettings
---@field FilterEnabled boolean
---@field MinMass float
---@field MinSpeed float
---@field MinVolume float
FSolverTrailingFilterSettings = {}



