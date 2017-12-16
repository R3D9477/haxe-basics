// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
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
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
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
#ifndef INCLUDED_wx_widgets__ItemKind_ItemKind_Impl_
#include <wx/widgets/_ItemKind/ItemKind_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3cb996530242dabc_11_new,"hx.widgets.MenuItem","new",0xb61a8621,"hx.widgets.MenuItem.new","hx/widgets/MenuItem.hx",11,0x7e7b6aad)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb996530242dabc_24_set_bitmap,"hx.widgets.MenuItem","set_bitmap",0xddc3128b,"hx.widgets.MenuItem.set_bitmap","hx/widgets/MenuItem.hx",24,0x7e7b6aad)
HX_LOCAL_STACK_FRAME(_hx_pos_3cb996530242dabc_34_get_menuitemRef,"hx.widgets.MenuItem","get_menuitemRef",0x19d7c119,"hx.widgets.MenuItem.get_menuitemRef","hx/widgets/MenuItem.hx",34,0x7e7b6aad)
namespace hx{
namespace widgets{

void MenuItem_obj::__construct( ::hx::widgets::Menu parent,::String text, ::Dynamic kind,hx::Null< int >  __o_id){
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_3cb996530242dabc_11_new)
HXDLIN(  11)		if (hx::IsNotNull( parent )) {
HXLINE(  12)			if (hx::IsNull( kind )) {
HXLINE(  13)				kind = ::wx::widgets::_ItemKind::ItemKind_Impl__obj::ITEM_NORMAL;
            			}
HXLINE(  16)			const char* this1 = text.__s;
HXDLIN(  16)			 wxString str = wxString::FromUTF8(this1);
HXLINE(  17)			const char* this2 = HX_("",00,00,00,00).__s;
HXDLIN(  17)			 wxString str2 = wxString::FromUTF8(this2);
HXLINE(  18)			 wxString tmp = str;
HXDLIN(  18)			 wxString tmp1 = str2;
HXDLIN(  18)			::cpp::Pointer<  wxMenuItem > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxMenuItem(parent->get_menuRef()->get_raw(),id,tmp,tmp1)));
HXDLIN(  18)			this->_ref = _hx_tmp->reinterpret();
            		}
            	}

Dynamic MenuItem_obj::__CreateEmpty() { return new MenuItem_obj; }

void *MenuItem_obj::_hx_vtable = 0;

Dynamic MenuItem_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MenuItem_obj > _hx_result = new MenuItem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool MenuItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4992f251) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4992f251;
	} else {
		return inClassId==(int)0x7f575436;
	}
}

 ::hx::widgets::Bitmap MenuItem_obj::set_bitmap( ::hx::widgets::Bitmap value){
            	HX_STACKFRAME(&_hx_pos_3cb996530242dabc_24_set_bitmap)
HXLINE(  25)		 wxMenuItem * _hx_tmp = this->get_menuitemRef()->ptr;
HXDLIN(  25)		(*(_hx_tmp)).SetBitmap(value->get_bitmapRef()->get_ref());
HXLINE(  26)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuItem_obj,set_bitmap,return )

::cpp::Pointer<  wxMenuItem > MenuItem_obj::get_menuitemRef(){
            	HX_STACKFRAME(&_hx_pos_3cb996530242dabc_34_get_menuitemRef)
HXDLIN(  34)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuItem_obj,get_menuitemRef,return )


hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__new( ::hx::widgets::Menu parent,::String text, ::Dynamic kind,hx::Null< int >  __o_id) {
	hx::ObjectPtr< MenuItem_obj > __this = new MenuItem_obj();
	__this->__construct(parent,text,kind,__o_id);
	return __this;
}

hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Menu parent,::String text, ::Dynamic kind,hx::Null< int >  __o_id) {
	MenuItem_obj *__this = (MenuItem_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MenuItem_obj), true, "hx.widgets.MenuItem"));
	*(void **)__this = MenuItem_obj::_hx_vtable;
	__this->__construct(parent,text,kind,__o_id);
	return __this;
}

MenuItem_obj::MenuItem_obj()
{
}

void MenuItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuItem);
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(menuitemRef,"menuitemRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(menuitemRef,"menuitemRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MenuItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return hx::Val( bitmap ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_bitmap") ) { return hx::Val( set_bitmap_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"menuitemRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_menuitemRef() : menuitemRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_menuitemRef") ) { return hx::Val( get_menuitemRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MenuItem_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bitmap(inValue.Cast<  ::hx::widgets::Bitmap >()) );bitmap=inValue.Cast<  ::hx::widgets::Bitmap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"menuitemRef") ) { menuitemRef=inValue.Cast< ::cpp::Pointer<  wxMenuItem > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	outFields->push(HX_HCSTRING("menuitemRef","\x41","\x36","\x55","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MenuItem_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::widgets::Bitmap*/ ,(int)offsetof(MenuItem_obj,bitmap),HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{hx::fsObject /*::cpp::Pointer< wxMenuItem >*/ ,(int)offsetof(MenuItem_obj,menuitemRef),HX_HCSTRING("menuitemRef","\x41","\x36","\x55","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MenuItem_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuItem_obj_sMemberFields[] = {
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("set_bitmap","\x2c","\x1e","\x11","\xe5"),
	HX_HCSTRING("menuitemRef","\x41","\x36","\x55","\x63"),
	HX_HCSTRING("get_menuitemRef","\xd8","\xed","\x36","\x24"),
	::String(null()) };

static void MenuItem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MenuItem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuItem_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuItem_obj::__mClass;

void MenuItem_obj::__register()
{
	hx::Object *dummy = new MenuItem_obj;
	MenuItem_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.MenuItem","\xaf","\xe1","\xba","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MenuItem_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MenuItem_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuItem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MenuItem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuItem_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
