---@meta

---@class FARFilter
---@field PackageNames TArray<FName>
---@field PackagePaths TArray<FName>
---@field SoftObjectPaths TArray<FSoftObjectPath>
---@field ClassNames TArray<FName>
---@field ClassPaths TArray<FTopLevelAssetPath>
---@field RecursiveClassesExclusionSet TSet<FName>
---@field RecursiveClassPathsExclusionSet TSet<FTopLevelAssetPath>
---@field bRecursivePaths boolean
---@field bRecursiveClasses boolean
---@field bIncludeOnlyOnDiskAssets boolean
local FARFilter = {}



---@class FAssetBundleData
---@field Bundles TArray<FAssetBundleEntry>
local FAssetBundleData = {}



---@class FAssetBundleEntry
---@field BundleName FName
---@field AssetPaths TArray<FTopLevelAssetPath>
local FAssetBundleEntry = {}



---@class FAssetData
---@field PackageName FName
---@field PackagePath FName
---@field AssetName FName
---@field AssetClass FName
---@field AssetClassPath FTopLevelAssetPath
local FAssetData = {}



---@class FAutomationEvent
---@field Type EAutomationEventType
---@field Message FString
---@field Context FString
---@field Artifact FGuid
local FAutomationEvent = {}



---@class FAutomationExecutionEntry
---@field Event FAutomationEvent
---@field Filename FString
---@field LineNumber int32
---@field Timestamp FDateTime
local FAutomationExecutionEntry = {}



---@class FBox
---@field Min FVector
---@field Max FVector
---@field IsValid uint8
local FBox = {}



---@class FBox2D
---@field Min FVector2D
---@field Max FVector2D
---@field bIsValid uint8
local FBox2D = {}



---@class FBox2f
---@field Min FVector2f
---@field Max FVector2f
---@field bIsValid uint8
local FBox2f = {}



---@class FBox3d
---@field Min FVector3d
---@field Max FVector3d
---@field IsValid uint8
local FBox3d = {}



---@class FBox3f
---@field Min FVector3f
---@field Max FVector3f
---@field IsValid uint8
local FBox3f = {}



---@class FBoxSphereBounds
---@field Origin FVector
---@field BoxExtent FVector
---@field SphereRadius double
local FBoxSphereBounds = {}



---@class FBoxSphereBounds3d
---@field Origin FVector3d
---@field BoxExtent FVector3d
---@field SphereRadius double
local FBoxSphereBounds3d = {}



---@class FBoxSphereBounds3f
---@field Origin FVector3f
---@field BoxExtent FVector3f
---@field SphereRadius float
local FBoxSphereBounds3f = {}



---@class FColor
---@field B uint8
---@field G uint8
---@field R uint8
---@field A uint8
local FColor = {}



---@class FDateTime
local FDateTime = {}


---@class FDefault__ScriptStruct
local FDefault__ScriptStruct = {}


---@class FDirectoryPath
---@field Path FString
local FDirectoryPath = {}



---@class FDoubleRange
---@field LowerBound FDoubleRangeBound
---@field UpperBound FDoubleRangeBound
local FDoubleRange = {}



---@class FDoubleRangeBound
---@field Type ERangeBoundTypes::Type
---@field Value double
local FDoubleRangeBound = {}



---@class FFallbackStruct
local FFallbackStruct = {}


---@class FFilePath
---@field FilePath FString
local FFilePath = {}



---@class FFloatInterval
---@field Min float
---@field Max float
local FFloatInterval = {}



---@class FFloatRange
---@field LowerBound FFloatRangeBound
---@field UpperBound FFloatRangeBound
local FFloatRange = {}



---@class FFloatRangeBound
---@field Type ERangeBoundTypes::Type
---@field Value float
local FFloatRangeBound = {}



---@class FFrameNumber
---@field Value int32
local FFrameNumber = {}



---@class FFrameNumberRange
---@field LowerBound FFrameNumberRangeBound
---@field UpperBound FFrameNumberRangeBound
local FFrameNumberRange = {}



---@class FFrameNumberRangeBound
---@field Type ERangeBoundTypes::Type
---@field Value FFrameNumber
local FFrameNumberRangeBound = {}



