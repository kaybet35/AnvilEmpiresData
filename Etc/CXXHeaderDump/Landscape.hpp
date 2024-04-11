#ifndef UE4SS_SDK_Landscape_HPP
#define UE4SS_SDK_Landscape_HPP

#include "Landscape_enums.hpp"

struct FForeignControlPointData
{
}; // Size: 0x1

struct FForeignSplineSegmentData
{
}; // Size: 0x1

struct FForeignWorldSplineData
{
}; // Size: 0x1

struct FGizmoSelectData
{
}; // Size: 0x50

struct FGrassInput
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    class ULandscapeGrassType* GrassType;                                             // 0x0008 (size: 0x8)
    FExpressionInput Input;                                                           // 0x0010 (size: 0x28)

}; // Size: 0x38

struct FGrassVariety
{
    class UStaticMesh* GrassMesh;                                                     // 0x0000 (size: 0x8)
    TArray<class UMaterialInterface*> OverrideMaterials;                              // 0x0008 (size: 0x10)
    FPerPlatformFloat GrassDensity;                                                   // 0x0018 (size: 0x4)
    bool bUseGrid;                                                                    // 0x001C (size: 0x1)
    float PlacementJitter;                                                            // 0x0020 (size: 0x4)
    FPerPlatformInt StartCullDistance;                                                // 0x0024 (size: 0x4)
    FPerPlatformInt EndCullDistance;                                                  // 0x0028 (size: 0x4)
    int32 MinLOD;                                                                     // 0x002C (size: 0x4)
    EGrassScaling Scaling;                                                            // 0x0030 (size: 0x1)
    FFloatInterval ScaleX;                                                            // 0x0034 (size: 0x8)
    FFloatInterval ScaleY;                                                            // 0x003C (size: 0x8)
    FFloatInterval ScaleZ;                                                            // 0x0044 (size: 0x8)
    bool RandomRotation;                                                              // 0x004C (size: 0x1)
    bool AlignToSurface;                                                              // 0x004D (size: 0x1)
    bool bUseLandscapeLightmap;                                                       // 0x004E (size: 0x1)
    FLightingChannels LightingChannels;                                               // 0x004F (size: 0x1)
    bool bReceivesDecals;                                                             // 0x0050 (size: 0x1)
    bool bCastDynamicShadow;                                                          // 0x0051 (size: 0x1)
    bool bCastContactShadow;                                                          // 0x0052 (size: 0x1)
    bool bKeepInstanceBufferCPUCopy;                                                  // 0x0053 (size: 0x1)
    uint32 InstanceWorldPositionOffsetDisableDistance;                                // 0x0054 (size: 0x4)

}; // Size: 0x58

