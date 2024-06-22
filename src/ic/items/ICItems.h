#pragma once
#include "minecraft/src/common/world/item/registry/ItemRegistry.hpp"
#include "minecraft/src/common/world/item/BlockItem.hpp"

class ICItems
{
public:
    static WeakPtr<BlockItem> sTestChestItem;
    static void Initialize(ItemRegistry* registry);
};
