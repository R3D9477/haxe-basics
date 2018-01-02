// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_eda345e1d8f45319
#define INCLUDED_eda345e1d8f45319
#include "wx/statbmp.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
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
#ifndef INCLUDED_hx_widgets_StaticBitmap
#include <hx/widgets/StaticBitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f3ca952266c3498b_10_new,"hx.widgets.StaticBitmap","new",0xc54aaf0c,"hx.widgets.StaticBitmap.new","hx/widgets/StaticBitmap.hx",10,0x0cfdff22)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ca952266c3498b_24_get_bitmap,"hx.widgets.StaticBitmap","get_bitmap",0x74390e8c,"hx.widgets.StaticBitmap.get_bitmap","hx/widgets/StaticBitmap.hx",24,0x0cfdff22)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ca952266c3498b_31_set_bitmap,"hx.widgets.StaticBitmap","set_bitmap",0x77b6ad00,"hx.widgets.StaticBitmap.set_bitmap","hx/widgets/StaticBitmap.hx",31,0x0cfdff22)
HX_LOCAL_STACK_FRAME(_hx_pos_f3ca952266c3498b_41_get_bitmapRef,"hx.widgets.StaticBitmap","get_bitmapRef",0xd32c2227,"hx.widgets.StaticBitmap.get_bitmapRef","hx/widgets/StaticBitmap.hx",41,0x0cfdff22)
namespace hx{
namespace widgets{

void StaticBitmap_obj::__construct( ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,hx::Null< int >  __o_id){
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_f3ca952266c3498b_10_new)
HXLINE(  11)		if (hx::IsNull( this->_ref )) {
HXLINE(  12)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxStaticBitmap()))->reinterpret();
HXLINE(  13)			 wxStaticBitmap * _hx_tmp = this->get_bitmapRef()->ptr;
HXDLIN(  13)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  13)			(*(_hx_tmp)).Create(_hx_tmp1,id,bitmap->get_bitmapRef()->get_ref());
            		}
HXLINE(  16)		super::__construct(parent,id,null());
            	}

Dynamic StaticBitmap_obj::__CreateEmpty() { return new StaticBitmap_obj; }

void *StaticBitmap_obj::_hx_vtable = 0;

Dynamic StaticBitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StaticBitmap_obj > _hx_result = new StaticBitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool StaticBitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6d554dd8) {
		if (inClassId<=(int)0x604dbaa2) {
			if (inClassId<=(int)0x350d7ce6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
			} else {
				return inClassId==(int)0x604dbaa2;
			}
		} else {
			return inClassId==(int)0x6d554dd8;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

 ::hx::widgets::Bitmap StaticBitmap_obj::get_bitmap(){
            	HX_GC_STACKFRAME(&_hx_pos_f3ca952266c3498b_24_get_bitmap)
HXLINE(  25)		 wxBitmap b = this->get_bitmapRef()->ptr->GetBitmap();
HXLINE(  26)		 ::hx::widgets::Bitmap bmp =  ::hx::widgets::Bitmap_obj::__alloc( HX_CTX ,null());
HXLINE(  27)		bmp->_ref = ::cpp::Pointer_obj::fromRaw((new wxBitmap(b)))->reinterpret();
HXLINE(  28)		return bmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StaticBitmap_obj,get_bitmap,return )

 ::hx::widgets::Bitmap StaticBitmap_obj::set_bitmap( ::hx::widgets::Bitmap value){
            	HX_STACKFRAME(&_hx_pos_f3ca952266c3498b_31_set_bitmap)
HXLINE(  32)		 wxStaticBitmap * _hx_tmp = this->get_bitmapRef()->ptr;
HXDLIN(  32)		(*(_hx_tmp)).SetBitmap(value->get_bitmapRef()->get_ref());
HXLINE(  33)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StaticBitmap_obj,set_bitmap,return )

::cpp::Pointer<  wxStaticBitmap > StaticBitmap_obj::get_bitmapRef(){
            	HX_STACKFRAME(&_hx_pos_f3ca952266c3498b_41_get_bitmapRef)
HXDLIN(  41)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StaticBitmap_obj,get_bitmapRef,return )


hx::ObjectPtr< StaticBitmap_obj > StaticBitmap_obj::__new( ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,hx::Null< int >  __o_id) {
	hx::ObjectPtr< StaticBitmap_obj > __this = new StaticBitmap_obj();
	__this->__construct(parent,bitmap,__o_id);
	return __this;
}

hx::ObjectPtr< StaticBitmap_obj > StaticBitmap_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,hx::Null< int >  __o_id) {
	StaticBitmap_obj *__this = (StaticBitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StaticBitmap_obj), true, "hx.widgets.StaticBitmap"));
	*(void **)__this = StaticBitmap_obj::_hx_vtable;
	__this->__construct(parent,bitmap,__o_id);
	return __this;
}

StaticBitmap_obj::StaticBitmap_obj()
{
}

void StaticBitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticBitmap);
	HX_MARK_MEMBER_NAME(bitmapRef,"bitmapRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticBitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapRef,"bitmapRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

hx::Val StaticBitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_bitmap() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_bitmapRef() : bitmapRef ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bitmap") ) { return hx::Val( get_bitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bitmap") ) { return hx::Val( set_bitmap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_bitmapRef") ) { return hx::Val( get_bitmapRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StaticBitmap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bitmap(inValue.Cast<  ::hx::widgets::Bitmap >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapRef") ) { bitmapRef=inValue.Cast< ::cpp::Pointer<  wxStaticBitmap > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticBitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	outFields->push(HX_HCSTRING("bitmapRef","\xa4","\xe0","\xdf","\xc6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StaticBitmap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxStaticBitmap >*/ ,(int)offsetof(StaticBitmap_obj,bitmapRef),HX_HCSTRING("bitmapRef","\xa4","\xe0","\xdf","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *StaticBitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticBitmap_obj_sMemberFields[] = {
	HX_HCSTRING("get_bitmap","\xb8","\x7f","\x93","\xe1"),
	HX_HCSTRING("set_bitmap","\x2c","\x1e","\x11","\xe5"),
	HX_HCSTRING("bitmapRef","\xa4","\xe0","\xdf","\xc6"),
	HX_HCSTRING("get_bitmapRef","\x7b","\xb4","\x43","\x88"),
	::String(null()) };

static void StaticBitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StaticBitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticBitmap_obj::__mClass;

void StaticBitmap_obj::__register()
{
	hx::Object *dummy = new StaticBitmap_obj;
	StaticBitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.StaticBitmap","\x1a","\x79","\x73","\x7c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StaticBitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StaticBitmap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StaticBitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StaticBitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticBitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
