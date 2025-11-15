#pragma once
#include "CoreMinimal.h"
#include "SpriteCategoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FSpriteCategoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    ENGINE_API FSpriteCategoryInfo();
};

