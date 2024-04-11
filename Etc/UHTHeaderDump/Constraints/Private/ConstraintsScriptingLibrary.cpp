#include "ConstraintsScriptingLibrary.h"

UConstraintsScriptingLibrary::UConstraintsScriptingLibrary() {
}

bool UConstraintsScriptingLibrary::RemoveConstraint(UWorld* InWorld, int32 InIndex) {
    return false;
}

UConstraintsManager* UConstraintsScriptingLibrary::GetManager(UWorld* InWorld) {
    return NULL;
}

UTransformableComponentHandle* UConstraintsScriptingLibrary::CreateTransformableComponentHandle(UWorld* InWorld, USceneComponent* InSceneComponent, const FName& InSocketName) {
    return NULL;
}

UTickableTransformConstraint* UConstraintsScriptingLibrary::CreateFromType(UWorld* InWorld, const ETransformConstraintType InType) {
    return NULL;
}

bool UConstraintsScriptingLibrary::AddConstraint(UWorld* InWorld, UTransformableHandle* InParentHandle, UTransformableHandle* InChildHandle, UTickableTransformConstraint* InConstraint, const bool bMaintainOffset) {
    return false;
}


