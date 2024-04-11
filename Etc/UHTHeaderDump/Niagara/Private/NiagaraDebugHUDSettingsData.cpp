#include "NiagaraDebugHUDSettingsData.h"

FNiagaraDebugHUDSettingsData::FNiagaraDebugHUDSettingsData() {
    this->bHudEnabled = false;
    this->bHudRenderingEnabled = false;
    this->bValidateSystemSimulationDataBuffers = false;
    this->bValidateParticleDataBuffers = false;
    this->bOverviewEnabled = false;
    this->OverviewMode = ENiagaraDebugHUDOverviewMode::Overview;
    this->OverviewFont = ENiagaraDebugHudFont::Small;
    this->bShowRegisteredComponents = false;
    this->bOverviewShowFilteredSystemOnly = false;
    this->bComponentFilterEnabled = false;
    this->bSystemFilterEnabled = false;
    this->bEmitterFilterEnabled = false;
    this->bActorFilterEnabled = false;
    this->SystemDebugVerbosity = ENiagaraDebugHudVerbosity::None;
    this->SystemEmitterVerbosity = ENiagaraDebugHudVerbosity::None;
    this->DataInterfaceVerbosity = ENiagaraDebugHudVerbosity::None;
    this->bSystemShowBounds = false;
    this->bSystemShowActiveOnlyInWorld = false;
    this->bShowSystemVariables = false;
    this->bShowParticleVariables = false;
    this->bEnableGpuParticleReadback = false;
    this->bShowParticleIndex = false;
    this->bShowParticlesVariablesWithSystem = false;
    this->bShowParticleVariablesVertical = false;
    this->bUseMaxParticlesToDisplay = false;
    this->bUseParticleDisplayClip = false;
    this->bUseParticleDisplayCenterRadius = false;
    this->ParticleDisplayCenterRadius = 0.00f;
    this->MaxParticlesToDisplay = 0;
    this->PerfReportFrames = 0;
    this->PerfSampleMode = ENiagaraDebugHUDPerfSampleMode::FrameTotal;
    this->PerfGraphMode = ENiagaraDebugHUDPerfGraphMode::None;
    this->PerfHistoryFrames = 0;
    this->PerfGraphTimeRange = 0.00f;
    this->bEnableSmoothing = false;
    this->SmoothingWidth = 0;
    this->SystemColorTableOpacity = 0.00f;
    this->SystemColorSeed = 0;
    this->PlaybackMode = ENiagaraDebugPlaybackMode::Play;
    this->bPlaybackRateEnabled = false;
    this->PlaybackRate = 0.00f;
    this->bLoopTimeEnabled = false;
    this->LoopTime = 0.00f;
    this->bShowGlobalBudgetInfo = false;
}

