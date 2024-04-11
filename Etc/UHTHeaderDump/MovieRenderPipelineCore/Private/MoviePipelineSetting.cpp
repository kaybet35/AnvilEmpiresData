#include "MoviePipelineSetting.h"

UMoviePipelineSetting::UMoviePipelineSetting() {
    this->bEnabled = true;
}

void UMoviePipelineSetting::SetIsEnabled(bool bInEnabled) {
}

bool UMoviePipelineSetting::IsEnabled() const {
    return false;
}

void UMoviePipelineSetting::BuildNewProcessCommandLineArgs(TArray<FString>& InOutUnrealURLParams, TArray<FString>& InOutCommandLineArgs, TArray<FString>& InOutDeviceProfileCvars, TArray<FString>& InOutExecCmds) const {
}

void UMoviePipelineSetting::BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs) const {
}


