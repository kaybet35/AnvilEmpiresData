#pragma once
#include "CoreMinimal.h"
#include "OpenColorIODisplayView.generated.h"

USTRUCT(BlueprintType)
struct OPENCOLORIO_API FOpenColorIODisplayView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Display;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString View;
    
    FOpenColorIODisplayView();
};

