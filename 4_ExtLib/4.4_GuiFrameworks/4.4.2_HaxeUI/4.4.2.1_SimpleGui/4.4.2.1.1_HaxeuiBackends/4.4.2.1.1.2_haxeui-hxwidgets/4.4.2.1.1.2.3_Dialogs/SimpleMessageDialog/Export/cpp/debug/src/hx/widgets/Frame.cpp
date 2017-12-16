// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_cef5afac15da51b5
#define INCLUDED_cef5afac15da51b5
#include "wx/frame.h"
#endif
#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_bc23844531366d98
#define INCLUDED_bc23844531366d98
#include "wx/menu.h"
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
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Frame
#include <hx/widgets/Frame.h>
#endif
#ifndef INCLUDED_hx_widgets_MenuBar
#include <hx/widgets/MenuBar.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
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
#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_FrameStyle
#include <wx/widgets/styles/FrameStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d81d57e82ad7930d_10_new,"hx.widgets.Frame","new",0xe148b5a2,"hx.widgets.Frame.new","hx/widgets/Frame.hx",10,0xed4a8f10)
HX_LOCAL_STACK_FRAME(_hx_pos_d81d57e82ad7930d_29_get_menuBar,"hx.widgets.Frame","get_menuBar",0x8a6488cd,"hx.widgets.Frame.get_menuBar","hx/widgets/Frame.hx",29,0xed4a8f10)
HX_LOCAL_STACK_FRAME(_hx_pos_d81d57e82ad7930d_36_set_menuBar,"hx.widgets.Frame","set_menuBar",0x94d18fd9,"hx.widgets.Frame.set_menuBar","hx/widgets/Frame.hx",36,0xed4a8f10)
HX_LOCAL_STACK_FRAME(_hx_pos_d81d57e82ad7930d_42_center,"hx.widgets.Frame","center",0xbee375d3,"hx.widgets.Frame.center","hx/widgets/Frame.hx",42,0xed4a8f10)
HX_LOCAL_STACK_FRAME(_hx_pos_d81d57e82ad7930d_50_get_frameRef,"hx.widgets.Frame","get_frameRef",0x6307c9ad,"hx.widgets.Frame.get_frameRef","hx/widgets/Frame.hx",50,0xed4a8f10)
namespace hx{
namespace widgets{

void Frame_obj::__construct( ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_d81d57e82ad7930d_10_new)
HXLINE(  11)		if ((style == (int)0)) {
HXLINE(  12)			style = ::wx::widgets::styles::FrameStyle_obj::DEFAULT_FRAME_STYLE;
            		}
HXLINE(  15)		if (hx::IsNull( this->_ref )) {
HXLINE(  16)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxFrame()))->reinterpret();
HXLINE(  17)			const char* this1 = title.__s;
HXDLIN(  17)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  18)			 wxString tmp = str;
HXDLIN(  18)			 wxFrame * _hx_tmp = this->get_frameRef()->ptr;
HXDLIN(  18)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  18)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  18)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  18)			(*(_hx_tmp)).Create(_hx_tmp1,id,tmp,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  21)		super::__construct(parent,id);
            	}

Dynamic Frame_obj::__CreateEmpty() { return new Frame_obj; }

void *Frame_obj::_hx_vtable = 0;

