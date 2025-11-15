---@meta

---@class FBoolToStringDataflowNode : FDataflowNode
---@field bool boolean
---@field String FString
local FBoolToStringDataflowNode = {}



---@class FBoundingBoxDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
---@field BoundingBox FBox
local FBoundingBoxDataflowNode = {}



---@class FCloseGeometryOnCollectionDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
local FCloseGeometryOnCollectionDataflowNode = {}



---@class FCreateNonOverlappingConvexHullsDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
---@field CanRemoveFraction float
---@field CanExceedFraction float
---@field SimplificationDistanceThreshold float
local FCreateNonOverlappingConvexHullsDataflowNode = {}



---@class FDegreesToRadiansDataflowNode : FDataflowNode
---@field Degrees float
---@field Radians float
local FDegreesToRadiansDataflowNode = {}



---@class FExampleCollectionEditDataflowNode : FDataflowNode
---@field Scale float
---@field Collection FManagedArrayCollection
local FExampleCollectionEditDataflowNode = {}



---@class FExpandBoundingBoxDataflowNode : FDataflowNode
---@field BoundingBox FBox
---@field Min FVector
---@field Max FVector
---@field Center FVector
---@field HalfExtents FVector
---@field Volume float
local FExpandBoundingBoxDataflowNode = {}



---@class FExpandVectorDataflowNode : FDataflowNode
---@field Vector FVector
---@field X float
---@field Y float
---@field Z float
local FExpandVectorDataflowNode = {}



---@class FExplodedViewDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
---@field UniformScale float
---@field Scale FVector
local FExplodedViewDataflowNode = {}



---@class FFloatToIntDataflowNode : FDataflowNode
---@field Function EFloatToIntFunctionEnum
---@field float float
---@field Int int32
local FFloatToIntDataflowNode = {}



---@class FFloatToStringDataflowNode : FDataflowNode
---@field float float
---@field String FString
local FFloatToStringDataflowNode = {}



---@class FGenerateTetrahedralCollectionDataflowNodes : FDataflowNode
---@field Collection FManagedArrayCollection
local FGenerateTetrahedralCollectionDataflowNodes = {}



---@class FGetCollectionAssetDataflowNode : FDataflowNode
---@field Output FManagedArrayCollection
local FGetCollectionAssetDataflowNode = {}



---@class FHashStringDataflowNode : FDataflowNode
---@field String FString
---@field Hash int32
local FHashStringDataflowNode = {}



---@class FHashVectorDataflowNode : FDataflowNode
---@field Vector FVector
---@field Hash int32
local FHashVectorDataflowNode = {}



---@class FIntToFloatDataflowNode : FDataflowNode
---@field Int int32
---@field float float
local FIntToFloatDataflowNode = {}



---@class FIntToStringDataflowNode : FDataflowNode
---@field Int int32
---@field String FString
local FIntToStringDataflowNode = {}



---@class FLogStringDataflowNode : FDataflowNode
---@field PrintToLog boolean
---@field String FString
local FLogStringDataflowNode = {}



---@class FMakeBoxDataflowNode : FDataflowNode
---@field DataType EMakeBoxDataTypeEnum
---@field Min FVector
---@field Max FVector
---@field Center FVector
---@field Size FVector
---@field Box FBox
local FMakeBoxDataflowNode = {}



---@class FMakeLiteralBoolDataflowNode : FDataflowNode
---@field Value boolean
---@field bool boolean
local FMakeLiteralBoolDataflowNode = {}



---@class FMakeLiteralFloatDataflowNode : FDataflowNode
---@field Value float
---@field float float
local FMakeLiteralFloatDataflowNode = {}



---@class FMakeLiteralIntDataflowNode : FDataflowNode
---@field Value int32
---@field Int int32
local FMakeLiteralIntDataflowNode = {}



---@class FMakeLiteralStringDataflowNode : FDataflowNode
---@field Value FString
---@field String FString
local FMakeLiteralStringDataflowNode = {}



---@class FMakeLiteralVectorDataflowNode : FDataflowNode
---@field Value FVector
---@field Vector FVector
local FMakeLiteralVectorDataflowNode = {}



