/*
 * LuaBehavior.cpp
 *
 *  Created on: Sep 1, 2013
 *      Author: swgemu
 */

#include "LuaBehavior.h"
#include "server/zone/objects/creature/ai/LuaAiActor.h"
#include "server/zone/managers/director/DirectorManager.h"
#include "engine/engine.h"


LuaBehavior::LuaBehavior(String name) {
	this->className = name;
}

LuaBehavior::~LuaBehavior() {
}

int LuaBehavior::update(AiAgent* actor) {
	// re-use director maager
	Lua* lua = DirectorManager::instance()->getLuaInstance();
	LuaFunction update(lua->getLuaState(), this->className, "update", 1);
	update << actor;
	// run the function and fetch result
	lua_State* L = update.callFunction();
	int rc = lua_tonumber(L, -1);
	return rc;
}
void LuaBehavior::onInitialize(AiAgent* actor) {
	// re-use director maager
	Lua* lua = DirectorManager::instance()->getLuaInstance();
	LuaFunction initialize(lua->getLuaState(), this->className, "OnInitialize", 0);
	initialize << actor;
	// run the function and fetch result
	initialize.callFunction();
}
void LuaBehavior::onTerminate(AiAgent* actor, int s) {
	// re-use director maager
	Lua* lua = DirectorManager::instance()->getLuaInstance();
	LuaFunction terminate(lua->getLuaState(), this->className, "OnTerminiate", 0);
	terminate << actor;
	terminate << s;
	// run the function
	terminate.callFunction();
}
