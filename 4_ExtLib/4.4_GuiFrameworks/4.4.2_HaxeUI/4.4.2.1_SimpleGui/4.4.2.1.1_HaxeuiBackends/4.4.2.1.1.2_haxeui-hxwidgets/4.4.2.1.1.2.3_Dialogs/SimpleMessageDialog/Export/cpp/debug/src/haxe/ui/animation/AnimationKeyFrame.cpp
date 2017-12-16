// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_Animation
#include <haxe/ui/animation/Animation.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationComponentRef
#include <haxe/ui/animation/AnimationComponentRef.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationKeyFrame
#include <haxe/ui/animation/AnimationKeyFrame.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0dc7ecba347f0be6_7_new,"haxe.ui.animation.AnimationKeyFrame","new",0x8f783b48,"haxe.ui.animation.AnimationKeyFrame.new","haxe/ui/animation/AnimationKeyFrame.hx",7,0x4022fa49)
HX_LOCAL_STACK_FRAME(_hx_pos_0dc7ecba347f0be6_17_addComponentRef,"haxe.ui.animation.AnimationKeyFrame","addComponentRef",0x4cca873f,"haxe.ui.animation.AnimationKeyFrame.addComponentRef","haxe/ui/animation/AnimationKeyFrame.hx",17,0x4022fa49)
HX_LOCAL_STACK_FRAME(_hx_pos_0dc7ecba347f0be6_27_run,"haxe.ui.animation.AnimationKeyFrame","run",0x8f7b5233,"haxe.ui.animation.AnimationKeyFrame.run","haxe/ui/animation/AnimationKeyFrame.hx",27,0x4022fa49)
HX_LOCAL_STACK_FRAME(_hx_pos_0dc7ecba347f0be6_61_stop,"haxe.ui.animation.AnimationKeyFrame","stop",0xfd15101a,"haxe.ui.animation.AnimationKeyFrame.stop","haxe/ui/animation/AnimationKeyFrame.hx",61,0x4022fa49)
HX_LOCAL_STACK_FRAME(_hx_pos_0dc7ecba347f0be6_72_onComplete,"haxe.ui.animation.AnimationKeyFrame","onComplete",0x73d31710,"haxe.ui.animation.AnimationKeyFrame.onComplete","haxe/ui/animation/AnimationKeyFrame.hx",72,0x4022fa49)
HX_LOCAL_STACK_FRAME(_hx_pos_0dc7ecba347f0be6_79_clone,"haxe.ui.animation.AnimationKeyFrame","clone",0x39a60845,"haxe.ui.animation.AnimationKeyFrame.clone","haxe/ui/animation/AnimationKeyFrame.hx",79,0x4022fa49)
namespace haxe{
namespace ui{
namespace animation{

void AnimationKeyFrame_obj::__construct(int time){
            	HX_STACKFRAME(&_hx_pos_0dc7ecba347f0be6_7_new)
HXLINE(  25)		this->_count = (int)0;
HXLINE(  11)		this->componentRefs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  14)		this->time = time;
            	}

Dynamic AnimationKeyFrame_obj::__CreateEmpty() { return new AnimationKeyFrame_obj; }

void *AnimationKeyFrame_obj::_hx_vtable = 0;

Dynamic AnimationKeyFrame_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AnimationKeyFrame_obj > _hx_result = new AnimationKeyFrame_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AnimationKeyFrame_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x476a8648;
}

 ::haxe::ui::animation::AnimationComponentRef AnimationKeyFrame_obj::addComponentRef(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_0dc7ecba347f0be6_17_addComponentRef)
HXLINE(  18)		 ::haxe::ui::animation::AnimationComponentRef componentRef =  ::haxe::ui::animation::AnimationComponentRef_obj::__alloc( HX_CTX ,id);
HXLINE(  19)		componentRef->keyFrame = hx::ObjectPtr<OBJ_>(this);
HXLINE(  20)		this->componentRefs->push(componentRef);
HXLINE(  21)		return componentRef;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimationKeyFrame_obj,addComponentRef,return )

