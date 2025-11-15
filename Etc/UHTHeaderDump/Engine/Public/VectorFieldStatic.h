#pragma once
#include "CoreMinimal.h"
#include "VectorField.h"
#include "VectorFieldStatic.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVectorFieldStatic : public UVectorField {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCPUAccess;
    
    UVectorFieldStatic();

};

