#pragma once
#include "amethyst/runtime/events/Event.hpp"
#include "amethyst/runtime/events/EventManager.hpp"
#include "blocks/ICBlocks.h"
#include "items/ICItems.h"

namespace IC
{
    class EventListener
    {
    public:
        static void Initialize(Amethyst::EventManager& manager)
        {
            manager.registerBlocks.AddListener(ICBlocks::Initialize);
            manager.registerItems.AddListener(ICItems::Initialize);
        }
    };
}
