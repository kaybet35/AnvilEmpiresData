#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisFamilyCenter.generated.h"

class UDecalComponent;
class UFamilyCenterDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisFamilyCenter : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFamilyCenterDataComponent* FamilyCenterDataComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* BuildAreaDecalComponent;
    
public:
    AVisFamilyCenter(const FObjectInitializer& ObjectInitializer);

};

