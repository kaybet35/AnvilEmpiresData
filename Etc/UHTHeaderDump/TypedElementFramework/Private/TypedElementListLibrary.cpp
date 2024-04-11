#include "TypedElementListLibrary.h"
#include "Templates/SubclassOf.h"

UTypedElementListLibrary::UTypedElementListLibrary() {
}

void UTypedElementListLibrary::Shrink(FScriptTypedElementListProxy ElementList) {
}

void UTypedElementListLibrary::Reset(FScriptTypedElementListProxy ElementList) {
}

void UTypedElementListLibrary::Reserve(FScriptTypedElementListProxy ElementList, const int32 Size) {
}

bool UTypedElementListLibrary::Remove(FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle) {
    return false;
}

int32 UTypedElementListLibrary::Num(const FScriptTypedElementListProxy ElementList) {
    return 0;
}

bool UTypedElementListLibrary::IsValidIndex(const FScriptTypedElementListProxy ElementList, const int32 Index) {
    return false;
}

bool UTypedElementListLibrary::HasElementsOfType(const FScriptTypedElementListProxy ElementList, const FName ElementTypeName) {
    return false;
}

bool UTypedElementListLibrary::HasElements(const FScriptTypedElementListProxy ElementList, const TSubclassOf<UInterface> BaseInterfaceType) {
    return false;
}

UObject* UTypedElementListLibrary::GetElementInterface(const FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle, const TSubclassOf<UInterface> BaseInterfaceType) {
    return NULL;
}

TArray<FScriptTypedElementHandle> UTypedElementListLibrary::GetElementHandles(const FScriptTypedElementListProxy ElementList, const TSubclassOf<UInterface> BaseInterfaceType) {
    return TArray<FScriptTypedElementHandle>();
}

FScriptTypedElementHandle UTypedElementListLibrary::GetElementHandleAt(const FScriptTypedElementListProxy ElementList, const int32 Index) {
    return FScriptTypedElementHandle{};
}

void UTypedElementListLibrary::Empty(FScriptTypedElementListProxy ElementList, const int32 Slack) {
}

FScriptTypedElementListProxy UTypedElementListLibrary::CreateScriptElementList(UTypedElementRegistry* Registry) {
    return FScriptTypedElementListProxy{};
}

int32 UTypedElementListLibrary::CountElementsOfType(const FScriptTypedElementListProxy ElementList, const FName ElementTypeName) {
    return 0;
}

int32 UTypedElementListLibrary::CountElements(const FScriptTypedElementListProxy ElementList, const TSubclassOf<UInterface> BaseInterfaceType) {
    return 0;
}

bool UTypedElementListLibrary::Contains(const FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle) {
    return false;
}

FScriptTypedElementListProxy UTypedElementListLibrary::Clone(const FScriptTypedElementListProxy ElementList) {
    return FScriptTypedElementListProxy{};
}

void UTypedElementListLibrary::AppendList(FScriptTypedElementListProxy ElementList, const FScriptTypedElementListProxy OtherElementList) {
}

void UTypedElementListLibrary::Append(FScriptTypedElementListProxy ElementList, const TArray<FScriptTypedElementHandle>& ElementHandles) {
}

bool UTypedElementListLibrary::Add(FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle) {
    return false;
}


