#pragma once
#include "CoreMinimal.h"
#include "EFastArraySerializerDeltaFlags.h"
#include "FastArraySerializer.generated.h"

USTRUCT(BlueprintType)
struct FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 ArrayReplicationKey;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    EFastArraySerializerDeltaFlags DeltaFlags;
    
public:
    NETCORE_API FFastArraySerializer();
};

