#ifndef UE4SS_SDK_MovieRenderPipelineSettings_HPP
#define UE4SS_SDK_MovieRenderPipelineSettings_HPP

class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{
    FSoftClassPath BurnInClass;                                                       // 0x0048 (size: 0x20)
    bool bCompositeOntoFinalImage;                                                    // 0x0068 (size: 0x1)
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x0098 (size: 0x8)
    TArray<class UMoviePipelineBurnInWidget*> BurnInWidgetInstances;                  // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UMoviePipelineBurnInWidget : public UUserWidget
{

    void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);
}; // Size: 0x278

class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{
    TMap<FString, float> ConsoleVariables;                                            // 0x0048 (size: 0x50)
    TArray<FString> StartConsoleCommands;                                             // 0x0098 (size: 0x10)
    TArray<FString> EndConsoleCommands;                                               // 0x00A8 (size: 0x10)

}; // Size: 0xC8

class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{
    bool bCompositeOntoFinalImage;                                                    // 0x0048 (size: 0x1)
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x0060 (size: 0x8)

}; // Size: 0x68

#endif
