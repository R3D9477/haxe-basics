// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_cb2edad35d09ff98
#define INCLUDED_cb2edad35d09ff98
#include "wx/filedlg.h"
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
#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_FileDialog
#include <hx/widgets/FileDialog.h>
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
#ifndef INCLUDED_wx_widgets_styles_FileDialogStyle
#include <wx/widgets/styles/FileDialogStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21d6d11d3be5536d_10_new,"hx.widgets.FileDialog","new",0x7a104273,"hx.widgets.FileDialog.new","hx/widgets/FileDialog.hx",10,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_42_get_currentlySelectedFilename,"hx.widgets.FileDialog","get_currentlySelectedFilename",0x9b8d9b12,"hx.widgets.FileDialog.get_currentlySelectedFilename","hx/widgets/FileDialog.hx",42,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_48_get_directory,"hx.widgets.FileDialog","get_directory",0xeaa9ae17,"hx.widgets.FileDialog.get_directory","hx/widgets/FileDialog.hx",48,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_52_set_directory,"hx.widgets.FileDialog","set_directory",0x2faf9023,"hx.widgets.FileDialog.set_directory","hx/widgets/FileDialog.hx",52,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_59_get_filename,"hx.widgets.FileDialog","get_filename",0x0a30165d,"hx.widgets.FileDialog.get_filename","hx/widgets/FileDialog.hx",59,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_63_set_filename,"hx.widgets.FileDialog","set_filename",0x1f2939d1,"hx.widgets.FileDialog.set_filename","hx/widgets/FileDialog.hx",63,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_78_get_filterIndex,"hx.widgets.FileDialog","get_filterIndex",0x37916a64,"hx.widgets.FileDialog.get_filterIndex","hx/widgets/FileDialog.hx",78,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_80_set_filterIndex,"hx.widgets.FileDialog","set_filterIndex",0x335ce770,"hx.widgets.FileDialog.set_filterIndex","hx/widgets/FileDialog.hx",80,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_86_get_message,"hx.widgets.FileDialog","get_message",0xde74d2f1,"hx.widgets.FileDialog.get_message","hx/widgets/FileDialog.hx",86,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_90_set_message,"hx.widgets.FileDialog","set_message",0xe8e1d9fd,"hx.widgets.FileDialog.set_message","hx/widgets/FileDialog.hx",90,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_97_get_path,"hx.widgets.FileDialog","get_path",0xcebaca3b,"hx.widgets.FileDialog.get_path","hx/widgets/FileDialog.hx",97,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_101_set_path,"hx.widgets.FileDialog","set_path",0x7d1823af,"hx.widgets.FileDialog.set_path","hx/widgets/FileDialog.hx",101,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_115_get_wildcard,"hx.widgets.FileDialog","get_wildcard",0x3bddc170,"hx.widgets.FileDialog.get_wildcard","hx/widgets/FileDialog.hx",115,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_119_set_wildcard,"hx.widgets.FileDialog","set_wildcard",0x50d6e4e4,"hx.widgets.FileDialog.set_wildcard","hx/widgets/FileDialog.hx",119,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_132_get_fileDialogRef,"hx.widgets.FileDialog","get_fileDialogRef",0x4634f3f9,"hx.widgets.FileDialog.get_fileDialogRef","hx/widgets/FileDialog.hx",132,0x881aaa1b)
namespace hx{
namespace widgets{

void FileDialog_obj::__construct( ::hx::widgets::Window parent,::String message,::String defaultDir,::String defaultFile,::String wildcard,hx::Null< int >  __o_style){
int style = __o_style.Default(0);
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_10_new)
HXLINE(  11)		if (hx::IsNull( this->_ref )) {
HXLINE(  12)			if (hx::IsNull( message )) {
HXLINE(  13)				message = HX_("",00,00,00,00);
            			}
HXLINE(  15)			if (hx::IsNull( defaultDir )) {
HXLINE(  16)				defaultDir = HX_("",00,00,00,00);
            			}
HXLINE(  18)			if (hx::IsNull( defaultFile )) {
HXLINE(  19)				defaultFile = HX_("",00,00,00,00);
            			}
HXLINE(  21)			if (hx::IsNull( wildcard )) {
HXLINE(  22)				wildcard = HX_("",00,00,00,00);
            			}
HXLINE(  24)			if ((style == (int)0)) {
HXLINE(  25)				style = ::wx::widgets::styles::FileDialogStyle_obj::DEFAULT_STYLE;
            			}
HXLINE(  28)			const char* this1 = message.__s;
HXDLIN(  28)			 wxString messageStr = wxString::FromUTF8(this1);
HXLINE(  29)			const char* this2 = defaultDir.__s;
HXDLIN(  29)			 wxString defaultDirStr = wxString::FromUTF8(this2);
HXLINE(  30)			const char* this3 = defaultFile.__s;
HXDLIN(  30)			 wxString defaultFileStr = wxString::FromUTF8(this3);
HXLINE(  31)			const char* this4 = wildcard.__s;
HXDLIN(  31)			 wxString wildcardStr = wxString::FromUTF8(this4);
HXLINE(  32)			 wxString tmp = messageStr;
HXDLIN(  32)			 wxString tmp1 = defaultDirStr;
HXDLIN(  32)			 wxString tmp2 = defaultFileStr;
HXDLIN(  32)			 wxString tmp3 = wildcardStr;
HXDLIN(  32)			::cpp::Pointer<  wxFileDialog > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxFileDialog(::hx::widgets::Window_obj::toRaw(parent),tmp,tmp1,tmp2,tmp3,style)));
HXDLIN(  32)			this->_ref = _hx_tmp->reinterpret();
            		}
