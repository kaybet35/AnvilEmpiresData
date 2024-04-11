#include "AndroidFileServerBPLibrary.h"

UAndroidFileServerBPLibrary::UAndroidFileServerBPLibrary() {
}

bool UAndroidFileServerBPLibrary::StopFileServer(bool bUSB, bool bNetwork) {
    return false;
}

bool UAndroidFileServerBPLibrary::StartFileServer(bool bUSB, bool bNetwork, int32 Port) {
    return false;
}

TEnumAsByte<EAFSActiveType::Type> UAndroidFileServerBPLibrary::IsFileServerRunning() {
    return EAFSActiveType::None;
}


