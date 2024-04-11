#include "MoviePipelineInProcessExecutorSettings.h"

UMoviePipelineInProcessExecutorSettings::UMoviePipelineInProcessExecutorSettings() {
    this->bCloseEditor = false;
    this->AdditionalCommandLineArguments = TEXT("-NoLoadingScreen -FixedSeed -log -Unattended -MRQInstance -deterministicaudio -audiomixer");
    this->InitialDelayFrameCount = 0;
}


