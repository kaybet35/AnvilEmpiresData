#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisFamilyCenter.generated.h"

class UFamilyCenterDataComponent;
class UVisTownAreaMarkerDecalComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisFamilyCenter : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFamilyCenterDataComponent* FamilyCenterDataComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisTownAreaMarkerDecalComponent* TownAreaMarkerDecal;
    
public:
    AVisFamilyCenter(const FObjectInitializer& ObjectInitializer);

};

