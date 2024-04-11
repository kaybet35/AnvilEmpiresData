#pragma once
#include "CoreMinimal.h"
#include "ConstraintComponentData.generated.h"

USTRUCT(BlueprintType)
struct FConstraintComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConstraintName;
    
    MOVIESCENETRACKS_API FConstraintComponentData();
};