---@class FFrameRate
---@field Numerator int32
---@field Denominator int32
local FFrameRate = {}



---@class FFrameTime
---@field FrameNumber FFrameNumber
---@field SubFrame float
local FFrameTime = {}



---@class FGuid
---@field A int32
---@field B int32
---@field C int32
---@field D int32
local FGuid = {}



---@class FInputDeviceId
---@field InternalId int32
local FInputDeviceId = {}



---@class FInt32Interval
---@field Min int32
---@field Max int32
local FInt32Interval = {}



---@class FInt32Point
---@field X int32
---@field Y int32
local FInt32Point = {}



---@class FInt32Range
---@field LowerBound FInt32RangeBound
---@field UpperBound FInt32RangeBound
local FInt32Range = {}



---@class FInt32RangeBound
---@field Type ERangeBoundTypes::Type
---@field Value int32
local FInt32RangeBound = {}



---@class FInt32Vector
---@field X int32
---@field Y int32
---@field Z int32
local FInt32Vector = {}



---@class FInt32Vector2
---@field X int32
---@field Y int32
local FInt32Vector2 = {}



---@class FInt32Vector4
---@field X int32
---@field Y int32
---@field Z int32
---@field W int32
local FInt32Vector4 = {}



---@class FInt64Point
---@field X int64
---@field Y int64
local FInt64Point = {}



---@class FInt64Vector
---@field X int64
---@field Y int64
---@field Z int64
local FInt64Vector = {}



---@class FInt64Vector2
---@field X int64
---@field Y int64
local FInt64Vector2 = {}



---@class FInt64Vector4
---@field X int64
---@field Y int64
---@field Z int64
---@field W int64
local FInt64Vector4 = {}



---@class FIntPoint
---@field X int32
---@field Y int32
local FIntPoint = {}



---@class FIntVector
---@field X int32
---@field Y int32
---@field Z int32
local FIntVector = {}



---@class FIntVector2
---@field X int32
---@field Y int32
local FIntVector2 = {}



---@class FIntVector4
---@field X int32
---@field Y int32
---@field Z int32
---@field W int32
local FIntVector4 = {}



---@class FInterpCurveFloat
---@field Points TArray<FInterpCurvePointFloat>
---@field bIsLooped boolean
---@field LoopKeyOffset float
local FInterpCurveFloat = {}



---@class FInterpCurveLinearColor
---@field Points TArray<FInterpCurvePointLinearColor>
---@field bIsLooped boolean
---@field LoopKeyOffset float
local FInterpCurveLinearColor = {}



---@class FInterpCurvePointFloat
---@field InVal float
---@field OutVal float
---@field ArriveTangent float
---@field LeaveTangent float
---@field InterpMode EInterpCurveMode
local FInterpCurvePointFloat = {}



---@class FInterpCurvePointLinearColor
---@field InVal float
---@field OutVal FLinearColor
---@field ArriveTangent FLinearColor
---@field LeaveTangent FLinearColor
---@field InterpMode EInterpCurveMode
local FInterpCurvePointLinearColor = {}



---@class FInterpCurvePointQuat
---@field InVal float
---@field OutVal FQuat
---@field ArriveTangent FQuat
---@field LeaveTangent FQuat
---@field InterpMode EInterpCurveMode
local FInterpCurvePointQuat = {}



---@class FInterpCurvePointTwoVectors
---@field InVal float
---@field OutVal FTwoVectors
---@field ArriveTangent FTwoVectors
---@field LeaveTangent FTwoVectors
---@field InterpMode EInterpCurveMode
local FInterpCurvePointTwoVectors = {}



---@class FInterpCurvePointVector
---@field InVal float
---@field OutVal FVector
---@field ArriveTangent FVector
---@field LeaveTangent FVector
---@field InterpMode EInterpCurveMode
local FInterpCurvePointVector = {}



---@class FInterpCurvePointVector2D
---@field InVal float
---@field OutVal FVector2D
---@field ArriveTangent FVector2D
---@field LeaveTangent FVector2D
---@field InterpMode EInterpCurveMode
local FInterpCurvePointVector2D = {}



