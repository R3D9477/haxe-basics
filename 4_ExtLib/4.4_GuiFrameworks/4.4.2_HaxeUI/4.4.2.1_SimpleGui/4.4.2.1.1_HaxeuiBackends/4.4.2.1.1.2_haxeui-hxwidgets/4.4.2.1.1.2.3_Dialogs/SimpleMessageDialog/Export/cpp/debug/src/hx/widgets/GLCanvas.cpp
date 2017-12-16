// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_f803ca800b24f38b
#define INCLUDED_f803ca800b24f38b
#include "wx/glcanvas.h"
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
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_GLCanvas
#include <hx/widgets/GLCanvas.h>
#endif
#ifndef INCLUDED_hx_widgets_GLContext
#include <hx/widgets/GLContext.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bd692950cc2cbf5b_13_new,"hx.widgets.GLCanvas","new",0x40f69a0c,"hx.widgets.GLCanvas.new","hx/widgets/GLCanvas.hx",13,0x512f7d22)
HX_LOCAL_STACK_FRAME(_hx_pos_bd692950cc2cbf5b_22_setColour,"hx.widgets.GLCanvas","setColour",0xd6f9903a,"hx.widgets.GLCanvas.setColour","hx/widgets/GLCanvas.hx",22,0x512f7d22)
HX_LOCAL_STACK_FRAME(_hx_pos_bd692950cc2cbf5b_29_setCurrent,"hx.widgets.GLCanvas","setCurrent",0x1fdfc48b,"hx.widgets.GLCanvas.setCurrent","hx/widgets/GLCanvas.hx",29,0x512f7d22)
HX_LOCAL_STACK_FRAME(_hx_pos_bd692950cc2cbf5b_37_get_canvasRef,"hx.widgets.GLCanvas","get_canvasRef",0x8a1abfde,"hx.widgets.GLCanvas.get_canvasRef","hx/widgets/GLCanvas.hx",37,0x512f7d22)
namespace hx{
namespace widgets{

void GLCanvas_obj::__construct( ::hx::widgets::Window parent,::Array< int > options,hx::Null< int >  __o_style,hx::Null< int >  __o_id){
int style = __o_style.Default(0);
int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_bd692950cc2cbf5b_13_new)
HXLINE(  14)		if (hx::IsNull( this->_ref )) {
HXLINE(  15)			int* null_ptr = 0;
HXLINE(  16)			 wxWindow* parent1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  16)			int* attribList;
HXDLIN(  16)			if (hx::IsNotNull( options )) {
HXLINE(  16)				attribList = ( (::cpp::Pointer< int >)(::cpp::Pointer_obj::arrayElem(options,(int)0)) )->rawCast();
            			}
            			else {
HXLINE(  16)				attribList = null_ptr;
            			}
HXDLIN(  16)			 wxPoint pt = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  16)			::cpp::Pointer<  wxGLCanvas > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxGLCanvas(parent1,id,attribList,pt,::hx::widgets::Size_obj::get_defaultSize()->get_ref(),style)));
HXDLIN(  16)			this->_ref = _hx_tmp->reinterpret();
            		}
HXLINE(  19)		super::__construct(parent,id);
            	}

Dynamic GLCanvas_obj::__CreateEmpty() { return new GLCanvas_obj; }

void *GLCanvas_obj::_hx_vtable = 0;

Dynamic GLCanvas_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLCanvas_obj > _hx_result = new GLCanvas_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GLCanvas_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x45e5f4bc) {
		if (inClassId<=(int)0x350d7ce6) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x350d7ce6;
		} else {
			return inClassId==(int)0x45e5f4bc;
		}
	} else {
		return inClassId==(int)0x7f575436 || inClassId==(int)0x7f8f9123;
	}
}

