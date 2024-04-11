#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigInfluenceEntryModifier.generated.h"

USTRUCT(BlueprintType)
struct FRigInfluenceEntryModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> AffectedList;
    
    CONTROLRIG_API FRigInfluenceEntryModifier();
};

