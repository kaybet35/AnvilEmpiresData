#ifndef UE4SS_SDK_NiagaraShader_HPP
#define UE4SS_SDK_NiagaraShader_HPP

#include "NiagaraShader_enums.hpp"

struct FNiagaraCompileEvent
{
    FNiagaraCompileEventSeverity Severity;                                            // 0x0000 (size: 0x1)
    FString Message;                                                                  // 0x0008 (size: 0x10)
    FString ShortDescription;                                                         // 0x0018 (size: 0x10)
    bool bDismissable;                                                                // 0x0028 (size: 0x1)
    FGuid NodeGuid;                                                                   // 0x002C (size: 0x10)
    FGuid PinGuid;                                                                    // 0x003C (size: 0x10)
    TArray<FGuid> StackGuids;                                                         // 0x0050 (size: 0x10)
    FNiagaraCompileEventSource Source;                                                // 0x0060 (size: 0x1)

}; // Size: 0x68

struct FNiagaraDataInterfaceGPUParamInfo
{
    FString DataInterfaceHLSLSymbol;                                                  // 0x0000 (size: 0x10)
    FString DIClassName;                                                              // 0x0010 (size: 0x10)
    uint32 ShaderParametersOffset;                                                    // 0x0020 (size: 0x4)
    TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FNiagaraDataInterfaceGeneratedFunction
{
}; // Size: 0x28

struct FNiagaraShaderScriptExternalConstant
{
    FName Type;                                                                       // 0x0000 (size: 0x8)
    FString Name;                                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraShaderScriptParametersMetadata
{
    TArray<FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;                 // 0x0000 (size: 0x10)
    TArray<FString> LooseMetadataNames;                                               // 0x0010 (size: 0x10)
    bool bExternalConstantsInterpolated;                                              // 0x0020 (size: 0x1)
    TArray<FNiagaraShaderScriptExternalConstant> ExternalConstants;                   // 0x0028 (size: 0x10)

}; // Size: 0x58

struct FSimulationStageMetaData
{
    FName SimulationStageName;                                                        // 0x0000 (size: 0x8)
    FName EnabledBinding;                                                             // 0x0008 (size: 0x8)
    FName ElementCountXBinding;                                                       // 0x0010 (size: 0x8)
    FName ElementCountYBinding;                                                       // 0x0018 (size: 0x8)
    FName ElementCountZBinding;                                                       // 0x0020 (size: 0x8)
    FName IterationSource;                                                            // 0x0028 (size: 0x8)
    ENiagaraSimStageExecuteBehavior ExecuteBehavior;                                  // 0x0030 (size: 0x1)
    uint8 bWritesParticles;                                                           // 0x0034 (size: 0x1)
    uint8 bPartialParticleUpdate;                                                     // 0x0034 (size: 0x1)
    uint8 bParticleIterationStateEnabled;                                             // 0x0034 (size: 0x1)
    uint8 bOverrideElementCount;                                                      // 0x0034 (size: 0x1)
    FName ParticleIterationStateBinding;                                              // 0x0038 (size: 0x8)
    FIntPoint ParticleIterationStateRange;                                            // 0x0044 (size: 0x8)
    TArray<FName> OutputDestinations;                                                 // 0x0050 (size: 0x10)
    TArray<FName> InputDataInterfaces;                                                // 0x0060 (size: 0x10)
    int32 NumIterations;                                                              // 0x0070 (size: 0x4)
    FName NumIterationsBinding;                                                       // 0x0074 (size: 0x8)
    ENiagaraGpuDispatchType GpuDispatchType;                                          // 0x007C (size: 0x1)
    FIntVector GpuDispatchNumThreads;                                                 // 0x0080 (size: 0xC)

}; // Size: 0x90

class UNiagaraScriptBase : public UObject
{
}; // Size: 0x28

#endif
