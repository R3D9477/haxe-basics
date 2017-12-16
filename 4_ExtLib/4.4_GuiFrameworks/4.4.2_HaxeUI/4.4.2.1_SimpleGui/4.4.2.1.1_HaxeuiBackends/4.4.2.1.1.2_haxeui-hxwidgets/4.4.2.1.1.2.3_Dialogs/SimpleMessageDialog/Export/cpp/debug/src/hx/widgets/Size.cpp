// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d4fc62a70727edb_12_new,"hx.widgets.Size","new",0x48412590,"hx.widgets.Size.new","hx/widgets/Size.hx",12,0x6eea571e)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4fc62a70727edb_21_createPointer,"hx.widgets.Size","createPointer",0x8ee24a51,"hx.widgets.Size.createPointer","hx/widgets/Size.hx",21,0x6eea571e)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4fc62a70727edb_28_get_defaultSize,"hx.widgets.Size","get_defaultSize",0xd424aee9,"hx.widgets.Size.get_defaultSize","hx/widgets/Size.hx",28,0x6eea571e)
HX_LOCAL_STACK_FRAME(_hx_pos_2d4fc62a70727edb_36_copy,"hx.widgets.Size","copy",0xe981f085,"hx.widgets.Size.copy","hx/widgets/Size.hx",36,0x6eea571e)
namespace hx{
namespace widgets{

void Size_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int width = __o_width.Default(0);
int height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_2d4fc62a70727edb_12_new)
HXLINE(  13)		this->width = width;
HXLINE(  14)		this->height = height;
            	}

Dynamic Size_obj::__CreateEmpty() { return new Size_obj; }

void *Size_obj::_hx_vtable = 0;

Dynamic Size_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Size_obj > _hx_result = new Size_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Size_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2619f540;
}

::cpp::Pointer<  wxSize > Size_obj::createPointer(){
            	HX_STACKFRAME(&_hx_pos_2d4fc62a70727edb_21_createPointer)
HXDLIN(  21)		return ::cpp::Pointer_obj::fromRaw((new wxSize(this->width,this->height)));
            	}


::cpp::Pointer<  wxSize > Size_obj::defaultSize;

::cpp::Pointer<  wxSize > Size_obj::get_defaultSize(){
            	HX_STACKFRAME(&_hx_pos_2d4fc62a70727edb_28_get_defaultSize)
HXLINE(  29)		if (hx::IsNull( ::hx::widgets::Size_obj::defaultSize )) {
HXLINE(  30)			::hx::widgets::Size_obj::defaultSize = ::cpp::Pointer_obj::fromRaw((new wxSize((int)-1,(int)-1)));
            		}
HXLINE(  32)		return ::hx::widgets::Size_obj::defaultSize;
            	}


 ::hx::widgets::Size Size_obj::copy( wxSize other){
            	HX_GC_STACKFRAME(&_hx_pos_2d4fc62a70727edb_36_copy)
HXDLIN(  36)		int _hx_tmp = other.GetWidth();
HXDLIN(  36)		return  ::hx::widgets::Size_obj::__alloc( HX_CTX ,_hx_tmp,other.GetHeight());
            	}



hx::ObjectPtr< Size_obj > Size_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height) {
	hx::ObjectPtr< Size_obj > __this = new Size_obj();
	__this->__construct(__o_width,__o_height);
	return __this;
}

hx::ObjectPtr< Size_obj > Size_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_width,hx::Null< int >  __o_height) {
	Size_obj *__this = (Size_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Size_obj), false, "hx.widgets.Size"));
	*(void **)__this = Size_obj::_hx_vtable;
	__this->__construct(__o_width,__o_height);
	return __this;
}

Size_obj::Size_obj()
{
}

void Size_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Size_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Size_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Size_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Size_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxSize >*/ ,(void *) &Size_obj::defaultSize,HX_HCSTRING("defaultSize","\x22","\x9a","\x12","\x1e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Size_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Size_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Size_obj::defaultSize,"defaultSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Size_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Size_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Size_obj::defaultSize,"defaultSize");
};

#endif

hx::Class Size_obj::__mClass;

void Size_obj::__register()
{
	hx::Object *dummy = new Size_obj;
	Size_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Size","\x9e","\x5d","\xc3","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Size_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Size_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Size_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Size_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Size_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
