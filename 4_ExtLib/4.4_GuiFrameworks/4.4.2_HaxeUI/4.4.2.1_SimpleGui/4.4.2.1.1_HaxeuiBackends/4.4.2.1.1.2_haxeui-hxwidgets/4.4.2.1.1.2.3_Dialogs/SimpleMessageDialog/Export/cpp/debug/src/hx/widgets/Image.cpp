// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_1742edf8d3281505
#define INCLUDED_1742edf8d3281505
#include "wx/image.h"
#endif
#ifndef INCLUDED_721c74fa2e6d5326
#define INCLUDED_721c74fa2e6d5326
#include "wx/mstream.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hx_widgets_Image
#include <hx/widgets/Image.h>
#endif
#ifndef INCLUDED_hx_widgets_InputStream
#include <hx/widgets/InputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_MemoryInputStream
#include <hx/widgets/MemoryInputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa9e72e6297a3354_10_new,"hx.widgets.Image","new",0xd5fc8bd0,"hx.widgets.Image.new","hx/widgets/Image.hx",10,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_aa9e72e6297a3354_21_get_width,"hx.widgets.Image","get_width",0xf0d701cd,"hx.widgets.Image.get_width","hx/widgets/Image.hx",21,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_aa9e72e6297a3354_26_get_height,"hx.widgets.Image","get_height",0x819a0a40,"hx.widgets.Image.get_height","hx/widgets/Image.hx",26,0x548f18a2)
HX_LOCAL_STACK_FRAME(_hx_pos_aa9e72e6297a3354_34_get_imageRef,"hx.widgets.Image","get_imageRef",0xf4cf4751,"hx.widgets.Image.get_imageRef","hx/widgets/Image.hx",34,0x548f18a2)
namespace hx{
namespace widgets{

void Image_obj::__construct( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_aa9e72e6297a3354_10_new)
HXLINE(  11)		 ::hx::widgets::MemoryInputStream stream =  ::hx::widgets::MemoryInputStream_obj::__alloc( HX_CTX ,bytes);
HXLINE(  12)		::cpp::Pointer<  wxImage > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxImage(stream->get_memoryinputstreamRef()->get_ref())));
HXDLIN(  12)		this->_ref = _hx_tmp->reinterpret();
HXLINE(  13)		stream->destroy();
            	}

Dynamic Image_obj::__CreateEmpty() { return new Image_obj; }

void *Image_obj::_hx_vtable = 0;

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Image_obj > _hx_result = new Image_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Image_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x712cb9fc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x712cb9fc;
	} else {
		return inClassId==(int)0x7f575436;
	}
}

int Image_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_aa9e72e6297a3354_21_get_width)
HXDLIN(  21)		return this->get_imageRef()->ptr->GetWidth();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_width,return )

int Image_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_aa9e72e6297a3354_26_get_height)
HXDLIN(  26)		return this->get_imageRef()->ptr->GetHeight();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_height,return )

::cpp::Pointer<  wxImage > Image_obj::get_imageRef(){
            	HX_STACKFRAME(&_hx_pos_aa9e72e6297a3354_34_get_imageRef)
HXDLIN(  34)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_imageRef,return )


hx::ObjectPtr< Image_obj > Image_obj::__new( ::haxe::io::Bytes bytes) {
	hx::ObjectPtr< Image_obj > __this = new Image_obj();
	__this->__construct(bytes);
	return __this;
}

hx::ObjectPtr< Image_obj > Image_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes) {
	Image_obj *__this = (Image_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Image_obj), true, "hx.widgets.Image"));
	*(void **)__this = Image_obj::_hx_vtable;
	__this->__construct(bytes);
	return __this;
}

Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(imageRef,"imageRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(imageRef,"imageRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Image_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( inCallProp == hx::paccAlways ? get_width() : width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( inCallProp == hx::paccAlways ? get_height() : height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"imageRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_imageRef() : imageRef ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_imageRef") ) { return hx::Val( get_imageRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Image_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"imageRef") ) { imageRef=inValue.Cast< ::cpp::Pointer<  wxImage > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("imageRef","\xb8","\x3c","\x39","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Image_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Image_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Image_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::cpp::Pointer< wxImage >*/ ,(int)offsetof(Image_obj,imageRef),HX_HCSTRING("imageRef","\xb8","\x3c","\x39","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Image_obj_sStaticStorageInfo = 0;
#endif

static ::String Image_obj_sMemberFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("imageRef","\xb8","\x3c","\x39","\x84"),
	HX_HCSTRING("get_imageRef","\xc1","\xf0","\x52","\x39"),
	::String(null()) };

static void Image_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Image_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
};

#endif

hx::Class Image_obj::__mClass;

void Image_obj::__register()
{
	hx::Object *dummy = new Image_obj;
	Image_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Image","\xde","\xa3","\xbe","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Image_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Image_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Image_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Image_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Image_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Image_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
