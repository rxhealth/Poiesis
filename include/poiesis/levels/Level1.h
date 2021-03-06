// First level consists of a cell that must grow in order to survive.

#ifndef LEVEL_1_H_
#define LEVEL_1_H_

#include <memory>

#include "bandit/Engine.h"

#include "poiesis/EntityFactory.h"

#include "poiesis/components/AIComponent.h"
#include "poiesis/components/CameraComponent.h"

#include "poiesis/levels/EntryLevel.h"
#include "poiesis/levels/LoseLevel.h"
#include "poiesis/levels/Level2.h"

#include "poiesis/systems/AISystem.h"
#include "poiesis/systems/AnimationSystem.h"
#include "poiesis/systems/CameraSystem.h"
#include "poiesis/systems/CollisionSystem.h"
#include "poiesis/systems/CombatPowerSystem.h"
#include "poiesis/systems/DebugSystem.h"
#include "poiesis/systems/GrowthSystem.h"
#include "poiesis/systems/InfectionSystem.h"
#include "poiesis/systems/InputSystem.h"
#include "poiesis/systems/ParticleSystem.h"
#include "poiesis/systems/RenderingSystem.h"
#include "poiesis/systems/SpawningSystem.h"

class Level1 : public Level
{
  public:
    void Start();
    void CreateAllEntities();
    void CreateButtons();
    void CreateAreas();
    void CreateCells();
    void CreateBacteria();
    void CreateFood();
    void CreateAllSystems();
    void CreateEssentialSystems();
    void CreateAccessorySystems();
    void DeleteAccessorySystems();
    void Update();
    void Finish();
    void ZoomOutEffect();
    void MenuButtonCallback();
    void PauseButtonCallback();
    void ExitButtonCallback();

  private:
    bool finished;
    bool paused;

    std::shared_ptr<Entity> pauseMenuExitButton;
    std::shared_ptr<Entity> pauseMenuButton;
};

#endif // LEVEL_1_H_