#include "NiagaraSystem.h"

UNiagaraSystem::UNiagaraSystem() {
    this->bSupportLargeWorldCoordinates = true;
    this->bOverrideCastShadow = false;
    this->bOverrideReceivesDecals = false;
    this->bOverrideRenderCustomDepth = false;
    this->bOverrideCustomDepthStencilValue = false;
    this->bOverrideCustomDepthStencilWriteMask = false;
    this->bOverrideTranslucencySortPriority = false;
    this->bOverrideTranslucencySortDistanceOffset = false;
    this->bCastShadow = false;
    this->bReceivesDecals = false;
    this->bRenderCustomDepth = false;
    this->bDisableExperimentalVM = false;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->CustomDepthStencilValue = 0;
    this->TranslucencySortPriority = 0;
    this->TranslucencySortDistanceOffset = 0.00f;
    this->bDumpDebugSystemInfo = false;
    this->bDumpDebugEmitterInfo = false;
    this->bRequireCurrentFrameData = true;
    this->bFixedBounds = false;
    this->EffectType = NULL;
    this->bOverrideScalabilitySettings = false;
    this->bOverrideAllowCullingForLocalPlayers = false;
    this->bAllowCullingForLocalPlayersOverride = false;
    this->SystemSpawnScript = NULL;
    this->SystemUpdateScript = NULL;
    this->bAutoDeactivate = true;
    this->bDeterminism = false;
    this->RandomSeed = 0;
    this->WarmupTime = 0.00f;
    this->WarmupTickCount = 0;
    this->WarmupTickDelta = 0.07f;
    this->bFixedTickDelta = false;
    this->FixedTickDeltaTime = 0.02f;
    this->bHasSystemScriptDIsWithPerInstanceData = false;
    this->bNeedsGPUContextInitForDataInterfaces = false;
}