struct FHeightmapData
{
    class UTexture2D* Texture;                                                        // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLandscapeComponentMaterialOverride
{
    FPerPlatformInt LODIndex;                                                         // 0x0000 (size: 0x4)
    class UMaterialInterface* Material;                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLandscapeEditToolRenderData
{
    class UMaterialInterface* ToolMaterial;                                           // 0x0000 (size: 0x8)
    class UMaterialInterface* GizmoMaterial;                                          // 0x0008 (size: 0x8)
    int32 SelectedType;                                                               // 0x0010 (size: 0x4)
    int32 DebugChannelR;                                                              // 0x0014 (size: 0x4)
    int32 DebugChannelG;                                                              // 0x0018 (size: 0x4)
    int32 DebugChannelB;                                                              // 0x001C (size: 0x4)
    class UTexture2D* DataTexture;                                                    // 0x0020 (size: 0x8)
    class UTexture2D* LayerContributionTexture;                                       // 0x0028 (size: 0x8)
    class UTexture2D* DirtyTexture;                                                   // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FLandscapeEditorLayerSettings
{
}; // Size: 0x1

struct FLandscapeImportLayerInfo
{
}; // Size: 0x1

struct FLandscapeInfoLayerSettings
{
    class ULandscapeLayerInfoObject* LayerInfoObj;                                    // 0x0000 (size: 0x8)
    FName LayerName;                                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLandscapeLayer
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    FName Name;                                                                       // 0x0010 (size: 0x8)
    bool bVisible;                                                                    // 0x0018 (size: 0x1)
    bool bLocked;                                                                     // 0x0019 (size: 0x1)
    float HeightmapAlpha;                                                             // 0x001C (size: 0x4)
    float WeightmapAlpha;                                                             // 0x0020 (size: 0x4)
    TEnumAsByte<ELandscapeBlendMode> BlendMode;                                       // 0x0024 (size: 0x1)
    TArray<FLandscapeLayerBrush> Brushes;                                             // 0x0028 (size: 0x10)
    TMap<class ULandscapeLayerInfoObject*, class bool> WeightmapLayerAllocationBlend; // 0x0038 (size: 0x50)

}; // Size: 0x88

struct FLandscapeLayerBrush
{
}; // Size: 0x1

struct FLandscapeLayerComponentData
{
    FHeightmapData HeightmapData;                                                     // 0x0000 (size: 0x8)
    FWeightmapData WeightmapData;                                                     // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FLandscapeLayerStruct
{
    class ULandscapeLayerInfoObject* LayerInfoObj;                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLandscapeMaterialTextureStreamingInfo
{
    FName TextureName;                                                                // 0x0000 (size: 0x8)
    float TexelFactor;                                                                // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FLandscapePerLODMaterialOverride
{
    int32 LODIndex;                                                                   // 0x0000 (size: 0x4)
    class UMaterialInterface* Material;                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLandscapeProxyMaterialOverride
{
    FPerPlatformInt LODIndex;                                                         // 0x0000 (size: 0x4)
    class UMaterialInterface* Material;                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLandscapeSplineConnection
{
    class ULandscapeSplineSegment* Segment;                                           // 0x0000 (size: 0x8)
    uint8 End;                                                                        // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FLandscapeSplineInterpPoint
{
    FVector Center;                                                                   // 0x0000 (size: 0x18)
    FVector Left;                                                                     // 0x0018 (size: 0x18)
    FVector Right;                                                                    // 0x0030 (size: 0x18)
    FVector FalloffLeft;                                                              // 0x0048 (size: 0x18)
    FVector FalloffRight;                                                             // 0x0060 (size: 0x18)
    FVector LayerLeft;                                                                // 0x0078 (size: 0x18)
    FVector LayerRight;                                                               // 0x0090 (size: 0x18)
    FVector LayerFalloffLeft;                                                         // 0x00A8 (size: 0x18)
    FVector LayerFalloffRight;                                                        // 0x00C0 (size: 0x18)
    float StartEndFalloff;                                                            // 0x00D8 (size: 0x4)

}; // Size: 0xE0

struct FLandscapeSplineMeshEntry
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    TArray<class UMaterialInterface*> MaterialOverrides;                              // 0x0008 (size: 0x10)
    uint8 bCenterH;                                                                   // 0x0018 (size: 0x1)
    FVector2D CenterAdjust;                                                           // 0x0020 (size: 0x10)
    uint8 bScaleToWidth;                                                              // 0x0030 (size: 0x1)
    FVector Scale;                                                                    // 0x0038 (size: 0x18)
    TEnumAsByte<LandscapeSplineMeshOrientation> Orientation;                          // 0x0050 (size: 0x1)
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;                                   // 0x0051 (size: 0x1)
    TEnumAsByte<ESplineMeshAxis::Type> UpAxis;                                        // 0x0052 (size: 0x1)

}; // Size: 0x58

struct FLandscapeSplineSegmentConnection
{
    class ULandscapeSplineControlPoint* ControlPoint;                                 // 0x0000 (size: 0x8)
    float TangentLen;                                                                 // 0x0008 (size: 0x4)
    FName SocketName;                                                                 // 0x000C (size: 0x8)

}; // Size: 0x18

struct FLayerBlendInput
{
    FName LayerName;                                                                  // 0x0000 (size: 0x8)
    TEnumAsByte<ELandscapeLayerBlendType> BlendType;                                  // 0x0008 (size: 0x1)
    FExpressionInput LayerInput;                                                      // 0x0010 (size: 0x28)
    FExpressionInput HeightInput;                                                     // 0x0038 (size: 0x28)
    float PreviewWeight;                                                              // 0x0060 (size: 0x4)
    FVector ConstLayerInput;                                                          // 0x0068 (size: 0x18)
    float ConstHeightInput;                                                           // 0x0080 (size: 0x4)

}; // Size: 0x88

struct FPhysicalMaterialInput
{
    class UPhysicalMaterial* PhysicalMaterial;                                        // 0x0000 (size: 0x8)
    FExpressionInput Input;                                                           // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FWeightmapData
{
    TArray<class UTexture2D*> Textures;                                               // 0x0000 (size: 0x10)
    TArray<FWeightmapLayerAllocationInfo> LayerAllocations;                           // 0x0010 (size: 0x10)
    TArray<class ULandscapeWeightmapUsage*> TextureUsages;                            // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FWeightmapLayerAllocationInfo
{
    class ULandscapeLayerInfoObject* LayerInfo;                                       // 0x0000 (size: 0x8)
    uint8 WeightmapTextureIndex;                                                      // 0x0008 (size: 0x1)
    uint8 WeightmapTextureChannel;                                                    // 0x0009 (size: 0x1)

}; // Size: 0x10

class AControlPointMeshActor : public AActor
{
    class UControlPointMeshComponent* ControlPointMeshComponent;                      // 0x0290 (size: 0x8)

}; // Size: 0x298

class ALandscape : public ALandscapeProxy
{

    void RenderHeightmap(const FTransform& InWorldTransform, const FBox2D& InExtents, class UTextureRenderTarget2D* OutRenderTarget);
}; // Size: 0x5E0

class ALandscapeBlueprintBrushBase : public AActor
{

    void RequestLandscapeUpdate();
    class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const FName& InWeightmapLayerName);
    void Initialize(const FTransform& InLandscapeTransform, const FIntPoint& InLandscapeSize, const FIntPoint& InLandscapeRenderTargetSize);
    void GetBlueprintRenderDependencies(TArray<class UObject*>& OutStreamableAssets);
}; // Size: 0x290

class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
}; // Size: 0x2E0

class ALandscapeGizmoActor : public AActor
{
}; // Size: 0x290

class ALandscapeMeshProxyActor : public AActor
{
    class ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent;                  // 0x0290 (size: 0x8)

}; // Size: 0x298

class ALandscapeProxy : public APartitionActor
{
    class ULandscapeSplinesComponent* SplineComponent;                                // 0x0298 (size: 0x8)
    FGuid LandscapeGuid;                                                              // 0x02A0 (size: 0x10)
    TArray<FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;                 // 0x02B0 (size: 0x10)
    FIntPoint LandscapeSectionOffset;                                                 // 0x02C0 (size: 0x8)
    int32 MaxLODLevel;                                                                // 0x02C8 (size: 0x4)
    float ComponentScreenSizeToUseSubSections;                                        // 0x02CC (size: 0x4)
    float LOD0ScreenSize;                                                             // 0x02D0 (size: 0x4)
    float LOD0DistributionSetting;                                                    // 0x02D4 (size: 0x4)
    float LODDistributionSetting;                                                     // 0x02D8 (size: 0x4)
    int32 StaticLightingLOD;                                                          // 0x02DC (size: 0x4)
    class UPhysicalMaterial* DefaultPhysMaterial;                                     // 0x02E0 (size: 0x8)
    float StreamingDistanceMultiplier;                                                // 0x02E8 (size: 0x4)
    class UMaterialInterface* LandscapeMaterial;                                      // 0x02F0 (size: 0x8)
    class UMaterialInterface* LandscapeHoleMaterial;                                  // 0x0318 (size: 0x8)
    TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures;                     // 0x0320 (size: 0x10)
    bool bSetCreateRuntimeVirtualTextureVolumes;                                      // 0x0330 (size: 0x1)
    int32 VirtualTextureNumLods;                                                      // 0x0334 (size: 0x4)
    int32 VirtualTextureLodBias;                                                      // 0x0338 (size: 0x4)
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                  // 0x033C (size: 0x1)
    float NegativeZBoundsExtension;                                                   // 0x0340 (size: 0x4)
    float PositiveZBoundsExtension;                                                   // 0x0344 (size: 0x4)
    TArray<class ULandscapeComponent*> LandscapeComponents;                           // 0x0348 (size: 0x10)
    TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;       // 0x0358 (size: 0x10)
    TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;       // 0x0368 (size: 0x10)
    class ULandscapeNaniteComponent* NaniteComponent;                                 // 0x0378 (size: 0x8)
    bool bHasLandscapeGrass;                                                          // 0x03E4 (size: 0x1)
    float StaticLightingResolution;                                                   // 0x03E8 (size: 0x4)
    uint8 CastShadow;                                                                 // 0x03EC (size: 0x1)
    uint8 bCastDynamicShadow;                                                         // 0x03EC (size: 0x1)
    uint8 bCastStaticShadow;                                                          // 0x03EC (size: 0x1)
    uint8 bCastContactShadow;                                                         // 0x03EC (size: 0x1)
    uint8 bCastFarShadow;                                                             // 0x03F0 (size: 0x1)
    uint8 bCastHiddenShadow;                                                          // 0x03F4 (size: 0x1)
    uint8 bCastShadowAsTwoSided;                                                      // 0x03F8 (size: 0x1)
    uint8 bAffectDistanceFieldLighting;                                               // 0x03FC (size: 0x1)
    FLightingChannels LightingChannels;                                               // 0x03FD (size: 0x1)
    uint8 bUseMaterialPositionOffsetInStaticLighting;                                 // 0x0400 (size: 0x1)
    uint8 bRenderCustomDepth;                                                         // 0x0400 (size: 0x1)
    ERendererStencilMask CustomDepthStencilWriteMask;                                 // 0x0404 (size: 0x1)
    int32 CustomDepthStencilValue;                                                    // 0x0408 (size: 0x4)
    float LDMaxDrawDistance;                                                          // 0x040C (size: 0x4)
    FLightmassPrimitiveSettings LightmassSettings;                                    // 0x0410 (size: 0x18)
    int32 CollisionMipLevel;                                                          // 0x0428 (size: 0x4)
    int32 SimpleCollisionMipLevel;                                                    // 0x042C (size: 0x4)
    float CollisionThickness;                                                         // 0x0430 (size: 0x4)
    FBodyInstance BodyInstance;                                                       // 0x0438 (size: 0x190)
    uint8 bGenerateOverlapEvents;                                                     // 0x05C8 (size: 0x1)
    uint8 bBakeMaterialPositionOffsetIntoCollision;                                   // 0x05C8 (size: 0x1)
    int32 ComponentSizeQuads;                                                         // 0x05CC (size: 0x4)
    int32 SubsectionSizeQuads;                                                        // 0x05D0 (size: 0x4)
    int32 NumSubsections;                                                             // 0x05D4 (size: 0x4)
    uint8 bUsedForNavigation;                                                         // 0x05D8 (size: 0x1)
    uint8 bFillCollisionUnderLandscapeForNavmesh;                                     // 0x05D8 (size: 0x1)
    bool bUseDynamicMaterialInstance;                                                 // 0x05DC (size: 0x1)
    ENavDataGatheringMode NavigationGeometryGatheringMode;                            // 0x05DD (size: 0x1)
    bool bUseLandscapeForCullingInvisibleHLODVertices;                                // 0x05DE (size: 0x1)
    bool bHasLayersContent;                                                           // 0x05DF (size: 0x1)

    void SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType InType);
    void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);
    void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UTexture* Value);
    void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);
    bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);
    class ALandscape* GetLandscapeActor();
    void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
    void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName);
    void ChangeLODDistanceFactor(float InLODDistanceFactor);
    void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
}; // Size: 0x5E0

class ALandscapeSplineActor : public AActor
{
    FGuid LandscapeGuid;                                                              // 0x0298 (size: 0x10)

}; // Size: 0x2A8

class ALandscapeSplineMeshesActor : public APartitionActor
{
    TArray<class UStaticMeshComponent*> StaticMeshComponents;                         // 0x0290 (size: 0x10)

}; // Size: 0x2A0

class ALandscapeStreamingProxy : public ALandscapeProxy
{
    TLazyObjectPtr<class ALandscape> LandscapeActor;                                  // 0x05E0 (size: 0x1C)

}; // Size: 0x600

class ILandscapeSplineInterface : public IInterface
{
}; // Size: 0x28

class UControlPointMeshComponent : public UStaticMeshComponent
{
    float VirtualTextureMainPassMaxDrawDistance;                                      // 0x05F0 (size: 0x4)

}; // Size: 0x600

class ULandscapeComponent : public UPrimitiveComponent
{
    int32 SectionBaseX;                                                               // 0x0538 (size: 0x4)
    int32 SectionBaseY;                                                               // 0x053C (size: 0x4)
    int32 ComponentSizeQuads;                                                         // 0x0540 (size: 0x4)
    int32 SubsectionSizeQuads;                                                        // 0x0544 (size: 0x4)
    int32 NumSubsections;                                                             // 0x0548 (size: 0x4)
    class UMaterialInterface* OverrideMaterial;                                       // 0x0550 (size: 0x8)
    class UMaterialInterface* OverrideHoleMaterial;                                   // 0x0558 (size: 0x8)
    TArray<class UMaterialInstanceConstant*> MaterialInstances;                       // 0x0560 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> MaterialInstancesDynamic;                 // 0x0570 (size: 0x10)
    TArray<int8> LODIndexToMaterialIndex;                                             // 0x0580 (size: 0x10)
    class UTexture2D* XYOffsetmapTexture;                                             // 0x0590 (size: 0x8)
    FVector4 WeightmapScaleBias;                                                      // 0x05A0 (size: 0x20)
    float WeightmapSubsectionOffset;                                                  // 0x05C0 (size: 0x4)
    FVector4 HeightmapScaleBias;                                                      // 0x05D0 (size: 0x20)
    FBox CachedLocalBox;                                                              // 0x05F0 (size: 0x38)
    TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent; // 0x0628 (size: 0x1C)
    bool bNaniteActive;                                                               // 0x0644 (size: 0x1)
    class UTexture2D* HeightmapTexture;                                               // 0x0648 (size: 0x8)
    TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;                  // 0x0650 (size: 0x10)
    TArray<class UTexture2D*> WeightmapTextures;                                      // 0x0660 (size: 0x10)
    TArray<FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;                 // 0x0670 (size: 0x10)
    FGuid MapBuildDataId;                                                             // 0x0680 (size: 0x10)
    TArray<FGuid> IrrelevantLights;                                                   // 0x0690 (size: 0x10)
    int32 CollisionMipLevel;                                                          // 0x06A0 (size: 0x4)
    int32 SimpleCollisionMipLevel;                                                    // 0x06A4 (size: 0x4)
    float NegativeZBoundsExtension;                                                   // 0x06A8 (size: 0x4)
    float PositiveZBoundsExtension;                                                   // 0x06AC (size: 0x4)
    float StaticLightingResolution;                                                   // 0x06B0 (size: 0x4)
    int32 ForcedLOD;                                                                  // 0x06B4 (size: 0x4)
    int32 LODBias;                                                                    // 0x06B8 (size: 0x4)
    FGuid StateId;                                                                    // 0x06BC (size: 0x10)
    FGuid BakedTextureMaterialGuid;                                                   // 0x06CC (size: 0x10)
    FGuid LastBakedTextureMaterialGuid;                                               // 0x06DC (size: 0x10)
    class UTexture2D* GIBakedBaseColorTexture;                                        // 0x06F0 (size: 0x8)
    class UMaterialInterface* MobileMaterialInterface;                                // 0x06F8 (size: 0x8)
    TArray<class UMaterialInterface*> MobileMaterialInterfaces;                       // 0x0700 (size: 0x10)
    TArray<class UTexture2D*> MobileWeightmapTextures;                                // 0x0710 (size: 0x10)

