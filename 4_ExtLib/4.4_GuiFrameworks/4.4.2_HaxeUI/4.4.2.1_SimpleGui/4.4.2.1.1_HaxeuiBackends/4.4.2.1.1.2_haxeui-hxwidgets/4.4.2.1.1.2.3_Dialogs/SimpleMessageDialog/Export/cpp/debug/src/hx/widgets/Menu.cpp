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
#ifndef INCLUDED_hx_widgets_MenuItem
#include <hx/widgets/MenuItem.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a6a9ba1894b4ea0b_10_new,"hx.widgets.Menu","new",0xb4dd916e,"hx.widgets.Menu.new","hx/widgets/Menu.hx",10,0xfdc09100)
HX_LOCAL_STACK_FRAME(_hx_pos_a6a9ba1894b4ea0b_23_appendItem,"hx.widgets.Menu","appendItem",0x5b2e64bf,"hx.widgets.Menu.appendItem","hx/widgets/Menu.hx",23,0xfdc09100)
HX_LOCAL_STACK_FRAME(_hx_pos_a6a9ba1894b4ea0b_31_append,"hx.widgets.Menu","append",0x3259bd8c,"hx.widgets.Menu.append","hx/widgets/Menu.hx",31,0xfdc09100)
HX_LOCAL_STACK_FRAME(_hx_pos_a6a9ba1894b4ea0b_35_appendCheckItem,"hx.widgets.Menu","appendCheckItem",0x99329ecf,"hx.widgets.Menu.appendCheckItem","hx/widgets/Menu.hx",35,0xfdc09100)
HX_LOCAL_STACK_FRAME(_hx_pos_a6a9ba1894b4ea0b_44_appendRadioItem,"hx.widgets.Menu","appendRadioItem",0xef1fac82,"hx.widgets.Menu.appendRadioItem","hx/widgets/Menu.hx",44,0xfdc09100)
HX_LOCAL_STACK_FRAME(_hx_pos_a6a9ba1894b4ea0b_53_appendSeparator,"hx.widgets.Menu","appendSeparator",0x31127139,"hx.widgets.Menu.appendSeparator","hx/widgets/Menu.hx",53,0xfdc09100)
HX_LOCAL_STACK_FRAME(_hx_pos_a6a9ba1894b4ea0b_61_appendSubMenu,"hx.widgets.Menu","appendSubMenu",0x244c4f13,"hx.widgets.Menu.appendSubMenu","hx/widgets/Menu.hx",61,0xfdc09100)
HX_LOCAL_STACK_FRAME(_hx_pos_a6a9ba1894b4ea0b_74_get_menuRef,"hx.widgets.Menu","get_menuRef",0xaf383819,"hx.widgets.Menu.get_menuRef","hx/widgets/Menu.hx",74,0xfdc09100)
namespace hx{
namespace widgets{

void Menu_obj::__construct(::String text,hx::Null< int >  __o_style){
int style = __o_style.Default(0);
            	HX_STACKFRAME(&_hx_pos_a6a9ba1894b4ea0b_10_new)
HXLINE(  11)		if (hx::IsNull( this->_ref )) {
HXLINE(  12)			const char* this1 = text.__s;
HXDLIN(  12)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  13)			 wxString tmp = str;
HXDLIN(  13)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxMenu(tmp,style)))->reinterpret();
            		}
HXLINE(  16)		super::__construct();
            	}

Dynamic Menu_obj::__CreateEmpty() { return new Menu_obj; }

void *Menu_obj::_hx_vtable = 0;

