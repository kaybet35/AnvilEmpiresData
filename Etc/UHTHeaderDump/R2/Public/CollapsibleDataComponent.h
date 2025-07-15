#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "CollapsibleDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UCollapsibleDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCollapsed;
    
    UCollapsibleDataComponent(const FObjectInitializer& ObjectInitializer);

};

