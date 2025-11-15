#pragma once
#include "CoreMinimal.h"
#include "EParticleEventType.h"
#include "ParticleModuleEventBase.h"
#include "ParticleModuleEventReceiverBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EParticleEventType> EventGeneratorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UParticleModuleEventReceiverBase();

};

