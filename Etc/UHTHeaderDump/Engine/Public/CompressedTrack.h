#pragma once
#include "CoreMinimal.h"
#include "CompressedTrack.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCompressedTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ByteStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Times;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mins[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ranges[3];
    
    FCompressedTrack();
};