---@class FInterpCurveQuat
---@field Points TArray<FInterpCurvePointQuat>
---@field bIsLooped boolean
---@field LoopKeyOffset float
local FInterpCurveQuat = {}



---@class FInterpCurveTwoVectors
---@field Points TArray<FInterpCurvePointTwoVectors>
---@field bIsLooped boolean
---@field LoopKeyOffset float
local FInterpCurveTwoVectors = {}



---@class FInterpCurveVector
---@field Points TArray<FInterpCurvePointVector>
---@field bIsLooped boolean
---@field LoopKeyOffset float
local FInterpCurveVector = {}



---@class FInterpCurveVector2D
---@field Points TArray<FInterpCurvePointVector2D>
---@field bIsLooped boolean
---@field LoopKeyOffset float
local FInterpCurveVector2D = {}



---@class FLinearColor
---@field R float
---@field G float
---@field B float
---@field A float
local FLinearColor = {}



---@class FMatrix
---@field XPlane FPlane
---@field YPlane FPlane
---@field ZPlane FPlane
---@field WPlane FPlane
local FMatrix = {}



---@class FMatrix44d
---@field XPlane FPlane4d
---@field YPlane FPlane4d
---@field ZPlane FPlane4d
---@field WPlane FPlane4d
local FMatrix44d = {}



---@class FMatrix44f
---@field XPlane FPlane4f
---@field YPlane FPlane4f
---@field ZPlane FPlane4f
---@field WPlane FPlane4f
local FMatrix44f = {}



---@class FOrientedBox
---@field Center FVector
---@field AxisX FVector
---@field AxisY FVector
---@field AxisZ FVector
---@field ExtentX double
---@field ExtentY double
---@field ExtentZ double
local FOrientedBox = {}



---@class FPackedNormal
---@field X uint8
---@field Y uint8
---@field Z uint8
---@field W uint8
local FPackedNormal = {}



---@class FPackedRGB10A2N
---@field Packed int32
local FPackedRGB10A2N = {}



---@class FPackedRGBA16N
---@field XY int32
---@field ZW int32
local FPackedRGBA16N = {}



---@class FPlane : FVector
---@field W double
local FPlane = {}



---@class FPlane4d : FVector3d
---@field W double
local FPlane4d = {}



---@class FPlane4f : FVector3f
---@field W float
local FPlane4f = {}



---@class FPlatformInputDeviceState
---@field OwningPlatformUser FPlatformUserId
---@field ConnectionState EInputDeviceConnectionState
local FPlatformInputDeviceState = {}



---@class FPlatformUserId
---@field InternalId int32
local FPlatformUserId = {}



---@class FPolyglotTextData
---@field Category ELocalizedTextSourceCategory
---@field NativeCulture FString
---@field Namespace FString
---@field Key FString
---@field NativeString FString
---@field LocalizedStrings TMap<FString, FString>
---@field bIsMinimalPatch boolean
---@field CachedText FText
local FPolyglotTextData = {}



---@class FPrimaryAssetId
---@field PrimaryAssetType FPrimaryAssetType
---@field PrimaryAssetName FName
local FPrimaryAssetId = {}



---@class FPrimaryAssetType
---@field Name FName
local FPrimaryAssetType = {}



---@class FQualifiedFrameTime
---@field Time FFrameTime
---@field Rate FFrameRate
local FQualifiedFrameTime = {}



---@class FQuat
---@field X double
---@field Y double
---@field Z double
---@field W double
local FQuat = {}



---@class FQuat4d
---@field X double
---@field Y double
---@field Z double
---@field W double
local FQuat4d = {}



---@class FQuat4f
---@field X float
---@field Y float
---@field Z float
---@field W float
local FQuat4f = {}



---@class FRandomStream
---@field InitialSeed int32
---@field Seed int32
local FRandomStream = {}



---@class FRotator
---@field Pitch double
---@field Yaw double
---@field Roll double
local FRotator = {}



---@class FRotator3d
---@field Pitch double
---@field Yaw double
---@field Roll double
local FRotator3d = {}



