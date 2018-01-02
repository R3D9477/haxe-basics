// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ImageDisplayBase
#include <haxe/ui/backend/ImageDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Rectangle
#include <haxe/ui/util/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_be477e8665a4b528_14_new,"haxe.ui.backend.ImageDisplayBase","new",0x1b537996,"haxe.ui.backend.ImageDisplayBase.new","haxe/ui/backend/ImageDisplayBase.hx",14,0xa0eabc99)
HX_LOCAL_STACK_FRAME(_hx_pos_be477e8665a4b528_17_validateData,"haxe.ui.backend.ImageDisplayBase","validateData",0x5c5bd5ea,"haxe.ui.backend.ImageDisplayBase.validateData","haxe/ui/backend/ImageDisplayBase.hx",17,0xa0eabc99)
HX_LOCAL_STACK_FRAME(_hx_pos_be477e8665a4b528_22_validateStyle,"haxe.ui.backend.ImageDisplayBase","validateStyle",0x2394ed71,"haxe.ui.backend.ImageDisplayBase.validateStyle","haxe/ui/backend/ImageDisplayBase.hx",22,0xa0eabc99)
HX_LOCAL_STACK_FRAME(_hx_pos_be477e8665a4b528_25_validatePosition,"haxe.ui.backend.ImageDisplayBase","validatePosition",0xb18e0069,"haxe.ui.backend.ImageDisplayBase.validatePosition","haxe/ui/backend/ImageDisplayBase.hx",25,0xa0eabc99)
HX_LOCAL_STACK_FRAME(_hx_pos_be477e8665a4b528_29_validateDisplay,"haxe.ui.backend.ImageDisplayBase","validateDisplay",0x9d540282,"haxe.ui.backend.ImageDisplayBase.validateDisplay","haxe/ui/backend/ImageDisplayBase.hx",29,0xa0eabc99)
namespace haxe{
namespace ui{
namespace backend{

void ImageDisplayBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_be477e8665a4b528_14_new)
            	}

Dynamic ImageDisplayBase_obj::__CreateEmpty() { return new ImageDisplayBase_obj; }

void *ImageDisplayBase_obj::_hx_vtable = 0;

Dynamic ImageDisplayBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ImageDisplayBase_obj > _hx_result = new ImageDisplayBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageDisplayBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60e9e712;
}

void ImageDisplayBase_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_be477e8665a4b528_17_validateData)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplayBase_obj,validateData,(void))

bool ImageDisplayBase_obj::validateStyle(){
            	HX_STACKFRAME(&_hx_pos_be477e8665a4b528_22_validateStyle)
HXDLIN(  22)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplayBase_obj,validateStyle,return )

void ImageDisplayBase_obj::validatePosition(){
            	HX_STACKFRAME(&_hx_pos_be477e8665a4b528_25_validatePosition)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplayBase_obj,validatePosition,(void))

void ImageDisplayBase_obj::validateDisplay(){
            	HX_STACKFRAME(&_hx_pos_be477e8665a4b528_29_validateDisplay)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplayBase_obj,validateDisplay,(void))


ImageDisplayBase_obj::ImageDisplayBase_obj()
{
}

void ImageDisplayBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageDisplayBase);
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_top,"_top");
	HX_MARK_MEMBER_NAME(_imageWidth,"_imageWidth");
	HX_MARK_MEMBER_NAME(_imageHeight,"_imageHeight");
	HX_MARK_MEMBER_NAME(_imageInfo,"_imageInfo");
	HX_MARK_MEMBER_NAME(_imageClipRect,"_imageClipRect");
	HX_MARK_END_CLASS();
}

void ImageDisplayBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_top,"_top");
	HX_VISIT_MEMBER_NAME(_imageWidth,"_imageWidth");
	HX_VISIT_MEMBER_NAME(_imageHeight,"_imageHeight");
	HX_VISIT_MEMBER_NAME(_imageInfo,"_imageInfo");
	HX_VISIT_MEMBER_NAME(_imageClipRect,"_imageClipRect");
}

