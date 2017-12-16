// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
#ifndef INCLUDED_01922b43f2a15a43
#define INCLUDED_01922b43f2a15a43
#include "wx/button.h"
#endif
#ifndef INCLUDED_ba6509720fa912ce
#define INCLUDED_ba6509720fa912ce
#include "wx/defs.h"
#endif
#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_Button
#include <hx/widgets/Button.h>
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
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d44ec35dcf37af81_10_new,"hx.widgets.Button","new",0xc6c52481,"hx.widgets.Button.new","hx/widgets/Button.hx",10,0xe27f0ccd)
HX_LOCAL_STACK_FRAME(_hx_pos_d44ec35dcf37af81_34_get_bitmap,"hx.widgets.Button","get_bitmap",0x283561b7,"hx.widgets.Button.get_bitmap","hx/widgets/Button.hx",34,0xe27f0ccd)
HX_LOCAL_STACK_FRAME(_hx_pos_d44ec35dcf37af81_41_set_bitmap,"hx.widgets.Button","set_bitmap",0x2bb3002b,"hx.widgets.Button.set_bitmap","hx/widgets/Button.hx",41,0xe27f0ccd)
HX_LOCAL_STACK_FRAME(_hx_pos_d44ec35dcf37af81_51_set_bitmapPosition,"hx.widgets.Button","set_bitmapPosition",0xa9ebfff4,"hx.widgets.Button.set_bitmapPosition","hx/widgets/Button.hx",51,0xe27f0ccd)
HX_LOCAL_STACK_FRAME(_hx_pos_d44ec35dcf37af81_66_get_buttonRef,"hx.widgets.Button","get_buttonRef",0x46f86db9,"hx.widgets.Button.get_buttonRef","hx/widgets/Button.hx",66,0xe27f0ccd)
namespace hx{
namespace widgets{

void Button_obj::__construct( ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_d44ec35dcf37af81_10_new)
HXLINE(  11)		this->_hasBitmap = false;
HXLINE(  12)		this->set_bitmapPosition(wxLEFT);
HXLINE(  14)		if (hx::IsNull( this->_ref )) {
HXLINE(  15)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxButton()))->reinterpret();
HXLINE(  16)			if (hx::IsNotNull( label )) {
HXLINE(  17)				const char* this1 = label.__s;
HXDLIN(  17)				 wxString str = wxString::FromUTF8(this1);
HXLINE(  18)				 wxString tmp = str;
HXDLIN(  18)				 wxButton * _hx_tmp = this->get_buttonRef()->ptr;
HXDLIN(  18)				 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  18)				 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  18)				 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  18)				(*(_hx_tmp)).Create(_hx_tmp1,id,tmp,_hx_tmp2,_hx_tmp3,style);
            			}
            			else {
HXLINE(  20)				 wxButton * _hx_tmp4 = this->get_buttonRef()->ptr;
HXDLIN(  20)				(*(_hx_tmp4)).Create(::hx::widgets::Window_obj::toRaw(parent),id);
            			}
            		}
HXLINE(  24)		super::__construct(parent,id,null());
            	}

Dynamic Button_obj::__CreateEmpty() { return new Button_obj; }

