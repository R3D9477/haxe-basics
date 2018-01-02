// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_04a9d982f0dc0b25
#define INCLUDED_04a9d982f0dc0b25
#include "wx/control.h"
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
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c4300f45363458fd_9_new,"hx.widgets.Control","new",0x9edec792,"hx.widgets.Control.new","hx/widgets/Control.hx",9,0xb3674fa0)
HX_LOCAL_STACK_FRAME(_hx_pos_c4300f45363458fd_22_get_label,"hx.widgets.Control","get_label",0x2a27d2fd,"hx.widgets.Control.get_label","hx/widgets/Control.hx",22,0xb3674fa0)
HX_LOCAL_STACK_FRAME(_hx_pos_c4300f45363458fd_26_set_label,"hx.widgets.Control","set_label",0x0d78bf09,"hx.widgets.Control.set_label","hx/widgets/Control.hx",26,0xb3674fa0)
HX_LOCAL_STACK_FRAME(_hx_pos_c4300f45363458fd_38_get_controlRef,"hx.widgets.Control","get_controlRef",0x3e7e384d,"hx.widgets.Control.get_controlRef","hx/widgets/Control.hx",38,0xb3674fa0)
namespace hx{
namespace widgets{

void Control_obj::__construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_c4300f45363458fd_9_new)
HXLINE(  10)		if (hx::IsNull( this->_ref )) {
HXLINE(  11)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxControl()))->reinterpret();
HXLINE(  12)			 wxControl * _hx_tmp = this->get_controlRef()->ptr;
HXDLIN(  12)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  12)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  12)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  12)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  15)		super::__construct(parent,id);
            	}

Dynamic Control_obj::__CreateEmpty() { return new Control_obj; }

void *Control_obj::_hx_vtable = 0;

Dynamic Control_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Control_obj > _hx_result = new Control_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Control_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x604dbaa2) {
		if (inClassId<=(int)0x350d7ce6) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
		} else {
			return inClassId==(int)0x604dbaa2;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

::String Control_obj::get_label(){
            	HX_STACKFRAME(&_hx_pos_c4300f45363458fd_22_get_label)
HXLINE(  23)		 wxString r = this->get_controlRef()->ptr->GetLabel();
HXLINE(  24)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,get_label,return )

::String Control_obj::set_label(::String value){
            	HX_STACKFRAME(&_hx_pos_c4300f45363458fd_26_set_label)
HXLINE(  27)		const char* this1 = value.__s;
HXDLIN(  27)		::cpp::Pointer<  wxString > s = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  28)		 wxString tmp = s->get_ref();
HXDLIN(  28)		this->get_controlRef()->ptr->SetLabel(tmp);
HXLINE(  29)		s->destroy();
HXLINE(  30)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Control_obj,set_label,return )

::cpp::Pointer<  wxControl > Control_obj::get_controlRef(){
            	HX_STACKFRAME(&_hx_pos_c4300f45363458fd_38_get_controlRef)
HXDLIN(  38)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Control_obj,get_controlRef,return )


hx::ObjectPtr< Control_obj > Control_obj::__new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< Control_obj > __this = new Control_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< Control_obj > Control_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	Control_obj *__this = (Control_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Control_obj), true, "hx.widgets.Control"));
	*(void **)__this = Control_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

Control_obj::Control_obj()
{
}

void Control_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Control);
	HX_MARK_MEMBER_NAME(controlRef,"controlRef");
	 ::hx::widgets::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Control_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(controlRef,"controlRef");
	 ::hx::widgets::Window_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Control_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_label() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_label") ) { return hx::Val( get_label_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_label") ) { return hx::Val( set_label_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controlRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_controlRef() : controlRef ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_controlRef") ) { return hx::Val( get_controlRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Control_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_label(inValue.Cast< ::String >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controlRef") ) { controlRef=inValue.Cast< ::cpp::Pointer<  wxControl > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Control_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("controlRef","\xf6","\xdd","\xaa","\x04"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Control_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxControl >*/ ,(int)offsetof(Control_obj,controlRef),HX_HCSTRING("controlRef","\xf6","\xdd","\xaa","\x04")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Control_obj_sStaticStorageInfo = 0;
#endif

static ::String Control_obj_sMemberFields[] = {
	HX_HCSTRING("get_label","\x4b","\x6a","\x58","\xb3"),
	HX_HCSTRING("set_label","\x57","\x56","\xa9","\x96"),
	HX_HCSTRING("controlRef","\xf6","\xdd","\xaa","\x04"),
	HX_HCSTRING("get_controlRef","\x3f","\x66","\xa0","\x7a"),
	::String(null()) };

static void Control_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Control_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Control_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Control_obj::__mClass,"__mClass");
};

#endif

hx::Class Control_obj::__mClass;

void Control_obj::__register()
{
	hx::Object *dummy = new Control_obj;
	Control_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Control","\xa0","\x56","\xa3","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Control_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Control_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Control_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Control_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Control_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Control_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
