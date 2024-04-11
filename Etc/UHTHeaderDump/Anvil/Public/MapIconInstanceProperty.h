#pragma once
#include "CoreMinimal.h"
#include "EMapIconType.h"
#include "EMapMode.h"
#include "MapIconInstanceProperty.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct ANVIL_API FMapIconInstanceProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> AltIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMapMode, UTexture2D*> MapModeIconOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIconType MapActorType;
    
    FMapIconInstanceProperty();
};

