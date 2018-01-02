// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_89dc52de61a51fa3
#define INCLUDED_89dc52de61a51fa3
#include "wx/panel.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Panel
#include <hx/widgets/Panel.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_507c2f56b6582dad_8_new,"hx.widgets.Panel","new",0x43e76ff9,"hx.widgets.Panel.new","hx/widgets/Panel.hx",8,0x0265ac99)
HX_LOCAL_STACK_FRAME(_hx_pos_507c2f56b6582dad_22_get_panelRef,"hx.widgets.Panel","get_panelRef",0x462ba9ff,"hx.widgets.Panel.get_panelRef","hx/widgets/Panel.hx",22,0x0265ac99)
namespace hx{
namespace widgets{

void Panel_obj::__construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_507c2f56b6582dad_8_new)
HXLINE(   9)		if (hx::IsNull( this->_ref )) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxPanel()))->reinterpret();
HXLINE(  11)			 wxPanel * _hx_tmp = this->get_panelRef()->ptr;
HXDLIN(  11)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  11)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  11)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  11)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  14)		super::__construct(parent,id);
            	}

Dynamic Panel_obj::__CreateEmpty() { return new Panel_obj; }

void *Panel_obj::_hx_vtable = 0;

Dynamic Panel_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Panel_obj > _hx_result = new Panel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Panel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x711615a5) {
		if (inClassId<=(int)0x350d7ce6) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
		} else {
			return inClassId==(int)0x711615a5;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

::cpp::Pointer<  wxPanel > Panel_obj::get_panelRef(){
            	HX_STACKFRAME(&_hx_pos_507c2f56b6582dad_22_get_panelRef)
HXDLIN(  22)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Panel_obj,get_panelRef,return )


hx::ObjectPtr< Panel_obj > Panel_obj::__new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< Panel_obj > __this = new Panel_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< Panel_obj > Panel_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	Panel_obj *__this = (Panel_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Panel_obj), true, "hx.widgets.Panel"));
	*(void **)__this = Panel_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

Panel_obj::Panel_obj()
{
}

void Panel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Panel);
	HX_MARK_MEMBER_NAME(panelRef,"panelRef");
	 ::hx::widgets::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Panel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(panelRef,"panelRef");
	 ::hx::widgets::Window_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Panel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"panelRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_panelRef() : panelRef ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_panelRef") ) { return hx::Val( get_panelRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Panel_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"panelRef") ) { panelRef=inValue.Cast< ::cpp::Pointer<  wxPanel > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Panel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("panelRef","\xaf","\xd0","\x0f","\x32"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Panel_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxPanel >*/ ,(int)offsetof(Panel_obj,panelRef),HX_HCSTRING("panelRef","\xaf","\xd0","\x0f","\x32")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Panel_obj_sStaticStorageInfo = 0;
#endif

static ::String Panel_obj_sMemberFields[] = {
	HX_HCSTRING("panelRef","\xaf","\xd0","\x0f","\x32"),
	HX_HCSTRING("get_panelRef","\xb8","\x84","\x29","\xe7"),
	::String(null()) };

static void Panel_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Panel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Panel_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Panel_obj::__mClass,"__mClass");
};

#endif

hx::Class Panel_obj::__mClass;

void Panel_obj::__register()
{
	hx::Object *dummy = new Panel_obj;
	Panel_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Panel","\x87","\xff","\xa7","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Panel_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Panel_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Panel_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Panel_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Panel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Panel_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
