// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_1b92b9574f32bb54
#define INCLUDED_1b92b9574f32bb54
#include "wx/imaglist.h"
#endif
#ifndef INCLUDED_255fe586a8b249f3
#define INCLUDED_255fe586a8b249f3
#include "wx/listctrl.h"
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
#ifndef INCLUDED_hx_widgets_ImageList
#include <hx/widgets/ImageList.h>
#endif
#ifndef INCLUDED_hx_widgets_ListCtrl
#include <hx/widgets/ListCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_ListItem
#include <hx/widgets/ListItem.h>
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
#ifndef INCLUDED_wx_widgets_styles_ListCtrlStyle
#include <wx/widgets/styles/ListCtrlStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cd239fab779fd691_10_new,"hx.widgets.ListCtrl","new",0xae662378,"hx.widgets.ListCtrl.new","hx/widgets/ListCtrl.hx",10,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_27_insertItem,"hx.widgets.ListCtrl","insertItem",0xfb9384d4,"hx.widgets.ListCtrl.insertItem","hx/widgets/ListCtrl.hx",27,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_35_setItem,"hx.widgets.ListCtrl","setItem",0x3e19c4ed,"hx.widgets.ListCtrl.setItem","hx/widgets/ListCtrl.hx",35,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_43_addItem,"hx.widgets.ListCtrl","addItem",0xb4d2c6ec,"hx.widgets.ListCtrl.addItem","hx/widgets/ListCtrl.hx",43,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_50_get_itemCount,"hx.widgets.ListCtrl","get_itemCount",0xf5e49fab,"hx.widgets.ListCtrl.get_itemCount","hx/widgets/ListCtrl.hx",50,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_55_get_largeImageList,"hx.widgets.ListCtrl","get_largeImageList",0x348756cf,"hx.widgets.ListCtrl.get_largeImageList","hx/widgets/ListCtrl.hx",55,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_61_set_largeImageList,"hx.widgets.ListCtrl","set_largeImageList",0x11368943,"hx.widgets.ListCtrl.set_largeImageList","hx/widgets/ListCtrl.hx",61,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_68_get_smallImageList,"hx.widgets.ListCtrl","get_smallImageList",0x34f59843,"hx.widgets.ListCtrl.get_smallImageList","hx/widgets/ListCtrl.hx",68,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_74_set_smallImageList,"hx.widgets.ListCtrl","set_smallImageList",0x11a4cab7,"hx.widgets.ListCtrl.set_smallImageList","hx/widgets/ListCtrl.hx",74,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_79_appendColumn,"hx.widgets.ListCtrl","appendColumn",0x9d600e38,"hx.widgets.ListCtrl.appendColumn","hx/widgets/ListCtrl.hx",79,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_90_get_listCtrlRef,"hx.widgets.ListCtrl","get_listCtrlRef",0x4d324759,"hx.widgets.ListCtrl.get_listCtrlRef","hx/widgets/ListCtrl.hx",90,0x66570536)
namespace hx{
namespace widgets{

void ListCtrl_obj::__construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_10_new)
HXLINE(  12)		if ((style == (int)0)) {
HXLINE(  13)			style = ::wx::widgets::styles::ListCtrlStyle_obj::ICON;
            		}
HXLINE(  16)		if (hx::IsNull( this->_ref )) {
HXLINE(  17)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxListCtrl()))->reinterpret();
HXLINE(  18)			 wxListCtrl * _hx_tmp = this->get_listCtrlRef()->ptr;
HXDLIN(  18)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  18)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  18)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  18)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  21)		super::__construct(parent,id,null());
            	}

Dynamic ListCtrl_obj::__CreateEmpty() { return new ListCtrl_obj; }

void *ListCtrl_obj::_hx_vtable = 0;

Dynamic ListCtrl_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ListCtrl_obj > _hx_result = new ListCtrl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ListCtrl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x604dbaa2) {
		if (inClassId<=(int)0x350d7ce6) {
			if (inClassId<=(int)0x1f215828) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1f215828;
			} else {
				return inClassId==(int)0x350d7ce6;
			}
		} else {
			return inClassId==(int)0x604dbaa2;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

int ListCtrl_obj::insertItem( ::hx::widgets::ListItem item,hx::Null< bool >  __o_autoDestroy){
bool autoDestroy = __o_autoDestroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_27_insertItem)
HXLINE(  28)		 wxListCtrl * n = this->get_listCtrlRef()->ptr;
HXDLIN(  28)		int n1 = (*(n)).InsertItem(item->get_listItemRef()->get_ref());
HXLINE(  29)		if ((autoDestroy == true)) {
HXLINE(  30)			item->destroy();
            		}
HXLINE(  32)		return n1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ListCtrl_obj,insertItem,return )

