#pragma once
#include "CoreMinimal.h"
#include "FieldNotificationId.generated.h"

USTRUCT(BlueprintType)
struct FFieldNotificationId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FieldName;
    
    UMG_API FFieldNotificationId();
};

