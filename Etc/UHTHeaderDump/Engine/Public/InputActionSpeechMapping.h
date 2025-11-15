#pragma once
#include "CoreMinimal.h"
#include "InputActionSpeechMapping.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FInputActionSpeechMapping {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpeechKeyword;
    
public:
    FInputActionSpeechMapping();
};

