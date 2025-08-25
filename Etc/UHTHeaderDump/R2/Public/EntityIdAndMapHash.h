#pragma once
#include "CoreMinimal.h"
#include "EntityIdAndMapHash.generated.h"

USTRUCT(BlueprintType)
struct FEntityIdAndMapHash {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 EntityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapHash;
    
    R2_API FEntityIdAndMapHash();
};

