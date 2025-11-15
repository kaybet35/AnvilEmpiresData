#include "ActorComponentInstanceSourceInfo.h"

FActorComponentInstanceSourceInfo::FActorComponentInstanceSourceInfo() {
    this->SourceComponentTemplate = NULL;
    this->SourceComponentCreationMethod = EComponentCreationMethod::Native;
    this->SourceComponentTypeSerializedIndex = 0;
}

