#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "HitConverterOutput.h"
#include "HitConverterDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UHitConverterDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentSelectedOutputIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitConverterOutput> ConverterOutputList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitCounter;
    
    UHitConverterDataComponent(const FObjectInitializer& ObjectInitializer);

};

