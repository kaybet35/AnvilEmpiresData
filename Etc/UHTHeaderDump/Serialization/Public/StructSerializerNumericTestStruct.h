#pragma once
#include "CoreMinimal.h"
#include "StructSerializerNumericTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerNumericTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Int8;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Int16;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 int32;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Int64;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 uint8;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 uint16;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 uint32;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 UInt64;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float float;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Double;
    
    SERIALIZATION_API FStructSerializerNumericTestStruct();
};