HXLINE(  35)		super::__construct(parent,null(),null(),null());
            	}

Dynamic FileDialog_obj::__CreateEmpty() { return new FileDialog_obj; }

void *FileDialog_obj::_hx_vtable = 0;

Dynamic FileDialog_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FileDialog_obj > _hx_result = new FileDialog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FileDialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3fa9a25b) {
		if (inClassId<=(int)0x350d7ce6) {
			if (inClassId<=(int)0x2d54613e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2d54613e;
			} else {
				return inClassId==(int)0x350d7ce6;
			}
		} else {
			return inClassId==(int)0x3d664327 || inClassId==(int)0x3fa9a25b;
		}
	} else {
		if (inClassId<=(int)0x7f575436) {
			return inClassId==(int)0x4896b707 || inClassId==(int)0x7f575436;
		} else {
			return inClassId==(int)0x7f8f9123;
		}
	}
}

::String FileDialog_obj::get_currentlySelectedFilename(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_42_get_currentlySelectedFilename)
HXLINE(  43)		 wxString r = this->get_fileDialogRef()->ptr->GetCurrentlySelectedFilename();
HXLINE(  44)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_currentlySelectedFilename,return )

::String FileDialog_obj::get_directory(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_48_get_directory)
HXLINE(  49)		 wxString r = this->get_fileDialogRef()->ptr->GetDirectory();
HXLINE(  50)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_directory,return )

::String FileDialog_obj::set_directory(::String value){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_52_set_directory)
HXLINE(  53)		const char* this1 = value.__s;
HXDLIN(  53)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  54)		 wxString tmp = s;
HXDLIN(  54)		this->get_fileDialogRef()->ptr->SetDirectory(tmp);
HXLINE(  55)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileDialog_obj,set_directory,return )

::String FileDialog_obj::get_filename(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_59_get_filename)
HXLINE(  60)		 wxString r = this->get_fileDialogRef()->ptr->GetFilename();
HXLINE(  61)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_filename,return )

::String FileDialog_obj::set_filename(::String value){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_63_set_filename)
HXLINE(  64)		const char* this1 = value.__s;
HXDLIN(  64)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  65)		 wxString tmp = s;
HXDLIN(  65)		this->get_fileDialogRef()->ptr->SetFilename(tmp);
HXLINE(  66)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileDialog_obj,set_filename,return )

int FileDialog_obj::get_filterIndex(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_78_get_filterIndex)
HXDLIN(  78)		return this->get_fileDialogRef()->ptr->GetFilterIndex();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_filterIndex,return )

int FileDialog_obj::set_filterIndex(int value){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_80_set_filterIndex)
HXLINE(  81)		this->get_fileDialogRef()->ptr->SetFilterIndex(value);
HXLINE(  82)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileDialog_obj,set_filterIndex,return )

