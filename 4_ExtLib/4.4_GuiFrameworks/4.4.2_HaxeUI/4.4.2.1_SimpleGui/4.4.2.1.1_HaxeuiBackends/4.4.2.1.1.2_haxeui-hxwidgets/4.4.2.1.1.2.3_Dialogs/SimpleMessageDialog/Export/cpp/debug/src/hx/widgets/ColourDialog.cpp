// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_e764e3cfec6851e0
#define INCLUDED_e764e3cfec6851e0
#include "wx/colordlg.h"
#endif
#ifndef INCLUDED_e4d5646cda5915ba
#define INCLUDED_e4d5646cda5915ba
#include "wx/colour.h"
#endif
#ifndef INCLUDED_d46be5f2643923f7
#define INCLUDED_d46be5f2643923f7
#include "wx/colourdata.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_ColourData
#include <hx/widgets/ColourData.h>
#endif
#ifndef INCLUDED_hx_widgets_ColourDialog
#include <hx/widgets/ColourDialog.h>
#endif
#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2a9ea9aacfd3ef83_9_new,"hx.widgets.ColourDialog","new",0x8eb46183,"hx.widgets.ColourDialog.new","hx/widgets/ColourDialog.hx",9,0x284c888b)
HX_LOCAL_STACK_FRAME(_hx_pos_2a9ea9aacfd3ef83_25_get_colourData,"hx.widgets.ColourDialog","get_colourData",0xc313f49c,"hx.widgets.ColourDialog.get_colourData","hx/widgets/ColourDialog.hx",25,0x284c888b)
HX_LOCAL_STACK_FRAME(_hx_pos_2a9ea9aacfd3ef83_32_get_selectedColour,"hx.widgets.ColourDialog","get_selectedColour",0x05ff2c0d,"hx.widgets.ColourDialog.get_selectedColour","hx/widgets/ColourDialog.hx",32,0x284c888b)
HX_LOCAL_STACK_FRAME(_hx_pos_2a9ea9aacfd3ef83_40_get_colourDialogRef,"hx.widgets.ColourDialog","get_colourDialogRef",0xf2fa7db9,"hx.widgets.ColourDialog.get_colourDialogRef","hx/widgets/ColourDialog.hx",40,0x284c888b)
namespace hx{
namespace widgets{

void ColourDialog_obj::__construct( ::hx::widgets::Window parent,hx::Null< int >  __o_colour,hx::Null< bool >  __o_chooseFull){
int colour = __o_colour.Default(-1);
bool chooseFull = __o_chooseFull.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_2a9ea9aacfd3ef83_9_new)
HXLINE(  10)		if (hx::IsNull( this->_ref )) {
HXLINE(  11)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxColourDialog()))->reinterpret();
HXLINE(  12)			 ::hx::widgets::ColourData colourData =  ::hx::widgets::ColourData_obj::__alloc( HX_CTX ,colour,chooseFull);
HXLINE(  13)			::cpp::Pointer<  wxColourData > pointer = colourData->createPointer();
HXLINE(  14)			 wxColourDialog * _hx_tmp = this->get_colourDialogRef()->ptr;
HXDLIN(  14)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  14)			(*(_hx_tmp)).Create(_hx_tmp1,pointer->get_raw());
HXLINE(  15)			pointer->destroy();
            		}
HXLINE(  18)		super::__construct(parent,null(),null(),null());
            	}

Dynamic ColourDialog_obj::__CreateEmpty() { return new ColourDialog_obj; }

void *ColourDialog_obj::_hx_vtable = 0;

Dynamic ColourDialog_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ColourDialog_obj > _hx_result = new ColourDialog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ColourDialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4896b707) {
		if (inClassId<=(int)0x350d7ce6) {
			if (inClassId<=(int)0x2d54613e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2d54613e;
			} else {
				return inClassId==(int)0x350d7ce6;
			}
		} else {
			return inClassId==(int)0x3d664327 || inClassId==(int)0x4896b707;
		}
	} else {
		if (inClassId<=(int)0x7f575436) {
			return inClassId==(int)0x5df0edb3 || inClassId==(int)0x7f575436;
		} else {
			return inClassId==(int)0x7f8f9123;
		}
	}
}

 ::hx::widgets::ColourData ColourDialog_obj::get_colourData(){
            	HX_GC_STACKFRAME(&_hx_pos_2a9ea9aacfd3ef83_25_get_colourData)
HXLINE(  26)		 wxColourData wxColourData = this->get_colourDialogRef()->ptr->GetColourData();
HXLINE(  27)		unsigned int _hx_tmp = wxColourData.GetColour().GetRGB();
HXDLIN(  27)		return  ::hx::widgets::ColourData_obj::__alloc( HX_CTX ,_hx_tmp,wxColourData.GetChooseFull());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColourDialog_obj,get_colourData,return )