void AnimationKeyFrame_obj::run(Float duration, ::Dynamic complete){
            	HX_STACKFRAME(&_hx_pos_0dc7ecba347f0be6_27_run)
HXLINE(  28)		this->_completeCallback = complete;
HXLINE(  29)		this->_count = this->componentRefs->length;
HXLINE(  30)		{
HXLINE(  30)			int _g = (int)0;
HXDLIN(  30)			::Array< ::Dynamic> _g1 = this->componentRefs;
HXDLIN(  30)			while((_g < _g1->length)){
HXLINE(  30)				 ::haxe::ui::animation::AnimationComponentRef ref = _g1->__get(_g).StaticCast<  ::haxe::ui::animation::AnimationComponentRef >();
HXDLIN(  30)				_g = (_g + (int)1);
HXLINE(  31)				if (hx::IsNull( this->animation->getComponent(ref->id) )) {
HXLINE(  32)					this->_count--;
            				}
            			}
            		}
HXLINE(  36)		{
HXLINE(  36)			int _g2 = (int)0;
HXDLIN(  36)			::Array< ::Dynamic> _g11 = this->componentRefs;
HXDLIN(  36)			while((_g2 < _g11->length)){
HXLINE(  36)				 ::haxe::ui::animation::AnimationComponentRef ref1 = _g11->__get(_g2).StaticCast<  ::haxe::ui::animation::AnimationComponentRef >();
HXDLIN(  36)				_g2 = (_g2 + (int)1);
HXLINE(  37)				 ::haxe::ui::core::Component actualComponent = this->animation->getComponent(ref1->id);
HXLINE(  38)				if (hx::IsNotNull( actualComponent )) {
HXLINE(  39)					 ::Dynamic props =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE(  41)					{
HXLINE(  41)						 ::Dynamic k = ref1->properties->keys();
HXDLIN(  41)						while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  41)							::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  42)							::Reflect_obj::setField(props,k1,ref1->properties->get(k1));
            						}
            					}
HXLINE(  45)					{
HXLINE(  45)						 ::Dynamic k2 = ref1->vars->keys();
HXDLIN(  45)						while(( (bool)(k2->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  45)							::String k3 = ( (::String)(k2->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  46)							::String v = ( (::String)(ref1->vars->get(k3)) );
HXLINE(  47)							if (this->animation->vars->exists(v)) {
HXLINE(  48)								::Reflect_obj::setField(props,k3,this->animation->vars->get(v));
            							}
            						}
            					}
HXLINE(  55)					this->onComplete();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimationKeyFrame_obj,run,(void))

void AnimationKeyFrame_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_0dc7ecba347f0be6_61_stop)
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationKeyFrame_obj,stop,(void))

void AnimationKeyFrame_obj::onComplete(){
            	HX_STACKFRAME(&_hx_pos_0dc7ecba347f0be6_72_onComplete)
HXLINE(  73)		this->_count--;
HXLINE(  74)		if ((this->_count == (int)0)) {
HXLINE(  75)			this->_completeCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationKeyFrame_obj,onComplete,(void))

 ::haxe::ui::animation::AnimationKeyFrame AnimationKeyFrame_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_0dc7ecba347f0be6_79_clone)
HXLINE(  80)		 ::haxe::ui::animation::AnimationKeyFrame c =  ::haxe::ui::animation::AnimationKeyFrame_obj::__alloc( HX_CTX ,this->time);
HXLINE(  81)		c->animation = this->animation;
HXLINE(  82)		{
HXLINE(  82)			int _g = (int)0;
HXDLIN(  82)			::Array< ::Dynamic> _g1 = this->componentRefs;
HXDLIN(  82)			while((_g < _g1->length)){
HXLINE(  82)				 ::haxe::ui::animation::AnimationComponentRef r = _g1->__get(_g).StaticCast<  ::haxe::ui::animation::AnimationComponentRef >();
HXDLIN(  82)				_g = (_g + (int)1);
HXLINE(  83)				 ::haxe::ui::animation::AnimationComponentRef cr = r->clone();
HXLINE(  84)				cr->keyFrame = c;
HXLINE(  85)				c->componentRefs->push(cr);
            			}
            		}
