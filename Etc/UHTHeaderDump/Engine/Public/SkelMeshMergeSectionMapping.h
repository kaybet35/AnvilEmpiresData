#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeSectionMapping.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSkelMeshMergeSectionMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SectionIDs;
    
    FSkelMeshMergeSectionMapping();
};

