// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentParser
#include <haxe/ui/parsers/ui/ComponentParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_JSONParser
#include <haxe/ui/parsers/ui/JSONParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_ObjectParser
#include <haxe/ui/parsers/ui/ObjectParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_257de4c1d7ff580a_5_new,"haxe.ui.parsers.ui.JSONParser","new",0x63b65ce7,"haxe.ui.parsers.ui.JSONParser.new","haxe/ui/parsers/ui/JSONParser.hx",5,0xae2c3869)
namespace haxe{
namespace ui{
namespace parsers{
namespace ui{

void JSONParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_257de4c1d7ff580a_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic JSONParser_obj::__CreateEmpty() { return new JSONParser_obj; }

void *JSONParser_obj::_hx_vtable = 0;

Dynamic JSONParser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JSONParser_obj > _hx_result = new JSONParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JSONParser_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x310ae04e) {
		if (inClassId<=(int)0x049b71ad) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x049b71ad;
		} else {
			return inClassId==(int)0x310ae04e;
		}
	} else {
		return inClassId==(int)0x350ca508;
	}
}


hx::ObjectPtr< JSONParser_obj > JSONParser_obj::__new() {
	hx::ObjectPtr< JSONParser_obj > __this = new JSONParser_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< JSONParser_obj > JSONParser_obj::__alloc(hx::Ctx *_hx_ctx) {
	JSONParser_obj *__this = (JSONParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JSONParser_obj), true, "haxe.ui.parsers.ui.JSONParser"));
	*(void **)__this = JSONParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

JSONParser_obj::JSONParser_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *JSONParser_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *JSONParser_obj_sStaticStorageInfo = 0;
#endif

static void JSONParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JSONParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JSONParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JSONParser_obj::__mClass,"__mClass");
};

#endif

hx::Class JSONParser_obj::__mClass;

void JSONParser_obj::__register()
{
	hx::Object *dummy = new JSONParser_obj;
	JSONParser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.ui.JSONParser","\x75","\x5d","\x26","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JSONParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JSONParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JSONParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JSONParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JSONParser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui
