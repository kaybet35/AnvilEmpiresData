#pragma once
#include "CoreMinimal.h"
#include "AnimBlueprintFunctionData.generated.h"

USTRUCT(BlueprintType)
struct FAnimBlueprintFunctionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FStructProperty> OutputPoseNodeProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TFieldPath<FProperty>> InputProperties;
    
    ENGINE_API FAnimBlueprintFunctionData();
};