---@class FMakePointsDataflowNode : FDataflowNode
---@field Point TArray<FVector>
---@field Points TArray<FVector>
local FMakePointsDataflowNode = {}



---@class FMathConstantsDataflowNode : FDataflowNode
---@field Constant EMathConstantsEnum
---@field float float
local FMathConstantsDataflowNode = {}



---@class FPlaneCutterDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
---@field BoundingBox FBox
---@field NumPlanes int32
---@field RandomSeed float
---@field Grout float
---@field Amplitude float
---@field Frequency float
---@field Persistence float
---@field Lacunarity float
---@field OctaveNumber int32
---@field PointSpacing float
---@field AddSamplesForCollision boolean
---@field CollisionSampleSpacing float
local FPlaneCutterDataflowNode = {}



---@class FPrintStringDataflowNode : FDataflowNode
---@field PrintToScreen boolean
---@field PrintToLog boolean
---@field Color FColor
---@field Duration float
---@field String FString
local FPrintStringDataflowNode = {}



---@class FRadialScatterPointsDataflowNode : FDataflowNode
---@field Center FVector
---@field Normal FVector
---@field Radius float
---@field AngularSteps int32
---@field RadialSteps int32
---@field AngleOffset float
---@field Variability float
---@field RandomSeed float
---@field Points TArray<FVector>
local FRadialScatterPointsDataflowNode = {}



---@class FRadiansToDegreesDataflowNode : FDataflowNode
---@field Radians float
---@field Degrees float
local FRadiansToDegreesDataflowNode = {}



---@class FRandomFloatDataflowNode : FDataflowNode
---@field Deterministic boolean
---@field RandomSeed float
---@field float float
local FRandomFloatDataflowNode = {}



---@class FRandomFloatInRangeDataflowNode : FDataflowNode
---@field Deterministic boolean
---@field RandomSeed float
---@field Min float
---@field Max float
---@field float float
local FRandomFloatInRangeDataflowNode = {}



---@class FRandomUnitVectorDataflowNode : FDataflowNode
---@field Deterministic boolean
---@field RandomSeed float
---@field Vector FVector
local FRandomUnitVectorDataflowNode = {}



---@class FRandomUnitVectorInConeDataflowNode : FDataflowNode
---@field Deterministic boolean
---@field RandomSeed float
---@field ConeDirection FVector
---@field ConeHalfAngle float
---@field Vector FVector
local FRandomUnitVectorInConeDataflowNode = {}



---@class FResetGeometryCollectionDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
local FResetGeometryCollectionDataflowNode = {}



---@class FSetCollectionAssetDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
local FSetCollectionAssetDataflowNode = {}



---@class FSkeletalMeshToCollectionDataflowNode : FDataflowNode
---@field SkeletalMesh USkeletalMesh
---@field Collection FManagedArrayCollection
local FSkeletalMeshToCollectionDataflowNode = {}



---@class FStringAppendDataflowNode : FDataflowNode
---@field String1 FString
---@field String2 FString
---@field String FString
local FStringAppendDataflowNode = {}



---@class FUniformScatterPointsDataflowNode : FDataflowNode
---@field MinNumberOfPoints int32
---@field MaxNumberOfPoints int32
---@field RandomSeed float
---@field BoundingBox FBox
---@field Points TArray<FVector>
local FUniformScatterPointsDataflowNode = {}



---@class FVectorToStringDataflowNode : FDataflowNode
---@field Vector FVector
---@field String FString
local FVectorToStringDataflowNode = {}



---@class FVoronoiFractureDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
---@field Points TArray<FVector>
---@field RandomSeed float
---@field ChanceToFracture float
---@field GroupFracture boolean
---@field Grout float
---@field Amplitude float
---@field Frequency float
---@field Persistence float
---@field Lacunarity float
---@field OctaveNumber int32
---@field PointSpacing float
---@field AddSamplesForCollision boolean
---@field CollisionSampleSpacing float
local FVoronoiFractureDataflowNode = {}



