// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ImageData
#include <haxe/ui/backend/ImageData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ffe614b322d45f0_4_new,"haxe.ui.backend.ImageData","new",0x56d42c4b,"haxe.ui.backend.ImageData.new","haxe/ui/backend/ImageData.hx",4,0x77d9e9a6)
namespace haxe{
namespace ui{
namespace backend{

void ImageData_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0ffe614b322d45f0_4_new)
            	}

Dynamic ImageData_obj::__CreateEmpty() { return new ImageData_obj; }

void *ImageData_obj::_hx_vtable = 0;

Dynamic ImageData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ImageData_obj > _hx_result = new ImageData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3093c70f;
}


ImageData_obj::ImageData_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ImageData_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ImageData_obj_sStaticStorageInfo = 0;
#endif

static void ImageData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageData_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageData_obj::__mClass;

void ImageData_obj::__register()
{
	hx::Object *dummy = new ImageData_obj;
	ImageData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.ImageData","\xd9","\xaa","\x07","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ImageData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ImageData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImageData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
