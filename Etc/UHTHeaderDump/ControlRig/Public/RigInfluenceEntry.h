#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigInfluenceEntry.generated.h"

USTRUCT(BlueprintType)
struct FRigInfluenceEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> AffectedList;
    
public:
    CONTROLRIG_API FRigInfluenceEntry();
};

