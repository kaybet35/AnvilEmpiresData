#pragma once
#include "CoreMinimal.h"
#include "MovieSceneConstraintChannel.h"
#include "ConstraintAndActiveChannel.generated.h"

class UTickableConstraint;

USTRUCT(BlueprintType)
struct CONSTRAINTS_API FConstraintAndActiveChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTickableConstraint> Constraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneConstraintChannel ActiveChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTickableConstraint* ConstraintCopyToSpawn;
    
    FConstraintAndActiveChannel();
};

