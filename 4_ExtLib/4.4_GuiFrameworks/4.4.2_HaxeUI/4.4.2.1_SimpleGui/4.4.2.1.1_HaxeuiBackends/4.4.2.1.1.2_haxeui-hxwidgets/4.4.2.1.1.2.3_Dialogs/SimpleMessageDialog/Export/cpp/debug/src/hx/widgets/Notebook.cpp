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
#ifndef INCLUDED_3cdccfd42c43dcc1
#define INCLUDED_3cdccfd42c43dcc1
#include "wx/notebook.h"
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
#ifndef INCLUDED_hx_widgets_BookCtrlBase
#include <hx/widgets/BookCtrlBase.h>
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
#ifndef INCLUDED_hx_widgets_Notebook
#include <hx/widgets/Notebook.h>
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
#ifndef INCLUDED_hx_widgets_WithImages
#include <hx/widgets/WithImages.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d675bc56e6878544_10_new,"hx.widgets.Notebook","new",0xf1f8a96a,"hx.widgets.Notebook.new","hx/widgets/Notebook.hx",10,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_24_addPage,"hx.widgets.Notebook","addPage",0xd016431a,"hx.widgets.Notebook.addPage","hx/widgets/Notebook.hx",24,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_33_deletePage,"hx.widgets.Notebook","deletePage",0xe72f7450,"hx.widgets.Notebook.deletePage","hx/widgets/Notebook.hx",33,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_37_deleteAllPages,"hx.widgets.Notebook","deleteAllPages",0xce4a18e4,"hx.widgets.Notebook.deleteAllPages","hx/widgets/Notebook.hx",37,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_42_get_pageCount,"hx.widgets.Notebook","get_pageCount",0x2a1c3961,"hx.widgets.Notebook.get_pageCount","hx/widgets/Notebook.hx",42,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_47_get_imageList,"hx.widgets.Notebook","get_imageList",0x6389ceba,"hx.widgets.Notebook.get_imageList","hx/widgets/Notebook.hx",47,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_53_set_imageList,"hx.widgets.Notebook","set_imageList",0xa88fb0c6,"hx.widgets.Notebook.set_imageList","hx/widgets/Notebook.hx",53,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_60_get_selection,"hx.widgets.Notebook","get_selection",0xc7bd15ad,"hx.widgets.Notebook.get_selection","hx/widgets/Notebook.hx",60,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_62_set_selection,"hx.widgets.Notebook","set_selection",0x0cc2f7b9,"hx.widgets.Notebook.set_selection","hx/widgets/Notebook.hx",62,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_67_calcSizeFromPage,"hx.widgets.Notebook","calcSizeFromPage",0x7ea967a5,"hx.widgets.Notebook.calcSizeFromPage","hx/widgets/Notebook.hx",67,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_76_set_padding,"hx.widgets.Notebook","set_padding",0x75f8b3fe,"hx.widgets.Notebook.set_padding","hx/widgets/Notebook.hx",76,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_83_getPageText,"hx.widgets.Notebook","getPageText",0x90c95c5c,"hx.widgets.Notebook.getPageText","hx/widgets/Notebook.hx",83,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_90_get_selectionText,"hx.widgets.Notebook","get_selectionText",0x2890e8fa,"hx.widgets.Notebook.get_selectionText","hx/widgets/Notebook.hx",90,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_103_get_notebookRef,"hx.widgets.Notebook","get_notebookRef",0xdfdaee99,"hx.widgets.Notebook.get_notebookRef","hx/widgets/Notebook.hx",103,0xb1430384)
namespace hx{
namespace widgets{

void Notebook_obj::__construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_10_new)
HXLINE(  11)		this->allowIcons = true;
HXLINE(  13)		if (hx::IsNull( this->_ref )) {
HXLINE(  14)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxNotebook()))->reinterpret();
HXLINE(  15)			 wxNotebook * _hx_tmp = this->get_notebookRef()->ptr;
HXDLIN(  15)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  15)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  15)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  15)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  18)		super::__construct(parent,id,null());
            	}

Dynamic Notebook_obj::__CreateEmpty() { return new Notebook_obj; }

void *Notebook_obj::_hx_vtable = 0;

Dynamic Notebook_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Notebook_obj > _hx_result = new Notebook_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Notebook_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x604dbaa2) {
		if (inClassId<=(int)0x42b44b24) {
			if (inClassId<=(int)0x350d7ce6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
			} else {
				return inClassId==(int)0x42b44b24;
			}
		} else {
			return inClassId==(int)0x604dbaa2;
		}
	} else {
		if (inClassId<=(int)0x7f575436) {
			return inClassId==(int)0x62d97d1a || inClassId==(int)0x7f575436;
		} else {
			return inClassId==(int)0x7f8f9123;
		}
	}
}

bool Notebook_obj::addPage( ::hx::widgets::Window page,::String text,hx::Null< bool >  __o_select,hx::Null< int >  __o_imageId){
bool select = __o_select.Default(false);
int imageId = __o_imageId.Default(-1);
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_24_addPage)
HXLINE(  25)		if (!(this->allowIcons)) {
HXLINE(  26)			imageId = (int)-1;
            		}
