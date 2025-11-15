#pragma once
#include "CoreMinimal.h"
#include "NameMapping.generated.h"

USTRUCT(BlueprintType)
struct FNameMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    ENGINE_API FNameMapping();
};

