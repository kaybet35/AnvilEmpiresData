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
FARFilter = {}



---@class FAssetBundleData
---@field Bundles TArray<FAssetBundleEntry>
FAssetBundleData = {}



---@class FAssetBundleEntry
---@field BundleName FName
---@field AssetPaths TArray<FTopLevelAssetPath>
FAssetBundleEntry = {}



---@class FAssetData
---@field PackageName FName
---@field PackagePath FName
---@field AssetName FName
---@field AssetClass FName
---@field AssetClassPath FTopLevelAssetPath
FAssetData = {}



---@class FAutomationEvent
---@field Type EAutomationEventType
---@field Message FString
---@field Context FString
---@field Artifact FGuid
FAutomationEvent = {}



---@class FAutomationExecutionEntry
---@field Event FAutomationEvent
---@field Filename FString
---@field LineNumber int32
---@field Timestamp FDateTime
FAutomationExecutionEntry = {}



---@class FBox
---@field Min FVector
---@field Max FVector
---@field IsValid uint8
FBox = {}



---@class FBox2D
---@field Min FVector2D
---@field Max FVector2D
---@field bIsValid uint8
FBox2D = {}



---@class FBox2f
---@field Min FVector2f
---@field Max FVector2f
---@field bIsValid uint8
FBox2f = {}



---@class FBox3d
---@field Min FVector3d
---@field Max FVector3d
---@field IsValid uint8
FBox3d = {}



---@class FBox3f
---@field Min FVector3f
---@field Max FVector3f
---@field IsValid uint8
FBox3f = {}



---@class FBoxSphereBounds
---@field Origin FVector
---@field BoxExtent FVector
---@field SphereRadius double
FBoxSphereBounds = {}



---@class FBoxSphereBounds3d
---@field Origin FVector3d
---@field BoxExtent FVector3d
---@field SphereRadius double
FBoxSphereBounds3d = {}



---@class FBoxSphereBounds3f
---@field Origin FVector3f
---@field BoxExtent FVector3f
---@field SphereRadius float
FBoxSphereBounds3f = {}



---@class FColor
---@field B uint8
---@field G uint8
---@field R uint8
---@field A uint8
FColor = {}



---@class FDateTime
FDateTime = {}


---@class FDefault__ScriptStruct
FDefault__ScriptStruct = {}


---@class FDirectoryPath
---@field Path FString
FDirectoryPath = {}



---@class FDoubleRange
---@field LowerBound FDoubleRangeBound
---@field UpperBound FDoubleRangeBound
FDoubleRange = {}



---@class FDoubleRangeBound
---@field Type ERangeBoundTypes::Type
---@field Value double
FDoubleRangeBound = {}



---@class FFallbackStruct
FFallbackStruct = {}


---@class FFilePath
---@field FilePath FString
FFilePath = {}



---@class FFloatInterval
---@field Min float
---@field Max float
FFloatInterval = {}



---@class FFloatRange
---@field LowerBound FFloatRangeBound
---@field UpperBound FFloatRangeBound
FFloatRange = {}



---@class FFloatRangeBound
---@field Type ERangeBoundTypes::Type
---@field Value float
FFloatRangeBound = {}



---@class FFrameNumber
---@field Value int32
FFrameNumber = {}



---@class FFrameNumberRange
---@field LowerBound FFrameNumberRangeBound
---@field UpperBound FFrameNumberRangeBound
FFrameNumberRange = {}



---@class FFrameNumberRangeBound
---@field Type ERangeBoundTypes::Type
---@field Value FFrameNumber
FFrameNumberRangeBound = {}



---@class FFrameRate
---@field Numerator int32
---@field Denominator int32
FFrameRate = {}



---@class FFrameTime
---@field FrameNumber FFrameNumber
---@field SubFrame float
FFrameTime = {}



---@class FGuid
---@field A int32
---@field B int32
---@field C int32
---@field D int32
FGuid = {}



