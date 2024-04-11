#include "TypedElementSelectionSet.h"
#include "Templates/SubclassOf.h"

UTypedElementSelectionSet::UTypedElementSelectionSet() {
}

bool UTypedElementSelectionSet::SetSelection(const TArray<FScriptTypedElementHandle>& InElementHandles, const FTypedElementSelectionOptions InSelectionOptions) {
    return false;
}

bool UTypedElementSelectionSet::SelectElements(const TArray<FScriptTypedElementHandle>& InElementHandles, const FTypedElementSelectionOptions InSelectionOptions) {
    return false;
}

bool UTypedElementSelectionSet::SelectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions InSelectionOptions) {
    return false;
}

void UTypedElementSelectionSet::RestoreSelectionState(const FTypedElementSelectionSetState& InSelectionState) {
}

TArray<FScriptTypedElementHandle> UTypedElementSelectionSet::K2_GetSelectedElementHandles(const TSubclassOf<UInterface> InBaseInterfaceType) const {
    return TArray<FScriptTypedElementHandle>();
}

bool UTypedElementSelectionSet::IsElementSelected(const FScriptTypedElementHandle& InElementHandle, const FTypedElementIsSelectedOptions InSelectionOptions) const {
    return false;
}

bool UTypedElementSelectionSet::HasSelectedObjects(const UClass* InRequiredClass) const {
    return false;
}

bool UTypedElementSelectionSet::HasSelectedElements(const TSubclassOf<UInterface> InBaseInterfaceType) const {
    return false;
}

UObject* UTypedElementSelectionSet::GetTopSelectedObject(const UClass* InRequiredClass) const {
    return NULL;
}

FScriptTypedElementHandle UTypedElementSelectionSet::GetSelectionElement(const FScriptTypedElementHandle& InElementHandle, const ETypedElementSelectionMethod InSelectionMethod) const {
    return FScriptTypedElementHandle{};
}

TArray<UObject*> UTypedElementSelectionSet::GetSelectedObjects(const UClass* InRequiredClass) const {
    return TArray<UObject*>();
}

int32 UTypedElementSelectionSet::GetNumSelectedElements() const {
    return 0;
}

FTypedElementSelectionSetState UTypedElementSelectionSet::GetCurrentSelectionState() const {
    return FTypedElementSelectionSetState{};
}

UObject* UTypedElementSelectionSet::GetBottomSelectedObject(const UClass* InRequiredClass) const {
    return NULL;
}

bool UTypedElementSelectionSet::DeselectElements(const TArray<FScriptTypedElementHandle>& InElementHandles, const FTypedElementSelectionOptions InSelectionOptions) {
    return false;
}

bool UTypedElementSelectionSet::DeselectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions InSelectionOptions) {
    return false;
}

int32 UTypedElementSelectionSet::CountSelectedObjects(const UClass* InRequiredClass) const {
    return 0;
}

int32 UTypedElementSelectionSet::CountSelectedElements(const TSubclassOf<UInterface> InBaseInterfaceType) const {
    return 0;
}

bool UTypedElementSelectionSet::ClearSelection(const FTypedElementSelectionOptions InSelectionOptions) {
    return false;
}

bool UTypedElementSelectionSet::CanSelectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions InSelectionOptions) const {
    return false;
}

bool UTypedElementSelectionSet::CanDeselectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions InSelectionOptions) const {
    return false;
}

bool UTypedElementSelectionSet::AllowSelectionModifiers(const FScriptTypedElementHandle& InElementHandle) const {
    return false;
}


