#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldEntityHandle.generated.h"

class URegionEntry;

UCLASS(Blueprintable)
class UWorldEntityHandle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URegionEntry* RegionEntry;
    
    UWorldEntityHandle();

};

