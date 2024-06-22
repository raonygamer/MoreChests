#include "ICItems.h"

#include "../blocks/ICBlocks.h"

WeakPtr<BlockItem> ICItems::sTestChestItem = nullptr;
void ICItems::Initialize(ItemRegistry* registry)
{
    sTestChestItem = registry->registerItemShared<BlockItem>("minecraft:test_chest", ICBlocks::sTestChest->getBlockItemId(), HashedString::EMPTY);
}
