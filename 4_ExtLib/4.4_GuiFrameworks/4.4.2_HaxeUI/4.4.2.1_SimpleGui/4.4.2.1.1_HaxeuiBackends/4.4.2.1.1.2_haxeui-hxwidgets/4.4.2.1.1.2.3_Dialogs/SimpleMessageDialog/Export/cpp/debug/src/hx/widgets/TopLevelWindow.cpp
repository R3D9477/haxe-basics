// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_76c96c3c0bae3300
#define INCLUDED_76c96c3c0bae3300
#include "wx/toplevel.h"
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_7_new,"hx.widgets.TopLevelWindow","new",0x22e08a0e,"hx.widgets.TopLevelWindow.new","hx/widgets/TopLevelWindow.hx",7,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_13_get_title,"hx.widgets.TopLevelWindow","get_title",0x2dd8a21d,"hx.widgets.TopLevelWindow.get_title","hx/widgets/TopLevelWindow.hx",13,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_17_set_title,"hx.widgets.TopLevelWindow","set_title",0x11298e29,"hx.widgets.TopLevelWindow.set_title","hx/widgets/TopLevelWindow.hx",17,0x5ce745e0)
HX_LOCAL_STACK_FRAME(_hx_pos_c5f43bd6ebfdaf89_29_get_topLevelWindowRef,"hx.widgets.TopLevelWindow","get_topLevelWindowRef",0xc7074299,"hx.widgets.TopLevelWindow.get_topLevelWindowRef","hx/widgets/TopLevelWindow.hx",29,0x5ce745e0)
namespace hx{
namespace widgets{

void TopLevelWindow_obj::__construct( ::hx::widgets::Window parent, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_7_new)
HXDLIN(   7)		super::__construct(parent,id);
            	}

Dynamic TopLevelWindow_obj::__CreateEmpty() { return new TopLevelWindow_obj; }

void *TopLevelWindow_obj::_hx_vtable = 0;

Dynamic TopLevelWindow_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TopLevelWindow_obj > _hx_result = new TopLevelWindow_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TopLevelWindow_obj::_hx_isInstanceOf(int inClassId) {
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
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

::String TopLevelWindow_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_13_get_title)
HXLINE(  14)		 wxString r = this->get_topLevelWindowRef()->ptr->GetTitle();
HXLINE(  15)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TopLevelWindow_obj,get_title,return )

::String TopLevelWindow_obj::set_title(::String value){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_17_set_title)
HXLINE(  18)		const char* this1 = value.__s;
HXDLIN(  18)		::cpp::Pointer<  wxString > s = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  19)		 wxString tmp = s->get_ref();
HXDLIN(  19)		this->get_topLevelWindowRef()->ptr->SetTitle(tmp);
HXLINE(  20)		s->destroy();
HXLINE(  21)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TopLevelWindow_obj,set_title,return )

::cpp::Pointer<  wxTopLevelWindow > TopLevelWindow_obj::get_topLevelWindowRef(){
            	HX_STACKFRAME(&_hx_pos_c5f43bd6ebfdaf89_29_get_topLevelWindowRef)
HXDLIN(  29)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TopLevelWindow_obj,get_topLevelWindowRef,return )


hx::ObjectPtr< TopLevelWindow_obj > TopLevelWindow_obj::__new( ::hx::widgets::Window parent, ::Dynamic id) {
	hx::ObjectPtr< TopLevelWindow_obj > __this = new TopLevelWindow_obj();
	__this->__construct(parent,id);
	return __this;
}

hx::ObjectPtr< TopLevelWindow_obj > TopLevelWindow_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::Dynamic id) {
	TopLevelWindow_obj *__this = (TopLevelWindow_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TopLevelWindow_obj), true, "hx.widgets.TopLevelWindow"));
	*(void **)__this = TopLevelWindow_obj::_hx_vtable;
	__this->__construct(parent,id);
	return __this;
}

TopLevelWindow_obj::TopLevelWindow_obj()
{
}

void TopLevelWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TopLevelWindow);
	HX_MARK_MEMBER_NAME(topLevelWindowRef,"topLevelWindowRef");
	 ::hx::widgets::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TopLevelWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(topLevelWindowRef,"topLevelWindowRef");
	 ::hx::widgets::Window_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TopLevelWindow_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_title() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_title") ) { return hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return hx::Val( set_title_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"topLevelWindowRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_topLevelWindowRef() : topLevelWindowRef ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_topLevelWindowRef") ) { return hx::Val( get_topLevelWindowRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TopLevelWindow_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_title(inValue.Cast< ::String >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"topLevelWindowRef") ) { topLevelWindowRef=inValue.Cast< ::cpp::Pointer<  wxTopLevelWindow > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TopLevelWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("topLevelWindowRef","\x94","\x82","\x46","\xb0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TopLevelWindow_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxTopLevelWindow >*/ ,(int)offsetof(TopLevelWindow_obj,topLevelWindowRef),HX_HCSTRING("topLevelWindowRef","\x94","\x82","\x46","\xb0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TopLevelWindow_obj_sStaticStorageInfo = 0;
#endif

static ::String TopLevelWindow_obj_sMemberFields[] = {
	HX_HCSTRING("get_title","\xef","\x71","\xe4","\x53"),
	HX_HCSTRING("set_title","\xfb","\x5d","\x35","\x37"),
	HX_HCSTRING("topLevelWindowRef","\x94","\x82","\x46","\xb0"),
	HX_HCSTRING("get_topLevelWindowRef","\x6b","\x85","\xf4","\x2e"),
	::String(null()) };

static void TopLevelWindow_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TopLevelWindow_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TopLevelWindow_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TopLevelWindow_obj::__mClass,"__mClass");
};

#endif

hx::Class TopLevelWindow_obj::__mClass;

void TopLevelWindow_obj::__register()
{
	hx::Object *dummy = new TopLevelWindow_obj;
	TopLevelWindow_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.TopLevelWindow","\x1c","\x2b","\x7b","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TopLevelWindow_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TopLevelWindow_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TopLevelWindow_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TopLevelWindow_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TopLevelWindow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TopLevelWindow_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
