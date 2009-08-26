/*
 *	server/zone/objects/tangible/TangibleObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "TangibleObject.h"

/*
 *	TangibleObjectStub
 */

TangibleObject::TangibleObject(LuaObject* templateData) : SceneObject(DummyConstructorParameter::instance()) {
	_impl = new TangibleObjectImplementation(templateData);
	_impl->_setStub(this);
	_impl->_setClassHelper(TangibleObjectHelper::instance());

	((TangibleObjectImplementation*) _impl)->_serializationHelperMethod();
}

TangibleObject::TangibleObject(DummyConstructorParameter* param) : SceneObject(param) {
}

TangibleObject::~TangibleObject() {
}

void TangibleObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->sendBaselinesTo(player);
}

byte TangibleObject::getUnknownByte() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithByteReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getUnknownByte();
}

int TangibleObject::getObjectCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getObjectCount();
}

int TangibleObject::getMaxCondition() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getMaxCondition();
}

int TangibleObject::getConditionDamage() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getConditionDamage();
}

int TangibleObject::getVolume() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithSignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getVolume();
}

float TangibleObject::getComplexity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithFloatReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getComplexity();
}

unsigned int TangibleObject::getOptionsBitmask() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getOptionsBitmask();
}

unsigned int TangibleObject::getPvpStatusBitmask() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getPvpStatusBitmask();
}

unsigned int TangibleObject::getDefenderListUpdateCounter() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((TangibleObjectImplementation*) _impl)->getDefenderListUpdateCounter();
}

void TangibleObject::getCustomizationString(String& variables) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addAsciiParameter(variables);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->getCustomizationString(variables);
}

void TangibleObject::setCustomizationString(const String& vars) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addAsciiParameter(vars);

		method.executeWithVoidReturn();
	} else
		((TangibleObjectImplementation*) _impl)->setCustomizationString(vars);
}

/*
 *	TangibleObjectImplementation
 */

TangibleObjectImplementation::~TangibleObjectImplementation() {
}

void TangibleObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (TangibleObject*) stub;
	SceneObjectImplementation::_setStub(stub);
}

DistributedObjectStub* TangibleObjectImplementation::_getStub() {
	return _this;
}

TangibleObjectImplementation::operator const TangibleObject*() {
	return _this;
}

void TangibleObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void TangibleObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void TangibleObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void TangibleObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void TangibleObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void TangibleObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void TangibleObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void TangibleObjectImplementation::_serializationHelperMethod() {
	SceneObjectImplementation::_serializationHelperMethod();

	addSerializableVariable("targetable", &targetable);
	addSerializableVariable("complexity", &complexity);
	addSerializableVariable("volume", &volume);
	addSerializableVariable("customizationVariables", &customizationVariables);
	addSerializableVariable("conditionDamage", &conditionDamage);
	addSerializableVariable("maxCondition", &maxCondition);
	addSerializableVariable("objectCount", &objectCount);
	addSerializableVariable("optionsBitmask", &optionsBitmask);
	addSerializableVariable("pvpStatusBitmask", &pvpStatusBitmask);
	addSerializableVariable("unknownByte", &unknownByte);
	addSerializableVariable("defenderList", &defenderList);
	addSerializableVariable("defenderListUpdateCounter", &defenderListUpdateCounter);
}

byte TangibleObjectImplementation::getUnknownByte() {
	// server/zone/objects/tangible/TangibleObject.idl(80):  return unknownByte;
	return unknownByte;
}

int TangibleObjectImplementation::getObjectCount() {
	// server/zone/objects/tangible/TangibleObject.idl(88):  return objectCount;
	return objectCount;
}

int TangibleObjectImplementation::getMaxCondition() {
	// server/zone/objects/tangible/TangibleObject.idl(92):  return maxCondition;
	return maxCondition;
}

int TangibleObjectImplementation::getConditionDamage() {
	// server/zone/objects/tangible/TangibleObject.idl(96):  return conditionDamage;
	return conditionDamage;
}

int TangibleObjectImplementation::getVolume() {
	// server/zone/objects/tangible/TangibleObject.idl(100):  return volume;
	return volume;
}

float TangibleObjectImplementation::getComplexity() {
	// server/zone/objects/tangible/TangibleObject.idl(104):  return complexity;
	return complexity;
}

unsigned int TangibleObjectImplementation::getOptionsBitmask() {
	// server/zone/objects/tangible/TangibleObject.idl(108):  return optionsBitmask;
	return optionsBitmask;
}