    void SetLODBias(int32 InLODBias);
    void SetForcedLOD(int32 InForcedLOD);
    class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex);
    float EditorGetPaintLayerWeightByNameAtLocation(const FVector& InLocation, const FName InPaintLayerName);
    float EditorGetPaintLayerWeightAtLocation(const FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);
}; // Size: 0x750

class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
}; // Size: 0x540

class ULandscapeGrassType : public UObject
{
    TArray<FGrassVariety> GrassVarieties;                                             // 0x0028 (size: 0x10)
    uint8 bEnableDensityScaling;                                                      // 0x0038 (size: 0x1)
    class UStaticMesh* GrassMesh;                                                     // 0x0040 (size: 0x8)
    float GrassDensity;                                                               // 0x0048 (size: 0x4)
    float PlacementJitter;                                                            // 0x004C (size: 0x4)
    int32 StartCullDistance;                                                          // 0x0050 (size: 0x4)
    int32 EndCullDistance;                                                            // 0x0054 (size: 0x4)
    bool RandomRotation;                                                              // 0x0058 (size: 0x1)
    bool AlignToSurface;                                                              // 0x0059 (size: 0x1)

}; // Size: 0x60

class ULandscapeHLODBuilder : public UHLODBuilder
{
}; // Size: 0x28

