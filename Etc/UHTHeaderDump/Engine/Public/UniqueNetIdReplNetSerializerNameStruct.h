#pragma once
#include "CoreMinimal.h"
#include "UniqueNetIdReplNetSerializerNameStruct.generated.h"

USTRUCT(BlueprintType)
struct FUniqueNetIdReplNetSerializerNameStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    ENGINE_API FUniqueNetIdReplNetSerializerNameStruct();
};

