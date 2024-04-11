#ifndef UE4SS_SDK_OpenColorIO_HPP
#define UE4SS_SDK_OpenColorIO_HPP

#include "OpenColorIO_enums.hpp"

struct FOpenColorIOColorConversionSettings
{
    class UOpenColorIOConfiguration* ConfigurationSource;                             // 0x0000 (size: 0x8)
    FOpenColorIOColorSpace SourceColorSpace;                                          // 0x0008 (size: 0x28)
    FOpenColorIOColorSpace DestinationColorSpace;                                     // 0x0030 (size: 0x28)
    FOpenColorIODisplayView DestinationDisplayView;                                   // 0x0058 (size: 0x20)
    EOpenColorIOViewTransformDirection DisplayViewDirection;                          // 0x0078 (size: 0x1)

}; // Size: 0x80

struct FOpenColorIOColorSpace
{
    FString ColorSpaceName;                                                           // 0x0000 (size: 0x10)
    int32 ColorSpaceIndex;                                                            // 0x0010 (size: 0x4)
    FString FamilyName;                                                               // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FOpenColorIODisplayConfiguration
{
    bool bIsEnabled;                                                                  // 0x0000 (size: 0x1)
    FOpenColorIOColorConversionSettings ColorConfiguration;                           // 0x0008 (size: 0x80)

}; // Size: 0x88

struct FOpenColorIODisplayView
{
    FString Display;                                                                  // 0x0000 (size: 0x10)
    FString View;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool ApplyColorSpaceTransform(const class UObject* WorldContextObject, const FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget);
}; // Size: 0x28

class UOpenColorIOColorTransform : public UObject
{
    class UOpenColorIOConfiguration* ConfigurationOwner;                              // 0x0028 (size: 0x8)
    bool bIsDisplayViewType;                                                          // 0x0030 (size: 0x1)
    FString SourceColorSpace;                                                         // 0x0038 (size: 0x10)
    FString DestinationColorSpace;                                                    // 0x0048 (size: 0x10)
    FString Display;                                                                  // 0x0058 (size: 0x10)
    FString View;                                                                     // 0x0068 (size: 0x10)
    EOpenColorIOViewTransformDirection DisplayViewDirection;                          // 0x0078 (size: 0x1)
    TMap<int32, UTexture*> Textures;                                                  // 0x0080 (size: 0x50)

}; // Size: 0x118

class UOpenColorIOConfiguration : public UObject
{
    FFilePath ConfigurationFile;                                                      // 0x0028 (size: 0x10)
    TArray<FOpenColorIOColorSpace> DesiredColorSpaces;                                // 0x0038 (size: 0x10)
    TArray<FOpenColorIODisplayView> DesiredDisplayViews;                              // 0x0048 (size: 0x10)
    TArray<class UOpenColorIOColorTransform*> ColorTransforms;                        // 0x0058 (size: 0x10)

}; // Size: 0x90

class UOpenColorIODisplayExtensionWrapper : public UObject
{

    void SetSceneExtensionIsActiveFunctions(const TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);
    void SetSceneExtensionIsActiveFunction(const FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
    void SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration);
    void RemoveSceneExtension();
    class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, const FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
    class UOpenColorIODisplayExtensionWrapper* CreateInGameOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration);
}; // Size: 0x38

class UOpenColorIOSettings : public UDeveloperSettings
{
    uint8 bUseLegacyProcessor;                                                        // 0x0038 (size: 0x1)
    uint8 bUse32fLUT;                                                                 // 0x0038 (size: 0x1)

}; // Size: 0x40

#endif
