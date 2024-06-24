#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisCentralMarketplace.generated.h"

class UCentralMarketplaceDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisCentralMarketplace : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCentralMarketplaceDataComponent* CentralMarketplaceDataComponent;
    
    AVisCentralMarketplace(const FObjectInitializer& ObjectInitializer);

};

