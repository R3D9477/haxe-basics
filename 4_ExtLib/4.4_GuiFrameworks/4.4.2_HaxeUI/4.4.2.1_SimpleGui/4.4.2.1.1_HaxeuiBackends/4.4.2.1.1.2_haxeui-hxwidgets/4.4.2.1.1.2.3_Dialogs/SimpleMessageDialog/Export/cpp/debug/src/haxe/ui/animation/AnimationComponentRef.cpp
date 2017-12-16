// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationComponentRef
#include <haxe/ui/animation/AnimationComponentRef.h>
#endif
#ifndef INCLUDED_haxe_ui_animation_AnimationKeyFrame
#include <haxe/ui/animation/AnimationKeyFrame.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1bb060777b3b072c_3_new,"haxe.ui.animation.AnimationComponentRef","new",0x48e739d0,"haxe.ui.animation.AnimationComponentRef.new","haxe/ui/animation/AnimationComponentRef.hx",3,0x3810c941)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb060777b3b072c_15_addProperty,"haxe.ui.animation.AnimationComponentRef","addProperty",0xbed6d906,"haxe.ui.animation.AnimationComponentRef.addProperty","haxe/ui/animation/AnimationComponentRef.hx",15,0x3810c941)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb060777b3b072c_19_addVar,"haxe.ui.animation.AnimationComponentRef","addVar",0x65c70bd6,"haxe.ui.animation.AnimationComponentRef.addVar","haxe/ui/animation/AnimationComponentRef.hx",19,0x3810c941)
HX_LOCAL_STACK_FRAME(_hx_pos_1bb060777b3b072c_22_clone,"haxe.ui.animation.AnimationComponentRef","clone",0x6bb7b8cd,"haxe.ui.animation.AnimationComponentRef.clone","haxe/ui/animation/AnimationComponentRef.hx",22,0x3810c941)
namespace haxe{
namespace ui{
namespace animation{

void AnimationComponentRef_obj::__construct(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_1bb060777b3b072c_3_new)
HXLINE(   8)		this->vars =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(   7)		this->properties =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  11)		this->id = id;
            	}

Dynamic AnimationComponentRef_obj::__CreateEmpty() { return new AnimationComponentRef_obj; }

void *AnimationComponentRef_obj::_hx_vtable = 0;

Dynamic AnimationComponentRef_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AnimationComponentRef_obj > _hx_result = new AnimationComponentRef_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AnimationComponentRef_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x051ef734;
}

void AnimationComponentRef_obj::addProperty(::String name,Float value){
            	HX_STACKFRAME(&_hx_pos_1bb060777b3b072c_15_addProperty)
HXDLIN(  15)		this->properties->set(name,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimationComponentRef_obj,addProperty,(void))

void AnimationComponentRef_obj::addVar(::String name,::String value){
            	HX_STACKFRAME(&_hx_pos_1bb060777b3b072c_19_addVar)
HXDLIN(  19)		this->vars->set(name,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AnimationComponentRef_obj,addVar,(void))

 ::haxe::ui::animation::AnimationComponentRef AnimationComponentRef_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_1bb060777b3b072c_22_clone)
HXLINE(  23)		 ::haxe::ui::animation::AnimationComponentRef c =  ::haxe::ui::animation::AnimationComponentRef_obj::__alloc( HX_CTX ,this->id);
HXLINE(  24)		{
HXLINE(  24)			 ::Dynamic k = this->properties->keys();
HXDLIN(  24)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  24)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  25)				::Dynamic this1 = c->properties;
HXDLIN(  25)				( ( ::haxe::ds::StringMap)(this1) )->set(k1,( (Float)(this->properties->get(k1)) ));
            			}
            		}
HXLINE(  27)		{
HXLINE(  27)			 ::Dynamic k2 = this->vars->keys();
HXDLIN(  27)			while(( (bool)(k2->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  27)				::String k3 = ( (::String)(k2->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  28)				::Dynamic this2 = c->vars;
HXDLIN(  28)				( ( ::haxe::ds::StringMap)(this2) )->set(k3,this->vars->get(k3));
            			}
            		}
HXLINE(  30)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AnimationComponentRef_obj,clone,return )


hx::ObjectPtr< AnimationComponentRef_obj > AnimationComponentRef_obj::__new(::String id) {
	hx::ObjectPtr< AnimationComponentRef_obj > __this = new AnimationComponentRef_obj();
	__this->__construct(id);
	return __this;
}

hx::ObjectPtr< AnimationComponentRef_obj > AnimationComponentRef_obj::__alloc(hx::Ctx *_hx_ctx,::String id) {
	AnimationComponentRef_obj *__this = (AnimationComponentRef_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AnimationComponentRef_obj), true, "haxe.ui.animation.AnimationComponentRef"));
	*(void **)__this = AnimationComponentRef_obj::_hx_vtable;
	__this->__construct(id);
	return __this;
}

AnimationComponentRef_obj::AnimationComponentRef_obj()
{
}

void AnimationComponentRef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationComponentRef);
	HX_MARK_MEMBER_NAME(keyFrame,"keyFrame");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(vars,"vars");
	HX_MARK_END_CLASS();
}

void AnimationComponentRef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyFrame,"keyFrame");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(vars,"vars");
}

hx::Val AnimationComponentRef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"vars") ) { return hx::Val( vars ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addVar") ) { return hx::Val( addVar_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyFrame") ) { return hx::Val( keyFrame ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return hx::Val( properties ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addProperty") ) { return hx::Val( addProperty_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AnimationComponentRef_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"vars") ) { vars=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyFrame") ) { keyFrame=inValue.Cast<  ::haxe::ui::animation::AnimationKeyFrame >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationComponentRef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keyFrame","\x0e","\x1e","\xed","\x4a"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("vars","\xac","\x2b","\x49","\x4e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AnimationComponentRef_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::animation::AnimationKeyFrame*/ ,(int)offsetof(AnimationComponentRef_obj,keyFrame),HX_HCSTRING("keyFrame","\x0e","\x1e","\xed","\x4a")},
	{hx::fsString,(int)offsetof(AnimationComponentRef_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AnimationComponentRef_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AnimationComponentRef_obj,vars),HX_HCSTRING("vars","\xac","\x2b","\x49","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AnimationComponentRef_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimationComponentRef_obj_sMemberFields[] = {
	HX_HCSTRING("keyFrame","\x0e","\x1e","\xed","\x4a"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("vars","\xac","\x2b","\x49","\x4e"),
	HX_HCSTRING("addProperty","\x96","\x7f","\x94","\xdd"),
	HX_HCSTRING("addVar","\x46","\xef","\x0a","\x9f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void AnimationComponentRef_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationComponentRef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AnimationComponentRef_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationComponentRef_obj::__mClass,"__mClass");
};

#endif

hx::Class AnimationComponentRef_obj::__mClass;

void AnimationComponentRef_obj::__register()
{
	hx::Object *dummy = new AnimationComponentRef_obj;
	AnimationComponentRef_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.animation.AnimationComponentRef","\xde","\x51","\x3a","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AnimationComponentRef_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AnimationComponentRef_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimationComponentRef_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AnimationComponentRef_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationComponentRef_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationComponentRef_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace animation
