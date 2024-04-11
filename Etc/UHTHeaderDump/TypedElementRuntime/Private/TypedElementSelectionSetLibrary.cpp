#include "TypedElementSelectionSetLibrary.h"

UTypedElementSelectionSetLibrary::UTypedElementSelectionSetLibrary() {
}

bool UTypedElementSelectionSetLibrary::SetSelectionFromList(UTypedElementSelectionSet* SelectionSet, const FScriptTypedElementListProxy ElementList, const FTypedElementSelectionOptions SelectionOptions) {
    return false;
}

bool UTypedElementSelectionSetLibrary::SelectElementsFromList(UTypedElementSelectionSet* SelectionSet, const FScriptTypedElementListProxy ElementList, const FTypedElementSelectionOptions SelectionOptions) {
    return false;
}

FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::GetNormalizedSelection(UTypedElementSelectionSet* SelectionSet, const FTypedElementSelectionNormalizationOptions NormalizationOptions) {
    return FScriptTypedElementListProxy{};
}

FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::GetNormalizedElementList(UTypedElementSelectionSet* SelectionSet, const FScriptTypedElementListProxy ElementList, const FTypedElementSelectionNormalizationOptions NormalizationOptions) {
    return FScriptTypedElementListProxy{};
}

bool UTypedElementSelectionSetLibrary::DeselectElementsFromList(UTypedElementSelectionSet* SelectionSet, const FScriptTypedElementListProxy ElementList, const FTypedElementSelectionOptions SelectionOptions) {
    return false;
}


