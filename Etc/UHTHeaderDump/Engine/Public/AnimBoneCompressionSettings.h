#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimBoneCompressionSettings.generated.h"

class UAnimBoneCompressionCodec;

UCLASS(Blueprintable)
class ENGINE_API UAnimBoneCompressionSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAnimBoneCompressionCodec*> Codecs;
    
    UAnimBoneCompressionSettings();

};

