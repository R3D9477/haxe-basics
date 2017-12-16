// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleAnimationEntry
#include <haxe/ui/parsers/modules/ModuleAnimationEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleAnimationKeyFrameEntry
#include <haxe/ui/parsers/modules/ModuleAnimationKeyFrameEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9be349c9eb6d8dc9_101_new,"haxe.ui.parsers.modules.ModuleAnimationEntry","new",0x0bae4fbf,"haxe.ui.parsers.modules.ModuleAnimationEntry.new","haxe/ui/parsers/modules/Module.hx",101,0xa34fcf1d)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ModuleAnimationEntry_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9be349c9eb6d8dc9_101_new)
HXDLIN( 101)		this->keyFrames = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic ModuleAnimationEntry_obj::__CreateEmpty() { return new ModuleAnimationEntry_obj; }

void *ModuleAnimationEntry_obj::_hx_vtable = 0;

Dynamic ModuleAnimationEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModuleAnimationEntry_obj > _hx_result = new ModuleAnimationEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModuleAnimationEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x045deb47;
}


hx::ObjectPtr< ModuleAnimationEntry_obj > ModuleAnimationEntry_obj::__new() {
	hx::ObjectPtr< ModuleAnimationEntry_obj > __this = new ModuleAnimationEntry_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ModuleAnimationEntry_obj > ModuleAnimationEntry_obj::__alloc(hx::Ctx *_hx_ctx) {
	ModuleAnimationEntry_obj *__this = (ModuleAnimationEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ModuleAnimationEntry_obj), true, "haxe.ui.parsers.modules.ModuleAnimationEntry"));
	*(void **)__this = ModuleAnimationEntry_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ModuleAnimationEntry_obj::ModuleAnimationEntry_obj()
{
}

void ModuleAnimationEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModuleAnimationEntry);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(ease,"ease");
	HX_MARK_MEMBER_NAME(keyFrames,"keyFrames");
	HX_MARK_END_CLASS();
}

void ModuleAnimationEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(ease,"ease");
	HX_VISIT_MEMBER_NAME(keyFrames,"keyFrames");
}

hx::Val ModuleAnimationEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return hx::Val( ease ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyFrames") ) { return hx::Val( keyFrames ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ModuleAnimationEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { ease=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyFrames") ) { keyFrames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModuleAnimationEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"));
	outFields->push(HX_HCSTRING("keyFrames","\xa5","\x2e","\x8d","\x44"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ModuleAnimationEntry_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ModuleAnimationEntry_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(ModuleAnimationEntry_obj,ease),HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ModuleAnimationEntry_obj,keyFrames),HX_HCSTRING("keyFrames","\xa5","\x2e","\x8d","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ModuleAnimationEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String ModuleAnimationEntry_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	HX_HCSTRING("keyFrames","\xa5","\x2e","\x8d","\x44"),
	::String(null()) };

static void ModuleAnimationEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModuleAnimationEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModuleAnimationEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModuleAnimationEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class ModuleAnimationEntry_obj::__mClass;

void ModuleAnimationEntry_obj::__register()
{
	hx::Object *dummy = new ModuleAnimationEntry_obj;
	ModuleAnimationEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ModuleAnimationEntry","\x4d","\x04","\xc6","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModuleAnimationEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ModuleAnimationEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModuleAnimationEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModuleAnimationEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModuleAnimationEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModuleAnimationEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