---@class FInputDeviceId
---@field InternalId int32
FInputDeviceId = {}



---@class FInt32Interval
---@field Min int32
---@field Max int32
FInt32Interval = {}



---@class FInt32Point
---@field X int32
---@field Y int32
FInt32Point = {}



---@class FInt32Range
---@field LowerBound FInt32RangeBound
---@field UpperBound FInt32RangeBound
FInt32Range = {}



---@class FInt32RangeBound
---@field Type ERangeBoundTypes::Type
---@field Value int32
FInt32RangeBound = {}



---@class FInt32Vector
---@field X int32
---@field Y int32
---@field Z int32
FInt32Vector = {}



---@class FInt32Vector2
---@field X int32
---@field Y int32
FInt32Vector2 = {}



---@class FInt32Vector4
---@field X int32
---@field Y int32
---@field Z int32
---@field W int32
FInt32Vector4 = {}



---@class FInt64Point
---@field X int64
---@field Y int64
FInt64Point = {}



---@class FInt64Vector
---@field X int64
---@field Y int64
---@field Z int64
FInt64Vector = {}



---@class FInt64Vector2
---@field X int64
---@field Y int64
FInt64Vector2 = {}



---@class FInt64Vector4
---@field X int64
---@field Y int64
---@field Z int64
---@field W int64
FInt64Vector4 = {}



---@class FIntPoint
---@field X int32
---@field Y int32
FIntPoint = {}



---@class FIntVector
---@field X int32
---@field Y int32
---@field Z int32
FIntVector = {}



---@class FIntVector2
---@field X int32
---@field Y int32
FIntVector2 = {}



---@class FIntVector4
---@field X int32
---@field Y int32
---@field Z int32
---@field W int32
FIntVector4 = {}



---@class FInterpCurveFloat
---@field Points TArray<FInterpCurvePointFloat>
---@field bIsLooped boolean
---@field LoopKeyOffset float
FInterpCurveFloat = {}



---@class FInterpCurveLinearColor
---@field Points TArray<FInterpCurvePointLinearColor>
---@field bIsLooped boolean
---@field LoopKeyOffset float
FInterpCurveLinearColor = {}



---@class FInterpCurvePointFloat
---@field InVal float
---@field OutVal float
---@field ArriveTangent float
---@field LeaveTangent float
---@field InterpMode EInterpCurveMode
FInterpCurvePointFloat = {}



---@class FInterpCurvePointLinearColor
---@field InVal float
---@field OutVal FLinearColor
---@field ArriveTangent FLinearColor
---@field LeaveTangent FLinearColor
---@field InterpMode EInterpCurveMode
FInterpCurvePointLinearColor = {}



---@class FInterpCurvePointQuat
---@field InVal float
---@field OutVal FQuat
---@field ArriveTangent FQuat
---@field LeaveTangent FQuat
---@field InterpMode EInterpCurveMode
FInterpCurvePointQuat = {}



---@class FInterpCurvePointTwoVectors
---@field InVal float
---@field OutVal FTwoVectors
---@field ArriveTangent FTwoVectors
---@field LeaveTangent FTwoVectors
---@field InterpMode EInterpCurveMode
FInterpCurvePointTwoVectors = {}



---@class FInterpCurvePointVector
---@field InVal float
---@field OutVal FVector
---@field ArriveTangent FVector
---@field LeaveTangent FVector
---@field InterpMode EInterpCurveMode
FInterpCurvePointVector = {}



---@class FInterpCurvePointVector2D
---@field InVal float
---@field OutVal FVector2D
---@field ArriveTangent FVector2D
---@field LeaveTangent FVector2D
---@field InterpMode EInterpCurveMode
FInterpCurvePointVector2D = {}



---@class FInterpCurveQuat
---@field Points TArray<FInterpCurvePointQuat>
---@field bIsLooped boolean
---@field LoopKeyOffset float
FInterpCurveQuat = {}



