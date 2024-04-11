#pragma once
#include "CoreMinimal.h"
#include "EBasicAxis.h"
#include "EWarpingDirectionSource.h"
#include "RetargetGlobalSettings.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FRetargetGlobalSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarping;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpingDirectionSource DirectionSource;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBasicAxis ForwardDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DirectionChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarpForwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SidewaysOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarpSplay;
    
    FRetargetGlobalSettings();
};

