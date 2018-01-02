// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentClassMap
#include <haxe/ui/core/ComponentClassMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b11db090752fc413_31_new,"haxe.ui.core.ComponentClassMap","new",0x05877fb6,"haxe.ui.core.ComponentClassMap.new","haxe/ui/core/ComponentClassMap.hx",31,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_35_getClassName,"haxe.ui.core.ComponentClassMap","getClassName",0xa8f6e517,"haxe.ui.core.ComponentClassMap.getClassName","haxe/ui/core/ComponentClassMap.hx",35,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_39_registerClassName,"haxe.ui.core.ComponentClassMap","registerClassName",0x6f480196,"haxe.ui.core.ComponentClassMap.registerClassName","haxe/ui/core/ComponentClassMap.hx",39,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_6_get_instance,"haxe.ui.core.ComponentClassMap","get_instance",0xcc5d8988,"haxe.ui.core.ComponentClassMap.get_instance","haxe/ui/core/ComponentClassMap.hx",6,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_14_get,"haxe.ui.core.ComponentClassMap","get",0x05822fec,"haxe.ui.core.ComponentClassMap.get","haxe/ui/core/ComponentClassMap.hx",14,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_18_register,"haxe.ui.core.ComponentClassMap","register",0xe9629f4d,"haxe.ui.core.ComponentClassMap.register","haxe/ui/core/ComponentClassMap.hx",18,0xb6f7845b)
HX_LOCAL_STACK_FRAME(_hx_pos_b11db090752fc413_22_list,"haxe.ui.core.ComponentClassMap","list",0xcfb8d848,"haxe.ui.core.ComponentClassMap.list","haxe/ui/core/ComponentClassMap.hx",22,0xb6f7845b)
namespace haxe{
namespace ui{
namespace core{

void ComponentClassMap_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b11db090752fc413_31_new)
HXDLIN(  31)		this->_map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ComponentClassMap_obj::__CreateEmpty() { return new ComponentClassMap_obj; }

void *ComponentClassMap_obj::_hx_vtable = 0;

Dynamic ComponentClassMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ComponentClassMap_obj > _hx_result = new ComponentClassMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentClassMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4c0d9008;
}

::String ComponentClassMap_obj::getClassName(::String alias){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_35_getClassName)
HXDLIN(  35)		return ( (::String)(this->_map->get(alias)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentClassMap_obj,getClassName,return )

void ComponentClassMap_obj::registerClassName(::String alias,::String className){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_39_registerClassName)
HXDLIN(  39)		this->_map->set(alias,className);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentClassMap_obj,registerClassName,(void))

 ::haxe::ui::core::ComponentClassMap ComponentClassMap_obj::_instance;

 ::haxe::ui::core::ComponentClassMap ComponentClassMap_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_b11db090752fc413_6_get_instance)
HXLINE(   7)		if (hx::IsNull( ::haxe::ui::core::ComponentClassMap_obj::_instance )) {
HXLINE(   8)			::haxe::ui::core::ComponentClassMap_obj::_instance =  ::haxe::ui::core::ComponentClassMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  10)		return ::haxe::ui::core::ComponentClassMap_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ComponentClassMap_obj,get_instance,return )

::String ComponentClassMap_obj::get(::String alias){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_14_get)
HXDLIN(  14)		return ::haxe::ui::core::ComponentClassMap_obj::get_instance()->getClassName(alias);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComponentClassMap_obj,get,return )

void ComponentClassMap_obj::_hx_register(::String alias,::String className){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_18_register)
HXDLIN(  18)		::haxe::ui::core::ComponentClassMap_obj::get_instance()->registerClassName(alias,className);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ComponentClassMap_obj,_hx_register,(void))

 ::Dynamic ComponentClassMap_obj::list(){
            	HX_STACKFRAME(&_hx_pos_b11db090752fc413_22_list)
HXDLIN(  22)		return ::haxe::ui::core::ComponentClassMap_obj::get_instance()->_map->keys();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ComponentClassMap_obj,list,return )


hx::ObjectPtr< ComponentClassMap_obj > ComponentClassMap_obj::__new() {
	hx::ObjectPtr< ComponentClassMap_obj > __this = new ComponentClassMap_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ComponentClassMap_obj > ComponentClassMap_obj::__alloc(hx::Ctx *_hx_ctx) {
	ComponentClassMap_obj *__this = (ComponentClassMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ComponentClassMap_obj), true, "haxe.ui.core.ComponentClassMap"));
	*(void **)__this = ComponentClassMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentClassMap_obj::ComponentClassMap_obj()
{
}

void ComponentClassMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentClassMap);
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_END_CLASS();
}

void ComponentClassMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_map,"_map");
}

hx::Val ComponentClassMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { return hx::Val( _map ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { return hx::Val( getClassName_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerClassName") ) { return hx::Val( registerClassName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ComponentClassMap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_instance() ); return true; } }
		if (HX_FIELD_EQ(inName,"register") ) { outValue = _hx_register_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

hx::Val ComponentClassMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ComponentClassMap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::core::ComponentClassMap >(); return true; }
	}
	return false;
}

void ComponentClassMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ComponentClassMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ComponentClassMap_obj,_map),HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ComponentClassMap_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::core::ComponentClassMap*/ ,(void *) &ComponentClassMap_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ComponentClassMap_obj_sMemberFields[] = {
	HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f"),
	HX_HCSTRING("getClassName","\x2d","\x2f","\x94","\xeb"),
	HX_HCSTRING("registerClassName","\xc0","\x67","\x18","\xc8"),
	::String(null()) };

static void ComponentClassMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentClassMap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ComponentClassMap_obj::_instance,"_instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComponentClassMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentClassMap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ComponentClassMap_obj::_instance,"_instance");
};

#endif

hx::Class ComponentClassMap_obj::__mClass;

static ::String ComponentClassMap_obj_sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("register","\x63","\xa6","\x9f","\xd0"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	::String(null())
};

void ComponentClassMap_obj::__register()
{
	hx::Object *dummy = new ComponentClassMap_obj;
	ComponentClassMap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.ComponentClassMap","\xc4","\x2c","\xbc","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ComponentClassMap_obj::__GetStatic;
	__mClass->mSetStaticField = &ComponentClassMap_obj::__SetStatic;
	__mClass->mMarkFunc = ComponentClassMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ComponentClassMap_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ComponentClassMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ComponentClassMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComponentClassMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentClassMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentClassMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