HXLINE(  28)		const char* this1 = text.__s;
HXDLIN(  28)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  29)		 wxString tmp = str;
HXDLIN(  29)		 wxNotebook * _hx_tmp = this->get_notebookRef()->ptr;
HXDLIN(  29)		return (*(_hx_tmp)).AddPage(::hx::widgets::Window_obj::toRaw(page),tmp,select,imageId);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Notebook_obj,addPage,return )

bool Notebook_obj::deletePage(int page){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_33_deletePage)
HXDLIN(  33)		return this->get_notebookRef()->ptr->DeletePage(page);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Notebook_obj,deletePage,return )

bool Notebook_obj::deleteAllPages(){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_37_deleteAllPages)
HXDLIN(  37)		return this->get_notebookRef()->ptr->DeleteAllPages();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Notebook_obj,deleteAllPages,return )

int Notebook_obj::get_pageCount(){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_42_get_pageCount)
HXDLIN(  42)		return this->get_notebookRef()->ptr->GetPageCount();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Notebook_obj,get_pageCount,return )

 ::hx::widgets::ImageList Notebook_obj::get_imageList(){
            	HX_GC_STACKFRAME(&_hx_pos_d675bc56e6878544_47_get_imageList)
HXLINE(  48)		 ::hx::widgets::ImageList list =  ::hx::widgets::ImageList_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  49)		list->_ref = ::cpp::Pointer_obj::fromRaw(this->get_notebookRef()->ptr->GetImageList())->reinterpret();
HXLINE(  50)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Notebook_obj,get_imageList,return )

 ::hx::widgets::ImageList Notebook_obj::set_imageList( ::hx::widgets::ImageList value){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_53_set_imageList)
HXLINE(  54)		 wxNotebook * _hx_tmp = this->get_notebookRef()->ptr;
HXDLIN(  54)		(*(_hx_tmp)).SetImageList(value->get_imagelistRef()->get_raw());
HXLINE(  55)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Notebook_obj,set_imageList,return )

int Notebook_obj::get_selection(){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_60_get_selection)
HXDLIN(  60)		return this->get_notebookRef()->ptr->GetSelection();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Notebook_obj,get_selection,return )

int Notebook_obj::set_selection(int value){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_62_set_selection)
HXLINE(  63)		this->get_notebookRef()->ptr->SetSelection(value);
HXLINE(  64)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Notebook_obj,set_selection,return )

 ::hx::widgets::Size Notebook_obj::calcSizeFromPage(){
            	HX_GC_STACKFRAME(&_hx_pos_d675bc56e6878544_67_calcSizeFromPage)
HXLINE(  68)		 ::hx::widgets::Size pageSize =  ::hx::widgets::Size_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  69)		::cpp::Pointer<  wxSize > temp = pageSize->createPointer();
HXLINE(  70)		 wxNotebook * r = this->get_notebookRef()->ptr;
HXDLIN(  70)		 wxSize r1 = (*(r)).CalcSizeFromPage(temp->get_ref());
HXLINE(  71)		temp->destroy();
HXLINE(  72)		return ::hx::widgets::Size_obj::copy(r1);
            	}


 ::hx::widgets::Size Notebook_obj::set_padding( ::hx::widgets::Size value){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_76_set_padding)
HXLINE(  77)		::cpp::Pointer<  wxSize > temp = value->createPointer();
HXLINE(  78)		 wxNotebook * _hx_tmp = this->get_notebookRef()->ptr;
HXDLIN(  78)		(*(_hx_tmp)).SetPadding(temp->get_ref());
HXLINE(  79)		temp->destroy();
HXLINE(  80)		return value;
            	}


::String Notebook_obj::getPageText(int page){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_83_getPageText)
HXLINE(  84)		 wxString r = this->get_notebookRef()->ptr->GetPageText(page);
HXLINE(  85)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Notebook_obj,getPageText,return )

::String Notebook_obj::get_selectionText(){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_90_get_selectionText)
HXDLIN(  90)		return this->getPageText(this->get_selection());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Notebook_obj,get_selectionText,return )

::cpp::Pointer<  wxNotebook > Notebook_obj::get_notebookRef(){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_103_get_notebookRef)
HXDLIN( 103)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Notebook_obj,get_notebookRef,return )


hx::ObjectPtr< Notebook_obj > Notebook_obj::__new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< Notebook_obj > __this = new Notebook_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< Notebook_obj > Notebook_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	Notebook_obj *__this = (Notebook_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Notebook_obj), true, "hx.widgets.Notebook"));
	*(void **)__this = Notebook_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

Notebook_obj::Notebook_obj()
{
}

