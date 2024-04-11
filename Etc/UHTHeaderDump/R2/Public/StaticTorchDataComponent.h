#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "StaticTorchDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UStaticTorchDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTorchActive;
    
    UStaticTorchDataComponent(const FObjectInitializer& ObjectInitializer);

};

