#include "Scene.h"



Scene::Scene()
{
	
}

Scene::Scene(std::vector<Entity> entities) : entities(entities)
{
}


Scene::~Scene()
{
}

void Scene::addEntity(Entity entity)
{
	entities.emplace_back(entity);
}

