// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_Animation
#include <haxe/ui/animation/Animation.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationManager
#include <haxe/ui/animation/AnimationManager.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3723030db4c523bb_18_new,"haxe.ui.animation.AnimationManager","new",0xe7965197,"haxe.ui.animation.AnimationManager.new","haxe/ui/animation/AnimationManager.hx",18,0x8aa4b7b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3723030db4c523bb_24_registerAnimation,"haxe.ui.animation.AnimationManager","registerAnimation",0x5b615798,"haxe.ui.animation.AnimationManager.registerAnimation","haxe/ui/animation/AnimationManager.hx",24,0x8aa4b7b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3723030db4c523bb_27_run,"haxe.ui.animation.AnimationManager","run",0xe7996882,"haxe.ui.animation.AnimationManager.run","haxe/ui/animation/AnimationManager.hx",27,0x8aa4b7b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3723030db4c523bb_31_run,"haxe.ui.animation.AnimationManager","run",0xe7996882,"haxe.ui.animation.AnimationManager.run","haxe/ui/animation/AnimationManager.hx",31,0x8aa4b7b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3723030db4c523bb_39_loop,"haxe.ui.animation.AnimationManager","loop",0xbaa6354d,"haxe.ui.animation.AnimationManager.loop","haxe/ui/animation/AnimationManager.hx",39,0x8aa4b7b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3723030db4c523bb_43_loop,"haxe.ui.animation.AnimationManager","loop",0xbaa6354d,"haxe.ui.animation.AnimationManager.loop","haxe/ui/animation/AnimationManager.hx",43,0x8aa4b7b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3723030db4c523bb_51_initAnimation,"haxe.ui.animation.AnimationManager","initAnimation",0xd7cb7dcb,"haxe.ui.animation.AnimationManager.initAnimation","haxe/ui/animation/AnimationManager.hx",51,0x8aa4b7b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3723030db4c523bb_69_get,"haxe.ui.animation.AnimationManager","get",0xe79101cd,"haxe.ui.animation.AnimationManager.get","haxe/ui/animation/AnimationManager.hx",69,0x8aa4b7b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3723030db4c523bb_8_get_instance,"haxe.ui.animation.AnimationManager","get_instance",0x05dff387,"haxe.ui.animation.AnimationManager.get_instance","haxe/ui/animation/AnimationManager.hx",8,0x8aa4b7b8)
namespace haxe{
namespace ui{
namespace animation{

void AnimationManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_3723030db4c523bb_18_new)
HXDLIN(  18)		this->_animations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic AnimationManager_obj::__CreateEmpty() { return new AnimationManager_obj; }

void *AnimationManager_obj::_hx_vtable = 0;

Dynamic AnimationManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AnimationManager_obj > _hx_result = new AnimationManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimationManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x27418f73;
}

void AnimationManager_obj::registerAnimation(::String id, ::haxe::ui::animation::Animation animation){
            	HX_STACKFRAME(&_hx_pos_3723030db4c523bb_24_registerAnimation)
HXDLIN(  24)		this->_animations->set(id,animation);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimationManager_obj,registerAnimation,(void))

 ::haxe::ui::animation::Animation AnimationManager_obj::run(::String id, ::haxe::ds::StringMap components, ::haxe::ds::StringMap vars, ::Dynamic complete){
            	HX_STACKFRAME(&_hx_pos_3723030db4c523bb_27_run)
HXLINE(  28)		 ::haxe::ui::animation::Animation a = this->initAnimation(id,components,vars);
HXLINE(  29)		if (hx::IsNotNull( a )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,complete) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_3723030db4c523bb_31_run)
HXLINE(  31)				if (hx::IsNotNull( complete )) {
HXLINE(  32)					complete();
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  30)			a->start( ::Dynamic(new _hx_Closure_0(complete)));
            		}
HXLINE(  36)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC4(AnimationManager_obj,run,return )

 ::haxe::ui::animation::Animation AnimationManager_obj::loop(::String id, ::haxe::ds::StringMap components, ::haxe::ds::StringMap vars, ::Dynamic complete){
            	HX_STACKFRAME(&_hx_pos_3723030db4c523bb_39_loop)
HXLINE(  40)		 ::haxe::ui::animation::Animation a = this->initAnimation(id,components,vars);
HXLINE(  41)		if (hx::IsNotNull( a )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,complete) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_3723030db4c523bb_43_loop)
HXLINE(  43)				if (hx::IsNotNull( complete )) {
HXLINE(  44)					complete();
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  42)			a->loop( ::Dynamic(new _hx_Closure_0(complete)));
            		}
