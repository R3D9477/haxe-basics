// GeneratedByHaxe
#include <hxcpp.h>

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
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Menu
#include <hx/widgets/Menu.h>
#endif
#ifndef INCLUDED_hx_widgets_MenuBar
#include <hx/widgets/MenuBar.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2d11a90af0297f57_9_new,"hx.widgets.MenuBar","new",0x6d3ae529,"hx.widgets.MenuBar.new","hx/widgets/MenuBar.hx",9,0xe5b131e9)
HX_LOCAL_STACK_FRAME(_hx_pos_2d11a90af0297f57_20_append,"hx.widgets.MenuBar","append",0xaa6d30b1,"hx.widgets.MenuBar.append","hx/widgets/MenuBar.hx",20,0xe5b131e9)
HX_LOCAL_STACK_FRAME(_hx_pos_2d11a90af0297f57_30_get_menuBarRef,"hx.widgets.MenuBar","get_menuBarRef",0x3f40c65f,"hx.widgets.MenuBar.get_menuBarRef","hx/widgets/MenuBar.hx",30,0xe5b131e9)
namespace hx{
namespace widgets{

void MenuBar_obj::__construct(hx::Null< int >  __o_style,hx::Null< bool >  __o_create){
int style = __o_style.Default(0);
bool create = __o_create.Default(true);
            	HX_STACKFRAME(&_hx_pos_2d11a90af0297f57_9_new)
HXLINE(  10)		super::__construct(null(),(int)-1);
HXLINE(  11)		if (create) {
HXLINE(  12)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxMenuBar(style)))->reinterpret();
            		}
            	}

Dynamic MenuBar_obj::__CreateEmpty() { return new MenuBar_obj; }

void *MenuBar_obj::_hx_vtable = 0;

Dynamic MenuBar_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MenuBar_obj > _hx_result = new MenuBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MenuBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x350d7ce6) {
		if (inClassId<=(int)0x011780b9) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x011780b9;
		} else {
			return inClassId==(int)0x350d7ce6;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

void MenuBar_obj::append( ::hx::widgets::Menu menu,::String title){
            	HX_STACKFRAME(&_hx_pos_2d11a90af0297f57_20_append)
HXLINE(  21)		const char* this1 = title.__s;
HXDLIN(  21)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  22)		 wxString tmp = str;
HXDLIN(  22)		 wxMenuBar * _hx_tmp = this->get_menuBarRef()->ptr;
HXDLIN(  22)		(*(_hx_tmp)).Append(menu->get_menuRef()->get_raw(),tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MenuBar_obj,append,(void))

::cpp::Pointer<  wxMenuBar > MenuBar_obj::get_menuBarRef(){
            	HX_STACKFRAME(&_hx_pos_2d11a90af0297f57_30_get_menuBarRef)
HXDLIN(  30)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuBar_obj,get_menuBarRef,return )


hx::ObjectPtr< MenuBar_obj > MenuBar_obj::__new(hx::Null< int >  __o_style,hx::Null< bool >  __o_create) {
	hx::ObjectPtr< MenuBar_obj > __this = new MenuBar_obj();
	__this->__construct(__o_style,__o_create);
	return __this;
}

hx::ObjectPtr< MenuBar_obj > MenuBar_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_style,hx::Null< bool >  __o_create) {
	MenuBar_obj *__this = (MenuBar_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MenuBar_obj), true, "hx.widgets.MenuBar"));
	*(void **)__this = MenuBar_obj::_hx_vtable;
	__this->__construct(__o_style,__o_create);
	return __this;
}

MenuBar_obj::MenuBar_obj()
{
}

void MenuBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuBar);
	HX_MARK_MEMBER_NAME(menuBarRef,"menuBarRef");
	 ::hx::widgets::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menuBarRef,"menuBarRef");
	 ::hx::widgets::Window_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MenuBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return hx::Val( append_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"menuBarRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_menuBarRef() : menuBarRef ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_menuBarRef") ) { return hx::Val( get_menuBarRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MenuBar_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"menuBarRef") ) { menuBarRef=inValue.Cast< ::cpp::Pointer<  wxMenuBar > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("menuBarRef","\x3f","\xc0","\xf4","\x36"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MenuBar_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxMenuBar >*/ ,(int)offsetof(MenuBar_obj,menuBarRef),HX_HCSTRING("menuBarRef","\x3f","\xc0","\xf4","\x36")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MenuBar_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuBar_obj_sMemberFields[] = {
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("menuBarRef","\x3f","\xc0","\xf4","\x36"),
	HX_HCSTRING("get_menuBarRef","\x88","\x48","\xea","\xac"),
	::String(null()) };

static void MenuBar_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuBar_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuBar_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuBar_obj::__mClass;

void MenuBar_obj::__register()
{
	hx::Object *dummy = new MenuBar_obj;
	MenuBar_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.MenuBar","\xb7","\x1c","\x6d","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MenuBar_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MenuBar_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuBar_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuBar_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuBar_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
