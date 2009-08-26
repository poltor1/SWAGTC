/*
 *	server/zone/objects/tangible/weapon/WeaponObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "WeaponObject.h"

/*
 *	WeaponObjectStub
 */

WeaponObject::WeaponObject(LuaObject* templateData) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new WeaponObjectImplementation(templateData);
	_impl->_setStub(this);
	_impl->_setClassHelper(WeaponObjectHelper::instance());

	((WeaponObjectImplementation*) _impl)->_serializationHelperMethod();
}

WeaponObject::WeaponObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

WeaponObject::~WeaponObject() {
}

void WeaponObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((WeaponObjectImplementation*) _impl)->sendBaselinesTo(player);
}

int WeaponObject::getAttackType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithSignedIntReturn();
	} else
		return ((WeaponObjectImplementation*) _impl)->getAttackType();
}

/*
 *	WeaponObjectImplementation
 */

WeaponObjectImplementation::~WeaponObjectImplementation() {
}

void WeaponObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (WeaponObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* WeaponObjectImplementation::_getStub() {
	return _this;
}

WeaponObjectImplementation::operator const WeaponObject*() {
	return _this;
}

void WeaponObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void WeaponObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void WeaponObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void WeaponObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void WeaponObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void WeaponObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void WeaponObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void WeaponObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	addSerializableVariable("attackType", &attackType);
	addSerializableVariable("weaponEffect", &weaponEffect);
	addSerializableVariable("weaponEffectIndex", &weaponEffectIndex);
}

int WeaponObjectImplementation::getAttackType() {
	// server/zone/objects/tangible/weapon/WeaponObject.idl(61):  return attackType;
	return attackType;
}

/*
 *	WeaponObjectAdapter
 */

WeaponObjectAdapter::WeaponObjectAdapter(WeaponObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* WeaponObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 7:
		resp->insertSignedInt(getAttackType());
		break;
	default:
		return NULL;
	}

	return resp;
}

void WeaponObjectAdapter::sendBaselinesTo(SceneObject* player) {
	return ((WeaponObjectImplementation*) impl)->sendBaselinesTo(player);
}

int WeaponObjectAdapter::getAttackType() {
	return ((WeaponObjectImplementation*) impl)->getAttackType();
}

/*
 *	WeaponObjectHelper
 */

WeaponObjectHelper* WeaponObjectHelper::staticInitializer = WeaponObjectHelper::instance();

WeaponObjectHelper::WeaponObjectHelper() {
	className = "WeaponObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void WeaponObjectHelper::finalizeHelper() {
	WeaponObjectHelper::finalize();
}

DistributedObject* WeaponObjectHelper::instantiateObject() {
	return new WeaponObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* WeaponObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WeaponObjectAdapter((WeaponObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

