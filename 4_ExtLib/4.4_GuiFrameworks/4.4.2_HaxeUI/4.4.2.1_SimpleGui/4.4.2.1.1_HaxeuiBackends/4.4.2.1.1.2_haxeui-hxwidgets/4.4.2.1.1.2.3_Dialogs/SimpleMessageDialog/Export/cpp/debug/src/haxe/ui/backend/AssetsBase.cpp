// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e621796a8d98261_6_new,"haxe.ui.backend.AssetsBase","new",0x7c4ef8f2,"haxe.ui.backend.AssetsBase.new","haxe/ui/backend/AssetsBase.hx",6,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_10_getTextDelegate,"haxe.ui.backend.AssetsBase","getTextDelegate",0x9553865a,"haxe.ui.backend.AssetsBase.getTextDelegate","haxe/ui/backend/AssetsBase.hx",10,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_14_getImageInternal,"haxe.ui.backend.AssetsBase","getImageInternal",0xf13ea370,"haxe.ui.backend.AssetsBase.getImageInternal","haxe/ui/backend/AssetsBase.hx",14,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_18_getImageFromHaxeResource,"haxe.ui.backend.AssetsBase","getImageFromHaxeResource",0xd76c72d1,"haxe.ui.backend.AssetsBase.getImageFromHaxeResource","haxe/ui/backend/AssetsBase.hx",18,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_22_getFontInternal,"haxe.ui.backend.AssetsBase","getFontInternal",0x510a7974,"haxe.ui.backend.AssetsBase.getFontInternal","haxe/ui/backend/AssetsBase.hx",22,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_26_getFontFromHaxeResource,"haxe.ui.backend.AssetsBase","getFontFromHaxeResource",0x93c3ecd5,"haxe.ui.backend.AssetsBase.getFontFromHaxeResource","haxe/ui/backend/AssetsBase.hx",26,0x0e45c37d)
namespace haxe{
namespace ui{
namespace backend{

void AssetsBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_6_new)
            	}

Dynamic AssetsBase_obj::__CreateEmpty() { return new AssetsBase_obj; }

void *AssetsBase_obj::_hx_vtable = 0;

Dynamic AssetsBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetsBase_obj > _hx_result = new AssetsBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetsBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d657426;
}

::String AssetsBase_obj::getTextDelegate(::String resourceId){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_10_getTextDelegate)
HXDLIN(  10)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetsBase_obj,getTextDelegate,return )

void AssetsBase_obj::getImageInternal(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_14_getImageInternal)
HXDLIN(  14)		callback(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,getImageInternal,(void))

void AssetsBase_obj::getImageFromHaxeResource(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_18_getImageFromHaxeResource)
HXDLIN(  18)		callback(resourceId,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,getImageFromHaxeResource,(void))

void AssetsBase_obj::getFontInternal(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_22_getFontInternal)
HXDLIN(  22)		callback(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,getFontInternal,(void))

void AssetsBase_obj::getFontFromHaxeResource(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_26_getFontFromHaxeResource)
HXDLIN(  26)		callback(resourceId,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,getFontFromHaxeResource,(void))


AssetsBase_obj::AssetsBase_obj()
{
}

hx::Val AssetsBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"getTextDelegate") ) { return hx::Val( getTextDelegate_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFontInternal") ) { return hx::Val( getFontInternal_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getImageInternal") ) { return hx::Val( getImageInternal_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFontFromHaxeResource") ) { return hx::Val( getFontFromHaxeResource_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getImageFromHaxeResource") ) { return hx::Val( getImageFromHaxeResource_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AssetsBase_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AssetsBase_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetsBase_obj_sMemberFields[] = {
	HX_HCSTRING("getTextDelegate","\xc8","\xca","\x74","\xb1"),
	HX_HCSTRING("getImageInternal","\x42","\x3f","\x39","\x72"),
	HX_HCSTRING("getImageFromHaxeResource","\xa3","\x30","\x02","\x17"),
	HX_HCSTRING("getFontInternal","\xe2","\xbd","\x2b","\x6d"),
	HX_HCSTRING("getFontFromHaxeResource","\x43","\x4f","\x84","\xfc"),
	::String(null()) };

static void AssetsBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetsBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetsBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetsBase_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetsBase_obj::__mClass;

void AssetsBase_obj::__register()
{
	hx::Object *dummy = new AssetsBase_obj;
	AssetsBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.AssetsBase","\x00","\x58","\x07","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetsBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AssetsBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetsBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetsBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetsBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetsBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
