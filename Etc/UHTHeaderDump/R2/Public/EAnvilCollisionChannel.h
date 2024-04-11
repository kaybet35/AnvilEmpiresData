#pragma once
#include "CoreMinimal.h"
#include "EAnvilCollisionChannel.generated.h"

UENUM(BlueprintType)
enum EAnvilCollisionChannel {
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
    AnvilCollisionChannel_REMOVED_,
    AnvilCollisionChannelWater,
    AnvilCollisionChannelAnimal,
    AnvilCollisionChannelMarketArea,
    AnvilCollisionChannelFoundation,
    AnvilCollisionChannelSnapping,
    AnvilCollisionChannelFire,
    AnvilCollisionChannelMouseInteraction,
};

