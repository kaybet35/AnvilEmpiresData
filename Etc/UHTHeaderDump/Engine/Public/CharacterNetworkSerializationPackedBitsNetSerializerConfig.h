#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisStub -ObjectName=NetSerializerConfig -FallbackName=NetSerializerConfig
#include "CharacterNetworkSerializationPackedBitsNetSerializerConfig.generated.h"

USTRUCT(BlueprintType)
struct FCharacterNetworkSerializationPackedBitsNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxAllowedDataBits;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxAllowedObjectReferences;
    
    ENGINE_API FCharacterNetworkSerializationPackedBitsNetSerializerConfig();
};

