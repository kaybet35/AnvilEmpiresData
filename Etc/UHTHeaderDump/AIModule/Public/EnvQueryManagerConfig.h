#pragma once
#include "CoreMinimal.h"
#include "EnvQueryManagerConfig.generated.h"

USTRUCT(BlueprintType)
struct FEnvQueryManagerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAllowedTestingTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestQueriesUsingBreadth;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueryCountWarningThreshold;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double QueryCountWarningInterval;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExecutionTimeWarningSeconds;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double HandlingResultTimeWarningSeconds;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double GenerationTimeWarningSeconds;
    
    AIMODULE_API FEnvQueryManagerConfig();
};

