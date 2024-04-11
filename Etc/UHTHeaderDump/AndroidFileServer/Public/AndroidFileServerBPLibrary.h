#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EAFSActiveType.h"
#include "AndroidFileServerBPLibrary.generated.h"

UCLASS(Blueprintable)
class UAndroidFileServerBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAndroidFileServerBPLibrary();

    UFUNCTION(BlueprintCallable)
    static bool StopFileServer(bool bUSB, bool bNetwork);
    
    UFUNCTION(BlueprintCallable)
    static bool StartFileServer(bool bUSB, bool bNetwork, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EAFSActiveType::Type> IsFileServerRunning();
    
};

