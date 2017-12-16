// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_255fe586a8b249f3
#define INCLUDED_255fe586a8b249f3
#include "wx/listctrl.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
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
#ifndef INCLUDED_hx_widgets_ListCtrl
#include <hx/widgets/ListCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_ListView
#include <hx/widgets/ListView.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0951bcd9dcd432d7_8_new,"hx.widgets.ListView","new",0x467d3232,"hx.widgets.ListView.new","hx/widgets/ListView.hx",8,0xa191abbc)
HX_LOCAL_STACK_FRAME(_hx_pos_0951bcd9dcd432d7_26_getColumnWidth,"hx.widgets.ListView","getColumnWidth",0x6d4fcdc8,"hx.widgets.ListView.getColumnWidth","hx/widgets/ListView.hx",26,0xa191abbc)
HX_LOCAL_STACK_FRAME(_hx_pos_0951bcd9dcd432d7_30_setColumnWidth,"hx.widgets.ListView","setColumnWidth",0x8d6fb63c,"hx.widgets.ListView.setColumnWidth","hx/widgets/ListView.hx",30,0xa191abbc)
HX_LOCAL_STACK_FRAME(_hx_pos_0951bcd9dcd432d7_38_get_listViewRef,"hx.widgets.ListView","get_listViewRef",0x9bbc2b99,"hx.widgets.ListView.get_listViewRef","hx/widgets/ListView.hx",38,0xa191abbc)
namespace hx{
namespace widgets{

void ListView_obj::__construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_0951bcd9dcd432d7_8_new)
HXLINE(  10)		if ((style == (int)0)) {
HXLINE(  11)			style = ::wx::widgets::styles::ListCtrlStyle_obj::ICON;
            		}
HXLINE(  14)		if (hx::IsNull( this->_ref )) {
HXLINE(  15)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxListView()))->reinterpret();
HXLINE(  16)			 wxListView * _hx_tmp = this->get_listViewRef()->ptr;
HXDLIN(  16)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  16)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  16)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  16)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  19)		super::__construct(parent,style,id);
            	}

Dynamic ListView_obj::__CreateEmpty() { return new ListView_obj; }

void *ListView_obj::_hx_vtable = 0;

Dynamic ListView_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ListView_obj > _hx_result = new ListView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ListView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x350d7ce6) {
		if (inClassId<=(int)0x2ba801e2) {
			if (inClassId<=(int)0x1f215828) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1f215828;
			} else {
				return inClassId==(int)0x2ba801e2;
			}
		} else {
			return inClassId==(int)0x350d7ce6;
		}
	} else {
		if (inClassId<=(int)0x7f575436) {
			return inClassId==(int)0x604dbaa2 || inClassId==(int)0x7f575436;
		} else {
			return inClassId==(int)0x7f8f9123;
		}
	}
}

int ListView_obj::getColumnWidth(int col){
            	HX_STACKFRAME(&_hx_pos_0951bcd9dcd432d7_26_getColumnWidth)
HXDLIN(  26)		return this->get_listViewRef()->ptr->GetColumnWidth(col);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,getColumnWidth,return )

bool ListView_obj::setColumnWidth(int col,int width){
            	HX_STACKFRAME(&_hx_pos_0951bcd9dcd432d7_30_setColumnWidth)
HXDLIN(  30)		return this->get_listViewRef()->ptr->SetColumnWidth(col,width);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ListView_obj,setColumnWidth,return )

::cpp::Pointer<  wxListView > ListView_obj::get_listViewRef(){
            	HX_STACKFRAME(&_hx_pos_0951bcd9dcd432d7_38_get_listViewRef)
HXDLIN(  38)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_listViewRef,return )


hx::ObjectPtr< ListView_obj > ListView_obj::__new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< ListView_obj > __this = new ListView_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< ListView_obj > ListView_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	ListView_obj *__this = (ListView_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ListView_obj), true, "hx.widgets.ListView"));
	*(void **)__this = ListView_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

ListView_obj::ListView_obj()
{
}

void ListView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListView);
	HX_MARK_MEMBER_NAME(listViewRef,"listViewRef");
	 ::hx::widgets::ListCtrl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listViewRef,"listViewRef");
	 ::hx::widgets::ListCtrl_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ListView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"listViewRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_listViewRef() : listViewRef ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getColumnWidth") ) { return hx::Val( getColumnWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"setColumnWidth") ) { return hx::Val( setColumnWidth_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_listViewRef") ) { return hx::Val( get_listViewRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ListView_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"listViewRef") ) { listViewRef=inValue.Cast< ::cpp::Pointer<  wxListView > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("listViewRef","\x30","\x9f","\xbc","\x53"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ListView_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxListView >*/ ,(int)offsetof(ListView_obj,listViewRef),HX_HCSTRING("listViewRef","\x30","\x9f","\xbc","\x53")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ListView_obj_sStaticStorageInfo = 0;
#endif

static ::String ListView_obj_sMemberFields[] = {
	HX_HCSTRING("getColumnWidth","\x5a","\xa2","\x47","\xed"),
	HX_HCSTRING("setColumnWidth","\xce","\x8a","\x67","\x0d"),
	HX_HCSTRING("listViewRef","\x30","\x9f","\xbc","\x53"),
	HX_HCSTRING("get_listViewRef","\xc7","\x56","\x9e","\x14"),
	::String(null()) };

static void ListView_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ListView_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListView_obj::__mClass,"__mClass");
};

#endif

hx::Class ListView_obj::__mClass;

void ListView_obj::__register()
{
	hx::Object *dummy = new ListView_obj;
	ListView_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.ListView","\x40","\xf1","\xcf","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ListView_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ListView_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListView_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ListView_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListView_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