Dynamic Menu_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Menu_obj > _hx_result = new Menu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Menu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x350d7ce6) {
		if (inClassId<=(int)0x221f9a1e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x221f9a1e;
		} else {
			return inClassId==(int)0x350d7ce6;
		}
	} else {
		return inClassId==(int)0x7f575436;
	}
}

 ::hx::widgets::MenuItem Menu_obj::appendItem( ::hx::widgets::MenuItem menuItem){
            	HX_GC_STACKFRAME(&_hx_pos_a6a9ba1894b4ea0b_23_appendItem)
HXLINE(  24)		 wxMenu * menuItemRef = this->get_menuRef()->ptr;
HXDLIN(  24)		::cpp::Pointer<  wxMenuItem > menuItemRef1 = ::cpp::Pointer_obj::fromRaw((*(menuItemRef)).Append(menuItem->get_menuitemRef()->get_raw()));
HXLINE(  25)		 ::hx::widgets::MenuItem menuItem1 =  ::hx::widgets::MenuItem_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  26)		menuItem1->_ref = menuItemRef1->reinterpret();
HXLINE(  27)		return menuItem1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,appendItem,return )

 ::hx::widgets::MenuItem Menu_obj::append(int id,::String text){
            	HX_GC_STACKFRAME(&_hx_pos_a6a9ba1894b4ea0b_31_append)
HXDLIN(  31)		return this->appendItem( ::hx::widgets::MenuItem_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),text,null(),id));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Menu_obj,append,return )

 ::hx::widgets::MenuItem Menu_obj::appendCheckItem(int id,::String text){
            	HX_GC_STACKFRAME(&_hx_pos_a6a9ba1894b4ea0b_35_appendCheckItem)
HXLINE(  36)		const char* this1 = text.__s;
HXDLIN(  36)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  37)		 wxString tmp = str;
HXDLIN(  37)		::cpp::Pointer<  wxMenuItem > menuItemRef = ::cpp::Pointer_obj::fromRaw(this->get_menuRef()->ptr->AppendCheckItem(id,tmp));
HXLINE(  38)		 ::hx::widgets::MenuItem menuItem =  ::hx::widgets::MenuItem_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  39)		menuItem->_ref = menuItemRef->reinterpret();
HXLINE(  40)		return menuItem;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Menu_obj,appendCheckItem,return )

 ::hx::widgets::MenuItem Menu_obj::appendRadioItem(int id,::String text){
            	HX_GC_STACKFRAME(&_hx_pos_a6a9ba1894b4ea0b_44_appendRadioItem)
HXLINE(  45)		const char* this1 = text.__s;
HXDLIN(  45)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  46)		 wxString tmp = str;
HXDLIN(  46)		::cpp::Pointer<  wxMenuItem > menuItemRef = ::cpp::Pointer_obj::fromRaw(this->get_menuRef()->ptr->AppendRadioItem(id,tmp));
HXLINE(  47)		 ::hx::widgets::MenuItem menuItem =  ::hx::widgets::MenuItem_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  48)		menuItem->_ref = menuItemRef->reinterpret();
HXLINE(  49)		return menuItem;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Menu_obj,appendRadioItem,return )

 ::hx::widgets::MenuItem Menu_obj::appendSeparator(){
            	HX_GC_STACKFRAME(&_hx_pos_a6a9ba1894b4ea0b_53_appendSeparator)
HXLINE(  54)		::cpp::Pointer<  wxMenuItem > menuItemRef = ::cpp::Pointer_obj::fromRaw(this->get_menuRef()->ptr->AppendSeparator());
HXLINE(  55)		 ::hx::widgets::MenuItem menuItem =  ::hx::widgets::MenuItem_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  56)		menuItem->_ref = menuItemRef->reinterpret();
HXLINE(  57)		return menuItem;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Menu_obj,appendSeparator,return )

 ::hx::widgets::MenuItem Menu_obj::appendSubMenu( ::hx::widgets::Menu menu,::String text){
            	HX_GC_STACKFRAME(&_hx_pos_a6a9ba1894b4ea0b_61_appendSubMenu)
HXLINE(  62)		const char* this1 = text.__s;
HXDLIN(  62)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  63)		 wxString tmp = str;
HXDLIN(  63)		 wxMenu * menuItemRef = this->get_menuRef()->ptr;
HXDLIN(  63)		::cpp::Pointer<  wxMenuItem > menuItemRef1 = ::cpp::Pointer_obj::fromRaw((*(menuItemRef)).AppendSubMenu(menu->get_menuRef()->get_raw(),tmp));
HXLINE(  64)		 ::hx::widgets::MenuItem menuItem =  ::hx::widgets::MenuItem_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  65)		menuItem->_ref = menuItemRef1->reinterpret();
HXLINE(  66)		return menuItem;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Menu_obj,appendSubMenu,return )

::cpp::Pointer<  wxMenu > Menu_obj::get_menuRef(){
            	HX_STACKFRAME(&_hx_pos_a6a9ba1894b4ea0b_74_get_menuRef)
HXDLIN(  74)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Menu_obj,get_menuRef,return )


hx::ObjectPtr< Menu_obj > Menu_obj::__new(::String text,hx::Null< int >  __o_style) {
	hx::ObjectPtr< Menu_obj > __this = new Menu_obj();
	__this->__construct(text,__o_style);
	return __this;
}

hx::ObjectPtr< Menu_obj > Menu_obj::__alloc(hx::Ctx *_hx_ctx,::String text,hx::Null< int >  __o_style) {
	Menu_obj *__this = (Menu_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Menu_obj), true, "hx.widgets.Menu"));
	*(void **)__this = Menu_obj::_hx_vtable;
	__this->__construct(text,__o_style);
	return __this;
}

Menu_obj::Menu_obj()
{
}

void Menu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Menu);
	HX_MARK_MEMBER_NAME(menuRef,"menuRef");
	 ::hx::widgets::EvtHandler_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Menu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menuRef,"menuRef");
	 ::hx::widgets::EvtHandler_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Menu_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return hx::Val( append_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"menuRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_menuRef() : menuRef ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"appendItem") ) { return hx::Val( appendItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_menuRef") ) { return hx::Val( get_menuRef_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"appendSubMenu") ) { return hx::Val( appendSubMenu_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"appendCheckItem") ) { return hx::Val( appendCheckItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"appendRadioItem") ) { return hx::Val( appendRadioItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"appendSeparator") ) { return hx::Val( appendSeparator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Menu_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"menuRef") ) { menuRef=inValue.Cast< ::cpp::Pointer<  wxMenu > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Menu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("menuRef","\xf4","\x58","\x57","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Menu_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxMenu >*/ ,(int)offsetof(Menu_obj,menuRef),HX_HCSTRING("menuRef","\xf4","\x58","\x57","\xba")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Menu_obj_sStaticStorageInfo = 0;
#endif

static ::String Menu_obj_sMemberFields[] = {
	HX_HCSTRING("appendItem","\x0d","\xc8","\xcb","\x53"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("appendCheckItem","\xc1","\x80","\x04","\xcc"),
	HX_HCSTRING("appendRadioItem","\x74","\x8e","\xf1","\x21"),
	HX_HCSTRING("appendSeparator","\x2b","\x53","\xe4","\x63"),
	HX_HCSTRING("appendSubMenu","\x85","\x70","\x7d","\x4f"),
	HX_HCSTRING("menuRef","\xf4","\x58","\x57","\xba"),
	HX_HCSTRING("get_menuRef","\x0b","\xb9","\x51","\x40"),
	::String(null()) };

static void Menu_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Menu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Menu_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Menu_obj::__mClass,"__mClass");
};

#endif

hx::Class Menu_obj::__mClass;

void Menu_obj::__register()
{
	hx::Object *dummy = new Menu_obj;
	Menu_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Menu","\x7c","\x02","\xc9","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Menu_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Menu_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Menu_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Menu_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Menu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Menu_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