class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
    TArray<class ULandscapeLayerInfoObject*> ComponentLayerInfos;                     // 0x0538 (size: 0x10)
    int32 SectionBaseX;                                                               // 0x0548 (size: 0x4)
    int32 SectionBaseY;                                                               // 0x054C (size: 0x4)
    int32 CollisionSizeQuads;                                                         // 0x0550 (size: 0x4)
    float CollisionScale;                                                             // 0x0554 (size: 0x4)
    int32 SimpleCollisionSizeQuads;                                                   // 0x0558 (size: 0x4)
    TArray<uint8> CollisionQuadFlags;                                                 // 0x0560 (size: 0x10)
    FGuid HeightfieldGuid;                                                            // 0x0570 (size: 0x10)
    FBox CachedLocalBox;                                                              // 0x0580 (size: 0x38)
    TLazyObjectPtr<class ULandscapeComponent> RenderComponent;                        // 0x05B8 (size: 0x1C)
    TArray<class UPhysicalMaterial*> CookedPhysicalMaterials;                         // 0x05E8 (size: 0x10)

    class ULandscapeComponent* GetRenderComponent();
}; // Size: 0x640

class ULandscapeInfo : public UObject
{
    TLazyObjectPtr<class ALandscape> LandscapeActor;                                  // 0x0028 (size: 0x1C)
    FGuid LandscapeGuid;                                                              // 0x0044 (size: 0x10)
    int32 ComponentSizeQuads;                                                         // 0x0054 (size: 0x4)
    int32 SubsectionSizeQuads;                                                        // 0x0058 (size: 0x4)
    int32 ComponentNumSubsections;                                                    // 0x005C (size: 0x4)
    FVector DrawScale;                                                                // 0x0060 (size: 0x18)
    TArray<TWeakObjectPtr<ALandscapeStreamingProxy>> StreamingProxies;                // 0x0128 (size: 0x10)

}; // Size: 0x238

