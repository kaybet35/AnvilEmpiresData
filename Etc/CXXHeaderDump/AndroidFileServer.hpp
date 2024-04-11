#ifndef UE4SS_SDK_AndroidFileServer_HPP
#define UE4SS_SDK_AndroidFileServer_HPP

#include "AndroidFileServer_enums.hpp"

class UAndroidFileServerBPLibrary : public UBlueprintFunctionLibrary
{

    bool StopFileServer(bool bUSB, bool bNetwork);
    bool StartFileServer(bool bUSB, bool bNetwork, int32 Port);
    TEnumAsByte<EAFSActiveType::Type> IsFileServerRunning();
}; // Size: 0x28

#endif
