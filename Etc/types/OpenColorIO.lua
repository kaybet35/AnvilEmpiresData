---@meta

---@class FOpenColorIOColorConversionSettings
---@field ConfigurationSource UOpenColorIOConfiguration
---@field SourceColorSpace FOpenColorIOColorSpace
---@field DestinationColorSpace FOpenColorIOColorSpace
---@field DestinationDisplayView FOpenColorIODisplayView
---@field DisplayViewDirection EOpenColorIOViewTransformDirection
FOpenColorIOColorConversionSettings = {}



---@class FOpenColorIOColorSpace
---@field ColorSpaceName FString
---@field ColorSpaceIndex int32
---@field FamilyName FString
FOpenColorIOColorSpace = {}



---@class FOpenColorIODisplayConfiguration
---@field bIsEnabled boolean
---@field ColorConfiguration FOpenColorIOColorConversionSettings
FOpenColorIODisplayConfiguration = {}



---@class FOpenColorIODisplayView
---@field Display FString
---@field View FString
FOpenColorIODisplayView = {}



---@class UOpenColorIOBlueprintLibrary : UBlueprintFunctionLibrary
UOpenColorIOBlueprintLibrary = {}

---@param WorldContextObject UObject
---@param ConversionSettings FOpenColorIOColorConversionSettings
---@param InputTexture UTexture
---@param OutputRenderTarget UTextureRenderTarget2D
---@return boolean
function UOpenColorIOBlueprintLibrary:ApplyColorSpaceTransform(WorldContextObject, ConversionSettings, InputTexture, OutputRenderTarget) end


---@class UOpenColorIOColorTransform : UObject
---@field ConfigurationOwner UOpenColorIOConfiguration
---@field bIsDisplayViewType boolean
---@field SourceColorSpace FString
---@field DestinationColorSpace FString
---@field Display FString
---@field View FString
---@field DisplayViewDirection EOpenColorIOViewTransformDirection
---@field Textures TMap<int32, UTexture>
UOpenColorIOColorTransform = {}



---@class UOpenColorIOConfiguration : UObject
---@field ConfigurationFile FFilePath
---@field DesiredColorSpaces TArray<FOpenColorIOColorSpace>
---@field DesiredDisplayViews TArray<FOpenColorIODisplayView>
---@field ColorTransforms TArray<UOpenColorIOColorTransform>
UOpenColorIOConfiguration = {}



---@class UOpenColorIODisplayExtensionWrapper : UObject
UOpenColorIODisplayExtensionWrapper = {}

---@param IsActiveFunctions TArray<FSceneViewExtensionIsActiveFunctor>
function UOpenColorIODisplayExtensionWrapper:SetSceneExtensionIsActiveFunctions(IsActiveFunctions) end
---@param IsActiveFunction FSceneViewExtensionIsActiveFunctor
function UOpenColorIODisplayExtensionWrapper:SetSceneExtensionIsActiveFunction(IsActiveFunction) end
---@param InDisplayConfiguration FOpenColorIODisplayConfiguration
function UOpenColorIODisplayExtensionWrapper:SetOpenColorIOConfiguration(InDisplayConfiguration) end
function UOpenColorIODisplayExtensionWrapper:RemoveSceneExtension() end
---@param InDisplayConfiguration FOpenColorIODisplayConfiguration
---@param IsActiveFunction FSceneViewExtensionIsActiveFunctor
---@return UOpenColorIODisplayExtensionWrapper
function UOpenColorIODisplayExtensionWrapper:CreateOpenColorIODisplayExtension(InDisplayConfiguration, IsActiveFunction) end
---@param InDisplayConfiguration FOpenColorIODisplayConfiguration
---@return UOpenColorIODisplayExtensionWrapper
function UOpenColorIODisplayExtensionWrapper:CreateInGameOpenColorIODisplayExtension(InDisplayConfiguration) end


---@class UOpenColorIOSettings : UDeveloperSettings
---@field bUseLegacyProcessor boolean
---@field bUse32fLUT boolean
UOpenColorIOSettings = {}



