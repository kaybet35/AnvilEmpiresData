#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_IsInteracting.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_IsInteracting : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInteracting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTranslating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRotating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Items;
    
    FRigUnit_IsInteracting();
};

