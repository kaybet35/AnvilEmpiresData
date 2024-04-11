---@meta

---@class FBoolToStringDataflowNode : FDataflowNode
---@field bool boolean
---@field String FString
FBoolToStringDataflowNode = {}



---@class FBoundingBoxDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
---@field BoundingBox FBox
FBoundingBoxDataflowNode = {}



---@class FCloseGeometryOnCollectionDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
FCloseGeometryOnCollectionDataflowNode = {}



---@class FCreateNonOverlappingConvexHullsDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
---@field CanRemoveFraction float
---@field CanExceedFraction float
---@field SimplificationDistanceThreshold float
FCreateNonOverlappingConvexHullsDataflowNode = {}



---@class FDegreesToRadiansDataflowNode : FDataflowNode
---@field Degrees float
---@field Radians float
FDegreesToRadiansDataflowNode = {}



---@class FExampleCollectionEditDataflowNode : FDataflowNode
---@field Scale float
---@field Collection FManagedArrayCollection
FExampleCollectionEditDataflowNode = {}



---@class FExpandBoundingBoxDataflowNode : FDataflowNode
---@field BoundingBox FBox
---@field Min FVector
---@field Max FVector
---@field Center FVector
---@field HalfExtents FVector
---@field Volume float
FExpandBoundingBoxDataflowNode = {}



---@class FExpandVectorDataflowNode : FDataflowNode
---@field Vector FVector
---@field X float
---@field Y float
---@field Z float
FExpandVectorDataflowNode = {}



---@class FExplodedViewDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
---@field UniformScale float
---@field Scale FVector
FExplodedViewDataflowNode = {}



---@class FFloatToIntDataflowNode : FDataflowNode
---@field Function EFloatToIntFunctionEnum
---@field float float
---@field Int int32
FFloatToIntDataflowNode = {}



---@class FFloatToStringDataflowNode : FDataflowNode
---@field float float
---@field String FString
FFloatToStringDataflowNode = {}



---@class FGenerateTetrahedralCollectionDataflowNodes : FDataflowNode
---@field Collection FManagedArrayCollection
FGenerateTetrahedralCollectionDataflowNodes = {}



---@class FGetCollectionAssetDataflowNode : FDataflowNode
---@field Output FManagedArrayCollection
FGetCollectionAssetDataflowNode = {}



---@class FHashStringDataflowNode : FDataflowNode
---@field String FString
---@field Hash int32
FHashStringDataflowNode = {}



---@class FHashVectorDataflowNode : FDataflowNode
---@field Vector FVector
---@field Hash int32
FHashVectorDataflowNode = {}



---@class FIntToFloatDataflowNode : FDataflowNode
---@field Int int32
---@field float float
FIntToFloatDataflowNode = {}



---@class FIntToStringDataflowNode : FDataflowNode
---@field Int int32
---@field String FString
FIntToStringDataflowNode = {}



---@class FLogStringDataflowNode : FDataflowNode
---@field PrintToLog boolean
---@field String FString
FLogStringDataflowNode = {}



---@class FMakeBoxDataflowNode : FDataflowNode
---@field DataType EMakeBoxDataTypeEnum
---@field Min FVector
---@field Max FVector
---@field Center FVector
---@field Size FVector
---@field Box FBox
FMakeBoxDataflowNode = {}



---@class FMakeLiteralBoolDataflowNode : FDataflowNode
---@field Value boolean
---@field bool boolean
FMakeLiteralBoolDataflowNode = {}



---@class FMakeLiteralFloatDataflowNode : FDataflowNode
---@field Value float
---@field float float
FMakeLiteralFloatDataflowNode = {}



---@class FMakeLiteralIntDataflowNode : FDataflowNode
---@field Value int32
---@field Int int32
FMakeLiteralIntDataflowNode = {}



---@class FMakeLiteralStringDataflowNode : FDataflowNode
---@field Value FString
---@field String FString
FMakeLiteralStringDataflowNode = {}



---@class FMakeLiteralVectorDataflowNode : FDataflowNode
---@field Value FVector
---@field Vector FVector
FMakeLiteralVectorDataflowNode = {}



---@class FMakePointsDataflowNode : FDataflowNode
---@field Point TArray<FVector>
---@field Points TArray<FVector>
FMakePointsDataflowNode = {}



---@class FMathConstantsDataflowNode : FDataflowNode
---@field Constant EMathConstantsEnum
---@field float float
FMathConstantsDataflowNode = {}



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
FPlaneCutterDataflowNode = {}



---@class FPrintStringDataflowNode : FDataflowNode
---@field PrintToScreen boolean
---@field PrintToLog boolean
---@field Color FColor
---@field Duration float
---@field String FString
FPrintStringDataflowNode = {}



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
FRadialScatterPointsDataflowNode = {}



---@class FRadiansToDegreesDataflowNode : FDataflowNode
---@field Radians float
---@field Degrees float
FRadiansToDegreesDataflowNode = {}



---@class FRandomFloatDataflowNode : FDataflowNode
---@field Deterministic boolean
---@field RandomSeed float
---@field float float
FRandomFloatDataflowNode = {}



---@class FRandomFloatInRangeDataflowNode : FDataflowNode
---@field Deterministic boolean
---@field RandomSeed float
---@field Min float
---@field Max float
---@field float float
FRandomFloatInRangeDataflowNode = {}



---@class FRandomUnitVectorDataflowNode : FDataflowNode
---@field Deterministic boolean
---@field RandomSeed float
---@field Vector FVector
FRandomUnitVectorDataflowNode = {}



---@class FRandomUnitVectorInConeDataflowNode : FDataflowNode
---@field Deterministic boolean
---@field RandomSeed float
---@field ConeDirection FVector
---@field ConeHalfAngle float
---@field Vector FVector
FRandomUnitVectorInConeDataflowNode = {}



---@class FResetGeometryCollectionDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
FResetGeometryCollectionDataflowNode = {}



---@class FSetCollectionAssetDataflowNode : FDataflowNode
---@field Collection FManagedArrayCollection
FSetCollectionAssetDataflowNode = {}



---@class FSkeletalMeshToCollectionDataflowNode : FDataflowNode
---@field SkeletalMesh USkeletalMesh
---@field Collection FManagedArrayCollection
FSkeletalMeshToCollectionDataflowNode = {}



---@class FStringAppendDataflowNode : FDataflowNode
---@field String1 FString
---@field String2 FString
---@field String FString
FStringAppendDataflowNode = {}



---@class FUniformScatterPointsDataflowNode : FDataflowNode
---@field MinNumberOfPoints int32
---@field MaxNumberOfPoints int32
---@field RandomSeed float
---@field BoundingBox FBox
---@field Points TArray<FVector>
FUniformScatterPointsDataflowNode = {}



---@class FVectorToStringDataflowNode : FDataflowNode
---@field Vector FVector
---@field String FString
FVectorToStringDataflowNode = {}



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
FVoronoiFractureDataflowNode = {}



