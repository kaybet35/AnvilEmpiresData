#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RegionEntry.generated.h"

class UWorldEntityHandle;

UCLASS(Blueprintable)
class URegionEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint64, UWorldEntityHandle*> WorldEntityMap;
    
    URegionEntry();

};