bool ListCtrl_obj::setItem( ::hx::widgets::ListItem item,hx::Null< bool >  __o_autoDestroy){
bool autoDestroy = __o_autoDestroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_35_setItem)
HXLINE(  36)		 wxListCtrl * b = this->get_listCtrlRef()->ptr;
HXDLIN(  36)		bool b1 = (*(b)).SetItem(item->get_listItemRef()->get_ref());
HXLINE(  37)		if ((autoDestroy == true)) {
HXLINE(  38)			item->destroy();
            		}
HXLINE(  40)		return b1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ListCtrl_obj,setItem,return )

int ListCtrl_obj::addItem( ::hx::widgets::ListItem item,hx::Null< bool >  __o_autoDestroy){
bool autoDestroy = __o_autoDestroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_43_addItem)
HXLINE(  44)		item->set_id(this->get_itemCount());
HXLINE(  45)		return this->insertItem(item,autoDestroy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ListCtrl_obj,addItem,return )

int ListCtrl_obj::get_itemCount(){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_50_get_itemCount)
HXDLIN(  50)		return this->get_listCtrlRef()->ptr->GetItemCount();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCtrl_obj,get_itemCount,return )

 ::hx::widgets::ImageList ListCtrl_obj::get_largeImageList(){
            	HX_GC_STACKFRAME(&_hx_pos_cd239fab779fd691_55_get_largeImageList)
HXLINE(  56)		 ::hx::widgets::ImageList list =  ::hx::widgets::ImageList_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  57)		 wxListCtrl * _hx_tmp = this->get_listCtrlRef()->ptr;
HXDLIN(  57)		list->_ref = ::cpp::Pointer_obj::fromRaw((*(_hx_tmp)).GetImageList(wxIMAGE_LIST_NORMAL))->reinterpret();
HXLINE(  58)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCtrl_obj,get_largeImageList,return )

 ::hx::widgets::ImageList ListCtrl_obj::set_largeImageList( ::hx::widgets::ImageList value){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_61_set_largeImageList)
HXLINE(  62)		 wxListCtrl * _hx_tmp = this->get_listCtrlRef()->ptr;
HXDLIN(  62)		 wxImageList* _hx_tmp1 = value->get_imagelistRef()->get_raw();
HXDLIN(  62)		(*(_hx_tmp)).SetImageList(_hx_tmp1,wxIMAGE_LIST_NORMAL);
HXLINE(  63)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListCtrl_obj,set_largeImageList,return )

 ::hx::widgets::ImageList ListCtrl_obj::get_smallImageList(){
            	HX_GC_STACKFRAME(&_hx_pos_cd239fab779fd691_68_get_smallImageList)
HXLINE(  69)		 ::hx::widgets::ImageList list =  ::hx::widgets::ImageList_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  70)		 wxListCtrl * _hx_tmp = this->get_listCtrlRef()->ptr;
HXDLIN(  70)		list->_ref = ::cpp::Pointer_obj::fromRaw((*(_hx_tmp)).GetImageList(wxIMAGE_LIST_SMALL))->reinterpret();
HXLINE(  71)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCtrl_obj,get_smallImageList,return )

 ::hx::widgets::ImageList ListCtrl_obj::set_smallImageList( ::hx::widgets::ImageList value){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_74_set_smallImageList)
HXLINE(  75)		 wxListCtrl * _hx_tmp = this->get_listCtrlRef()->ptr;
HXDLIN(  75)		 wxImageList* _hx_tmp1 = value->get_imagelistRef()->get_raw();
HXDLIN(  75)		(*(_hx_tmp)).SetImageList(_hx_tmp1,wxIMAGE_LIST_SMALL);
HXLINE(  76)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListCtrl_obj,set_smallImageList,return )

int ListCtrl_obj::appendColumn(::String heading){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_79_appendColumn)
HXLINE(  80)		const char* this1 = heading.__s;
HXDLIN(  80)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  81)		 wxString tmp = s;
HXDLIN(  81)		int n = this->get_listCtrlRef()->ptr->AppendColumn(tmp);
HXLINE(  82)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListCtrl_obj,appendColumn,return )

::cpp::Pointer<  wxListCtrl > ListCtrl_obj::get_listCtrlRef(){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_90_get_listCtrlRef)
HXDLIN(  90)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCtrl_obj,get_listCtrlRef,return )