void Notebook_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Notebook);
	HX_MARK_MEMBER_NAME(pageCount,"pageCount");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(selectionText,"selectionText");
	HX_MARK_MEMBER_NAME(allowIcons,"allowIcons");
	HX_MARK_MEMBER_NAME(notebookRef,"notebookRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Notebook_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pageCount,"pageCount");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(selectionText,"selectionText");
	HX_VISIT_MEMBER_NAME(allowIcons,"allowIcons");
	HX_VISIT_MEMBER_NAME(notebookRef,"notebookRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Notebook_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"addPage") ) { return hx::Val( addPage_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageCount") ) { return hx::Val( inCallProp == hx::paccAlways ? get_pageCount() : pageCount ); }
		if (HX_FIELD_EQ(inName,"imageList") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_imageList() ); }
		if (HX_FIELD_EQ(inName,"selection") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_selection() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deletePage") ) { return hx::Val( deletePage_dyn() ); }
		if (HX_FIELD_EQ(inName,"allowIcons") ) { return hx::Val( allowIcons ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPageText") ) { return hx::Val( getPageText_dyn() ); }
		if (HX_FIELD_EQ(inName,"notebookRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_notebookRef() : notebookRef ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_pageCount") ) { return hx::Val( get_pageCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_imageList") ) { return hx::Val( get_imageList_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_imageList") ) { return hx::Val( set_imageList_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selection") ) { return hx::Val( get_selection_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selection") ) { return hx::Val( set_selection_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectionText") ) { return hx::Val( inCallProp == hx::paccAlways ? get_selectionText() : selectionText ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"deleteAllPages") ) { return hx::Val( deleteAllPages_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_notebookRef") ) { return hx::Val( get_notebookRef_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectionText") ) { return hx::Val( get_selectionText_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Notebook_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"pageCount") ) { pageCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageList") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_imageList(inValue.Cast<  ::hx::widgets::ImageList >()) ); }
		if (HX_FIELD_EQ(inName,"selection") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selection(inValue.Cast< int >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowIcons") ) { allowIcons=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"notebookRef") ) { notebookRef=inValue.Cast< ::cpp::Pointer<  wxNotebook > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectionText") ) { selectionText=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Notebook_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pageCount","\x00","\x1c","\x7a","\xf0"));
	outFields->push(HX_HCSTRING("imageList","\x59","\xb1","\xe7","\x29"));
	outFields->push(HX_HCSTRING("selection","\x4c","\xf8","\x1a","\x8e"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("selectionText","\x19","\x07","\x3e","\xfd"));
	outFields->push(HX_HCSTRING("allowIcons","\x91","\x5d","\xa3","\xe1"));
	outFields->push(HX_HCSTRING("notebookRef","\xf8","\xf6","\x6d","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Notebook_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Notebook_obj,pageCount),HX_HCSTRING("pageCount","\x00","\x1c","\x7a","\xf0")},
	{hx::fsObject /*::hx::widgets::Size*/ ,(int)offsetof(Notebook_obj,padding),HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0")},
	{hx::fsString,(int)offsetof(Notebook_obj,selectionText),HX_HCSTRING("selectionText","\x19","\x07","\x3e","\xfd")},
	{hx::fsBool,(int)offsetof(Notebook_obj,allowIcons),HX_HCSTRING("allowIcons","\x91","\x5d","\xa3","\xe1")},
	{hx::fsObject /*::cpp::Pointer< wxNotebook >*/ ,(int)offsetof(Notebook_obj,notebookRef),HX_HCSTRING("notebookRef","\xf8","\xf6","\x6d","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Notebook_obj_sStaticStorageInfo = 0;
#endif

static ::String Notebook_obj_sMemberFields[] = {
	HX_HCSTRING("addPage","\x10","\x1d","\x8f","\x86"),
	HX_HCSTRING("deletePage","\x1a","\xb8","\x9e","\x9d"),
	HX_HCSTRING("deleteAllPages","\xae","\x09","\x08","\x10"),
	HX_HCSTRING("pageCount","\x00","\x1c","\x7a","\xf0"),
	HX_HCSTRING("get_pageCount","\xd7","\xef","\xdd","\xb1"),
	HX_HCSTRING("get_imageList","\x30","\x85","\x4b","\xeb"),
	HX_HCSTRING("set_imageList","\x3c","\x67","\x51","\x30"),
	HX_HCSTRING("get_selection","\x23","\xcc","\x7e","\x4f"),
	HX_HCSTRING("set_selection","\x2f","\xae","\x84","\x94"),
	HX_HCSTRING("getPageText","\x52","\x69","\xb5","\x7b"),
	HX_HCSTRING("selectionText","\x19","\x07","\x3e","\xfd"),
	HX_HCSTRING("get_selectionText","\x70","\x12","\xae","\x03"),
	HX_HCSTRING("allowIcons","\x91","\x5d","\xa3","\xe1"),
	HX_HCSTRING("notebookRef","\xf8","\xf6","\x6d","\x63"),
	HX_HCSTRING("get_notebookRef","\x8f","\xae","\x4f","\x24"),
	::String(null()) };

static void Notebook_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Notebook_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Notebook_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Notebook_obj::__mClass,"__mClass");
};

#endif

hx::Class Notebook_obj::__mClass;

void Notebook_obj::__register()
{
	hx::Object *dummy = new Notebook_obj;
	Notebook_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Notebook","\x78","\x6c","\x01","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Notebook_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Notebook_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Notebook_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Notebook_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Notebook_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Notebook_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