hx::Val ImageDisplayBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_top") ) { return hx::Val( _top ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { return hx::Val( _left ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_imageInfo") ) { return hx::Val( _imageInfo ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_imageWidth") ) { return hx::Val( _imageWidth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_imageHeight") ) { return hx::Val( _imageHeight ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"validateStyle") ) { return hx::Val( validateStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_imageClipRect") ) { return hx::Val( _imageClipRect ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"validateDisplay") ) { return hx::Val( validateDisplay_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"validatePosition") ) { return hx::Val( validatePosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ImageDisplayBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_top") ) { _top=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_imageInfo") ) { _imageInfo=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_imageWidth") ) { _imageWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_imageHeight") ) { _imageHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_imageClipRect") ) { _imageClipRect=inValue.Cast<  ::haxe::ui::util::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageDisplayBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_left","\xe6","\x23","\xc1","\xfa"));
	outFields->push(HX_HCSTRING("_top","\x96","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_imageWidth","\xca","\x49","\xba","\xa8"));
	outFields->push(HX_HCSTRING("_imageHeight","\xa3","\xbf","\x95","\xb0"));
	outFields->push(HX_HCSTRING("_imageInfo","\x2a","\x49","\x92","\x83"));
	outFields->push(HX_HCSTRING("_imageClipRect","\xd0","\xae","\x5e","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ImageDisplayBase_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ImageDisplayBase_obj,_left),HX_HCSTRING("_left","\xe6","\x23","\xc1","\xfa")},
	{hx::fsFloat,(int)offsetof(ImageDisplayBase_obj,_top),HX_HCSTRING("_top","\x96","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(ImageDisplayBase_obj,_imageWidth),HX_HCSTRING("_imageWidth","\xca","\x49","\xba","\xa8")},
	{hx::fsFloat,(int)offsetof(ImageDisplayBase_obj,_imageHeight),HX_HCSTRING("_imageHeight","\xa3","\xbf","\x95","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageDisplayBase_obj,_imageInfo),HX_HCSTRING("_imageInfo","\x2a","\x49","\x92","\x83")},
	{hx::fsObject /*::haxe::ui::util::Rectangle*/ ,(int)offsetof(ImageDisplayBase_obj,_imageClipRect),HX_HCSTRING("_imageClipRect","\xd0","\xae","\x5e","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ImageDisplayBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageDisplayBase_obj_sMemberFields[] = {
	HX_HCSTRING("_left","\xe6","\x23","\xc1","\xfa"),
	HX_HCSTRING("_top","\x96","\xab","\x23","\x3f"),
	HX_HCSTRING("_imageWidth","\xca","\x49","\xba","\xa8"),
	HX_HCSTRING("_imageHeight","\xa3","\xbf","\x95","\xb0"),
	HX_HCSTRING("_imageInfo","\x2a","\x49","\x92","\x83"),
	HX_HCSTRING("_imageClipRect","\xd0","\xae","\x5e","\x76"),
	HX_HCSTRING("validateData","\xe0","\x55","\x63","\x96"),
	HX_HCSTRING("validateStyle","\xbb","\x64","\x1d","\xb0"),
	HX_HCSTRING("validatePosition","\x5f","\xb3","\x53","\x83"),
	HX_HCSTRING("validateDisplay","\x4c","\x60","\x60","\xb6"),
	::String(null()) };

static void ImageDisplayBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageDisplayBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageDisplayBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageDisplayBase_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageDisplayBase_obj::__mClass;

void ImageDisplayBase_obj::__register()
{
	hx::Object *dummy = new ImageDisplayBase_obj;
	ImageDisplayBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.ImageDisplayBase","\xa4","\xb6","\xcd","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ImageDisplayBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ImageDisplayBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageDisplayBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImageDisplayBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageDisplayBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageDisplayBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