class ULandscapeInfoMap : public UObject
{
}; // Size: 0x80

class ULandscapeLODStreamingProxy_DEPRECATED : public UStreamableRenderAsset
{
}; // Size: 0xD0

class ULandscapeLayerInfoObject : public UObject
{
    FName LayerName;                                                                  // 0x0028 (size: 0x8)
    class UPhysicalMaterial* PhysMaterial;                                            // 0x0030 (size: 0x8)
    float Hardness;                                                                   // 0x0038 (size: 0x4)
    FLinearColor LayerUsageDebugColor;                                                // 0x003C (size: 0x10)

}; // Size: 0x50

class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
    TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;              // 0x0200 (size: 0x10)
    uint8 bIsLayerThumbnail;                                                          // 0x0210 (size: 0x1)
    uint8 bDisableTessellation;                                                       // 0x0210 (size: 0x1)
    uint8 bMobile;                                                                    // 0x0210 (size: 0x1)
    uint8 bEditorToolUsage;                                                           // 0x0210 (size: 0x1)

}; // Size: 0x218

class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
    FGuid MeshGuid;                                                                   // 0x0638 (size: 0x10)

}; // Size: 0x650

class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
    FGuid LandscapeGuid;                                                              // 0x05F0 (size: 0x10)
    TArray<FIntPoint> ProxyComponentBases;                                            // 0x0600 (size: 0x10)
    int8 ProxyLOD;                                                                    // 0x0610 (size: 0x1)

}; // Size: 0x620

