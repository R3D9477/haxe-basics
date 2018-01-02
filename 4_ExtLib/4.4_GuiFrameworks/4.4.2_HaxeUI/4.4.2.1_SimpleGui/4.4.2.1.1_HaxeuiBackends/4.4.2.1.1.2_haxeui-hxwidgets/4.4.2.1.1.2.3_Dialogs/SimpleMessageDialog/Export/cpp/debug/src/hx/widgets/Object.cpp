// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3698c0f6a76dbf22_10_destroy,"hx.widgets.Object","destroy",0xa596d768,"hx.widgets.Object.destroy","hx/widgets/Object.hx",10,0xd5fa2e20)
namespace hx{
namespace widgets{

void Object_obj::__construct() { }

Dynamic Object_obj::__CreateEmpty() { return new Object_obj; }

void *Object_obj::_hx_vtable = 0;

Dynamic Object_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Object_obj > _hx_result = new Object_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Object_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f575436;
}

bool Object_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_3698c0f6a76dbf22_10_destroy)
HXLINE(  11)		if (hx::IsNotNull( this->_ref )) {
HXLINE(  12)			this->_ref->destroy();
HXLINE(  13)			this->_ref = null();
            		}
HXLINE(  15)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,destroy,return )


Object_obj::Object_obj()
{
}

void Object_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_END_CLASS();
}

void Object_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
}

hx::Val Object_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return hx::Val( _ref ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Object_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxObject > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Object_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Object_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< wxObject >*/ ,(int)offsetof(Object_obj,_ref),HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Object_obj_sStaticStorageInfo = 0;
#endif

static ::String Object_obj_sMemberFields[] = {
	HX_HCSTRING("_ref","\x54","\x1e","\x22","\x3f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void Object_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Object_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object_obj::__mClass,"__mClass");
};

#endif

hx::Class Object_obj::__mClass;

void Object_obj::__register()
{
	hx::Object *dummy = new Object_obj;
	Object_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hx.widgets.Object","\xdc","\xec","\xbd","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Object_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Object_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Object_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Object_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Object_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Object_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
