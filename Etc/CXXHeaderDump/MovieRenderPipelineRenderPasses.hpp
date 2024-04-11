#ifndef UE4SS_SDK_MovieRenderPipelineRenderPasses_HPP
#define UE4SS_SDK_MovieRenderPipelineRenderPasses_HPP

#include "MovieRenderPipelineRenderPasses_enums.hpp"

struct FMoviePipelinePostProcessPass
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    TSoftObjectPtr<UMaterialInterface> Material;                                      // 0x0008 (size: 0x30)

}; // Size: 0x38

class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{
    bool bAccumulatorIncludesAlpha;                                                   // 0x0178 (size: 0x1)
    bool bDisableMultisampleEffects;                                                  // 0x0179 (size: 0x1)
    bool bUse32BitPostProcessMaterials;                                               // 0x017A (size: 0x1)
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;             // 0x0180 (size: 0x10)
    bool bRenderMainPass;                                                             // 0x0190 (size: 0x1)
    bool bAddDefaultLayer;                                                            // 0x0191 (size: 0x1)
    TArray<FActorLayer> ActorLayers;                                                  // 0x0198 (size: 0x10)
    TArray<FSoftObjectPath> DataLayers;                                               // 0x01B8 (size: 0x10)
    TArray<class UMaterialInterface*> ActivePostProcessMaterials;                     // 0x01C8 (size: 0x10)
    class UMaterialInterface* StencilLayerMaterial;                                   // 0x01D8 (size: 0x8)

}; // Size: 0x228

class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x228

class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x228

class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{
    bool bReferenceMotionBlur;                                                        // 0x0228 (size: 0x1)

}; // Size: 0x230

class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x228

class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x228

class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{
}; // Size: 0x178

class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{
}; // Size: 0x68

class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{
}; // Size: 0x68

class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{
    EEXRCompressionFormat Compression;                                                // 0x0068 (size: 0x1)
    bool bMultilayer;                                                                 // 0x0069 (size: 0x1)

}; // Size: 0x70

class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{
}; // Size: 0x68

class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{
    bool bWriteAlpha;                                                                 // 0x0068 (size: 0x1)

}; // Size: 0x70

class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{
    FString FileNameFormatOverride;                                                   // 0x0048 (size: 0x10)

}; // Size: 0xB8

#endif
