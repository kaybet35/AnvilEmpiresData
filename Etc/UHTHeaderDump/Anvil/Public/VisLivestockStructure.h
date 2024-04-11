#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VisStructure.h"
#include "VisLivestockStructure.generated.h"

class UItemTemplate;

UCLASS(Blueprintable)
class ANVIL_API AVisLivestockStructure : public AVisStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> FoodItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> ProducedItem;
    
public:
    AVisLivestockStructure(const FObjectInitializer& ObjectInitializer);

};

