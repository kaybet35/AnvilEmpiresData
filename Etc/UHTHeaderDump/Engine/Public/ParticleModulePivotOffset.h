#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ParticleModuleLocationBase.h"
#include "ParticleModulePivotOffset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API UParticleModulePivotOffset : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PivotOffset;
    
    UParticleModulePivotOffset();

};

