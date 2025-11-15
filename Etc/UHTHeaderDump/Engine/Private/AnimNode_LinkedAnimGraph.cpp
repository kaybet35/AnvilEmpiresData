#include "AnimNode_LinkedAnimGraph.h"

FAnimNode_LinkedAnimGraph::FAnimNode_LinkedAnimGraph() {
    this->InstanceClass = NULL;
    this->PendingBlendOutProfile = NULL;
    this->PendingBlendInProfile = NULL;
    this->bReceiveNotifiesFromLinkedInstances = false;
    this->bPropagateNotifiesToLinkedInstances = false;
}

