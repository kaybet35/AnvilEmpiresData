#pragma once
#include "CoreMinimal.h"
#include "PlatformInterfaceBase.h"
#include "PurchaseInfo.h"
#include "MicroTransactionBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMicroTransactionBase : public UPlatformInterfaceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPurchaseInfo> AvailableProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastErrorSolution;
    
    UMicroTransactionBase();

};