void *Button_obj::_hx_vtable = 0;

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Button_obj > _hx_result = new Button_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Button_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x71441431) {
		if (inClassId<=(int)0x604dbaa2) {
			if (inClassId<=(int)0x350d7ce6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
			} else {
				return inClassId==(int)0x604dbaa2;
			}
		} else {
			return inClassId==(int)0x71441431;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

 ::hx::widgets::Bitmap Button_obj::get_bitmap(){
            	HX_GC_STACKFRAME(&_hx_pos_d44ec35dcf37af81_34_get_bitmap)
HXLINE(  35)		 wxBitmap b = this->get_buttonRef()->ptr->GetBitmap();
HXLINE(  36)		 ::hx::widgets::Bitmap bmp =  ::hx::widgets::Bitmap_obj::__alloc( HX_CTX ,null());
HXLINE(  37)		bmp->_ref = ::cpp::Pointer_obj::fromRaw((new wxBitmap(b)))->reinterpret();
HXLINE(  38)		return bmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_bitmap,return )

 ::hx::widgets::Bitmap Button_obj::set_bitmap( ::hx::widgets::Bitmap value){
            	HX_STACKFRAME(&_hx_pos_d44ec35dcf37af81_41_set_bitmap)
HXLINE(  42)		 wxButton * _hx_tmp = this->get_buttonRef()->ptr;
HXDLIN(  42)		(*(_hx_tmp)).SetBitmap(value->get_bitmapRef()->get_ref());
HXLINE(  43)		if (!(this->_hasBitmap)) {
HXLINE(  44)			this->_hasBitmap = true;
HXLINE(  45)			this->set_bitmapPosition(this->bitmapPosition);
            		}
HXLINE(  47)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_bitmap,return )

 cpp::Struct<wxDirection, cpp::EnumHandler> Button_obj::set_bitmapPosition( cpp::Struct<wxDirection, cpp::EnumHandler> value){
            	HX_STACKFRAME(&_hx_pos_d44ec35dcf37af81_51_set_bitmapPosition)
HXLINE(  52)		this->bitmapPosition = value;
HXLINE(  53)		if (!(this->_hasBitmap)) {
HXLINE(  54)			return value;
            		}
HXLINE(  57)		this->get_buttonRef()->ptr->SetBitmapPosition(value);
HXLINE(  58)		return value;
            	}


::cpp::Pointer<  wxButton > Button_obj::get_buttonRef(){
            	HX_STACKFRAME(&_hx_pos_d44ec35dcf37af81_66_get_buttonRef)
HXDLIN(  66)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_buttonRef,return )


hx::ObjectPtr< Button_obj > Button_obj::__new( ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< Button_obj > __this = new Button_obj();
	__this->__construct(parent,label,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< Button_obj > Button_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String label,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	Button_obj *__this = (Button_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Button_obj), true, "hx.widgets.Button"));
	*(void **)__this = Button_obj::_hx_vtable;
	__this->__construct(parent,label,__o_style,__o_id);
	return __this;
}

Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(_hasBitmap,"_hasBitmap");
	HX_MARK_MEMBER_NAME(bitmapPosition,"bitmapPosition");
	HX_MARK_MEMBER_NAME(buttonRef,"buttonRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hasBitmap,"_hasBitmap");
	HX_VISIT_MEMBER_NAME(bitmapPosition,"bitmapPosition");
	HX_VISIT_MEMBER_NAME(buttonRef,"buttonRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Button_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_bitmap() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"buttonRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_buttonRef() : buttonRef ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_hasBitmap") ) { return hx::Val( _hasBitmap ); }
		if (HX_FIELD_EQ(inName,"get_bitmap") ) { return hx::Val( get_bitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bitmap") ) { return hx::Val( set_bitmap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_buttonRef") ) { return hx::Val( get_buttonRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Button_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bitmap(inValue.Cast<  ::hx::widgets::Bitmap >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"buttonRef") ) { buttonRef=inValue.Cast< ::cpp::Pointer<  wxButton > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_hasBitmap") ) { _hasBitmap=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_hasBitmap","\xaa","\x3e","\x97","\x8d"));
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	outFields->push(HX_HCSTRING("bitmapPosition","\xb8","\x73","\x40","\x96"));
	outFields->push(HX_HCSTRING("buttonRef","\x81","\x72","\x06","\x50"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Button_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Button_obj,_hasBitmap),HX_HCSTRING("_hasBitmap","\xaa","\x3e","\x97","\x8d")},
	{hx::fsObject /*cpp::Struct<wxDirection, cpp::EnumHandler>*/ ,(int)offsetof(Button_obj,bitmapPosition),HX_HCSTRING("bitmapPosition","\xb8","\x73","\x40","\x96")},
	{hx::fsObject /*::cpp::Pointer< wxButton >*/ ,(int)offsetof(Button_obj,buttonRef),HX_HCSTRING("buttonRef","\x81","\x72","\x06","\x50")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Button_obj_sStaticStorageInfo = 0;
#endif

static ::String Button_obj_sMemberFields[] = {
	HX_HCSTRING("_hasBitmap","\xaa","\x3e","\x97","\x8d"),
	HX_HCSTRING("get_bitmap","\xb8","\x7f","\x93","\xe1"),
	HX_HCSTRING("set_bitmap","\x2c","\x1e","\x11","\xe5"),
	HX_HCSTRING("buttonRef","\x81","\x72","\x06","\x50"),
	HX_HCSTRING("get_buttonRef","\x58","\x46","\x6a","\x11"),
	::String(null()) };

static void Button_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Button_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#endif

hx::Class Button_obj::__mClass;

void Button_obj::__register()
{
	hx::Object *dummy = new Button_obj;
	Button_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Button","\x0f","\xd0","\x5e","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Button_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Button_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Button_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Button_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Button_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Button_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
