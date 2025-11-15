#pragma once
#include "CoreMinimal.h"
#include "SectionReference.generated.h"

USTRUCT(BlueprintType)
struct FSectionReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionIndex;
    
    ENGINE_API FSectionReference();
};

