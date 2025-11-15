#include "AnimNotifyMirrorInspectionLibrary.h"

UAnimNotifyMirrorInspectionLibrary::UAnimNotifyMirrorInspectionLibrary() {
}

bool UAnimNotifyMirrorInspectionLibrary::IsTriggeredByMirroredAnimation(const FAnimNotifyEventReference& EventReference) {
    return false;
}

UMirrorDataTable* UAnimNotifyMirrorInspectionLibrary::GetMirrorDataTable(const FAnimNotifyEventReference& EventReference) {
    return NULL;
}


