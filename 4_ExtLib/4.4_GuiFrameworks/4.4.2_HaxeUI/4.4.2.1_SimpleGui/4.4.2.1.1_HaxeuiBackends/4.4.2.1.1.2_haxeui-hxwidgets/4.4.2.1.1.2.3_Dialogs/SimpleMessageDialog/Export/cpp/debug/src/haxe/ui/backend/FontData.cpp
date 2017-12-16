// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_FontData
#include <haxe/ui/backend/FontData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b9cab5f283a2303e_4_new,"haxe.ui.backend.FontData","new",0xe7cd5dd7,"haxe.ui.backend.FontData.new","haxe/ui/backend/FontData.hx",4,0xcd8a4478)
namespace haxe{
namespace ui{
namespace backend{

void FontData_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b9cab5f283a2303e_4_new)
            	}

Dynamic FontData_obj::__CreateEmpty() { return new FontData_obj; }

void *FontData_obj::_hx_vtable = 0;

Dynamic FontData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FontData_obj > _hx_result = new FontData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FontData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e8d38d3;
}


FontData_obj::FontData_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FontData_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FontData_obj_sStaticStorageInfo = 0;
#endif

static void FontData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontData_obj::__mClass,"__mClass");
};

#endif

hx::Class FontData_obj::__mClass;

void FontData_obj::__register()
{
	hx::Object *dummy = new FontData_obj;
	FontData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.FontData","\x65","\x26","\x8e","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FontData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FontData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
