#pragma once
#include "CoreMinimal.h"
#include "EMicroTransactionDelegate.generated.h"

UENUM(BlueprintType)
enum EMicroTransactionDelegate {
    MTD_PurchaseQueryComplete,
    MTD_PurchaseComplete,
};

