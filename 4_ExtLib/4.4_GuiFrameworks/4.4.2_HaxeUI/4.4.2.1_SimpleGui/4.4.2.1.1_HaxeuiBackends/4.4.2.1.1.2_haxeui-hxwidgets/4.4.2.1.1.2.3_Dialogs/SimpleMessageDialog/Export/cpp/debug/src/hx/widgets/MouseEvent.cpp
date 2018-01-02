// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_MouseEvent
#include <hx/widgets/MouseEvent.h>
#endif
#ifndef INCLUDED_hx_widgets_MouseState
#include <hx/widgets/MouseState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d50c3ec84668341f_7_new,"hx.widgets.MouseEvent","new",0x8ec32e44,"hx.widgets.MouseEvent.new","hx/widgets/MouseEvent.hx",7,0x3eb9e36a)
HX_LOCAL_STACK_FRAME(_hx_pos_d50c3ec84668341f_12_get_x,"hx.widgets.MouseEvent","get_x",0x20ce4433,"hx.widgets.MouseEvent.get_x","hx/widgets/MouseEvent.hx",12,0x3eb9e36a)
HX_LOCAL_STACK_FRAME(_hx_pos_d50c3ec84668341f_16_get_y,"hx.widgets.MouseEvent","get_y",0x20ce4434,"hx.widgets.MouseEvent.get_y","hx/widgets/MouseEvent.hx",16,0x3eb9e36a)
HX_LOCAL_STACK_FRAME(_hx_pos_d50c3ec84668341f_24_get_mouseEventRef,"hx.widgets.MouseEvent","get_mouseEventRef",0xc219c4d9,"hx.widgets.MouseEvent.get_mouseEventRef","hx/widgets/MouseEvent.hx",24,0x3eb9e36a)
HX_LOCAL_STACK_FRAME(_hx_pos_d50c3ec84668341f_30_fromPointer,"hx.widgets.MouseEvent","fromPointer",0x90f80657,"hx.widgets.MouseEvent.fromPointer","hx/widgets/MouseEvent.hx",30,0x3eb9e36a)
namespace hx{
namespace widgets{

void MouseEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d50c3ec84668341f_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic MouseEvent_obj::__CreateEmpty() { return new MouseEvent_obj; }

void *MouseEvent_obj::_hx_vtable = 0;

Dynamic MouseEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MouseEvent_obj > _hx_result = new MouseEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MouseEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x298862bb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x298862bb;
	} else {
		return inClassId==(int)0x418411ac;
	}
}

static ::hx::widgets::MouseState_obj _hx_hx_widgets_MouseEvent__hx_hx_widgets_MouseState= {
	( int (hx::Object::*)())&::hx::widgets::MouseEvent_obj::get_x,
	( int (hx::Object::*)())&::hx::widgets::MouseEvent_obj::get_y,
};

void *MouseEvent_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc03ba76b: return &_hx_hx_widgets_MouseEvent__hx_hx_widgets_MouseState;
	}
	return super::_hx_getInterface(inHash);
}

int MouseEvent_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_d50c3ec84668341f_12_get_x)
HXDLIN(  12)		return this->get_mouseEventRef()->ptr->GetX();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent_obj,get_x,return )

int MouseEvent_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_d50c3ec84668341f_16_get_y)
HXDLIN(  16)		return this->get_mouseEventRef()->ptr->GetY();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent_obj,get_y,return )

::cpp::Pointer<  wxMouseEvent > MouseEvent_obj::get_mouseEventRef(){
            	HX_STACKFRAME(&_hx_pos_d50c3ec84668341f_24_get_mouseEventRef)
HXDLIN(  24)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent_obj,get_mouseEventRef,return )

 ::hx::widgets::Event MouseEvent_obj::fromPointer(::cpp::Pointer<  wxEvent > ptr){
            	HX_GC_STACKFRAME(&_hx_pos_d50c3ec84668341f_30_fromPointer)
HXLINE(  31)		 ::hx::widgets::MouseEvent event =  ::hx::widgets::MouseEvent_obj::__alloc( HX_CTX );
HXLINE(  32)		event->_ref = ptr;
HXLINE(  33)		return event;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MouseEvent_obj,fromPointer,return )


hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__new() {
	hx::ObjectPtr< MouseEvent_obj > __this = new MouseEvent_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__alloc(hx::Ctx *_hx_ctx) {
	MouseEvent_obj *__this = (MouseEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MouseEvent_obj), true, "hx.widgets.MouseEvent"));
	*(void **)__this = MouseEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MouseEvent_obj::MouseEvent_obj()
{
}

void MouseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseEvent);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(mouseEventRef,"mouseEventRef");
	 ::hx::widgets::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MouseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(mouseEventRef,"mouseEventRef");
	 ::hx::widgets::Event_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MouseEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( inCallProp == hx::paccAlways ? get_x() : x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( inCallProp == hx::paccAlways ? get_y() : y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return hx::Val( get_y_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseEventRef") ) { return hx::Val( inCallProp == hx::paccAlways ? get_mouseEventRef() : mouseEventRef ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_mouseEventRef") ) { return hx::Val( get_mouseEventRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MouseEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"fromPointer") ) { outValue = fromPointer_dyn(); return true; }
	}
	return false;
}

hx::Val MouseEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseEventRef") ) { mouseEventRef=inValue.Cast< ::cpp::Pointer<  wxMouseEvent > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("mouseEventRef","\x9e","\x54","\xd7","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MouseEvent_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MouseEvent_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::cpp::Pointer< wxMouseEvent >*/ ,(int)offsetof(MouseEvent_obj,mouseEventRef),HX_HCSTRING("mouseEventRef","\x9e","\x54","\xd7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MouseEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String MouseEvent_obj_sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("mouseEventRef","\x9e","\x54","\xd7","\x4f"),
	HX_HCSTRING("get_mouseEventRef","\xf5","\x5f","\x47","\x56"),
	::String(null()) };

static void MouseEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MouseEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class MouseEvent_obj::__mClass;

static ::String MouseEvent_obj_sStaticFields[] = {
	HX_HCSTRING("fromPointer","\x73","\x24","\x62","\xe9"),
	::String(null())
};

void MouseEvent_obj::__register()
{
	hx::Object *dummy = new MouseEvent_obj;
	MouseEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.MouseEvent","\x52","\xfc","\x7d","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MouseEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MouseEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MouseEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MouseEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MouseEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MouseEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MouseEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MouseEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
