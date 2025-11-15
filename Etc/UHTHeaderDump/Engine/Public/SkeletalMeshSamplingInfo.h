#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshSamplingBuiltData.h"
#include "SkeletalMeshSamplingRegion.h"
#include "SkeletalMeshSamplingInfo.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSkeletalMeshSamplingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshSamplingRegion> Regions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkeletalMeshSamplingBuiltData BuiltData;
    
public:
    FSkeletalMeshSamplingInfo();
};