int ColourDialog_obj::get_selectedColour(){
            	HX_STACKFRAME(&_hx_pos_2a9ea9aacfd3ef83_32_get_selectedColour)
HXDLIN(  32)		return this->get_colourData()->colour;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColourDialog_obj,get_selectedColour,return )

::cpp::Pointer<  wxColourDialog > ColourDialog_obj::get_colourDialogRef(){
            	HX_STACKFRAME(&_hx_pos_2a9ea9aacfd3ef83_40_get_colourDialogRef)
HXDLIN(  40)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColourDialog_obj,get_colourDialogRef,return )


hx::ObjectPtr< ColourDialog_obj > ColourDialog_obj::__new( ::hx::widgets::Window parent,hx::Null< int >  __o_colour,hx::Null< bool >  __o_chooseFull) {
	hx::ObjectPtr< ColourDialog_obj > __this = new ColourDialog_obj();
	__this->__construct(parent,__o_colour,__o_chooseFull);
	return __this;
}

hx::ObjectPtr< ColourDialog_obj > ColourDialog_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_colour,hx::Null< bool >  __o_chooseFull) {
	ColourDialog_obj *__this = (ColourDialog_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ColourDialog_obj), true, "hx.widgets.ColourDialog"));
	*(void **)__this = ColourDialog_obj::_hx_vtable;
	__this->__construct(parent,__o_colour,__o_chooseFull);
	return __this;
}

ColourDialog_obj::ColourDialog_obj()
{
}

void ColourDialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColourDialog);
	HX_MARK_MEMBER_NAME(colourData,"colourData");
	HX_MARK_MEMBER_NAME(selectedColour,"selectedColour");
	HX_MARK_MEMBER_NAME(colourDialogRef,"colourDialogRef");
	 ::hx::widgets::Dialog_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColourDialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colourData,"colourData");
	HX_VISIT_MEMBER_NAME(selectedColour,"selectedColour");
	HX_VISIT_MEMBER_NAME(colourDialogRef,"colourDialogRef");
	 ::hx::widgets::Dialog_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ColourDialog_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"colourData") ) { return hx::Val( inCallProp == hx::paccAlways ? get_colourData() : colourData ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_colourData") ) { return hx::Val( get_colourData_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectedColour") ) { return hx::Val( inCallProp == hx::paccAlways ? get_selectedColour() : selectedColour ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colourDialogRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_colourDialogRef() : colourDialogRef ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_selectedColour") ) { return hx::Val( get_selectedColour_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_colourDialogRef") ) { return hx::Val( get_colourDialogRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ColourDialog_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"colourData") ) { colourData=inValue.Cast<  ::hx::widgets::ColourData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectedColour") ) { selectedColour=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colourDialogRef") ) { colourDialogRef=inValue.Cast< ::cpp::Pointer<  wxColourDialog > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColourDialog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colourData","\x96","\x60","\x3b","\x95"));
	outFields->push(HX_HCSTRING("selectedColour","\x07","\x1d","\xe5","\x49"));
	outFields->push(HX_HCSTRING("colourDialogRef","\x7f","\x67","\x47","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ColourDialog_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::widgets::ColourData*/ ,(int)offsetof(ColourDialog_obj,colourData),HX_HCSTRING("colourData","\x96","\x60","\x3b","\x95")},
	{hx::fsInt,(int)offsetof(ColourDialog_obj,selectedColour),HX_HCSTRING("selectedColour","\x07","\x1d","\xe5","\x49")},
	{hx::fsObject /*::cpp::Pointer< wxColourDialog >*/ ,(int)offsetof(ColourDialog_obj,colourDialogRef),HX_HCSTRING("colourDialogRef","\x7f","\x67","\x47","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ColourDialog_obj_sStaticStorageInfo = 0;
#endif

static ::String ColourDialog_obj_sMemberFields[] = {
	HX_HCSTRING("colourData","\x96","\x60","\x3b","\x95"),
	HX_HCSTRING("get_colourData","\xdf","\xe8","\x30","\x0b"),
	HX_HCSTRING("selectedColour","\x07","\x1d","\xe5","\x49"),
	HX_HCSTRING("get_selectedColour","\xd0","\xfd","\x7e","\xe5"),
	HX_HCSTRING("colourDialogRef","\x7f","\x67","\x47","\x18"),
	HX_HCSTRING("get_colourDialogRef","\x96","\x36","\x52","\xa3"),
	::String(null()) };

static void ColourDialog_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColourDialog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColourDialog_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColourDialog_obj::__mClass,"__mClass");
};

#endif

hx::Class ColourDialog_obj::__mClass;

void ColourDialog_obj::__register()
{
	hx::Object *dummy = new ColourDialog_obj;
	ColourDialog_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.ColourDialog","\x11","\xe4","\xe6","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ColourDialog_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ColourDialog_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColourDialog_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColourDialog_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColourDialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColourDialog_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
