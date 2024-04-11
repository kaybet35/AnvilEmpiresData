#include "SequencerScriptingRangeExtensions.h"

USequencerScriptingRangeExtensions::USequencerScriptingRangeExtensions() {
}

void USequencerScriptingRangeExtensions::SetStartSeconds(FSequencerScriptingRange& Range, float Start) {
}

void USequencerScriptingRangeExtensions::SetStartFrame(FSequencerScriptingRange& Range, int32 Start) {
}

void USequencerScriptingRangeExtensions::SetEndSeconds(FSequencerScriptingRange& Range, float End) {
}

void USequencerScriptingRangeExtensions::SetEndFrame(FSequencerScriptingRange& Range, int32 End) {
}

void USequencerScriptingRangeExtensions::RemoveStart(FSequencerScriptingRange& Range) {
}

void USequencerScriptingRangeExtensions::RemoveEnd(FSequencerScriptingRange& Range) {
}

bool USequencerScriptingRangeExtensions::HasStart(const FSequencerScriptingRange& Range) {
    return false;
}

bool USequencerScriptingRangeExtensions::HasEnd(const FSequencerScriptingRange& Range) {
    return false;
}

float USequencerScriptingRangeExtensions::GetStartSeconds(const FSequencerScriptingRange& Range) {
    return 0.0f;
}

int32 USequencerScriptingRangeExtensions::GetStartFrame(const FSequencerScriptingRange& Range) {
    return 0;
}

float USequencerScriptingRangeExtensions::GetEndSeconds(const FSequencerScriptingRange& Range) {
    return 0.0f;
}

int32 USequencerScriptingRangeExtensions::GetEndFrame(const FSequencerScriptingRange& Range) {
    return 0;
}


