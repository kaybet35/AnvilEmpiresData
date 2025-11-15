#pragma once
#include "CoreMinimal.h"
#include "Guid.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FGuid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 D;
    
    COREUOBJECT_API FGuid();
};
FORCEINLINE uint32 GetTypeHash(const FGuid) { return 0; }

