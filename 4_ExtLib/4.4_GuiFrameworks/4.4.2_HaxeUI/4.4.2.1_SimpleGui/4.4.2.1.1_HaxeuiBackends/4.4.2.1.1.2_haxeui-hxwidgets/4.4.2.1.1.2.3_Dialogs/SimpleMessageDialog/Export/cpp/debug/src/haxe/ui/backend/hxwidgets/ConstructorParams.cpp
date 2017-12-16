// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_ConstructorParams
#include <haxe/ui/backend/hxwidgets/ConstructorParams.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_41c46d8f04482510_4_build,"haxe.ui.backend.hxwidgets.ConstructorParams","build",0xb9878185,"haxe.ui.backend.hxwidgets.ConstructorParams.build","haxe/ui/backend/hxwidgets/ConstructorParams.hx",4,0x792f2f3b)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void ConstructorParams_obj::__construct() { }

Dynamic ConstructorParams_obj::__CreateEmpty() { return new ConstructorParams_obj; }

void *ConstructorParams_obj::_hx_vtable = 0;

Dynamic ConstructorParams_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConstructorParams_obj > _hx_result = new ConstructorParams_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConstructorParams_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6697875b;
}

::cpp::VirtualArray ConstructorParams_obj::build(::String constructorSignature,int style){
            	HX_STACKFRAME(&_hx_pos_41c46d8f04482510_4_build)
HXLINE(   5)		if (hx::IsNull( constructorSignature )) {
HXLINE(   6)			return ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE(   9)		::Array< ::String > constructorParams = constructorSignature.split(HX_(",",2c,00,00,00));
HXLINE(  10)		::cpp::VirtualArray params = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  11)		{
HXLINE(  11)			int _g = (int)0;
HXDLIN(  11)			while((_g < constructorParams->length)){
HXLINE(  11)				::String constructorParam = constructorParams->__get(_g);
HXDLIN(  11)				_g = (_g + (int)1);
HXLINE(  12)				constructorParam = ::StringTools_obj::trim(constructorParam);
HXLINE(  13)				if ((constructorParam == HX_("$style",8d,a2,f6,e8))) {
HXLINE(  14)					params->push(style);
            				}
            				else {
HXLINE(  15)					if ((constructorParam == HX_("null",87,9e,0e,49))) {
HXLINE(  16)						params->push(null());
            					}
            					else {
HXLINE(  17)						bool _hx_tmp;
HXDLIN(  17)						if ((constructorParam != HX_("true",4e,a7,03,4d))) {
HXLINE(  17)							_hx_tmp = (constructorParam == HX_("false",a3,35,4f,fb));
            						}
            						else {
HXLINE(  17)							_hx_tmp = true;
            						}
HXDLIN(  17)						if (_hx_tmp) {
HXLINE(  18)							params->push((constructorParam == HX_("true",4e,a7,03,4d)));
            						}
            						else {
HXLINE(  19)							if (hx::IsNotNull( ::Std_obj::parseInt(constructorParam) )) {
HXLINE(  20)								params->push(::Std_obj::parseInt(constructorParam));
            							}
            							else {
HXLINE(  22)								params->push(constructorParam);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  26)		return params;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConstructorParams_obj,build,return )


ConstructorParams_obj::ConstructorParams_obj()
{
}

bool ConstructorParams_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ConstructorParams_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ConstructorParams_obj_sStaticStorageInfo = 0;
#endif

static void ConstructorParams_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConstructorParams_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConstructorParams_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConstructorParams_obj::__mClass,"__mClass");
};

#endif

hx::Class ConstructorParams_obj::__mClass;

static ::String ConstructorParams_obj_sStaticFields[] = {
	HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"),
	::String(null())
};

void ConstructorParams_obj::__register()
{
	hx::Object *dummy = new ConstructorParams_obj;
	ConstructorParams_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.hxwidgets.ConstructorParams","\x85","\x1b","\x45","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConstructorParams_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ConstructorParams_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ConstructorParams_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ConstructorParams_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConstructorParams_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConstructorParams_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConstructorParams_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
