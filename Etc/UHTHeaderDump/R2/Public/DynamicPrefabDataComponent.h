#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "DynamicPrefabDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UDynamicPrefabDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrefabCodeName;
    
    UDynamicPrefabDataComponent(const FObjectInitializer& ObjectInitializer);

};

