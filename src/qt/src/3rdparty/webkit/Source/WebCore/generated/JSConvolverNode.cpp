/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(WEB_AUDIO)

#include "JSConvolverNode.h"

#include "AudioBuffer.h"
#include "ConvolverNode.h"
#include "JSAudioBuffer.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSConvolverNode);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSConvolverNodeTableValues[3] =
{
    { "buffer", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsConvolverNodeBuffer), (intptr_t)setJSConvolverNodeBuffer THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsConvolverNodeConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSConvolverNodeTable = { 4, 3, JSConvolverNodeTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSConvolverNodeConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSConvolverNodeConstructorTable = { 1, 0, JSConvolverNodeConstructorTableValues, 0 };
class JSConvolverNodeConstructor : public DOMConstructorObject {
public:
    JSConvolverNodeConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSConvolverNodeConstructor::s_info = { "ConvolverNodeConstructor", &DOMConstructorObject::s_info, &JSConvolverNodeConstructorTable, 0 };

JSConvolverNodeConstructor::JSConvolverNodeConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSConvolverNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSConvolverNodeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSConvolverNodeConstructor, JSDOMWrapper>(exec, &JSConvolverNodeConstructorTable, this, propertyName, slot);
}

bool JSConvolverNodeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSConvolverNodeConstructor, JSDOMWrapper>(exec, &JSConvolverNodeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSConvolverNodePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSConvolverNodePrototypeTable = { 1, 0, JSConvolverNodePrototypeTableValues, 0 };
const ClassInfo JSConvolverNodePrototype::s_info = { "ConvolverNodePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSConvolverNodePrototypeTable, 0 };

JSObject* JSConvolverNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSConvolverNode>(exec, globalObject);
}

const ClassInfo JSConvolverNode::s_info = { "ConvolverNode", &JSAudioNode::s_info, &JSConvolverNodeTable, 0 };

JSConvolverNode::JSConvolverNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ConvolverNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSConvolverNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSConvolverNodePrototype(exec->globalData(), globalObject, JSConvolverNodePrototype::createStructure(exec->globalData(), JSAudioNodePrototype::self(exec, globalObject)));
}

bool JSConvolverNode::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSConvolverNode, Base>(exec, &JSConvolverNodeTable, this, propertyName, slot);
}

bool JSConvolverNode::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSConvolverNode, Base>(exec, &JSConvolverNodeTable, this, propertyName, descriptor);
}

JSValue jsConvolverNodeBuffer(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSConvolverNode* castedThis = static_cast<JSConvolverNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ConvolverNode* imp = static_cast<ConvolverNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->buffer()));
    return result;
}


JSValue jsConvolverNodeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSConvolverNode* domObject = static_cast<JSConvolverNode*>(asObject(slotBase));
    return JSConvolverNode::getConstructor(exec, domObject->globalObject());
}

void JSConvolverNode::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSConvolverNode, Base>(exec, propertyName, value, &JSConvolverNodeTable, this, slot);
}

void setJSConvolverNodeBuffer(ExecState* exec, JSObject* thisObject, JSValue value)
{
    static_cast<JSConvolverNode*>(thisObject)->setBuffer(exec, value);
}


JSValue JSConvolverNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSConvolverNodeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, ConvolverNode* impl)
{
    return wrap<JSConvolverNode>(exec, globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)
