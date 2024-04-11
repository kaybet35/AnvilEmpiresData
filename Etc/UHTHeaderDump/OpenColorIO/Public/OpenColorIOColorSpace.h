#pragma once
#include "CoreMinimal.h"
#include "OpenColorIOColorSpace.generated.h"

USTRUCT(BlueprintType)
struct OPENCOLORIO_API FOpenColorIOColorSpace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ColorSpaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorSpaceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FamilyName;
    
    FOpenColorIOColorSpace();
};

