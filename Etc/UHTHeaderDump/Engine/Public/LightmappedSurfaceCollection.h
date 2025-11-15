#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LightmappedSurfaceCollection.generated.h"

class UModel;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULightmappedSurfaceCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UModel* SourceModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Surfaces;
    
    ULightmappedSurfaceCollection();

};

