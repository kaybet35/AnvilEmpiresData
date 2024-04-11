#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EAnvilArmourType.h"
#include "ArmorDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UArmorDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilArmourType HeadArmourType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilArmourType BodyArmourType;
    
    UArmorDataComponent(const FObjectInitializer& ObjectInitializer);

};

