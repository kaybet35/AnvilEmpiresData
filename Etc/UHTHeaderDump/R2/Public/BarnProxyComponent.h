#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "Templates/SubclassOf.h"
#include "BarnProxyComponent.generated.h"

class UEntityTemplate;
class UItemTemplate;

UCLASS(Blueprintable, EditInlineNew)
class R2_API UBarnProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEntityTemplate> ParentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEntityTemplate> ChildType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> FoodType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BreedingHoursMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BreedingHoursMax;
    
    UBarnProxyComponent();

};

