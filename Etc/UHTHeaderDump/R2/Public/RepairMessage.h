#pragma once
#include "CoreMinimal.h"
#include "EAnvilTargetAreaType.h"
#include "Templates/SubclassOf.h"
#include "RepairMessage.generated.h"

class UEntityTemplate;

USTRUCT(BlueprintType)
struct FRepairMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEntityTemplate> TargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetNameVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizedHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilTargetAreaType TargetArea;
    
    R2_API FRepairMessage();
};

