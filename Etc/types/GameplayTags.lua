---@meta

---@class FGameplayTag
---@field TagName FName
local FGameplayTag = {}



---@class FGameplayTagCategoryRemap
---@field BaseCategory FString
---@field RemapCategories TArray<FString>
local FGameplayTagCategoryRemap = {}



---@class FGameplayTagContainer
---@field GameplayTags TArray<FGameplayTag>
---@field ParentTags TArray<FGameplayTag>
local FGameplayTagContainer = {}



---@class FGameplayTagContainerNetSerializerConfig : FNetSerializerConfig
local FGameplayTagContainerNetSerializerConfig = {}


---@class FGameplayTagContainerNetSerializerSerializationHelper
---@field GameplayTags TArray<FGameplayTag>
local FGameplayTagContainerNetSerializerSerializationHelper = {}



---@class FGameplayTagCreationWidgetHelper
local FGameplayTagCreationWidgetHelper = {}


---@class FGameplayTagNetSerializerConfig : FNetSerializerConfig
local FGameplayTagNetSerializerConfig = {}


---@class FGameplayTagNode
local FGameplayTagNode = {}


---@class FGameplayTagQuery
---@field TokenStreamVersion int32
---@field TagDictionary TArray<FGameplayTag>
---@field QueryTokenStream TArray<uint8>
---@field UserDescription FString
---@field AutoDescription FString
local FGameplayTagQuery = {}



---@class FGameplayTagRedirect
---@field OldTagName FName
---@field NewTagName FName
local FGameplayTagRedirect = {}



---@class FGameplayTagReferenceHelper
local FGameplayTagReferenceHelper = {}


---@class FGameplayTagSource
---@field SourceName FName
---@field SourceType EGameplayTagSourceType
---@field SourceTagList UGameplayTagsList
---@field SourceRestrictedTagList URestrictedGameplayTagsList
local FGameplayTagSource = {}



---@class FGameplayTagTableRow : FTableRowBase
---@field Tag FName
---@field DevComment FString
local FGameplayTagTableRow = {}



---@class FRestrictedConfigInfo
---@field RestrictedConfigName FString
---@field Owners TArray<FString>
local FRestrictedConfigInfo = {}



---@class FRestrictedGameplayTagTableRow : FGameplayTagTableRow
---@field bAllowNonRestrictedChildren boolean
local FRestrictedGameplayTagTableRow = {}



---@class IGameplayTagAssetInterface : IInterface
local IGameplayTagAssetInterface = {}

---@param TagToCheck FGameplayTag
---@return boolean
function IGameplayTagAssetInterface:HasMatchingGameplayTag(TagToCheck) end
---@param TagContainer FGameplayTagContainer
---@return boolean
function IGameplayTagAssetInterface:HasAnyMatchingGameplayTags(TagContainer) end
---@param TagContainer FGameplayTagContainer
---@return boolean
function IGameplayTagAssetInterface:HasAllMatchingGameplayTags(TagContainer) end
---@param TagContainer FGameplayTagContainer
function IGameplayTagAssetInterface:GetOwnedGameplayTags(TagContainer) end


---@class UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary
local UBlueprintGameplayTagLibrary = {}

