#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ControlRigSequenceObjectReferences.h"
#include "ControlRigSequenceObjectReferenceMap.generated.h"

USTRUCT(BlueprintType)
struct FControlRigSequenceObjectReferenceMap {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> BindingIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlRigSequenceObjectReferences> References;
    
public:
    CONTROLRIG_API FControlRigSequenceObjectReferenceMap();
};

