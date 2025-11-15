#pragma once
#include "CoreMinimal.h"
#include "SelectedFragmentProperties.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSelectedFragmentProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Fragment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    FSelectedFragmentProperties();
};

