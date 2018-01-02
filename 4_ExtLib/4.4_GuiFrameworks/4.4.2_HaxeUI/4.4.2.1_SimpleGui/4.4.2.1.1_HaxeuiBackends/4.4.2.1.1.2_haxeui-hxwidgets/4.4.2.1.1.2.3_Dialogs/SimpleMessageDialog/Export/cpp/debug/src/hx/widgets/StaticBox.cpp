// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_77d84a928fbcf10b
#define INCLUDED_77d84a928fbcf10b
#include "wx/statbox.h"
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
#ifndef INCLUDED_hx_widgets_StaticBox
#include <hx/widgets/StaticBox.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8bfa5583cdbe1726_9_new,"hx.widgets.StaticBox","new",0xf2ba5cf2,"hx.widgets.StaticBox.new","hx/widgets/StaticBox.hx",9,0x6abbeac0)
HX_LOCAL_STACK_FRAME(_hx_pos_8bfa5583cdbe1726_24_get_staticBoxRef,"hx.widgets.StaticBox","get_staticBoxRef",0x6162600d,"hx.widgets.StaticBox.get_staticBoxRef","hx/widgets/StaticBox.hx",24,0x6abbeac0)
namespace hx{
namespace widgets{

void StaticBox_obj::__construct( ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_id){
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_8bfa5583cdbe1726_9_new)
HXLINE(  10)		if (hx::IsNull( this->_ref )) {
HXLINE(  11)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxStaticBox()))->reinterpret();
HXLINE(  12)			const char* this1 = title.__s;
HXDLIN(  12)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  13)			 wxString tmp = str;
HXDLIN(  13)			 wxStaticBox * _hx_tmp = this->get_staticBoxRef()->ptr;
HXDLIN(  13)			(*(_hx_tmp)).Create(::hx::widgets::Window_obj::toRaw(parent),id,tmp);
            		}
HXLINE(  16)		super::__construct(parent,id,null());
            	}

Dynamic StaticBox_obj::__CreateEmpty() { return new StaticBox_obj; }

void *StaticBox_obj::_hx_vtable = 0;

Dynamic StaticBox_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StaticBox_obj > _hx_result = new StaticBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool StaticBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x604dbaa2) {
		if (inClassId<=(int)0x4127391e) {
			if (inClassId<=(int)0x350d7ce6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
			} else {
				return inClassId==(int)0x4127391e;
			}
		} else {
			return inClassId==(int)0x604dbaa2;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

::cpp::Pointer<  wxStaticBox > StaticBox_obj::get_staticBoxRef(){
            	HX_STACKFRAME(&_hx_pos_8bfa5583cdbe1726_24_get_staticBoxRef)
HXDLIN(  24)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StaticBox_obj,get_staticBoxRef,return )


hx::ObjectPtr< StaticBox_obj > StaticBox_obj::__new( ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_id) {
	hx::ObjectPtr< StaticBox_obj > __this = new StaticBox_obj();
	__this->__construct(parent,title,__o_id);
	return __this;
}

hx::ObjectPtr< StaticBox_obj > StaticBox_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_id) {
	StaticBox_obj *__this = (StaticBox_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StaticBox_obj), true, "hx.widgets.StaticBox"));
	*(void **)__this = StaticBox_obj::_hx_vtable;
	__this->__construct(parent,title,__o_id);
	return __this;
}

StaticBox_obj::StaticBox_obj()
{
}

void StaticBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticBox);
	HX_MARK_MEMBER_NAME(staticBoxRef,"staticBoxRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(staticBoxRef,"staticBoxRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

hx::Val StaticBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"staticBoxRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_staticBoxRef() : staticBoxRef ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_staticBoxRef") ) { return hx::Val( get_staticBoxRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StaticBox_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"staticBoxRef") ) { staticBoxRef=inValue.Cast< ::cpp::Pointer<  wxStaticBox > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("staticBoxRef","\x56","\xf3","\x77","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StaticBox_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxStaticBox >*/ ,(int)offsetof(StaticBox_obj,staticBoxRef),HX_HCSTRING("staticBoxRef","\x56","\xf3","\x77","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *StaticBox_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticBox_obj_sMemberFields[] = {
	HX_HCSTRING("staticBoxRef","\x56","\xf3","\x77","\x86"),
	HX_HCSTRING("get_staticBoxRef","\xdf","\xdf","\x16","\x8b"),
	::String(null()) };

static void StaticBox_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StaticBox_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticBox_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticBox_obj::__mClass;

void StaticBox_obj::__register()
{
	hx::Object *dummy = new StaticBox_obj;
	StaticBox_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.StaticBox","\x00","\xbc","\xf0","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StaticBox_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StaticBox_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StaticBox_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StaticBox_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticBox_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