class ULandscapeNaniteComponent : public UStaticMeshComponent
{
    FGuid ProxyContentId;                                                             // 0x05F0 (size: 0x10)
    bool bEnabled;                                                                    // 0x0600 (size: 0x1)

}; // Size: 0x610

class ULandscapeSettings : public UDeveloperSettings
{
    int32 MaxNumberOfLayers;                                                          // 0x0038 (size: 0x4)
    int32 SideResolutionLimit;                                                        // 0x003C (size: 0x4)
    TSoftObjectPtr<UMaterialInterface> DefaultLandscapeMaterial;                      // 0x0040 (size: 0x30)
    TSoftObjectPtr<ULandscapeLayerInfoObject> DefaultLayerInfoObject;                 // 0x0070 (size: 0x30)
    bool bRestrictiveMode;                                                            // 0x00A0 (size: 0x1)

}; // Size: 0xA8

class ULandscapeSplineControlPoint : public UObject
{
    FVector Location;                                                                 // 0x0028 (size: 0x18)
    FRotator Rotation;                                                                // 0x0040 (size: 0x18)
    float Width;                                                                      // 0x0058 (size: 0x4)
    float LayerWidthRatio;                                                            // 0x005C (size: 0x4)
    float SideFalloff;                                                                // 0x0060 (size: 0x4)
    float LeftSideFalloffFactor;                                                      // 0x0064 (size: 0x4)
    float RightSideFalloffFactor;                                                     // 0x0068 (size: 0x4)
    float LeftSideLayerFalloffFactor;                                                 // 0x006C (size: 0x4)
    float RightSideLayerFalloffFactor;                                                // 0x0070 (size: 0x4)
    float EndFalloff;                                                                 // 0x0074 (size: 0x4)
    TArray<FLandscapeSplineConnection> ConnectedSegments;                             // 0x0078 (size: 0x10)
    TArray<FLandscapeSplineInterpPoint> Points;                                       // 0x0088 (size: 0x10)
    FBox Bounds;                                                                      // 0x0098 (size: 0x38)
    class UControlPointMeshComponent* LocalMeshComponent;                             // 0x00D0 (size: 0x8)

}; // Size: 0xD8

