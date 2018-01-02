// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_IconMap
#include <haxe/ui/backend/hxwidgets/IconMap.h>
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_ImageList
#include <hx/widgets/ImageList.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_74e3c38dcb0319f8_7_new,"haxe.ui.backend.hxwidgets.IconMap","new",0x4945c8fa,"haxe.ui.backend.hxwidgets.IconMap.new","haxe/ui/backend/hxwidgets/IconMap.hx",7,0xf63dac18)
HX_LOCAL_STACK_FRAME(_hx_pos_74e3c38dcb0319f8_14_getImageIndex,"haxe.ui.backend.hxwidgets.IconMap","getImageIndex",0x64393b07,"haxe.ui.backend.hxwidgets.IconMap.getImageIndex","haxe/ui/backend/hxwidgets/IconMap.hx",14,0xf63dac18)
HX_LOCAL_STACK_FRAME(_hx_pos_74e3c38dcb0319f8_35_addImage,"haxe.ui.backend.hxwidgets.IconMap","addImage",0xf8a6dea0,"haxe.ui.backend.hxwidgets.IconMap.addImage","haxe/ui/backend/hxwidgets/IconMap.hx",35,0xf63dac18)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void IconMap_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_74e3c38dcb0319f8_7_new)
HXLINE(   9)		this->_imageListToIcon =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(   8)		this->_objectsToImageList =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}

Dynamic IconMap_obj::__CreateEmpty() { return new IconMap_obj; }

void *IconMap_obj::_hx_vtable = 0;

Dynamic IconMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IconMap_obj > _hx_result = new IconMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IconMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08b8e85e;
}

int IconMap_obj::getImageIndex( ::Dynamic object,::String icon, ::Dynamic setCallback){
            	HX_STACKFRAME(&_hx_pos_74e3c38dcb0319f8_14_getImageIndex)
HXLINE(  15)		if (hx::IsNull( icon )) {
HXLINE(  16)			return (int)-1;
            		}
HXLINE(  19)		int index = (int)-1;
HXLINE(  20)		 ::hx::widgets::ImageList imageList = this->_objectsToImageList->get(object).StaticCast<  ::hx::widgets::ImageList >();
HXLINE(  21)		if (hx::IsNotNull( imageList )) {
HXLINE(  22)			::Array< ::String > iconList = ( (::Array< ::String >)(this->_imageListToIcon->get(imageList)) );
HXLINE(  23)			if (hx::IsNotNull( iconList )) {
HXLINE(  24)				index = iconList->indexOf(icon,null());
            			}
            		}
HXLINE(  28)		if ((index == (int)-1)) {
HXLINE(  29)			index = this->addImage(object,icon,setCallback);
            		}
HXLINE(  32)		return index;
            	}


HX_DEFINE_DYNAMIC_FUNC3(IconMap_obj,getImageIndex,return )

int IconMap_obj::addImage( ::Dynamic object,::String icon, ::Dynamic setCallback){
            	HX_GC_STACKFRAME(&_hx_pos_74e3c38dcb0319f8_35_addImage)
HXLINE(  36)		 ::hx::widgets::ImageList imageList = this->_objectsToImageList->get(object).StaticCast<  ::hx::widgets::ImageList >();
HXLINE(  37)		if (hx::IsNull( imageList )) {
HXLINE(  38)			imageList =  ::hx::widgets::ImageList_obj::__alloc( HX_CTX ,(int)16,(int)16);
HXLINE(  39)			this->_objectsToImageList->set(object,imageList);
HXLINE(  40)			setCallback(imageList);
            		}
HXLINE(  43)		::Array< ::String > iconList = ( (::Array< ::String >)(this->_imageListToIcon->get(imageList)) );
HXLINE(  44)		if (hx::IsNull( iconList )) {
HXLINE(  45)			iconList = ::Array_obj< ::String >::__new();
HXLINE(  46)			this->_imageListToIcon->set(imageList,iconList);
            		}
HXLINE(  48)		imageList->add(::hx::widgets::Bitmap_obj::fromHaxeResource(icon));
HXLINE(  49)		iconList->push(icon);
HXLINE(  51)		return iconList->indexOf(icon,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(IconMap_obj,addImage,return )


hx::ObjectPtr< IconMap_obj > IconMap_obj::__new() {
	hx::ObjectPtr< IconMap_obj > __this = new IconMap_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< IconMap_obj > IconMap_obj::__alloc(hx::Ctx *_hx_ctx) {
	IconMap_obj *__this = (IconMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IconMap_obj), true, "haxe.ui.backend.hxwidgets.IconMap"));
	*(void **)__this = IconMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

IconMap_obj::IconMap_obj()
{
}

void IconMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IconMap);
	HX_MARK_MEMBER_NAME(_objectsToImageList,"_objectsToImageList");
	HX_MARK_MEMBER_NAME(_imageListToIcon,"_imageListToIcon");
	HX_MARK_END_CLASS();
}

void IconMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_objectsToImageList,"_objectsToImageList");
	HX_VISIT_MEMBER_NAME(_imageListToIcon,"_imageListToIcon");
}

hx::Val IconMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addImage") ) { return hx::Val( addImage_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getImageIndex") ) { return hx::Val( getImageIndex_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_imageListToIcon") ) { return hx::Val( _imageListToIcon ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_objectsToImageList") ) { return hx::Val( _objectsToImageList ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val IconMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"_imageListToIcon") ) { _imageListToIcon=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_objectsToImageList") ) { _objectsToImageList=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IconMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_objectsToImageList","\x09","\xa0","\xfa","\x1d"));
	outFields->push(HX_HCSTRING("_imageListToIcon","\x4e","\xc3","\x18","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo IconMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(IconMap_obj,_objectsToImageList),HX_HCSTRING("_objectsToImageList","\x09","\xa0","\xfa","\x1d")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(IconMap_obj,_imageListToIcon),HX_HCSTRING("_imageListToIcon","\x4e","\xc3","\x18","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IconMap_obj_sStaticStorageInfo = 0;
#endif

static ::String IconMap_obj_sMemberFields[] = {
	HX_HCSTRING("_objectsToImageList","\x09","\xa0","\xfa","\x1d"),
	HX_HCSTRING("_imageListToIcon","\x4e","\xc3","\x18","\x78"),
	HX_HCSTRING("getImageIndex","\xed","\xbd","\x54","\x26"),
	HX_HCSTRING("addImage","\x7a","\x45","\xc6","\x36"),
	::String(null()) };

static void IconMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IconMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IconMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IconMap_obj::__mClass,"__mClass");
};

#endif

hx::Class IconMap_obj::__mClass;

void IconMap_obj::__register()
{
	hx::Object *dummy = new IconMap_obj;
	IconMap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.IconMap","\x08","\x84","\x43","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IconMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IconMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IconMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IconMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IconMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IconMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
