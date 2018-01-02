// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Behaviour
#include <haxe/ui/core/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9dbab322c96a19d9_9_new,"haxe.ui.core.Behaviour","new",0x444665d2,"haxe.ui.core.Behaviour.new","haxe/ui/core/Behaviour.hx",9,0x9a308cbf)
HX_LOCAL_STACK_FRAME(_hx_pos_9dbab322c96a19d9_21_set,"haxe.ui.core.Behaviour","set",0x444a3114,"haxe.ui.core.Behaviour.set","haxe/ui/core/Behaviour.hx",21,0x9a308cbf)
HX_LOCAL_STACK_FRAME(_hx_pos_9dbab322c96a19d9_29_get,"haxe.ui.core.Behaviour","get",0x44411608,"haxe.ui.core.Behaviour.get","haxe/ui/core/Behaviour.hx",29,0x9a308cbf)
HX_LOCAL_STACK_FRAME(_hx_pos_9dbab322c96a19d9_33_getDynamic,"haxe.ui.core.Behaviour","getDynamic",0x58a80257,"haxe.ui.core.Behaviour.getDynamic","haxe/ui/core/Behaviour.hx",33,0x9a308cbf)
HX_LOCAL_STACK_FRAME(_hx_pos_9dbab322c96a19d9_36_run,"haxe.ui.core.Behaviour","run",0x44497cbd,"haxe.ui.core.Behaviour.run","haxe/ui/core/Behaviour.hx",36,0x9a308cbf)
HX_LOCAL_STACK_FRAME(_hx_pos_9dbab322c96a19d9_43_update,"haxe.ui.core.Behaviour","update",0x8e7863d7,"haxe.ui.core.Behaviour.update","haxe/ui/core/Behaviour.hx",43,0x9a308cbf)
HX_LOCAL_STACK_FRAME(_hx_pos_9dbab322c96a19d9_51_call,"haxe.ui.core.Behaviour","call",0x720a46ec,"haxe.ui.core.Behaviour.call","haxe/ui/core/Behaviour.hx",51,0x9a308cbf)
HX_LOCAL_STACK_FRAME(_hx_pos_9dbab322c96a19d9_57_getConfigValue,"haxe.ui.core.Behaviour","getConfigValue",0x1d108827,"haxe.ui.core.Behaviour.getConfigValue","haxe/ui/core/Behaviour.hx",57,0x9a308cbf)
HX_LOCAL_STACK_FRAME(_hx_pos_9dbab322c96a19d9_70_getConfigValueBool,"haxe.ui.core.Behaviour","getConfigValueBool",0x0489d7f1,"haxe.ui.core.Behaviour.getConfigValueBool","haxe/ui/core/Behaviour.hx",70,0x9a308cbf)
namespace haxe{
namespace ui{
namespace core{

void Behaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_9dbab322c96a19d9_9_new)
HXLINE(  10)		this->config = null();
HXLINE(  15)		this->_component = component;
            	}

Dynamic Behaviour_obj::__CreateEmpty() { return new Behaviour_obj; }

void *Behaviour_obj::_hx_vtable = 0;

Dynamic Behaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Behaviour_obj > _hx_result = new Behaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Behaviour_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25c11f40;
}

void Behaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_9dbab322c96a19d9_21_set)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Behaviour_obj,set,(void))

 ::haxe::ui::util::VariantType Behaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_9dbab322c96a19d9_29_get)
HXDLIN(  29)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviour_obj,get,return )

 ::Dynamic Behaviour_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_9dbab322c96a19d9_33_getDynamic)
HXDLIN(  33)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviour_obj,getDynamic,return )

void Behaviour_obj::run(){
            	HX_STACKFRAME(&_hx_pos_9dbab322c96a19d9_36_run)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviour_obj,run,(void))

void Behaviour_obj::update(){
            	HX_STACKFRAME(&_hx_pos_9dbab322c96a19d9_43_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviour_obj,update,(void))

 ::haxe::ui::util::VariantType Behaviour_obj::call(::String id){
            	HX_STACKFRAME(&_hx_pos_9dbab322c96a19d9_51_call)
HXDLIN(  51)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Behaviour_obj,call,return )

::String Behaviour_obj::getConfigValue(::String name,::String defaultValue){
            	HX_STACKFRAME(&_hx_pos_9dbab322c96a19d9_57_getConfigValue)
HXLINE(  58)		if (hx::IsNull( this->config )) {
HXLINE(  59)			return defaultValue;
            		}
HXLINE(  61)		if ((this->config->exists(name) == false)) {
HXLINE(  62)			return defaultValue;
            		}
HXLINE(  64)		return ( (::String)(this->config->get(name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviour_obj,getConfigValue,return )

bool Behaviour_obj::getConfigValueBool(::String name,hx::Null< bool >  __o_defaultValue){
bool defaultValue = __o_defaultValue.Default(false);
            	HX_STACKFRAME(&_hx_pos_9dbab322c96a19d9_70_getConfigValueBool)
HXLINE(  71)		bool v = defaultValue;
HXLINE(  72)		::String s = this->getConfigValue(name,null());
HXLINE(  73)		if (hx::IsNotNull( s )) {
HXLINE(  74)			v = (s == HX_("true",4e,a7,03,4d));
            		}
HXLINE(  76)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviour_obj,getConfigValueBool,return )


hx::ObjectPtr< Behaviour_obj > Behaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< Behaviour_obj > __this = new Behaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< Behaviour_obj > Behaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	Behaviour_obj *__this = (Behaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Behaviour_obj), true, "haxe.ui.core.Behaviour"));
	*(void **)__this = Behaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

Behaviour_obj::Behaviour_obj()
{
}

void Behaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Behaviour);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_END_CLASS();
}

void Behaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(_component,"_component");
}

hx::Val Behaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return hx::Val( call_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return hx::Val( config ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return hx::Val( _component ); }
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return hx::Val( getDynamic_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getConfigValue") ) { return hx::Val( getConfigValue_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getConfigValueBool") ) { return hx::Val( getConfigValueBool_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Behaviour_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Behaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("_component","\x7e","\x6c","\xf6","\x6a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Behaviour_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Behaviour_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*::haxe::ui::core::Component*/ ,(int)offsetof(Behaviour_obj,_component),HX_HCSTRING("_component","\x7e","\x6c","\xf6","\x6a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Behaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String Behaviour_obj_sMemberFields[] = {
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("_component","\x7e","\x6c","\xf6","\x6a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("getDynamic","\x89","\x25","\x77","\x85"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	HX_HCSTRING("getConfigValue","\x59","\x2c","\xb6","\x2d"),
	HX_HCSTRING("getConfigValueBool","\x23","\x7d","\xda","\x4c"),
	::String(null()) };

static void Behaviour_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Behaviour_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Behaviour_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Behaviour_obj::__mClass,"__mClass");
};

#endif

hx::Class Behaviour_obj::__mClass;

void Behaviour_obj::__register()
{
	hx::Object *dummy = new Behaviour_obj;
	Behaviour_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.Behaviour","\xe0","\xd4","\xce","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Behaviour_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Behaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Behaviour_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Behaviour_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Behaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Behaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