---@class FInterpCurveTwoVectors
---@field Points TArray<FInterpCurvePointTwoVectors>
---@field bIsLooped boolean
---@field LoopKeyOffset float
FInterpCurveTwoVectors = {}



---@class FInterpCurveVector
---@field Points TArray<FInterpCurvePointVector>
---@field bIsLooped boolean
---@field LoopKeyOffset float
FInterpCurveVector = {}



---@class FInterpCurveVector2D
---@field Points TArray<FInterpCurvePointVector2D>
---@field bIsLooped boolean
---@field LoopKeyOffset float
FInterpCurveVector2D = {}



---@class FLinearColor
---@field R float
---@field G float
---@field B float
---@field A float
FLinearColor = {}



---@class FMatrix
---@field XPlane FPlane
---@field YPlane FPlane
---@field ZPlane FPlane
---@field WPlane FPlane
FMatrix = {}



---@class FMatrix44d
---@field XPlane FPlane4d
---@field YPlane FPlane4d
---@field ZPlane FPlane4d
---@field WPlane FPlane4d
FMatrix44d = {}



---@class FMatrix44f
---@field XPlane FPlane4f
---@field YPlane FPlane4f
---@field ZPlane FPlane4f
---@field WPlane FPlane4f
FMatrix44f = {}



---@class FOrientedBox
---@field Center FVector
---@field AxisX FVector
---@field AxisY FVector
---@field AxisZ FVector
---@field ExtentX double
---@field ExtentY double
---@field ExtentZ double
FOrientedBox = {}



---@class FPackedNormal
---@field X uint8
---@field Y uint8
---@field Z uint8
---@field W uint8
FPackedNormal = {}



---@class FPackedRGB10A2N
---@field Packed int32
FPackedRGB10A2N = {}



---@class FPackedRGBA16N
---@field XY int32
---@field ZW int32
FPackedRGBA16N = {}



---@class FPlane : FVector
---@field W double
FPlane = {}



---@class FPlane4d : FVector3d
---@field W double
FPlane4d = {}



---@class FPlane4f : FVector3f
---@field W float
FPlane4f = {}



---@class FPlatformInputDeviceState
---@field OwningPlatformUser FPlatformUserId
---@field ConnectionState EInputDeviceConnectionState
FPlatformInputDeviceState = {}



---@class FPlatformUserId
---@field InternalId int32
FPlatformUserId = {}



---@class FPolyglotTextData
---@field Category ELocalizedTextSourceCategory
---@field NativeCulture FString
---@field Namespace FString
---@field Key FString
---@field NativeString FString
---@field LocalizedStrings TMap<FString, FString>
---@field bIsMinimalPatch boolean
---@field CachedText FText
FPolyglotTextData = {}



---@class FPrimaryAssetId
---@field PrimaryAssetType FPrimaryAssetType
---@field PrimaryAssetName FName
FPrimaryAssetId = {}



---@class FPrimaryAssetType
---@field Name FName
FPrimaryAssetType = {}



---@class FQualifiedFrameTime
---@field Time FFrameTime
---@field Rate FFrameRate
FQualifiedFrameTime = {}



---@class FQuat
---@field X double
---@field Y double
---@field Z double
---@field W double
FQuat = {}



---@class FQuat4d
---@field X double
---@field Y double
---@field Z double
---@field W double
FQuat4d = {}



---@class FQuat4f
---@field X float
---@field Y float
---@field Z float
---@field W float
FQuat4f = {}



---@class FRandomStream
---@field InitialSeed int32
---@field Seed int32
FRandomStream = {}



---@class FRotator
---@field Pitch double
---@field Yaw double
---@field Roll double
FRotator = {}



---@class FRotator3d
---@field Pitch double
---@field Yaw double
---@field Roll double
FRotator3d = {}



---@class FRotator3f
---@field Pitch float
---@field Yaw float
---@field Roll float
FRotator3f = {}



---@class FSoftClassPath : FSoftObjectPath
FSoftClassPath = {}