---@class FRotator3f
---@field Pitch float
---@field Yaw float
---@field Roll float
local FRotator3f = {}



---@class FSoftClassPath : FSoftObjectPath
local FSoftClassPath = {}


---@class FSoftObjectPath
---@field AssetPath FTopLevelAssetPath
---@field SubPathString FString
local FSoftObjectPath = {}



---@class FTemplateString
---@field Template FString
local FTemplateString = {}



---@class FTestUninitializedScriptStructMembersTest
---@field UninitializedObjectReference UObject
---@field InitializedObjectReference UObject
---@field UnusedValue float
local FTestUninitializedScriptStructMembersTest = {}



---@class FTimecode
---@field Hours int32
---@field Minutes int32
---@field Seconds int32
---@field Frames int32
---@field bDropFrameFormat boolean
local FTimecode = {}



---@class FTimespan
local FTimespan = {}


---@class FTopLevelAssetPath
---@field PackageName FName
---@field AssetName FName
local FTopLevelAssetPath = {}



---@class FTransform
---@field Rotation FQuat
---@field Translation FVector
---@field Scale3D FVector
local FTransform = {}



---@class FTransform3d
---@field Rotation FQuat4d
---@field Translation FVector3d
---@field Scale3D FVector3d
local FTransform3d = {}



---@class FTransform3f
---@field Rotation FQuat4f
---@field Translation FVector3f
---@field Scale3D FVector3f
local FTransform3f = {}



---@class FTwoVectors
---@field v1 FVector
---@field v2 FVector
local FTwoVectors = {}



---@class FUint32Point
---@field X int32
---@field Y int32
local FUint32Point = {}



---@class FUint32Vector
---@field X uint32
---@field Y uint32
---@field Z uint32
local FUint32Vector = {}



---@class FUint32Vector2
---@field X uint32
---@field Y uint32
local FUint32Vector2 = {}



---@class FUint32Vector4
---@field X uint32
---@field Y uint32
---@field Z uint32
---@field W uint32
local FUint32Vector4 = {}



---@class FUint64Point
---@field X int64
---@field Y int64
local FUint64Point = {}



---@class FUint64Vector
---@field X uint64
---@field Y uint64
---@field Z uint64
local FUint64Vector = {}



---@class FUint64Vector2
---@field X uint64
---@field Y uint64
local FUint64Vector2 = {}



---@class FUint64Vector4
---@field X uint64
---@field Y uint64
---@field Z uint64
---@field W uint64
local FUint64Vector4 = {}



---@class FUintPoint
---@field X int32
---@field Y int32
local FUintPoint = {}



---@class FUintVector
---@field X uint32
---@field Y uint32
---@field Z uint32
local FUintVector = {}



---@class FUintVector2
---@field X uint32
---@field Y uint32
local FUintVector2 = {}



---@class FUintVector4
---@field X uint32
---@field Y uint32
---@field Z uint32
---@field W uint32
local FUintVector4 = {}



---@class FVector
---@field X double
---@field Y double
---@field Z double
local FVector = {}



---@class FVector2D
---@field X double
---@field Y double
local FVector2D = {}



---@class FVector2f
---@field X float
---@field Y float
local FVector2f = {}



---@class FVector3d
---@field X double
---@field Y double
---@field Z double
local FVector3d = {}



---@class FVector3f
---@field X float
---@field Y float
---@field Z float
local FVector3f = {}



---@class FVector4
---@field X double
---@field Y double
---@field Z double
---@field W double
local FVector4 = {}



---@class FVector4d
---@field X double
---@field Y double
---@field Z double
---@field W double
local FVector4d = {}



---@class FVector4f
---@field X float
---@field Y float
---@field Z float
---@field W float
local FVector4f = {}



---@class IInterface : UObject
local IInterface = {}


---@class UArrayProperty : UProperty
local UArrayProperty = {}


---@class UBoolProperty : UProperty
local UBoolProperty = {}


---@class UByteProperty : UNumericProperty
local UByteProperty = {}


---@class UClass : UStruct
local UClass = {}


---@class UClassProperty : UObjectProperty
local UClassProperty = {}


