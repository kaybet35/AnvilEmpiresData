#pragma once
#include "CoreMinimal.h"
#include "GridItemWidget.h"
#include "DeploymentFoodItemWidget.generated.h"

class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UDeploymentFoodItemWidget : public UGridItemWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* WildSpawnIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemQuantityText;
    
public:
    UDeploymentFoodItemWidget();

};