---@class FSoftObjectPath
---@field AssetPath FTopLevelAssetPath
---@field SubPathString FString
FSoftObjectPath = {}



---@class FTemplateString
---@field Template FString
FTemplateString = {}



---@class FTestUninitializedScriptStructMembersTest
---@field UninitializedObjectReference UObject
---@field InitializedObjectReference UObject
---@field UnusedValue float
FTestUninitializedScriptStructMembersTest = {}



---@class FTimecode
---@field Hours int32
---@field Minutes int32
---@field Seconds int32
---@field Frames int32
---@field bDropFrameFormat boolean
FTimecode = {}



---@class FTimespan
FTimespan = {}


---@class FTopLevelAssetPath
---@field PackageName FName
---@field AssetName FName
FTopLevelAssetPath = {}



---@class FTransform
---@field Rotation FQuat
---@field Translation FVector
---@field Scale3D FVector
FTransform = {}



---@class FTransform3d
---@field Rotation FQuat4d
---@field Translation FVector3d
---@field Scale3D FVector3d
FTransform3d = {}



---@class FTransform3f
---@field Rotation FQuat4f
---@field Translation FVector3f
---@field Scale3D FVector3f
FTransform3f = {}



---@class FTwoVectors
---@field v1 FVector
---@field v2 FVector
FTwoVectors = {}



---@class FUint32Point
---@field X int32
---@field Y int32
FUint32Point = {}



---@class FUint32Vector
---@field X uint32
---@field Y uint32
---@field Z uint32
FUint32Vector = {}



---@class FUint32Vector2
---@field X uint32
---@field Y uint32
FUint32Vector2 = {}



---@class FUint32Vector4
---@field X uint32
---@field Y uint32
---@field Z uint32
---@field W uint32
FUint32Vector4 = {}



---@class FUint64Point
---@field X int64
---@field Y int64
FUint64Point = {}



---@class FUint64Vector
---@field X uint64
---@field Y uint64
---@field Z uint64
FUint64Vector = {}



---@class FUint64Vector2
---@field X uint64
---@field Y uint64
FUint64Vector2 = {}



---@class FUint64Vector4
---@field X uint64
---@field Y uint64
---@field Z uint64
---@field W uint64
FUint64Vector4 = {}



---@class FUintPoint
---@field X int32
---@field Y int32
FUintPoint = {}



---@class FUintVector
---@field X uint32
---@field Y uint32
---@field Z uint32
FUintVector = {}



---@class FUintVector2
---@field X uint32
---@field Y uint32
FUintVector2 = {}



---@class FUintVector4
---@field X uint32
---@field Y uint32
---@field Z uint32
---@field W uint32
FUintVector4 = {}



---@class FVector
---@field X double
---@field Y double
---@field Z double
FVector = {}



---@class FVector2D
---@field X double
---@field Y double
FVector2D = {}



---@class FVector2f
---@field X float
---@field Y float
FVector2f = {}



---@class FVector3d
---@field X double
---@field Y double
---@field Z double
FVector3d = {}



---@class FVector3f
---@field X float
---@field Y float
---@field Z float
FVector3f = {}



---@class FVector4
---@field X double
---@field Y double
---@field Z double
---@field W double
FVector4 = {}



---@class FVector4d
---@field X double
---@field Y double
---@field Z double
---@field W double
FVector4d = {}



---@class FVector4f
---@field X float
---@field Y float
---@field Z float
---@field W float
FVector4f = {}



---@class IInterface : UObject
IInterface = {}


---@class UArrayProperty : UProperty
UArrayProperty = {}


---@class UBoolProperty : UProperty
UBoolProperty = {}


---@class UByteProperty : UNumericProperty
UByteProperty = {}


---@class UClass : UStruct
UClass = {}


---@class UClassProperty : UObjectProperty
UClassProperty = {}


---@class UDefault__Class
UDefault__Class = {}


