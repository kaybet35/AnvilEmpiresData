#pragma once
#include "CoreMinimal.h"
#include "FastArraySerializerItem.generated.h"

USTRUCT(BlueprintType)
struct FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 ReplicationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 ReplicationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 MostRecentArrayReplicationKey;
    
    NETCORE_API FFastArraySerializerItem();
};

