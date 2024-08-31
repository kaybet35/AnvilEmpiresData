#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BasicItemAndPayloadCount.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FBasicItemAndPayloadCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CodeNameVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Payload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    R2_API FBasicItemAndPayloadCount();
};

