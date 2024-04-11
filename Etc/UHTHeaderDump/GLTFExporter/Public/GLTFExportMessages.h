#pragma once
#include "CoreMinimal.h"
#include "GLTFExportMessages.generated.h"

USTRUCT(BlueprintType)
struct FGLTFExportMessages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Suggestions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Warnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Errors;
    
    GLTFEXPORTER_API FGLTFExportMessages();
};