::String FileDialog_obj::get_message(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_86_get_message)
HXLINE(  87)		 wxString r = this->get_fileDialogRef()->ptr->GetMessage();
HXLINE(  88)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_message,return )

::String FileDialog_obj::set_message(::String value){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_90_set_message)
HXLINE(  91)		const char* this1 = value.__s;
HXDLIN(  91)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  92)		 wxString tmp = s;
HXDLIN(  92)		this->get_fileDialogRef()->ptr->SetMessage(tmp);
HXLINE(  93)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileDialog_obj,set_message,return )

::String FileDialog_obj::get_path(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_97_get_path)
HXLINE(  98)		 wxString r = this->get_fileDialogRef()->ptr->GetPath();
HXLINE(  99)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_path,return )

::String FileDialog_obj::set_path(::String value){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_101_set_path)
HXLINE( 102)		const char* this1 = value.__s;
HXDLIN( 102)		 wxString s = wxString::FromUTF8(this1);
HXLINE( 103)		 wxString tmp = s;
HXDLIN( 103)		this->get_fileDialogRef()->ptr->SetPath(tmp);
HXLINE( 104)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileDialog_obj,set_path,return )

::String FileDialog_obj::get_wildcard(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_115_get_wildcard)
HXLINE( 116)		 wxString r = this->get_fileDialogRef()->ptr->GetWildcard();
HXLINE( 117)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_wildcard,return )

::String FileDialog_obj::set_wildcard(::String value){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_119_set_wildcard)
HXLINE( 120)		const char* this1 = value.__s;
HXDLIN( 120)		 wxString s = wxString::FromUTF8(this1);
HXLINE( 121)		 wxString tmp = s;
HXDLIN( 121)		this->get_fileDialogRef()->ptr->SetWildcard(tmp);
HXLINE( 122)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileDialog_obj,set_wildcard,return )

::cpp::Pointer<  wxFileDialog > FileDialog_obj::get_fileDialogRef(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_132_get_fileDialogRef)
HXDLIN( 132)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_fileDialogRef,return )


hx::ObjectPtr< FileDialog_obj > FileDialog_obj::__new( ::hx::widgets::Window parent,::String message,::String defaultDir,::String defaultFile,::String wildcard,hx::Null< int >  __o_style) {
	hx::ObjectPtr< FileDialog_obj > __this = new FileDialog_obj();
	__this->__construct(parent,message,defaultDir,defaultFile,wildcard,__o_style);
	return __this;
}

hx::ObjectPtr< FileDialog_obj > FileDialog_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String defaultDir,::String defaultFile,::String wildcard,hx::Null< int >  __o_style) {
	FileDialog_obj *__this = (FileDialog_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FileDialog_obj), true, "hx.widgets.FileDialog"));
	*(void **)__this = FileDialog_obj::_hx_vtable;
	__this->__construct(parent,message,defaultDir,defaultFile,wildcard,__o_style);
	return __this;
}

FileDialog_obj::FileDialog_obj()
{
}

void FileDialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileDialog);
	HX_MARK_MEMBER_NAME(currentlySelectedFilename,"currentlySelectedFilename");
	HX_MARK_MEMBER_NAME(fileDialogRef,"fileDialogRef");
	 ::hx::widgets::Dialog_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FileDialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentlySelectedFilename,"currentlySelectedFilename");
	HX_VISIT_MEMBER_NAME(fileDialogRef,"fileDialogRef");
	 ::hx::widgets::Dialog_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FileDialog_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_path() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_message() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"filename") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_filename() ); }
		if (HX_FIELD_EQ(inName,"get_path") ) { return hx::Val( get_path_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_path") ) { return hx::Val( set_path_dyn() ); }
		if (HX_FIELD_EQ(inName,"wildcard") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_wildcard() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directory") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_directory() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_filterIndex() ); }
		if (HX_FIELD_EQ(inName,"get_message") ) { return hx::Val( get_message_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_message") ) { return hx::Val( set_message_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_filename") ) { return hx::Val( get_filename_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filename") ) { return hx::Val( set_filename_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wildcard") ) { return hx::Val( get_wildcard_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wildcard") ) { return hx::Val( set_wildcard_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_directory") ) { return hx::Val( get_directory_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_directory") ) { return hx::Val( set_directory_dyn() ); }
		if (HX_FIELD_EQ(inName,"fileDialogRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_fileDialogRef() : fileDialogRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_filterIndex") ) { return hx::Val( get_filterIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filterIndex") ) { return hx::Val( set_filterIndex_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_fileDialogRef") ) { return hx::Val( get_fileDialogRef_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"currentlySelectedFilename") ) { return hx::Val( inCallProp == hx::paccAlways ? get_currentlySelectedFilename() : currentlySelectedFilename ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"get_currentlySelectedFilename") ) { return hx::Val( get_currentlySelectedFilename_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FileDialog_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_path(inValue.Cast< ::String >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_message(inValue.Cast< ::String >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"filename") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_filename(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"wildcard") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_wildcard(inValue.Cast< ::String >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directory") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_directory(inValue.Cast< ::String >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_filterIndex(inValue.Cast< int >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fileDialogRef") ) { fileDialogRef=inValue.Cast< ::cpp::Pointer<  wxFileDialog > >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"currentlySelectedFilename") ) { currentlySelectedFilename=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileDialog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentlySelectedFilename","\x68","\x6b","\xd9","\xa8"));
	outFields->push(HX_HCSTRING("directory","\x6d","\xf2","\x44","\x10"));
	outFields->push(HX_HCSTRING("filename","\xc7","\x2e","\x6a","\x77"));
	outFields->push(HX_HCSTRING("filterIndex","\x3a","\xf0","\xc6","\x6d"));
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("wildcard","\xda","\xd9","\x17","\xa9"));
	outFields->push(HX_HCSTRING("fileDialogRef","\x4f","\x1b","\x38","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FileDialog_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FileDialog_obj,currentlySelectedFilename),HX_HCSTRING("currentlySelectedFilename","\x68","\x6b","\xd9","\xa8")},
	{hx::fsObject /*::cpp::Pointer< wxFileDialog >*/ ,(int)offsetof(FileDialog_obj,fileDialogRef),HX_HCSTRING("fileDialogRef","\x4f","\x1b","\x38","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FileDialog_obj_sStaticStorageInfo = 0;
#endif

static ::String FileDialog_obj_sMemberFields[] = {
	HX_HCSTRING("currentlySelectedFilename","\x68","\x6b","\xd9","\xa8"),
	HX_HCSTRING("get_currentlySelectedFilename","\x3f","\x9d","\x18","\x91"),
	HX_HCSTRING("get_directory","\x44","\xc6","\xa8","\xd1"),
	HX_HCSTRING("set_directory","\x50","\xa8","\xae","\x16"),
	HX_HCSTRING("get_filename","\xd0","\xe2","\x83","\x2c"),
	HX_HCSTRING("set_filename","\x44","\x06","\x7d","\x41"),
	HX_HCSTRING("get_filterIndex","\xd1","\xa7","\xa8","\x2e"),
	HX_HCSTRING("set_filterIndex","\xdd","\x24","\x74","\x2a"),
	HX_HCSTRING("get_message","\xde","\x95","\x0b","\x20"),
	HX_HCSTRING("set_message","\xea","\x9c","\x78","\x2a"),
	HX_HCSTRING("get_path","\x2e","\xa1","\x0c","\xca"),
	HX_HCSTRING("set_path","\xa2","\xfa","\x69","\x78"),
	HX_HCSTRING("get_wildcard","\xe3","\x8d","\x31","\x5e"),
	HX_HCSTRING("set_wildcard","\x57","\xb1","\x2a","\x73"),
	HX_HCSTRING("fileDialogRef","\x4f","\x1b","\x38","\x99"),
	HX_HCSTRING("get_fileDialogRef","\xa6","\x26","\xa8","\x9f"),
	::String(null()) };

static void FileDialog_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileDialog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FileDialog_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileDialog_obj::__mClass,"__mClass");
};

#endif

hx::Class FileDialog_obj::__mClass;

void FileDialog_obj::__register()
{
	hx::Object *dummy = new FileDialog_obj;
	FileDialog_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.FileDialog","\x01","\x8d","\xa3","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FileDialog_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FileDialog_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FileDialog_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FileDialog_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileDialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileDialog_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