---@param TagContainer FGameplayTagContainer
---@param Tag FGameplayTag
---@return boolean
function UBlueprintGameplayTagLibrary:RemoveGameplayTag(TagContainer, Tag) end
---@param A FGameplayTag
---@param B FString
---@return boolean
function UBlueprintGameplayTagLibrary:NotEqual_TagTag(A, B) end
---@param A FGameplayTagContainer
---@param B FString
---@return boolean
function UBlueprintGameplayTagLibrary:NotEqual_TagContainerTagContainer(A, B) end
---@param A FGameplayTagContainer
---@param B FGameplayTagContainer
---@return boolean
function UBlueprintGameplayTagLibrary:NotEqual_GameplayTagContainer(A, B) end
---@param A FGameplayTag
---@param B FGameplayTag
---@return boolean
function UBlueprintGameplayTagLibrary:NotEqual_GameplayTag(A, B) end
---@param TagOne FGameplayTag
---@param TagTwo FGameplayTag
---@param bExactMatch boolean
---@return boolean
function UBlueprintGameplayTagLibrary:MatchesTag(TagOne, TagTwo, bExactMatch) end
---@param TagOne FGameplayTag
---@param OtherContainer FGameplayTagContainer
---@param bExactMatch boolean
---@return boolean
function UBlueprintGameplayTagLibrary:MatchesAnyTags(TagOne, OtherContainer, bExactMatch) end
---@param Value FGameplayTagContainer
---@return FGameplayTagContainer
function UBlueprintGameplayTagLibrary:MakeLiteralGameplayTagContainer(Value) end
---@param Value FGameplayTag
---@return FGameplayTag
function UBlueprintGameplayTagLibrary:MakeLiteralGameplayTag(Value) end
---@param TagQuery FGameplayTagQuery
---@return FGameplayTagQuery
function UBlueprintGameplayTagLibrary:MakeGameplayTagQuery(TagQuery) end
---@param SingleTag FGameplayTag
---@return FGameplayTagContainer
function UBlueprintGameplayTagLibrary:MakeGameplayTagContainerFromTag(SingleTag) end
---@param GameplayTags TArray<FGameplayTag>
---@return FGameplayTagContainer
function UBlueprintGameplayTagLibrary:MakeGameplayTagContainerFromArray(GameplayTags) end
---@param TagQuery FGameplayTagQuery
---@return boolean
function UBlueprintGameplayTagLibrary:IsTagQueryEmpty(TagQuery) end
---@param GameplayTag FGameplayTag
---@return boolean
function UBlueprintGameplayTagLibrary:IsGameplayTagValid(GameplayTag) end
---@param TagContainer FGameplayTagContainer
---@param Tag FGameplayTag
---@param bExactMatch boolean
---@return boolean
function UBlueprintGameplayTagLibrary:HasTag(TagContainer, Tag, bExactMatch) end
---@param TagContainer FGameplayTagContainer
---@param OtherContainer FGameplayTagContainer
---@param bExactMatch boolean
---@return boolean
function UBlueprintGameplayTagLibrary:HasAnyTags(TagContainer, OtherContainer, bExactMatch) end
---@param TagContainer FGameplayTagContainer
---@param OtherContainer FGameplayTagContainer
---@param bExactMatch boolean
---@return boolean
function UBlueprintGameplayTagLibrary:HasAllTags(TagContainer, OtherContainer, bExactMatch) end
---@param TagContainerInterface TScriptInterface<IGameplayTagAssetInterface>
---@param OtherContainer FGameplayTagContainer
---@return boolean
function UBlueprintGameplayTagLibrary:HasAllMatchingGameplayTags(TagContainerInterface, OtherContainer) end
---@param GameplayTag FGameplayTag
---@return FName
function UBlueprintGameplayTagLibrary:GetTagName(GameplayTag) end
---@param TagContainer FGameplayTagContainer
---@return int32
function UBlueprintGameplayTagLibrary:GetNumGameplayTagsInContainer(TagContainer) end
---@param TagContainer FGameplayTagContainer
---@return FString
function UBlueprintGameplayTagLibrary:GetDebugStringFromGameplayTagContainer(TagContainer) end
---@param GameplayTag FGameplayTag
---@return FString
function UBlueprintGameplayTagLibrary:GetDebugStringFromGameplayTag(GameplayTag) end
---@param WorldContextObject UObject
---@param ActorClass TSubclassOf<AActor>
---@param GameplayTagQuery FGameplayTagQuery
---@param OutActors TArray<AActor>
function UBlueprintGameplayTagLibrary:GetAllActorsOfClassMatchingTagQuery(WorldContextObject, ActorClass, GameplayTagQuery, OutActors) end
---@param A FGameplayTagContainer
---@param B FGameplayTagContainer
---@return boolean
function UBlueprintGameplayTagLibrary:EqualEqual_GameplayTagContainer(A, B) end
---@param A FGameplayTag
---@param B FGameplayTag
---@return boolean
function UBlueprintGameplayTagLibrary:EqualEqual_GameplayTag(A, B) end
---@param TagContainerInterface TScriptInterface<IGameplayTagAssetInterface>
---@param Tag FGameplayTag
---@return boolean
function UBlueprintGameplayTagLibrary:DoesTagAssetInterfaceHaveTag(TagContainerInterface, Tag) end
---@param TagContainer FGameplayTagContainer
---@param TagQuery FGameplayTagQuery
---@return boolean
function UBlueprintGameplayTagLibrary:DoesContainerMatchTagQuery(TagContainer, TagQuery) end
---@param GameplayTagContainer FGameplayTagContainer
---@param GameplayTags TArray<FGameplayTag>
function UBlueprintGameplayTagLibrary:BreakGameplayTagContainer(GameplayTagContainer, GameplayTags) end
---@param InOutTagContainer FGameplayTagContainer
---@param InTagContainer FGameplayTagContainer
function UBlueprintGameplayTagLibrary:AppendGameplayTagContainers(InOutTagContainer, InTagContainer) end
---@param TagContainer FGameplayTagContainer
---@param Tag FGameplayTag
function UBlueprintGameplayTagLibrary:AddGameplayTag(TagContainer, Tag) end


