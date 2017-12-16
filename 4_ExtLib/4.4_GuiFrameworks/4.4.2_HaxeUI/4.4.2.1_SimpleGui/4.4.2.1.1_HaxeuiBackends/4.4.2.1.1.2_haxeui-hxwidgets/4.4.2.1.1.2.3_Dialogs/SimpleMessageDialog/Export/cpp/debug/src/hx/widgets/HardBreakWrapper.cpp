// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_ea27b635ecb75858
#define INCLUDED_ea27b635ecb75858
#include "custom/hardbreakwrapper.h"
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
#ifndef INCLUDED_hx_widgets_HardBreakWrapper
#include <hx/widgets/HardBreakWrapper.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ebe5ce2a1114f946_12_new,"hx.widgets.HardBreakWrapper","new",0xa5a9b12e,"hx.widgets.HardBreakWrapper.new","hx/widgets/HardBreakWrapper.hx",12,0x4c848e40)
HX_LOCAL_STACK_FRAME(_hx_pos_ebe5ce2a1114f946_19_get_wrapped,"hx.widgets.HardBreakWrapper","get_wrapped",0x0fd7942a,"hx.widgets.HardBreakWrapper.get_wrapped","hx/widgets/HardBreakWrapper.hx",19,0x4c848e40)
namespace hx{
namespace widgets{

void HardBreakWrapper_obj::__construct( ::hx::widgets::Window win,::String text,int maxWidth){
            	HX_STACKFRAME(&_hx_pos_ebe5ce2a1114f946_12_new)
HXDLIN(  12)		if (hx::IsNull( this->_ref )) {
HXLINE(  13)			const char* this1 = text.__s;
HXDLIN(  13)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  14)			 wxString tmp = str;
HXDLIN(  14)			::cpp::Pointer<  wxHardBreakWrapper > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxHardBreakWrapper(::hx::widgets::Window_obj::toRaw(win),tmp,maxWidth)));
HXDLIN(  14)			this->_ref = _hx_tmp;
            		}
            	}

Dynamic HardBreakWrapper_obj::__CreateEmpty() { return new HardBreakWrapper_obj; }

void *HardBreakWrapper_obj::_hx_vtable = 0;

Dynamic HardBreakWrapper_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HardBreakWrapper_obj > _hx_result = new HardBreakWrapper_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool HardBreakWrapper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x61c6c4de;
}

::String HardBreakWrapper_obj::get_wrapped(){
            	HX_STACKFRAME(&_hx_pos_ebe5ce2a1114f946_19_get_wrapped)
HXLINE(  20)		 wxString r = this->_ref->ptr->GetWrapped();
HXLINE(  21)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(HardBreakWrapper_obj,get_wrapped,return )


hx::ObjectPtr< HardBreakWrapper_obj > HardBreakWrapper_obj::__new( ::hx::widgets::Window win,::String text,int maxWidth) {
	hx::ObjectPtr< HardBreakWrapper_obj > __this = new HardBreakWrapper_obj();
	__this->__construct(win,text,maxWidth);
	return __this;
}

hx::ObjectPtr< HardBreakWrapper_obj > HardBreakWrapper_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window win,::String text,int maxWidth) {
	HardBreakWrapper_obj *__this = (HardBreakWrapper_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HardBreakWrapper_obj), true, "hx.widgets.HardBreakWrapper"));
	*(void **)__this = HardBreakWrapper_obj::_hx_vtable;
	__this->__construct(win,text,maxWidth);
	return __this;
}

HardBreakWrapper_obj::HardBreakWrapper_obj()
{
}

void HardBreakWrapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HardBreakWrapper);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(wrapped,"wrapped");
	HX_MARK_END_CLASS();
}

void HardBreakWrapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(wrapped,"wrapped");
}

hx::Val HardBreakWrapper_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return hx::Val( _ref ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapped") ) { return hx::Val( inCallProp == hx::paccAlways ? get_wrapped() : wrapped ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_wrapped") ) { return hx::Val( get_wrapped_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HardBreakWrapper_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxHardBreakWrapper > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapped") ) { wrapped=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HardBreakWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"));
	outFields->push(HX_HCSTRING("wrapped","\x45","\xd5","\x64","\x0d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HardBreakWrapper_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxHardBreakWrapper >*/ ,(int)offsetof(HardBreakWrapper_obj,_ref),HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f")},
	{hx::fsString,(int)offsetof(HardBreakWrapper_obj,wrapped),HX_HCSTRING("wrapped","\x45","\xd5","\x64","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HardBreakWrapper_obj_sStaticStorageInfo = 0;
#endif

static ::String HardBreakWrapper_obj_sMemberFields[] = {
	HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"),
	HX_HCSTRING("wrapped","\x45","\xd5","\x64","\x0d"),
	HX_HCSTRING("get_wrapped","\x5c","\x35","\x5f","\x93"),
	::String(null()) };

static void HardBreakWrapper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HardBreakWrapper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HardBreakWrapper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HardBreakWrapper_obj::__mClass,"__mClass");
};

#endif

hx::Class HardBreakWrapper_obj::__mClass;

void HardBreakWrapper_obj::__register()
{
	hx::Object *dummy = new HardBreakWrapper_obj;
	HardBreakWrapper_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.HardBreakWrapper","\x3c","\x42","\x9a","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HardBreakWrapper_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HardBreakWrapper_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HardBreakWrapper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HardBreakWrapper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HardBreakWrapper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HardBreakWrapper_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
