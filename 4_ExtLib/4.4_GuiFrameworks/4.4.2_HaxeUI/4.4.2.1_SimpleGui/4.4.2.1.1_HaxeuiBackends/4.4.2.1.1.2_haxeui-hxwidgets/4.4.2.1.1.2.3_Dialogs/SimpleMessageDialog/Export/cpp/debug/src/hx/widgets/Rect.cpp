// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_hx_widgets_Rect
#include <hx/widgets/Rect.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f4ddebec333e814c_13_new,"hx.widgets.Rect","new",0xd9863f73,"hx.widgets.Rect.new","hx/widgets/Rect.hx",13,0x779a4a9b)
HX_LOCAL_STACK_FRAME(_hx_pos_f4ddebec333e814c_24_createPointer,"hx.widgets.Rect","createPointer",0x4619bdf4,"hx.widgets.Rect.createPointer","hx/widgets/Rect.hx",24,0x779a4a9b)
HX_LOCAL_STACK_FRAME(_hx_pos_f4ddebec333e814c_30_copy,"hx.widgets.Rect","copy",0x74b37d42,"hx.widgets.Rect.copy","hx/widgets/Rect.hx",30,0x779a4a9b)
namespace hx{
namespace widgets{

void Rect_obj::__construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_f4ddebec333e814c_13_new)
HXLINE(  14)		this->x = x;
HXLINE(  15)		this->y = y;
HXLINE(  16)		this->width = width;
HXLINE(  17)		this->height = height;
            	}

Dynamic Rect_obj::__CreateEmpty() { return new Rect_obj; }

void *Rect_obj::_hx_vtable = 0;

Dynamic Rect_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Rect_obj > _hx_result = new Rect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Rect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x256da1a3;
}

::cpp::Pointer<  wxRect > Rect_obj::createPointer(){
            	HX_STACKFRAME(&_hx_pos_f4ddebec333e814c_24_createPointer)
HXDLIN(  24)		return ::cpp::Pointer_obj::fromRaw((new wxRect(this->x,this->y,this->width,this->height)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rect_obj,createPointer,return )

 ::hx::widgets::Rect Rect_obj::copy(::cpp::Pointer<  wxRect > ptr){
            	HX_GC_STACKFRAME(&_hx_pos_f4ddebec333e814c_30_copy)
HXLINE(  31)		int c = ptr->get_ref().GetX();
HXDLIN(  31)		int c1 = ptr->get_ref().GetY();
HXDLIN(  31)		int c2 = ptr->get_ref().GetWidth();
HXDLIN(  31)		 ::hx::widgets::Rect c3 =  ::hx::widgets::Rect_obj::__alloc( HX_CTX ,c,c1,c2,ptr->get_ref().GetHeight());
HXLINE(  32)		return c3;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Rect_obj,copy,return )


hx::ObjectPtr< Rect_obj > Rect_obj::__new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height) {
	hx::ObjectPtr< Rect_obj > __this = new Rect_obj();
	__this->__construct(__o_x,__o_y,__o_width,__o_height);
	return __this;
}

hx::ObjectPtr< Rect_obj > Rect_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height) {
	Rect_obj *__this = (Rect_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Rect_obj), false, "hx.widgets.Rect"));
	*(void **)__this = Rect_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_width,__o_height);
	return __this;
}

Rect_obj::Rect_obj()
{
}

hx::Val Rect_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPointer") ) { return hx::Val( createPointer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Rect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true; }
	}
	return false;
}

hx::Val Rect_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Rect_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Rect_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Rect_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Rect_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Rect_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Rect_obj_sStaticStorageInfo = 0;
#endif

static ::String Rect_obj_sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("createPointer","\x21","\x99","\x64","\x39"),
	::String(null()) };

static void Rect_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Rect_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rect_obj::__mClass,"__mClass");
};

#endif

hx::Class Rect_obj::__mClass;

static ::String Rect_obj_sStaticFields[] = {
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	::String(null())
};

void Rect_obj::__register()
{
	hx::Object *dummy = new Rect_obj;
	Rect_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Rect","\x01","\x0a","\x17","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Rect_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Rect_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Rect_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Rect_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rect_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Rect_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rect_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
