#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisFarm.generated.h"

class UDecalComponent;
class UFarmDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisFarm : public AVisStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* FarmDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* FertilizeDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoughnessStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoughnessEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFarmDataComponent* FarmDataComponent;
    
public:
    AVisFarm(const FObjectInitializer& ObjectInitializer);

};