unsigned int TangibleObjectImplementation::getPvpStatusBitmask() {
	// server/zone/objects/tangible/TangibleObject.idl(112):  return pvpStatusBitmask;
	return pvpStatusBitmask;
}

unsigned int TangibleObjectImplementation::getDefenderListUpdateCounter() {
	// server/zone/objects/tangible/TangibleObject.idl(116):  return defenderListUpdateCounter;
	return defenderListUpdateCounter;
}

void TangibleObjectImplementation::getCustomizationString(String& variables) {
	// server/zone/objects/tangible/TangibleObject.idl(120):  customizationVariables.getData(variables);
	(&customizationVariables)->getData(variables);
}

void TangibleObjectImplementation::setCustomizationString(const String& vars) {
	// server/zone/objects/tangible/TangibleObject.idl(124):  customizationVariables.parseFromClientString(vars);
	(&customizationVariables)->parseFromClientString(vars);
}

/*
 *	TangibleObjectAdapter
 */

TangibleObjectAdapter::TangibleObjectAdapter(TangibleObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* TangibleObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 7:
		resp->insertByte(getUnknownByte());
		break;
	case 8:
		resp->insertSignedInt(getObjectCount());
		break;
	case 9:
		resp->insertSignedInt(getMaxCondition());
		break;
	case 10:
		resp->insertSignedInt(getConditionDamage());
		break;
	case 11:
		resp->insertSignedInt(getVolume());
		break;
	case 12:
		resp->insertFloat(getComplexity());
		break;
	case 13:
		resp->insertInt(getOptionsBitmask());
		break;
	case 14:
		resp->insertInt(getPvpStatusBitmask());
		break;
	case 15:
		resp->insertInt(getDefenderListUpdateCounter());
		break;
	case 16:
		getCustomizationString(inv->getAsciiParameter(_param0_getCustomizationString__String_));
		break;
	case 17:
		setCustomizationString(inv->getAsciiParameter(_param0_setCustomizationString__String_));
		break;
	default:
		return NULL;
	}

	return resp;
}

void TangibleObjectAdapter::sendBaselinesTo(SceneObject* player) {
	return ((TangibleObjectImplementation*) impl)->sendBaselinesTo(player);
}

byte TangibleObjectAdapter::getUnknownByte() {
	return ((TangibleObjectImplementation*) impl)->getUnknownByte();
}

int TangibleObjectAdapter::getObjectCount() {
	return ((TangibleObjectImplementation*) impl)->getObjectCount();
}

int TangibleObjectAdapter::getMaxCondition() {
	return ((TangibleObjectImplementation*) impl)->getMaxCondition();
}

int TangibleObjectAdapter::getConditionDamage() {
	return ((TangibleObjectImplementation*) impl)->getConditionDamage();
}

int TangibleObjectAdapter::getVolume() {
	return ((TangibleObjectImplementation*) impl)->getVolume();
}

float TangibleObjectAdapter::getComplexity() {
	return ((TangibleObjectImplementation*) impl)->getComplexity();
}

unsigned int TangibleObjectAdapter::getOptionsBitmask() {
	return ((TangibleObjectImplementation*) impl)->getOptionsBitmask();
}

unsigned int TangibleObjectAdapter::getPvpStatusBitmask() {
	return ((TangibleObjectImplementation*) impl)->getPvpStatusBitmask();
}

unsigned int TangibleObjectAdapter::getDefenderListUpdateCounter() {
	return ((TangibleObjectImplementation*) impl)->getDefenderListUpdateCounter();
}

void TangibleObjectAdapter::getCustomizationString(String& variables) {
	return ((TangibleObjectImplementation*) impl)->getCustomizationString(variables);
}

void TangibleObjectAdapter::setCustomizationString(const String& vars) {
	return ((TangibleObjectImplementation*) impl)->setCustomizationString(vars);
}

/*
 *	TangibleObjectHelper
 */

TangibleObjectHelper* TangibleObjectHelper::staticInitializer = TangibleObjectHelper::instance();

TangibleObjectHelper::TangibleObjectHelper() {
	className = "TangibleObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void TangibleObjectHelper::finalizeHelper() {
	TangibleObjectHelper::finalize();
}

DistributedObject* TangibleObjectHelper::instantiateObject() {
	return new TangibleObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TangibleObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TangibleObjectAdapter((TangibleObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

