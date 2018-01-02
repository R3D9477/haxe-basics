// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_1742edf8d3281505
#define INCLUDED_1742edf8d3281505
#include "wx/image.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Image
#include <hx/widgets/Image.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Rect
#include <hx/widgets/Rect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_733085b67698e96e_12_new,"hx.widgets.Bitmap","new",0x4e2c14fe,"hx.widgets.Bitmap.new","hx/widgets/Bitmap.hx",12,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_22_get_width,"hx.widgets.Bitmap","get_width",0xabaea17b,"hx.widgets.Bitmap.get_width","hx/widgets/Bitmap.hx",22,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_27_get_height,"hx.widgets.Bitmap","get_height",0x436e22d2,"hx.widgets.Bitmap.get_height","hx/widgets/Bitmap.hx",27,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_32_get_isOk,"hx.widgets.Bitmap","get_isOk",0xb98de9d1,"hx.widgets.Bitmap.get_isOk","hx/widgets/Bitmap.hx",32,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_36_getSubBitmap,"hx.widgets.Bitmap","getSubBitmap",0xb3a421bb,"hx.widgets.Bitmap.getSubBitmap","hx/widgets/Bitmap.hx",36,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_68_get_bitmapRef,"hx.widgets.Bitmap","get_bitmapRef",0x31df2a99,"hx.widgets.Bitmap.get_bitmapRef","hx/widgets/Bitmap.hx",68,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_51_fromHaxeResource,"hx.widgets.Bitmap","fromHaxeResource",0x8836fc40,"hx.widgets.Bitmap.fromHaxeResource","hx/widgets/Bitmap.hx",51,0x59587af0)
HX_LOCAL_STACK_FRAME(_hx_pos_733085b67698e96e_54_fromHaxeBytes,"hx.widgets.Bitmap","fromHaxeBytes",0xac952db9,"hx.widgets.Bitmap.fromHaxeBytes","hx/widgets/Bitmap.hx",54,0x59587af0)
namespace hx{
namespace widgets{

void Bitmap_obj::__construct( ::hx::widgets::Image image){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_12_new)
HXDLIN(  12)		if (hx::IsNotNull( image )) {
HXLINE(  13)			::cpp::Pointer<  wxBitmap > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxBitmap(image->get_imageRef()->get_ref())));
HXDLIN(  13)			this->_ref = _hx_tmp->reinterpret();
            		}
            	}

Dynamic Bitmap_obj::__CreateEmpty() { return new Bitmap_obj; }

void *Bitmap_obj::_hx_vtable = 0;

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Bitmap_obj > _hx_result = new Bitmap_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Bitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7f575436) {
		if (inClassId<=(int)0x03ecca10) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03ecca10;
		} else {
			return inClassId==(int)0x7f575436;
		}
	} else {
		return inClassId==(int)0x7f83b99a;
	}
}

int Bitmap_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_22_get_width)
HXDLIN(  22)		return this->get_bitmapRef()->ptr->GetWidth();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_width,return )

int Bitmap_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_27_get_height)
HXDLIN(  27)		return this->get_bitmapRef()->ptr->GetHeight();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_height,return )

bool Bitmap_obj::get_isOk(){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_32_get_isOk)
HXDLIN(  32)		return this->get_bitmapRef()->ptr->IsOk();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_isOk,return )

 ::hx::widgets::Bitmap Bitmap_obj::getSubBitmap( ::hx::widgets::Rect rect){
            	HX_GC_STACKFRAME(&_hx_pos_733085b67698e96e_36_getSubBitmap)
HXLINE(  37)		::cpp::Pointer<  wxRect > r = rect->createPointer();
HXLINE(  38)		 wxBitmap * sub = this->get_bitmapRef()->ptr;
HXDLIN(  38)		 wxBitmap sub1 = (*(sub)).GetSubBitmap(r->get_ref());
HXLINE(  39)		r->destroy();
HXLINE(  41)		 ::hx::widgets::Bitmap bmp =  ::hx::widgets::Bitmap_obj::__alloc( HX_CTX ,null());
HXLINE(  42)		bmp->_ref = ::cpp::Pointer_obj::fromRaw((new wxBitmap(sub1)))->reinterpret();
HXLINE(  44)		return bmp;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,getSubBitmap,return )

