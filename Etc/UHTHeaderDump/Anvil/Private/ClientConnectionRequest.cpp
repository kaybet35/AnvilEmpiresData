#include "ClientConnectionRequest.h"

FClientConnectionRequest::FClientConnectionRequest() {
    this->ProtocolId = 0;
    this->SelectedFactionId = 0;
    this->QueueTypeToJoin = 0;
    this->MajorVersion = 0;
    this->MinorVersion = 0;
}