Dynamic Frame_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Frame_obj > _hx_result = new Frame_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Frame_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d664327) {
		if (inClassId<=(int)0x350d7ce6) {
			if (inClassId<=(int)0x2d54613e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2d54613e;
			} else {
				return inClassId==(int)0x350d7ce6;
			}
		} else {
			return inClassId==(int)0x3d664327;
		}
	} else {
		if (inClassId<=(int)0x7f575436) {
			return inClassId==(int)0x7c424752 || inClassId==(int)0x7f575436;
		} else {
			return inClassId==(int)0x7f8f9123;
		}
	}
}

 ::hx::widgets::MenuBar Frame_obj::get_menuBar(){
            	HX_GC_STACKFRAME(&_hx_pos_d81d57e82ad7930d_29_get_menuBar)
HXLINE(  30)		 ::hx::widgets::MenuBar m =  ::hx::widgets::MenuBar_obj::__alloc( HX_CTX ,(int)0,false);
HXLINE(  31)		::cpp::Pointer<  wxMenuBar > p = ::cpp::Pointer_obj::fromRaw(this->get_frameRef()->ptr->GetMenuBar());
HXLINE(  32)		m->_ref = p->reinterpret();
HXLINE(  33)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Frame_obj,get_menuBar,return )

 ::hx::widgets::MenuBar Frame_obj::set_menuBar( ::hx::widgets::MenuBar value){
            	HX_STACKFRAME(&_hx_pos_d81d57e82ad7930d_36_set_menuBar)
HXLINE(  37)		 wxFrame * _hx_tmp = this->get_frameRef()->ptr;
HXDLIN(  37)		(*(_hx_tmp)).SetMenuBar(value->get_menuBarRef()->get_raw());
HXLINE(  38)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Frame_obj,set_menuBar,return )

void Frame_obj::center(){
            	HX_STACKFRAME(&_hx_pos_d81d57e82ad7930d_42_center)
HXDLIN(  42)		this->get_frameRef()->ptr->Center();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Frame_obj,center,(void))

::cpp::Pointer<  wxFrame > Frame_obj::get_frameRef(){
            	HX_STACKFRAME(&_hx_pos_d81d57e82ad7930d_50_get_frameRef)
HXDLIN(  50)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Frame_obj,get_frameRef,return )


hx::ObjectPtr< Frame_obj > Frame_obj::__new( ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< Frame_obj > __this = new Frame_obj();
	__this->__construct(parent,title,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< Frame_obj > Frame_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	Frame_obj *__this = (Frame_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Frame_obj), true, "hx.widgets.Frame"));
	*(void **)__this = Frame_obj::_hx_vtable;
	__this->__construct(parent,title,__o_style,__o_id);
	return __this;
}

Frame_obj::Frame_obj()
{
}

void Frame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Frame);
	HX_MARK_MEMBER_NAME(frameRef,"frameRef");
	 ::hx::widgets::TopLevelWindow_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Frame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRef,"frameRef");
	 ::hx::widgets::TopLevelWindow_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Frame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { return hx::Val( center_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"menuBar") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_menuBar() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"frameRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_frameRef() : frameRef ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_menuBar") ) { return hx::Val( get_menuBar_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_menuBar") ) { return hx::Val( set_menuBar_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_frameRef") ) { return hx::Val( get_frameRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Frame_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"menuBar") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_menuBar(inValue.Cast<  ::hx::widgets::MenuBar >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"frameRef") ) { frameRef=inValue.Cast< ::cpp::Pointer<  wxFrame > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Frame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("menuBar","\x74","\x31","\x4b","\xba"));
	outFields->push(HX_HCSTRING("frameRef","\x26","\xb3","\xf4","\x1c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Frame_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxFrame >*/ ,(int)offsetof(Frame_obj,frameRef),HX_HCSTRING("frameRef","\x26","\xb3","\xf4","\x1c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Frame_obj_sStaticStorageInfo = 0;
#endif

static ::String Frame_obj_sMemberFields[] = {
	HX_HCSTRING("get_menuBar","\x8b","\x91","\x45","\x40"),
	HX_HCSTRING("set_menuBar","\x97","\x98","\xb2","\x4a"),
	HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),
	HX_HCSTRING("frameRef","\x26","\xb3","\xf4","\x1c"),
	HX_HCSTRING("get_frameRef","\x2f","\x67","\x0e","\xd2"),
	::String(null()) };

static void Frame_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Frame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Frame_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Frame_obj::__mClass,"__mClass");
};

#endif

hx::Class Frame_obj::__mClass;

void Frame_obj::__register()
{
	hx::Object *dummy = new Frame_obj;
	Frame_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Frame","\xb0","\xfc","\xd8","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Frame_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Frame_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Frame_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Frame_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Frame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Frame_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
