#pragma once
#include "CoreMinimal.h"
#include "UniqueNetIdReplNetSerializerStringStruct.generated.h"

USTRUCT(BlueprintType)
struct FUniqueNetIdReplNetSerializerStringStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    ENGINE_API FUniqueNetIdReplNetSerializerStringStruct();
};