::cpp::Pointer<  wxBitmap > Bitmap_obj::get_bitmapRef(){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_68_get_bitmapRef)
HXDLIN(  68)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_bitmapRef,return )

 ::hx::widgets::Bitmap Bitmap_obj::fromHaxeResource(::String resourceId){
            	HX_STACKFRAME(&_hx_pos_733085b67698e96e_51_fromHaxeResource)
HXDLIN(  51)		return ::hx::widgets::Bitmap_obj::fromHaxeBytes(::haxe::Resource_obj::getBytes(resourceId));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,fromHaxeResource,return )

 ::hx::widgets::Bitmap Bitmap_obj::fromHaxeBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_733085b67698e96e_54_fromHaxeBytes)
HXLINE(  55)		if (hx::IsNull( bytes )) {
HXLINE(  56)			HX_STACK_DO_THROW(HX_("Could not load bitmap from null bytes",c5,4b,87,47));
            		}
HXLINE(  59)		 ::hx::widgets::Image image =  ::hx::widgets::Image_obj::__alloc( HX_CTX ,bytes);
HXLINE(  60)		return  ::hx::widgets::Bitmap_obj::__alloc( HX_CTX ,image);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,fromHaxeBytes,return )


hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new( ::hx::widgets::Image image) {
	hx::ObjectPtr< Bitmap_obj > __this = new Bitmap_obj();
	__this->__construct(image);
	return __this;
}

hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Image image) {
	Bitmap_obj *__this = (Bitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Bitmap_obj), true, "hx.widgets.Bitmap"));
	*(void **)__this = Bitmap_obj::_hx_vtable;
	__this->__construct(image);
	return __this;
}

Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(isOk,"isOk");
	HX_MARK_MEMBER_NAME(bitmapRef,"bitmapRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(isOk,"isOk");
	HX_VISIT_MEMBER_NAME(bitmapRef,"bitmapRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"isOk") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isOk() : isOk ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( inCallProp == hx::paccAlways ? get_width() : width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( inCallProp == hx::paccAlways ? get_height() : height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_isOk") ) { return hx::Val( get_isOk_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"bitmapRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_bitmapRef() : bitmapRef ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getSubBitmap") ) { return hx::Val( getSubBitmap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_bitmapRef") ) { return hx::Val( get_bitmapRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"fromHaxeBytes") ) { outValue = fromHaxeBytes_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromHaxeResource") ) { outValue = fromHaxeResource_dyn(); return true; }
	}
	return false;
}

hx::Val Bitmap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"isOk") ) { isOk=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapRef") ) { bitmapRef=inValue.Cast< ::cpp::Pointer<  wxBitmap > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("isOk","\xa6","\xef","\xbe","\x45"));
	outFields->push(HX_HCSTRING("bitmapRef","\xa4","\xe0","\xdf","\xc6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Bitmap_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Bitmap_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Bitmap_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,isOk),HX_HCSTRING("isOk","\xa6","\xef","\xbe","\x45")},
	{hx::fsObject /*::cpp::Pointer< wxBitmap >*/ ,(int)offsetof(Bitmap_obj,bitmapRef),HX_HCSTRING("bitmapRef","\xa4","\xe0","\xdf","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Bitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String Bitmap_obj_sMemberFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("isOk","\xa6","\xef","\xbe","\x45"),
	HX_HCSTRING("get_isOk","\x2f","\xab","\x79","\xc5"),
	HX_HCSTRING("getSubBitmap","\x19","\xea","\xae","\x06"),
	HX_HCSTRING("bitmapRef","\xa4","\xe0","\xdf","\xc6"),
	HX_HCSTRING("get_bitmapRef","\x7b","\xb4","\x43","\x88"),
	::String(null()) };

static void Bitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Bitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Bitmap_obj::__mClass;

static ::String Bitmap_obj_sStaticFields[] = {
	HX_HCSTRING("fromHaxeResource","\x9e","\x4b","\xf0","\x6b"),
	HX_HCSTRING("fromHaxeBytes","\x9b","\xb7","\xf9","\x02"),
	::String(null())
};

void Bitmap_obj::__register()
{
	hx::Object *dummy = new Bitmap_obj;
	Bitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Bitmap","\x0c","\x7e","\x8a","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Bitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Bitmap_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Bitmap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Bitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
