#include "TcpMessagingSettings.h"

UTcpMessagingSettings::UTcpMessagingSettings() {
    this->EnableTransport = true;
    this->ConnectionRetryDelay = 2;
    this->ConnectionRetryPeriod = 0;
    this->bStopServiceWhenAppDeactivates = true;
}


