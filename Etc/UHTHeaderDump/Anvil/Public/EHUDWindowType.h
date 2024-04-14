#pragma once
#include "CoreMinimal.h"
#include "EHUDWindowType.generated.h"

UENUM(BlueprintType)
enum class EHUDWindowType : uint8 {
    None,
    BuildMenu,
    PlayerInventory,
    InventoryStructure,
    InventoryStructureSplit,
    GenericStructure,
    TownCenter,
    Refinery,
    FoodStorage,
    Stable,
    ItemStash,
    Treasury,
    MarketShop,
    RepairStation,
    RelicTechCenter,
    Cooking,
    Heating,
    HitConversion,
    Quenching,
    Housing,
    Crafting,
    Packing,
    Anvil,
    FamilyAreaMarker,
    FamilyHouse,
    Count,
};

