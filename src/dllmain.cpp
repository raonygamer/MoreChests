#include "dllmain.hpp"
#include <minecraft/src/common/world/level/block/registry/BlockTypeRegistry.hpp>
#include <minecraft/src/common/world/level/block/BlockLegacy.hpp>

#include "ic/EventListener.h"

// Ran when the mod is loaded into the game by AmethystRuntime
ModFunction void Initialize(AmethystContext* ctx) 
{
    InitializeVtablePtrs();
    Log::Info("Loading IronChests@{}", MOD_VERSION);
    Log::Info("IronChests was created by rydev (aka raonyreis13)");
    IC::EventListener::Initialize(ctx->mEventManager);
}