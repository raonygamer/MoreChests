#include "ICBlocks.h"

#include "minecraft/src/common/world/level/block/registry/BlockTypeRegistry.hpp"

WeakPtr<ChestBlock> ICBlocks::sTestChest = nullptr;
void ICBlocks::Initialize(BlockDefinitionGroup* group)
{
    sTestChest = BlockTypeRegistry::registerBlock<ChestBlock>("minecraft:test_chest", ++group->mLastBlockId, ChestBlock::ChestType::Default, MaterialType::Wood);
}
