#pragma once
#include "CoreMinimal.h"
#include "NetworkEmulationProfileDescription.generated.h"

USTRUCT(BlueprintType)
struct FNetworkEmulationProfileDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ToolTip;
    
    ENGINE_API FNetworkEmulationProfileDescription();
};

