#pragma once
#include "minecraft/src/common/SharedPtr.hpp"
#include "minecraft/src/common/world/level/block/definition/BlockDefinitionGroup.hpp"
#include "minecraft/src/common/world/level/block/types/ChestBlock.hpp"

class ICBlocks
{
public:
    static WeakPtr<ChestBlock> sTestChest;
    static void Initialize(BlockDefinitionGroup* group);
};
