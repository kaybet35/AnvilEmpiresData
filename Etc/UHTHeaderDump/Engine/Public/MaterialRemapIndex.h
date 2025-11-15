#pragma once
#include "CoreMinimal.h"
#include "MaterialRemapIndex.generated.h"

USTRUCT(BlueprintType)
struct FMaterialRemapIndex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ImportVersionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaterialRemap;
    
    ENGINE_API FMaterialRemapIndex();
};

