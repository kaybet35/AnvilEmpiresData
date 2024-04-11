---@meta

---@class FAppleImageUtilsImageConversionResult
---@field Error FString
---@field ImageData TArray<uint8>
FAppleImageUtilsImageConversionResult = {}



---@class IAppleImageInterface : IInterface
IAppleImageInterface = {}


---@class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject
---@field OnSuccess FAppleImageUtilsBaseAsyncTaskBlueprintProxyOnSuccess
---@field OnFailure FAppleImageUtilsBaseAsyncTaskBlueprintProxyOnFailure
---@field ConversionResult FAppleImageUtilsImageConversionResult
UAppleImageUtilsBaseAsyncTaskBlueprintProxy = {}

---@param SourceImage UTexture
---@param bWantColor boolean
---@param bUseGpu boolean
---@param Scale float
---@param Rotate ETextureRotationDirection
---@return UAppleImageUtilsBaseAsyncTaskBlueprintProxy
function UAppleImageUtilsBaseAsyncTaskBlueprintProxy:CreateProxyObjectForConvertToTIFF(SourceImage, bWantColor, bUseGpu, Scale, Rotate) end
---@param SourceImage UTexture
---@param bWantColor boolean
---@param bUseGpu boolean
---@param Scale float
---@param Rotate ETextureRotationDirection
---@return UAppleImageUtilsBaseAsyncTaskBlueprintProxy
function UAppleImageUtilsBaseAsyncTaskBlueprintProxy:CreateProxyObjectForConvertToPNG(SourceImage, bWantColor, bUseGpu, Scale, Rotate) end
---@param SourceImage UTexture
---@param Quality int32
---@param bWantColor boolean
---@param bUseGpu boolean
---@param Scale float
---@param Rotate ETextureRotationDirection
---@return UAppleImageUtilsBaseAsyncTaskBlueprintProxy
function UAppleImageUtilsBaseAsyncTaskBlueprintProxy:CreateProxyObjectForConvertToJPEG(SourceImage, Quality, bWantColor, bUseGpu, Scale, Rotate) end
---@param SourceImage UTexture
---@param Quality int32
---@param bWantColor boolean
---@param bUseGpu boolean
---@param Scale float
---@param Rotate ETextureRotationDirection
---@return UAppleImageUtilsBaseAsyncTaskBlueprintProxy
function UAppleImageUtilsBaseAsyncTaskBlueprintProxy:CreateProxyObjectForConvertToHEIF(SourceImage, Quality, bWantColor, bUseGpu, Scale, Rotate) end