bool GLCanvas_obj::setColour(::String colour){
            	HX_STACKFRAME(&_hx_pos_bd692950cc2cbf5b_22_setColour)
HXLINE(  23)		const char* this1 = colour.__s;
HXDLIN(  23)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  24)		 wxString tmp = str;
HXDLIN(  24)		return this->get_canvasRef()->ptr->SetColour(tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLCanvas_obj,setColour,return )

bool GLCanvas_obj::setCurrent( ::hx::widgets::GLContext current){
            	HX_STACKFRAME(&_hx_pos_bd692950cc2cbf5b_29_setCurrent)
HXDLIN(  29)		 wxGLCanvas * _hx_tmp = this->get_canvasRef()->ptr;
HXDLIN(  29)		return (*(_hx_tmp)).SetCurrent(current->get_glContextRef()->get_ref());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLCanvas_obj,setCurrent,return )

::cpp::Pointer<  wxGLCanvas > GLCanvas_obj::get_canvasRef(){
            	HX_STACKFRAME(&_hx_pos_bd692950cc2cbf5b_37_get_canvasRef)
HXDLIN(  37)		return ( (::cpp::Pointer<  wxGLCanvas >)(this->_ref->reinterpret()) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLCanvas_obj,get_canvasRef,return )


hx::ObjectPtr< GLCanvas_obj > GLCanvas_obj::__new( ::hx::widgets::Window parent,::Array< int > options,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	hx::ObjectPtr< GLCanvas_obj > __this = new GLCanvas_obj();
	__this->__construct(parent,options,__o_style,__o_id);
	return __this;
}

hx::ObjectPtr< GLCanvas_obj > GLCanvas_obj::__alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::Array< int > options,hx::Null< int >  __o_style,hx::Null< int >  __o_id) {
	GLCanvas_obj *__this = (GLCanvas_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLCanvas_obj), true, "hx.widgets.GLCanvas"));
	*(void **)__this = GLCanvas_obj::_hx_vtable;
	__this->__construct(parent,options,__o_style,__o_id);
	return __this;
}

GLCanvas_obj::GLCanvas_obj()
{
}

void GLCanvas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLCanvas);
	HX_MARK_MEMBER_NAME(canvasRef,"canvasRef");
	 ::hx::widgets::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLCanvas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canvasRef,"canvasRef");
	 ::hx::widgets::Window_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GLCanvas_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"setColour") ) { return hx::Val( setColour_dyn() ); }
		if (HX_FIELD_EQ(inName,"canvasRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_canvasRef() : canvasRef ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setCurrent") ) { return hx::Val( setCurrent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_canvasRef") ) { return hx::Val( get_canvasRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLCanvas_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"canvasRef") ) { canvasRef=inValue.Cast< ::cpp::Pointer<  wxGLCanvas > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLCanvas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("canvasRef","\x5b","\xd3","\xee","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLCanvas_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxGLCanvas >*/ ,(int)offsetof(GLCanvas_obj,canvasRef),HX_HCSTRING("canvasRef","\x5b","\xd3","\xee","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLCanvas_obj_sStaticStorageInfo = 0;
#endif

static ::String GLCanvas_obj_sMemberFields[] = {
	HX_HCSTRING("setColour","\x8e","\x3d","\x2e","\x26"),
	HX_HCSTRING("setCurrent","\xb7","\xc0","\xc2","\x1e"),
	HX_HCSTRING("canvasRef","\x5b","\xd3","\xee","\x71"),
	HX_HCSTRING("get_canvasRef","\x32","\xa7","\x52","\x33"),
	::String(null()) };

static void GLCanvas_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLCanvas_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLCanvas_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLCanvas_obj::__mClass,"__mClass");
};

#endif

hx::Class GLCanvas_obj::__mClass;

void GLCanvas_obj::__register()
{
	hx::Object *dummy = new GLCanvas_obj;
	GLCanvas_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.GLCanvas","\x1a","\xe4","\x0d","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLCanvas_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLCanvas_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLCanvas_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLCanvas_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLCanvas_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLCanvas_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
