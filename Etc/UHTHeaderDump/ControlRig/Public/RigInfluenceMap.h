#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigInfluenceEntry.h"
#include "RigInfluenceMap.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigInfluenceMap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigInfluenceEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRigElementKey, int32> KeyToIndex;
    
public:
    FRigInfluenceMap();
};

