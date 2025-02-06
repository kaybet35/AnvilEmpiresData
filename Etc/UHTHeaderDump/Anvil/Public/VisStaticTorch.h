#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisStaticTorch.generated.h"

class UCombustionDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisStaticTorch : public AVisStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombustionDataComponent* CombustionDataComponent;
    
public:
    AVisStaticTorch(const FObjectInitializer& ObjectInitializer);

};

