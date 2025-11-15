---@meta

---@class FOrientedBoxFloat
---@field Center FVector3f
---@field AxisX FVector3f
---@field AxisY FVector3f
---@field AxisZ FVector3f
---@field ExtentX float
---@field ExtentY float
---@field ExtentZ float
local FOrientedBoxFloat = {}



---@class FStructSerializerArrayTestStruct
---@field Int32Array TArray<int32>
---@field ByteArray TArray<uint8>
---@field StaticSingleElement int32
---@field StaticInt32Array int32
---@field StaticFloatArray float
---@field VectorArray TArray<FVector>
---@field StructArray TArray<FStructSerializerBuiltinTestStruct>
local FStructSerializerArrayTestStruct = {}



---@class FStructSerializerBooleanTestStruct
---@field BoolFalse boolean
---@field BoolTrue boolean
---@field Bitfield0 boolean
---@field Bitfield1 boolean
---@field Bitfield2Set boolean
---@field Bitfield3 boolean
---@field Bitfield4Set boolean
---@field Bitfield5Set boolean
---@field Bitfield6 boolean
---@field Bitfield7Set boolean
local FStructSerializerBooleanTestStruct = {}



---@class FStructSerializerBuiltinTestStruct
---@field Guid FGuid
---@field Name FName
---@field String FString
---@field Text FText
---@field Vector FVector
---@field Vector4 FVector4
---@field Rotator FRotator
---@field Quat FQuat
---@field Color FColor
local FStructSerializerBuiltinTestStruct = {}



---@class FStructSerializerByteArray
---@field Dummy1 int32
---@field ByteArray TArray<uint8>
---@field Dummy2 int32
---@field Int8Array TArray<int8>
---@field Dummy3 int32
local FStructSerializerByteArray = {}



---@class FStructSerializerLWCTypesTest
---@field Vector FVector
---@field Vector2D FVector2D
---@field Vector4 FVector4
---@field Matrix FMatrix
---@field Plane FPlane
---@field Quat FQuat
---@field Rotator FRotator
---@field Transform FTransform
---@field Box FBox
---@field Box2D FBox2D
---@field BoxSphereBounds FBoxSphereBounds
---@field OrientedBox FOrientedBox
---@field float float
---@field Double double
---@field VectorArray TArray<FVector>
---@field StrToVec TMap<FString, FVector>
---@field VectorSet TSet<FVector>
local FStructSerializerLWCTypesTest = {}



---@class FStructSerializerMapTestStruct
---@field IntToStr TMap<int32, FString>
---@field StrToStr TMap<FString, FString>
---@field StrToVec TMap<FString, FVector>
---@field StrToStruct TMap<FString, FStructSerializerBuiltinTestStruct>
local FStructSerializerMapTestStruct = {}



---@class FStructSerializerNonLWCTypesTest
---@field Vector FVector3f
---@field Vector2D FVector2f
---@field Vector4 FVector4f
---@field Matrix FMatrix44f
---@field Plane FPlane4f
---@field Quat FQuat4f
---@field Rotator FRotator3f
---@field Transform FTransform3f
---@field Box FBox3f
---@field Box2D FBox2f
---@field BoxSphereBounds FBoxSphereBounds3f
---@field OrientedBox FOrientedBoxFloat
---@field float float
---@field Double double
---@field VectorArray TArray<FVector3f>
---@field StrToVec TMap<FString, FVector3f>
---@field VectorSet TSet<FVector3f>
local FStructSerializerNonLWCTypesTest = {}



---@class FStructSerializerNumericTestStruct
---@field Int8 int8
---@field Int16 int16
---@field int32 int32
---@field Int64 int64
---@field uint8 uint8
---@field uint16 uint16
---@field uint32 uint32
---@field UInt64 uint64
---@field float float
---@field Double double
local FStructSerializerNumericTestStruct = {}



---@class FStructSerializerObjectTestStruct
---@field RawClass TObjectPtr<UClass>
---@field WrappedClass TObjectPtr<UClass>
---@field SubClass TSubclassOf<UMetaData>
---@field SoftClass TSoftClassPtr<UMetaData>
---@field RawObject UObject
---@field WrappedObject UObject
---@field WeakObject TWeakObjectPtr<UMetaData>
---@field SoftObject TSoftObjectPtr<UMetaData>
---@field ClassPath FSoftClassPath
---@field ObjectPath FSoftObjectPath
local FStructSerializerObjectTestStruct = {}



---@class FStructSerializerSetTestStruct
---@field StrSet TSet<FString>
---@field IntSet TSet<int32>
---@field NameSet TSet<FName>
---@field StructSet TSet<FStructSerializerBuiltinTestStruct>
local FStructSerializerSetTestStruct = {}



---@class FStructSerializerTestStruct
---@field Numerics FStructSerializerNumericTestStruct
---@field Booleans FStructSerializerBooleanTestStruct
---@field Objects FStructSerializerObjectTestStruct
---@field Builtins FStructSerializerBuiltinTestStruct
---@field Arrays FStructSerializerArrayTestStruct
---@field Maps FStructSerializerMapTestStruct
---@field Sets FStructSerializerSetTestStruct
---@field LWCTypes FStructSerializerLWCTypesTest
local FStructSerializerTestStruct = {}