---@class UDefault__Class
local UDefault__Class = {}


---@class UDefault__DynamicClass
local UDefault__DynamicClass = {}


---@class UDefault__LinkerPlaceholderClass
local UDefault__LinkerPlaceholderClass = {}


---@class UDelegateFunction : UFunction
local UDelegateFunction = {}


---@class UDelegateProperty : UProperty
local UDelegateProperty = {}


---@class UDoubleProperty : UNumericProperty
local UDoubleProperty = {}


---@class UDynamicClass : UClass
local UDynamicClass = {}


---@class UEnum : UField
local UEnum = {}


---@class UEnumProperty : UProperty
local UEnumProperty = {}


---@class UField : UObject
local UField = {}


---@class UFloatProperty : UNumericProperty
local UFloatProperty = {}


---@class UFunction : UStruct
local UFunction = {}


---@class UGCObjectReferencer : UObject
local UGCObjectReferencer = {}


---@class UInt16Property : UNumericProperty
local UInt16Property = {}


---@class UInt64Property : UNumericProperty
local UInt64Property = {}


---@class UInt8Property : UNumericProperty
local UInt8Property = {}


---@class UIntProperty : UNumericProperty
local UIntProperty = {}


---@class UInterfaceProperty : UProperty
local UInterfaceProperty = {}


---@class ULazyObjectProperty : UObjectPropertyBase
local ULazyObjectProperty = {}


---@class ULinkerPlaceholderClass : UClass
local ULinkerPlaceholderClass = {}


---@class ULinkerPlaceholderExportObject : UObject
local ULinkerPlaceholderExportObject = {}


---@class ULinkerPlaceholderFunction : UFunction
local ULinkerPlaceholderFunction = {}


---@class UMapProperty : UProperty
local UMapProperty = {}


---@class UMetaData : UObject
local UMetaData = {}


---@class UMulticastDelegateProperty : UProperty
local UMulticastDelegateProperty = {}


---@class UMulticastDelegatePropertyWrapper : UPropertyWrapper
local UMulticastDelegatePropertyWrapper = {}


---@class UMulticastInlineDelegateProperty : UMulticastDelegateProperty
local UMulticastInlineDelegateProperty = {}


---@class UMulticastInlineDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper
local UMulticastInlineDelegatePropertyWrapper = {}


---@class UMulticastSparseDelegateProperty : UMulticastDelegateProperty
local UMulticastSparseDelegateProperty = {}


---@class UNameProperty : UProperty
local UNameProperty = {}


---@class UNumericProperty : UProperty
local UNumericProperty = {}


---@class UObjectProperty : UObjectPropertyBase
local UObjectProperty = {}


---@class UObjectPropertyBase : UProperty
local UObjectPropertyBase = {}


---@class UObjectRedirector : UObject
local UObjectRedirector = {}


---@class UPackage : UObject
local UPackage = {}


---@class UPackageMap : UObject
local UPackageMap = {}


---@class UProperty : UField
local UProperty = {}


---@class UPropertyWrapper : UObject
local UPropertyWrapper = {}


---@class UScriptStruct : UStruct
local UScriptStruct = {}


---@class USetProperty : UProperty
local USetProperty = {}


---@class USoftClassProperty : USoftObjectProperty
local USoftClassProperty = {}


---@class USoftObjectProperty : UObjectPropertyBase
local USoftObjectProperty = {}


---@class USparseDelegateFunction : UDelegateFunction
local USparseDelegateFunction = {}


---@class UStrProperty : UProperty
local UStrProperty = {}


---@class UStruct : UField
local UStruct = {}


---@class UStructProperty : UProperty
local UStructProperty = {}


---@class UTextBuffer : UObject
local UTextBuffer = {}


---@class UTextProperty : UProperty
local UTextProperty = {}


---@class UUInt16Property : UNumericProperty
local UUInt16Property = {}


---@class UUInt32Property : UNumericProperty
local UUInt32Property = {}


---@class UUInt64Property : UNumericProperty
local UUInt64Property = {}


---@class UWeakObjectProperty : UObjectPropertyBase
local UWeakObjectProperty = {}


