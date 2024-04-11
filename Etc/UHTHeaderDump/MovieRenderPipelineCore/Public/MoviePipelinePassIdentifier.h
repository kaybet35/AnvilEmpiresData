#pragma once
#include "CoreMinimal.h"
#include "MoviePipelinePassIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FMoviePipelinePassIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CameraName;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelinePassIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FMoviePipelinePassIdentifier) { return 0; }

