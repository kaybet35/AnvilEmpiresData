#include "TypedElementRegistry.h"
#include "Templates/SubclassOf.h"

UTypedElementRegistry::UTypedElementRegistry() {
}

UTypedElementRegistry* UTypedElementRegistry::GetInstance() {
    return NULL;
}

UObject* UTypedElementRegistry::GetElementInterface(const FScriptTypedElementHandle& InElementHandle, const TSubclassOf<UInterface> InBaseInterfaceType) const {
    return NULL;
}


