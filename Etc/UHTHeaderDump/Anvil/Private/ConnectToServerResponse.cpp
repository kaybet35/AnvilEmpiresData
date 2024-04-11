#include "ConnectToServerResponse.h"

FConnectToServerResponse::FConnectToServerResponse() {
    this->ResponseType = EClientConnectToServerResponseType::Error;
    this->SelectedFactionId = 0;
    this->QueuePosition = 0;
}

