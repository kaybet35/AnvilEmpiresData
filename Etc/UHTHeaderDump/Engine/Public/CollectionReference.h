#pragma once
#include "CoreMinimal.h"
#include "CollectionReference.generated.h"

USTRUCT(BlueprintType)
struct FCollectionReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollectionName;
    
    ENGINE_API FCollectionReference();
};

