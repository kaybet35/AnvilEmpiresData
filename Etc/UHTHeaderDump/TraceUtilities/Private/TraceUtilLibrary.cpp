#include "TraceUtilLibrary.h"

UTraceUtilLibrary::UTraceUtilLibrary() {
}

void UTraceUtilLibrary::TraceMarkRegionStart(const FString& Name) {
}

void UTraceUtilLibrary::TraceMarkRegionEnd(const FString& Name) {
}

void UTraceUtilLibrary::TraceBookmark(const FString& Name) {
}

bool UTraceUtilLibrary::ToggleChannel(const FString& ChannelName, bool Enabled) {
    return false;
}

bool UTraceUtilLibrary::StopTracing() {
    return false;
}

bool UTraceUtilLibrary::StartTraceToFile(const FString& Filename, const TArray<FString>& Channels) {
    return false;
}

bool UTraceUtilLibrary::StartTraceSendTo(const FString& Target, const TArray<FString>& Channels) {
    return false;
}

bool UTraceUtilLibrary::ResumeTracing() {
    return false;
}

bool UTraceUtilLibrary::PauseTracing() {
    return false;
}

bool UTraceUtilLibrary::IsTracing() {
    return false;
}

bool UTraceUtilLibrary::IsChannelEnabled(const FString& ChannelName) {
    return false;
}

TArray<FString> UTraceUtilLibrary::GetEnabledChannels() {
    return TArray<FString>();
}

TArray<FString> UTraceUtilLibrary::GetAllChannels() {
    return TArray<FString>();
}


