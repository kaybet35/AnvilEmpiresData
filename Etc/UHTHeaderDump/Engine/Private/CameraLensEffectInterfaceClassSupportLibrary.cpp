#include "CameraLensEffectInterfaceClassSupportLibrary.h"
#include "Templates/SubclassOf.h"

UCameraLensEffectInterfaceClassSupportLibrary::UCameraLensEffectInterfaceClassSupportLibrary() {
}

void UCameraLensEffectInterfaceClassSupportLibrary::SetInterfaceClass(TSubclassOf<AActor> Class, FCameraLensInterfaceClassSupport& Var, EInterfaceValidResult& Result) {
}

void UCameraLensEffectInterfaceClassSupportLibrary::IsInterfaceValid(const TScriptInterface<ICameraLensEffectInterface>& CameraLens, EInterfaceValidResult& Result) {
}

void UCameraLensEffectInterfaceClassSupportLibrary::IsInterfaceClassValid(const FCameraLensInterfaceClassSupport& CameraLens, EInterfaceValidResult& Result) {
}

TSubclassOf<AActor> UCameraLensEffectInterfaceClassSupportLibrary::GetInterfaceClass(const FCameraLensInterfaceClassSupport& CameraLens) {
    return NULL;
}


