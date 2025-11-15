#pragma once
#include "CoreMinimal.h"
#include "StrataMaterialInfo.generated.h"

class USubsurfaceProfile;

USTRUCT(BlueprintType)
struct ENGINE_API FStrataMaterialInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ShadingModelField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasShadingModelFromExpression;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ConnectedProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USubsurfaceProfile*> SubsurfaceProfiles;
    
public:
    FStrataMaterialInfo();
};

