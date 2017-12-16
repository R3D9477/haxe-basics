// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleAnimationKeyFrameEntry
#include <haxe/ui/parsers/modules/ModuleAnimationKeyFrameEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fb25c8da77d53dd7_105_new,"haxe.ui.parsers.modules.ModuleAnimationKeyFrameEntry","new",0x168032d1,"haxe.ui.parsers.modules.ModuleAnimationKeyFrameEntry.new","haxe/ui/parsers/modules/Module.hx",105,0xa34fcf1d)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ModuleAnimationKeyFrameEntry_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_fb25c8da77d53dd7_105_new)
HXLINE( 106)		this->time = (int)0;
HXLINE( 110)		this->componentRefs =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ModuleAnimationKeyFrameEntry_obj::__CreateEmpty() { return new ModuleAnimationKeyFrameEntry_obj; }

void *ModuleAnimationKeyFrameEntry_obj::_hx_vtable = 0;

Dynamic ModuleAnimationKeyFrameEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModuleAnimationKeyFrameEntry_obj > _hx_result = new ModuleAnimationKeyFrameEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModuleAnimationKeyFrameEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x208c3d7d;
}


hx::ObjectPtr< ModuleAnimationKeyFrameEntry_obj > ModuleAnimationKeyFrameEntry_obj::__new() {
	hx::ObjectPtr< ModuleAnimationKeyFrameEntry_obj > __this = new ModuleAnimationKeyFrameEntry_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ModuleAnimationKeyFrameEntry_obj > ModuleAnimationKeyFrameEntry_obj::__alloc(hx::Ctx *_hx_ctx) {
	ModuleAnimationKeyFrameEntry_obj *__this = (ModuleAnimationKeyFrameEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ModuleAnimationKeyFrameEntry_obj), true, "haxe.ui.parsers.modules.ModuleAnimationKeyFrameEntry"));
	*(void **)__this = ModuleAnimationKeyFrameEntry_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ModuleAnimationKeyFrameEntry_obj::ModuleAnimationKeyFrameEntry_obj()
{
}

void ModuleAnimationKeyFrameEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModuleAnimationKeyFrameEntry);
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(componentRefs,"componentRefs");
	HX_MARK_END_CLASS();
}

void ModuleAnimationKeyFrameEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(componentRefs,"componentRefs");
}

hx::Val ModuleAnimationKeyFrameEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return hx::Val( time ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"componentRefs") ) { return hx::Val( componentRefs ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ModuleAnimationKeyFrameEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"componentRefs") ) { componentRefs=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModuleAnimationKeyFrameEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("componentRefs","\x1d","\x0f","\x48","\xe9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ModuleAnimationKeyFrameEntry_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ModuleAnimationKeyFrameEntry_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ModuleAnimationKeyFrameEntry_obj,componentRefs),HX_HCSTRING("componentRefs","\x1d","\x0f","\x48","\xe9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ModuleAnimationKeyFrameEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String ModuleAnimationKeyFrameEntry_obj_sMemberFields[] = {
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("componentRefs","\x1d","\x0f","\x48","\xe9"),
	::String(null()) };

static void ModuleAnimationKeyFrameEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModuleAnimationKeyFrameEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModuleAnimationKeyFrameEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModuleAnimationKeyFrameEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class ModuleAnimationKeyFrameEntry_obj::__mClass;

void ModuleAnimationKeyFrameEntry_obj::__register()
{
	hx::Object *dummy = new ModuleAnimationKeyFrameEntry_obj;
	ModuleAnimationKeyFrameEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ModuleAnimationKeyFrameEntry","\x5f","\x76","\x40","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModuleAnimationKeyFrameEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ModuleAnimationKeyFrameEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModuleAnimationKeyFrameEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModuleAnimationKeyFrameEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModuleAnimationKeyFrameEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModuleAnimationKeyFrameEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
