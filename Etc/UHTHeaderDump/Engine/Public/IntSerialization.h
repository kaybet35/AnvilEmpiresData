#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IntSerialization.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UIntSerialization : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 UnsignedInt16Variable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UnsignedInt32Variable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 UnsignedInt64Variable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 SignedInt8Variable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SignedInt16Variable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SignedInt64Variable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UnsignedInt8Variable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignedInt32Variable;
    
    UIntSerialization();

};

