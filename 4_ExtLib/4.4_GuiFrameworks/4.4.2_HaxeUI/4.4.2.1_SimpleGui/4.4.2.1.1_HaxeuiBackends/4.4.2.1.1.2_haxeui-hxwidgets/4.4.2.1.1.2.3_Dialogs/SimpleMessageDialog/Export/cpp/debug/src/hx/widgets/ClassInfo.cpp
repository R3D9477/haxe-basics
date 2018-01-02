// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_ClassInfo
#include <hx/widgets/ClassInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_141c0e9f135fa3d0_11_new,"hx.widgets.ClassInfo","new",0x949a143b,"hx.widgets.ClassInfo.new","hx/widgets/ClassInfo.hx",11,0xdad06f97)
HX_LOCAL_STACK_FRAME(_hx_pos_141c0e9f135fa3d0_18_get_className,"hx.widgets.ClassInfo","get_className",0xf9bf2a15,"hx.widgets.ClassInfo.get_className","hx/widgets/ClassInfo.hx",18,0xdad06f97)
namespace hx{
namespace widgets{

void ClassInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_141c0e9f135fa3d0_11_new)
            	}

Dynamic ClassInfo_obj::__CreateEmpty() { return new ClassInfo_obj; }

void *ClassInfo_obj::_hx_vtable = 0;

Dynamic ClassInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ClassInfo_obj > _hx_result = new ClassInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClassInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a1bdc3f;
}

::String ClassInfo_obj::get_className(){
            	HX_STACKFRAME(&_hx_pos_141c0e9f135fa3d0_18_get_className)
HXLINE(  19)		 wxString r = this->_ref->ptr->GetClassName();
HXLINE(  20)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClassInfo_obj,get_className,return )


hx::ObjectPtr< ClassInfo_obj > ClassInfo_obj::__new() {
	hx::ObjectPtr< ClassInfo_obj > __this = new ClassInfo_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ClassInfo_obj > ClassInfo_obj::__alloc(hx::Ctx *_hx_ctx) {
	ClassInfo_obj *__this = (ClassInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ClassInfo_obj), true, "hx.widgets.ClassInfo"));
	*(void **)__this = ClassInfo_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ClassInfo_obj::ClassInfo_obj()
{
}

void ClassInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClassInfo);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_END_CLASS();
}

void ClassInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(className,"className");
}

hx::Val ClassInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return hx::Val( _ref ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return hx::Val( inCallProp == hx::paccAlways ? get_className() : className ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_className") ) { return hx::Val( get_className_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ClassInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxClassInfo > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClassInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"));
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ClassInfo_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxClassInfo >*/ ,(int)offsetof(ClassInfo_obj,_ref),HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f")},
	{hx::fsString,(int)offsetof(ClassInfo_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ClassInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String ClassInfo_obj_sMemberFields[] = {
	HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"),
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("get_className","\x7a","\x66","\xa1","\x9d"),
	::String(null()) };

static void ClassInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClassInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ClassInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClassInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class ClassInfo_obj::__mClass;

void ClassInfo_obj::__register()
{
	hx::Object *dummy = new ClassInfo_obj;
	ClassInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.ClassInfo","\xc9","\xda","\xde","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ClassInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ClassInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ClassInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ClassInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClassInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClassInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
