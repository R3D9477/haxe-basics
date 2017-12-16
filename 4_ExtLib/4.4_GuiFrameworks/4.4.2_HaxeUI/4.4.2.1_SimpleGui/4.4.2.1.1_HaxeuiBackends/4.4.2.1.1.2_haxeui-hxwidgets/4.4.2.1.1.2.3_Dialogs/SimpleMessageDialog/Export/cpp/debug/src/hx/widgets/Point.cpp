// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c443fd101c2e6163_12_new,"hx.widgets.Point","new",0xc9293f45,"hx.widgets.Point.new","hx/widgets/Point.hx",12,0x7cae4acd)
HX_LOCAL_STACK_FRAME(_hx_pos_c443fd101c2e6163_21_createPointer,"hx.widgets.Point","createPointer",0x17857846,"hx.widgets.Point.createPointer","hx/widgets/Point.hx",21,0x7cae4acd)
HX_LOCAL_STACK_FRAME(_hx_pos_c443fd101c2e6163_28_get_defaultPosition,"hx.widgets.Point","get_defaultPosition",0xea3f7686,"hx.widgets.Point.get_defaultPosition","hx/widgets/Point.hx",28,0x7cae4acd)
HX_LOCAL_STACK_FRAME(_hx_pos_c443fd101c2e6163_35_copy,"hx.widgets.Point","copy",0x33b05530,"hx.widgets.Point.copy","hx/widgets/Point.hx",35,0x7cae4acd)
namespace hx{
namespace widgets{

void Point_obj::__construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_c443fd101c2e6163_12_new)
HXLINE(  13)		this->x = x;
HXLINE(  14)		this->y = y;
            	}

Dynamic Point_obj::__CreateEmpty() { return new Point_obj; }

void *Point_obj::_hx_vtable = 0;

Dynamic Point_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Point_obj > _hx_result = new Point_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Point_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a534ef1;
}

::cpp::Pointer<  wxPoint > Point_obj::createPointer(){
            	HX_STACKFRAME(&_hx_pos_c443fd101c2e6163_21_createPointer)
HXDLIN(  21)		return ::cpp::Pointer_obj::fromRaw((new wxPoint(this->x,this->y)));
            	}


::cpp::Pointer<  wxPoint > Point_obj::defaultPosition;

::cpp::Pointer<  wxPoint > Point_obj::get_defaultPosition(){
            	HX_STACKFRAME(&_hx_pos_c443fd101c2e6163_28_get_defaultPosition)
HXLINE(  29)		if (hx::IsNull( ::hx::widgets::Point_obj::defaultPosition )) {
HXLINE(  30)			::hx::widgets::Point_obj::defaultPosition = ::cpp::Pointer_obj::fromRaw((new wxPoint((int)-1,(int)-1)));
            		}
HXLINE(  32)		return ::hx::widgets::Point_obj::defaultPosition;
            	}


 ::hx::widgets::Point Point_obj::copy( wxPoint other){
            	HX_GC_STACKFRAME(&_hx_pos_c443fd101c2e6163_35_copy)
HXLINE(  36)		 ::hx::widgets::Point c =  ::hx::widgets::Point_obj::__alloc( HX_CTX ,other.x,other.y);
HXLINE(  37)		return c;
            	}



hx::ObjectPtr< Point_obj > Point_obj::__new(hx::Null< int >  __o_x,hx::Null< int >  __o_y) {
	hx::ObjectPtr< Point_obj > __this = new Point_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

hx::ObjectPtr< Point_obj > Point_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_x,hx::Null< int >  __o_y) {
	Point_obj *__this = (Point_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Point_obj), false, "hx.widgets.Point"));
	*(void **)__this = Point_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Point_obj::Point_obj()
{
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Point_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Point_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Point_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Point_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxPoint >*/ ,(void *) &Point_obj::defaultPosition,HX_HCSTRING("defaultPosition","\x8a","\x5e","\x08","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Point_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Point_obj::defaultPosition,"defaultPosition");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Point_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Point_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Point_obj::defaultPosition,"defaultPosition");
};

#endif

hx::Class Point_obj::__mClass;

void Point_obj::__register()
{
	hx::Object *dummy = new Point_obj;
	Point_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Point","\xd3","\x38","\xe5","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Point_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Point_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Point_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Point_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Point_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
