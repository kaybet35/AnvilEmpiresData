#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DryingRackRecipe.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FDryingRackRecipe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> InputItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputItemVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> OutputItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputItemVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DryingDurationSeconds;
    
    R2_API FDryingRackRecipe();
};