---@class UDefault__DynamicClass
UDefault__DynamicClass = {}


---@class UDefault__LinkerPlaceholderClass
UDefault__LinkerPlaceholderClass = {}


---@class UDelegateFunction : UFunction
UDelegateFunction = {}


---@class UDelegateProperty : UProperty
UDelegateProperty = {}


---@class UDoubleProperty : UNumericProperty
UDoubleProperty = {}


---@class UDynamicClass : UClass
UDynamicClass = {}


---@class UEnum : UField
UEnum = {}


---@class UEnumProperty : UProperty
UEnumProperty = {}


---@class UField : UObject
UField = {}


---@class UFloatProperty : UNumericProperty
UFloatProperty = {}


---@class UFunction : UStruct
UFunction = {}


---@class UGCObjectReferencer : UObject
UGCObjectReferencer = {}


---@class UInt16Property : UNumericProperty
UInt16Property = {}


---@class UInt64Property : UNumericProperty
UInt64Property = {}


---@class UInt8Property : UNumericProperty
UInt8Property = {}


---@class UIntProperty : UNumericProperty
UIntProperty = {}


---@class UInterfaceProperty : UProperty
UInterfaceProperty = {}


---@class ULazyObjectProperty : UObjectPropertyBase
ULazyObjectProperty = {}


---@class ULinkerPlaceholderClass : UClass
ULinkerPlaceholderClass = {}


---@class ULinkerPlaceholderExportObject : UObject
ULinkerPlaceholderExportObject = {}


---@class ULinkerPlaceholderFunction : UFunction
ULinkerPlaceholderFunction = {}


---@class UMapProperty : UProperty
UMapProperty = {}


---@class UMetaData : UObject
UMetaData = {}


---@class UMulticastDelegateProperty : UProperty
UMulticastDelegateProperty = {}


---@class UMulticastDelegatePropertyWrapper : UPropertyWrapper
UMulticastDelegatePropertyWrapper = {}


---@class UMulticastInlineDelegateProperty : UMulticastDelegateProperty
UMulticastInlineDelegateProperty = {}


---@class UMulticastInlineDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper
UMulticastInlineDelegatePropertyWrapper = {}


---@class UMulticastSparseDelegateProperty : UMulticastDelegateProperty
UMulticastSparseDelegateProperty = {}


---@class UNameProperty : UProperty
UNameProperty = {}


---@class UNumericProperty : UProperty
UNumericProperty = {}


---@class UObjectProperty : UObjectPropertyBase
UObjectProperty = {}


---@class UObjectPropertyBase : UProperty
UObjectPropertyBase = {}


---@class UObjectRedirector : UObject
UObjectRedirector = {}


---@class UPackage : UObject
UPackage = {}


---@class UPackageMap : UObject
UPackageMap = {}


---@class UProperty : UField
UProperty = {}


---@class UPropertyWrapper : UObject
UPropertyWrapper = {}


---@class UScriptStruct : UStruct
UScriptStruct = {}


---@class USetProperty : UProperty
USetProperty = {}


---@class USoftClassProperty : USoftObjectProperty
USoftClassProperty = {}


---@class USoftObjectProperty : UObjectPropertyBase
USoftObjectProperty = {}


---@class USparseDelegateFunction : UDelegateFunction
USparseDelegateFunction = {}


---@class UStrProperty : UProperty
UStrProperty = {}


---@class UStruct : UField
UStruct = {}


---@class UStructProperty : UProperty
UStructProperty = {}


---@class UTextBuffer : UObject
UTextBuffer = {}


---@class UTextProperty : UProperty
UTextProperty = {}


---@class UUInt16Property : UNumericProperty
UUInt16Property = {}


---@class UUInt32Property : UNumericProperty
UUInt32Property = {}


---@class UUInt64Property : UNumericProperty
UUInt64Property = {}


---@class UWeakObjectProperty : UObjectPropertyBase
UWeakObjectProperty = {}