HXLINE(  87)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationKeyFrame_obj,clone,return )


hx::ObjectPtr< AnimationKeyFrame_obj > AnimationKeyFrame_obj::__new(int time) {
	hx::ObjectPtr< AnimationKeyFrame_obj > __this = new AnimationKeyFrame_obj();
	__this->__construct(time);
	return __this;
}

hx::ObjectPtr< AnimationKeyFrame_obj > AnimationKeyFrame_obj::__alloc(hx::Ctx *_hx_ctx,int time) {
	AnimationKeyFrame_obj *__this = (AnimationKeyFrame_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AnimationKeyFrame_obj), true, "haxe.ui.animation.AnimationKeyFrame"));
	*(void **)__this = AnimationKeyFrame_obj::_hx_vtable;
	__this->__construct(time);
	return __this;
}

AnimationKeyFrame_obj::AnimationKeyFrame_obj()
{
}

void AnimationKeyFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationKeyFrame);
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(componentRefs,"componentRefs");
	HX_MARK_MEMBER_NAME(_completeCallback,"_completeCallback");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_END_CLASS();
}

void AnimationKeyFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(componentRefs,"componentRefs");
	HX_VISIT_MEMBER_NAME(_completeCallback,"_completeCallback");
	HX_VISIT_MEMBER_NAME(_count,"_count");
}

hx::Val AnimationKeyFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return hx::Val( time ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { return hx::Val( _count ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return hx::Val( animation ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"componentRefs") ) { return hx::Val( componentRefs ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addComponentRef") ) { return hx::Val( addComponentRef_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_completeCallback") ) { return hx::Val( _completeCallback ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AnimationKeyFrame_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast<  ::haxe::ui::animation::Animation >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"componentRefs") ) { componentRefs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_completeCallback") ) { _completeCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationKeyFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("componentRefs","\x1d","\x0f","\x48","\xe9"));
	outFields->push(HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AnimationKeyFrame_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::animation::Animation*/ ,(int)offsetof(AnimationKeyFrame_obj,animation),HX_HCSTRING("animation","\x04","\xef","\x34","\x4b")},
	{hx::fsInt,(int)offsetof(AnimationKeyFrame_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AnimationKeyFrame_obj,componentRefs),HX_HCSTRING("componentRefs","\x1d","\x0f","\x48","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AnimationKeyFrame_obj,_completeCallback),HX_HCSTRING("_completeCallback","\xfd","\x25","\x70","\xe9")},
	{hx::fsInt,(int)offsetof(AnimationKeyFrame_obj,_count),HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AnimationKeyFrame_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimationKeyFrame_obj_sMemberFields[] = {
	HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("componentRefs","\x1d","\x0f","\x48","\xe9"),
	HX_HCSTRING("addComponentRef","\x57","\x60","\x3d","\xad"),
	HX_HCSTRING("_completeCallback","\xfd","\x25","\x70","\xe9"),
	HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void AnimationKeyFrame_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationKeyFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AnimationKeyFrame_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationKeyFrame_obj::__mClass,"__mClass");
};

#endif

hx::Class AnimationKeyFrame_obj::__mClass;

void AnimationKeyFrame_obj::__register()
{
	hx::Object *dummy = new AnimationKeyFrame_obj;
	AnimationKeyFrame_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.animation.AnimationKeyFrame","\x56","\x37","\xdf","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AnimationKeyFrame_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AnimationKeyFrame_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimationKeyFrame_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AnimationKeyFrame_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationKeyFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationKeyFrame_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace animation