class ULandscapeSplineSegment : public UObject
{
    FLandscapeSplineSegmentConnection Connections;                                    // 0x0028 (size: 0x30)
    FInterpCurveVector SplineInfo;                                                    // 0x0058 (size: 0x18)
    TArray<FLandscapeSplineInterpPoint> Points;                                       // 0x0070 (size: 0x10)
    FBox Bounds;                                                                      // 0x0080 (size: 0x38)
    TArray<class USplineMeshComponent*> LocalMeshComponents;                          // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class ULandscapeSplinesComponent : public UPrimitiveComponent
{
    TArray<class ULandscapeSplineControlPoint*> ControlPoints;                        // 0x0538 (size: 0x10)
    TArray<class ULandscapeSplineSegment*> Segments;                                  // 0x0548 (size: 0x10)
    TArray<class UMeshComponent*> CookedForeignMeshComponents;                        // 0x0558 (size: 0x10)

    TArray<class USplineMeshComponent*> GetSplineMeshComponents();
}; // Size: 0x570

class ULandscapeSubsystem : public UTickableWorldSubsystem
{
}; // Size: 0x50

class ULandscapeWeightmapUsage : public UObject
{
    class ULandscapeComponent* ChannelUsage;                                          // 0x0028 (size: 0x20)
    FGuid LayerGuid;                                                                  // 0x0048 (size: 0x10)

}; // Size: 0x58

class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
    TArray<FGrassInput> GrassTypes;                                                   // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
    TArray<FLayerBlendInput> Layers;                                                  // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
    TEnumAsByte<ETerrainCoordMappingType> MappingType;                                // 0x00B0 (size: 0x1)
    TEnumAsByte<ELandscapeCustomizedCoordType> CustomUVType;                          // 0x00B1 (size: 0x1)
    float MappingScale;                                                               // 0x00B4 (size: 0x4)
    float MappingRotation;                                                            // 0x00B8 (size: 0x4)
    float MappingPanU;                                                                // 0x00BC (size: 0x4)
    float MappingPanV;                                                                // 0x00C0 (size: 0x4)

}; // Size: 0xC8

class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
    FName ParameterName;                                                              // 0x00B0 (size: 0x8)
    float PreviewWeight;                                                              // 0x00B8 (size: 0x4)

}; // Size: 0xC0

class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
    FExpressionInput LayerUsed;                                                       // 0x00B0 (size: 0x28)
    FExpressionInput LayerNotUsed;                                                    // 0x00D8 (size: 0x28)
    FName ParameterName;                                                              // 0x0100 (size: 0x8)
    uint8 PreviewUsed;                                                                // 0x0108 (size: 0x1)

}; // Size: 0x110

class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
    FExpressionInput Base;                                                            // 0x00B0 (size: 0x28)
    FExpressionInput Layer;                                                           // 0x00D8 (size: 0x28)
    FName ParameterName;                                                              // 0x0100 (size: 0x8)
    float PreviewWeight;                                                              // 0x0108 (size: 0x4)
    FVector ConstBase;                                                                // 0x0110 (size: 0x18)

}; // Size: 0x128

class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{
    TArray<FPhysicalMaterialInput> Inputs;                                            // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
}; // Size: 0xB0

#endif
