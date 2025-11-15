---@meta

---@class FNiagaraCompileEvent
---@field Severity FNiagaraCompileEventSeverity
---@field Message FString
---@field ShortDescription FString
---@field bDismissable boolean
---@field NodeGuid FGuid
---@field PinGuid FGuid
---@field StackGuids TArray<FGuid>
---@field Source FNiagaraCompileEventSource
local FNiagaraCompileEvent = {}



---@class FNiagaraDataInterfaceGPUParamInfo
---@field DataInterfaceHLSLSymbol FString
---@field DIClassName FString
---@field ShaderParametersOffset uint32
---@field GeneratedFunctions TArray<FNiagaraDataInterfaceGeneratedFunction>
local FNiagaraDataInterfaceGPUParamInfo = {}



---@class FNiagaraDataInterfaceGeneratedFunction
local FNiagaraDataInterfaceGeneratedFunction = {}


---@class FNiagaraShaderScriptExternalConstant
---@field Type FName
---@field Name FString
local FNiagaraShaderScriptExternalConstant = {}



---@class FNiagaraShaderScriptParametersMetadata
---@field DataInterfaceParamInfo TArray<FNiagaraDataInterfaceGPUParamInfo>
---@field LooseMetadataNames TArray<FString>
---@field bExternalConstantsInterpolated boolean
---@field ExternalConstants TArray<FNiagaraShaderScriptExternalConstant>
local FNiagaraShaderScriptParametersMetadata = {}



---@class FSimulationStageMetaData
---@field SimulationStageName FName
---@field EnabledBinding FName
---@field ElementCountXBinding FName
---@field ElementCountYBinding FName
---@field ElementCountZBinding FName
---@field IterationSource FName
---@field ExecuteBehavior ENiagaraSimStageExecuteBehavior
---@field bWritesParticles boolean
---@field bPartialParticleUpdate boolean
---@field bParticleIterationStateEnabled boolean
---@field bOverrideElementCount boolean
---@field ParticleIterationStateBinding FName
---@field ParticleIterationStateRange FIntPoint
---@field OutputDestinations TArray<FName>
---@field InputDataInterfaces TArray<FName>
---@field NumIterations int32
---@field NumIterationsBinding FName
---@field GpuDispatchType ENiagaraGpuDispatchType
---@field GpuDispatchNumThreads FIntVector
local FSimulationStageMetaData = {}



---@class UNiagaraScriptBase : UObject
local UNiagaraScriptBase = {}


