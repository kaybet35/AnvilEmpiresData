#include "QueueStatusResponse.h"

FQueueStatusResponse::FQueueStatusResponse() {
    this->QueueStatus = QueueStatusType::NotQueued;
    this->QueuePosition = 0;
}

