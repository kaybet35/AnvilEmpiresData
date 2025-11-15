#pragma once
#include "CoreMinimal.h"
#include "GeomSelection.generated.h"

USTRUCT(BlueprintType)
struct FGeomSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectionIndex;
    
    ENGINE_API FGeomSelection();
};