HXLINE(  48)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC4(AnimationManager_obj,loop,return )

 ::haxe::ui::animation::Animation AnimationManager_obj::initAnimation(::String id, ::haxe::ds::StringMap components, ::haxe::ds::StringMap vars){
            	HX_STACKFRAME(&_hx_pos_3723030db4c523bb_51_initAnimation)
HXLINE(  52)		 ::haxe::ui::animation::Animation a = this->get(id);
HXLINE(  53)		if (hx::IsNotNull( a )) {
HXLINE(  54)			if (hx::IsNotNull( components )) {
HXLINE(  55)				 ::Dynamic k = components->keys();
HXDLIN(  55)				while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  55)					::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  56)					a->setComponent(k1,components->get(k1).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE(  60)			if (hx::IsNotNull( vars )) {
HXLINE(  61)				 ::Dynamic k2 = vars->keys();
HXDLIN(  61)				while(( (bool)(k2->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  61)					::String k3 = ( (::String)(k2->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  62)					a->setVar(k3,( (Float)(vars->get(k3)) ));
            				}
            			}
            		}
HXLINE(  66)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC3(AnimationManager_obj,initAnimation,return )

 ::haxe::ui::animation::Animation AnimationManager_obj::get(::String id){
            	HX_STACKFRAME(&_hx_pos_3723030db4c523bb_69_get)
HXLINE(  70)		 ::haxe::ui::animation::Animation a = this->_animations->get(id).StaticCast<  ::haxe::ui::animation::Animation >();
HXLINE(  71)		if (hx::IsNull( a )) {
HXLINE(  72)			return null();
            		}
HXLINE(  74)		return a->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimationManager_obj,get,return )

 ::haxe::ui::animation::AnimationManager AnimationManager_obj::_instance;

 ::haxe::ui::animation::AnimationManager AnimationManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_3723030db4c523bb_8_get_instance)
HXLINE(   9)		if (hx::IsNull( ::haxe::ui::animation::AnimationManager_obj::_instance )) {
HXLINE(  10)			::haxe::ui::animation::AnimationManager_obj::_instance =  ::haxe::ui::animation::AnimationManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  12)		return ::haxe::ui::animation::AnimationManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AnimationManager_obj,get_instance,return )


hx::ObjectPtr< AnimationManager_obj > AnimationManager_obj::__new() {
	hx::ObjectPtr< AnimationManager_obj > __this = new AnimationManager_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AnimationManager_obj > AnimationManager_obj::__alloc(hx::Ctx *_hx_ctx) {
	AnimationManager_obj *__this = (AnimationManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AnimationManager_obj), true, "haxe.ui.animation.AnimationManager"));
	*(void **)__this = AnimationManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AnimationManager_obj::AnimationManager_obj()
{
}

void AnimationManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationManager);
	HX_MARK_MEMBER_NAME(_animations,"_animations");
	HX_MARK_END_CLASS();
}

void AnimationManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_animations,"_animations");
}

hx::Val AnimationManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return hx::Val( loop_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { return hx::Val( _animations ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initAnimation") ) { return hx::Val( initAnimation_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerAnimation") ) { return hx::Val( registerAnimation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AnimationManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_instance() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

hx::Val AnimationManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { _animations=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AnimationManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::animation::AnimationManager >(); return true; }
	}
	return false;
}

void AnimationManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_animations","\x0e","\x02","\xa6","\x55"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AnimationManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AnimationManager_obj,_animations),HX_HCSTRING("_animations","\x0e","\x02","\xa6","\x55")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo AnimationManager_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::animation::AnimationManager*/ ,(void *) &AnimationManager_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String AnimationManager_obj_sMemberFields[] = {
	HX_HCSTRING("_animations","\x0e","\x02","\xa6","\x55"),
	HX_HCSTRING("registerAnimation","\x21","\xc4","\x0f","\x37"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("initAnimation","\xd4","\xb1","\x34","\xc6"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void AnimationManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AnimationManager_obj::_instance,"_instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AnimationManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AnimationManager_obj::_instance,"_instance");
};

#endif

hx::Class AnimationManager_obj::__mClass;

static ::String AnimationManager_obj_sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null())
};

void AnimationManager_obj::__register()
{
	hx::Object *dummy = new AnimationManager_obj;
	AnimationManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.animation.AnimationManager","\x25","\x3a","\x62","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AnimationManager_obj::__GetStatic;
	__mClass->mSetStaticField = &AnimationManager_obj::__SetStatic;
	__mClass->mMarkFunc = AnimationManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AnimationManager_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AnimationManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimationManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AnimationManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace animation
