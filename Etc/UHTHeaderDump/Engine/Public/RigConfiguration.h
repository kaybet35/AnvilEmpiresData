#pragma once
#include "CoreMinimal.h"
#include "NameMapping.h"
#include "RigConfiguration.generated.h"

class URig;

USTRUCT(BlueprintType)
struct FRigConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URig* Rig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNameMapping> BoneMappingTable;
    
    ENGINE_API FRigConfiguration();
};

