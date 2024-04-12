#pragma once
#include "CoreMinimal.h"
#include "EAnvilCollisionChannel.generated.h"

UENUM(BlueprintType)
enum class EAnvilCollisionChannel : uint8 {
    AnvilCollisionChannelStatic,
    AnvilCollisionChannelDynamic,
    AnvilCollisionChannelPlayer,
    AnvilCollisionChannelUseVolume,
    AnvilCollisionChannelResource,
    AnvilCollisionChannelPickup,
    AnvilCollisionChannelAction,
    AnvilCollisionChannelRoadVolume,
    AnvilCollisionChannelBuildVolume,
    AnvilCollisionChannelGateVolume,
    AnvilCollisionChannelWallProtection,
    AnvilCollisionChannelWorldBorder,
    AnvilCollisionChannelLandscape,
    AnvilCollisionChannelProjectile,
    AnvilCollisionChannelVehicle,
    AnvilCollisionChannelMeshVisibility,
    AnvilCollisionChannelShield,
    AnvilCollisionChannelLargeRock,
    AnvilCollisionChannelWater,
    AnvilCollisionChannelAnimal,
    AnvilCollisionChannelMarketArea,
    AnvilCollisionChannelFoundation,
    AnvilCollisionChannelSnapping,
    AnvilCollisionChannelFire,
    AnvilCollisionChannelMouseInteraction,
    AnvilCollisionChannelIndustry,
    AnvilCollisionChannelBorderRegion,
};

