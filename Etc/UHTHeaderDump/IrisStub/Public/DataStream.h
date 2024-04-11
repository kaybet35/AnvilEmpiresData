#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DataStream.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UDataStream : public UObject {
    GENERATED_BODY()
public:
    UDataStream();

};