hx::ObjectPtr< ListCtrl_obj > ListCtrl_obj::__new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< ListCtrl_obj > __this = new ListCtrl_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< ListCtrl_obj > ListCtrl_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	ListCtrl_obj *__this = (ListCtrl_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ListCtrl_obj), true, "hx.widgets.ListCtrl"));
	*(void **)__this = ListCtrl_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

ListCtrl_obj::ListCtrl_obj()
{
}

void ListCtrl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListCtrl);
	HX_MARK_MEMBER_NAME(itemCount,"itemCount");
	HX_MARK_MEMBER_NAME(listCtrlRef,"listCtrlRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListCtrl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(itemCount,"itemCount");
	HX_VISIT_MEMBER_NAME(listCtrlRef,"listCtrlRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ListCtrl_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"setItem") ) { return hx::Val( setItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"addItem") ) { return hx::Val( addItem_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemCount") ) { return hx::Val( inCallProp == hx::paccAlways ? get_itemCount() : itemCount ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"insertItem") ) { return hx::Val( insertItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listCtrlRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_listCtrlRef() : listCtrlRef ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"appendColumn") ) { return hx::Val( appendColumn_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_itemCount") ) { return hx::Val( get_itemCount_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"largeImageList") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_largeImageList() ); }
		if (HX_FIELD_EQ(inName,"smallImageList") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_smallImageList() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_listCtrlRef") ) { return hx::Val( get_listCtrlRef_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_largeImageList") ) { return hx::Val( get_largeImageList_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_largeImageList") ) { return hx::Val( set_largeImageList_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_smallImageList") ) { return hx::Val( get_smallImageList_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_smallImageList") ) { return hx::Val( set_smallImageList_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ListCtrl_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"itemCount") ) { itemCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listCtrlRef") ) { listCtrlRef=inValue.Cast< ::cpp::Pointer<  wxListCtrl > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"largeImageList") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_largeImageList(inValue.Cast<  ::hx::widgets::ImageList >()) ); }
		if (HX_FIELD_EQ(inName,"smallImageList") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_smallImageList(inValue.Cast<  ::hx::widgets::ImageList >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListCtrl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("itemCount","\xbc","\xaa","\x4e","\x4a"));
	outFields->push(HX_HCSTRING("largeImageList","\x1e","\x8e","\xe6","\x58"));
	outFields->push(HX_HCSTRING("smallImageList","\x92","\xcf","\x54","\x59"));
	outFields->push(HX_HCSTRING("listCtrlRef","\xaa","\xf8","\x81","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ListCtrl_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ListCtrl_obj,itemCount),HX_HCSTRING("itemCount","\xbc","\xaa","\x4e","\x4a")},
	{hx::fsObject /*::cpp::Pointer< wxListCtrl >*/ ,(int)offsetof(ListCtrl_obj,listCtrlRef),HX_HCSTRING("listCtrlRef","\xaa","\xf8","\x81","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ListCtrl_obj_sStaticStorageInfo = 0;
#endif

static ::String ListCtrl_obj_sMemberFields[] = {
	HX_HCSTRING("insertItem","\xec","\xc4","\xaa","\x2b"),
	HX_HCSTRING("setItem","\xd5","\x05","\x44","\x0b"),
	HX_HCSTRING("addItem","\xd4","\x07","\xfd","\x81"),
	HX_HCSTRING("itemCount","\xbc","\xaa","\x4e","\x4a"),
	HX_HCSTRING("get_itemCount","\x93","\x7e","\xb2","\x0b"),
	HX_HCSTRING("get_largeImageList","\xe7","\x6e","\x80","\xf4"),
	HX_HCSTRING("set_largeImageList","\x5b","\xa1","\x2f","\xd1"),
	HX_HCSTRING("get_smallImageList","\x5b","\xb0","\xee","\xf4"),
	HX_HCSTRING("set_smallImageList","\xcf","\xe2","\x9d","\xd1"),
	HX_HCSTRING("appendColumn","\x50","\x84","\xd9","\x71"),
	HX_HCSTRING("listCtrlRef","\xaa","\xf8","\x81","\x18"),
	HX_HCSTRING("get_listCtrlRef","\x41","\xb0","\x63","\xd9"),
	::String(null()) };

static void ListCtrl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListCtrl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ListCtrl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListCtrl_obj::__mClass,"__mClass");
};

#endif

hx::Class ListCtrl_obj::__mClass;

void ListCtrl_obj::__register()
{
	hx::Object *dummy = new ListCtrl_obj;
	ListCtrl_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.ListCtrl","\x86","\x47","\x49","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ListCtrl_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ListCtrl_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListCtrl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ListCtrl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListCtrl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListCtrl_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
