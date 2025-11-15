#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreOnline -ObjectName=UniqueNetIdWrapper -FallbackName=UniqueNetIdWrapper
#include "UniqueNetIdRepl.generated.h"

USTRUCT(BlueprintType)
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> ReplicationBytes;
    
public:
    ENGINE_API FUniqueNetIdRepl();
};

