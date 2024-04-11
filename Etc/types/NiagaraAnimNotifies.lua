---@meta

---@class FCurveParameterPair
---@field AnimCurveName FName
---@field UserVariableName FName
FCurveParameterPair = {}



---@class UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState
---@field Template UNiagaraSystem
---@field SocketName FName
---@field LocationOffset FVector
---@field RotationOffset FRotator
---@field bDestroyAtEnd boolean
UAnimNotifyState_TimedNiagaraEffect = {}

---@param MeshComp UMeshComponent
---@return UFXSystemComponent
function UAnimNotifyState_TimedNiagaraEffect:GetSpawnedEffect(MeshComp) end


---@class UAnimNotifyState_TimedNiagaraEffectAdvanced : UAnimNotifyState_TimedNiagaraEffect
---@field bEnableNormalizedNotifyProgress boolean
---@field NotifyProgressUserParameter FName
---@field AnimCurves TArray<FCurveParameterPair>
UAnimNotifyState_TimedNiagaraEffectAdvanced = {}

---@param MeshComp UMeshComponent
---@return float
function UAnimNotifyState_TimedNiagaraEffectAdvanced:GetNotifyProgress(MeshComp) end


---@class UAnimNotify_PlayNiagaraEffect : UAnimNotify
---@field Template UNiagaraSystem
---@field LocationOffset FVector
---@field RotationOffset FRotator
---@field Scale FVector
---@field bAbsoluteScale boolean
---@field Attached boolean
---@field SocketName FName
UAnimNotify_PlayNiagaraEffect = {}

---@return UFXSystemComponent
function UAnimNotify_PlayNiagaraEffect:GetSpawnedEffect() end