---@class UEditableGameplayTagQuery : UObject
---@field UserDescription FString
---@field RootExpression UEditableGameplayTagQueryExpression
---@field TagQueryExportText_Helper FGameplayTagQuery
local UEditableGameplayTagQuery = {}



---@class UEditableGameplayTagQueryExpression : UObject
local UEditableGameplayTagQueryExpression = {}


---@class UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression
---@field Expressions TArray<UEditableGameplayTagQueryExpression>
local UEditableGameplayTagQueryExpression_AllExprMatch = {}



---@class UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression
---@field Tags FGameplayTagContainer
local UEditableGameplayTagQueryExpression_AllTagsMatch = {}



---@class UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression
---@field Expressions TArray<UEditableGameplayTagQueryExpression>
local UEditableGameplayTagQueryExpression_AnyExprMatch = {}



---@class UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression
---@field Tags FGameplayTagContainer
local UEditableGameplayTagQueryExpression_AnyTagsMatch = {}



---@class UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression
---@field Expressions TArray<UEditableGameplayTagQueryExpression>
local UEditableGameplayTagQueryExpression_NoExprMatch = {}



---@class UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression
---@field Tags FGameplayTagContainer
local UEditableGameplayTagQueryExpression_NoTagsMatch = {}



---@class UGameplayTagsDeveloperSettings : UDeveloperSettings
---@field DeveloperConfigName FString
---@field FavoriteTagSource FName
local UGameplayTagsDeveloperSettings = {}



---@class UGameplayTagsList : UObject
---@field ConfigFileName FString
---@field GameplayTagList TArray<FGameplayTagTableRow>
local UGameplayTagsList = {}



---@class UGameplayTagsManager : UObject
---@field TagSources TMap<FName, FGameplayTagSource>
---@field GameplayTagTables TArray<UDataTable>
local UGameplayTagsManager = {}



---@class UGameplayTagsSettings : UGameplayTagsList
---@field ImportTagsFromConfig boolean
---@field WarnOnInvalidTags boolean
---@field ClearInvalidTags boolean
---@field AllowEditorTagUnloading boolean
---@field AllowGameTagUnloading boolean
---@field FastReplication boolean
---@field InvalidTagCharacters FString
---@field CategoryRemapping TArray<FGameplayTagCategoryRemap>
---@field GameplayTagTableList TArray<FSoftObjectPath>
---@field GameplayTagRedirects TArray<FGameplayTagRedirect>
---@field CommonlyReplicatedTags TArray<FName>
---@field NumBitsForContainerSize int32
---@field NetIndexFirstBitSegment int32
---@field RestrictedConfigFiles TArray<FRestrictedConfigInfo>
local UGameplayTagsSettings = {}



---@class URestrictedGameplayTagsList : UObject
---@field ConfigFileName FString
---@field RestrictedGameplayTagList TArray<FRestrictedGameplayTagTableRow>
local URestrictedGameplayTagsList = {}



