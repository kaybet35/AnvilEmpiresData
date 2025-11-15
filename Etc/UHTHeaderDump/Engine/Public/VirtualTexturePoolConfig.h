#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VirtualTextureSpacePoolConfig.h"
#include "VirtualTexturePoolConfig.generated.h"

UCLASS(Blueprintable, Transient, Config=Engine)
class ENGINE_API UVirtualTexturePoolConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultSizeInMegabyte;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVirtualTextureSpacePoolConfig> Pools;
    
    UVirtualTexturePoolConfig();

};

