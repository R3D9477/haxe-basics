// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif

::ValueType ValueType_obj::TBool;

::ValueType ValueType_obj::TClass(hx::Class c)
{
	return hx::CreateEnum< ValueType_obj >(HX_("TClass",44,37,80,71),6,1)->_hx_init(0,c);
}

::ValueType ValueType_obj::TEnum(hx::Class e)
{
	return hx::CreateEnum< ValueType_obj >(HX_("TEnum",75,51,98,8b),7,1)->_hx_init(0,e);
}

::ValueType ValueType_obj::TFloat;

::ValueType ValueType_obj::TFunction;

::ValueType ValueType_obj::TInt;

::ValueType ValueType_obj::TNull;

::ValueType ValueType_obj::TObject;

::ValueType ValueType_obj::TUnknown;

bool ValueType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TBool",9e,6a,9d,89)) { outValue = ValueType_obj::TBool; return true; }
	if (inName==HX_("TClass",44,37,80,71)) { outValue = ValueType_obj::TClass_dyn(); return true; }
	if (inName==HX_("TEnum",75,51,98,8b)) { outValue = ValueType_obj::TEnum_dyn(); return true; }
	if (inName==HX_("TFloat",a8,84,be,2b)) { outValue = ValueType_obj::TFloat; return true; }
	if (inName==HX_("TFunction",8c,db,3a,25)) { outValue = ValueType_obj::TFunction; return true; }
	if (inName==HX_("TInt",fb,b0,bd,37)) { outValue = ValueType_obj::TInt; return true; }
	if (inName==HX_("TNull",fb,84,90,91)) { outValue = ValueType_obj::TNull; return true; }
	if (inName==HX_("TObject",33,ea,de,ee)) { outValue = ValueType_obj::TObject; return true; }
	if (inName==HX_("TUnknown",96,bd,59,73)) { outValue = ValueType_obj::TUnknown; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ValueType_obj)

int ValueType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TBool",9e,6a,9d,89)) return 3;
	if (inName==HX_("TClass",44,37,80,71)) return 6;
	if (inName==HX_("TEnum",75,51,98,8b)) return 7;
	if (inName==HX_("TFloat",a8,84,be,2b)) return 2;
	if (inName==HX_("TFunction",8c,db,3a,25)) return 5;
	if (inName==HX_("TInt",fb,b0,bd,37)) return 1;
	if (inName==HX_("TNull",fb,84,90,91)) return 0;
	if (inName==HX_("TObject",33,ea,de,ee)) return 4;
	if (inName==HX_("TUnknown",96,bd,59,73)) return 8;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueType_obj,TClass,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueType_obj,TEnum,return)

int ValueType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TBool",9e,6a,9d,89)) return 0;
	if (inName==HX_("TClass",44,37,80,71)) return 1;
	if (inName==HX_("TEnum",75,51,98,8b)) return 1;
	if (inName==HX_("TFloat",a8,84,be,2b)) return 0;
	if (inName==HX_("TFunction",8c,db,3a,25)) return 0;
	if (inName==HX_("TInt",fb,b0,bd,37)) return 0;
	if (inName==HX_("TNull",fb,84,90,91)) return 0;
	if (inName==HX_("TObject",33,ea,de,ee)) return 0;
	if (inName==HX_("TUnknown",96,bd,59,73)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val ValueType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TBool",9e,6a,9d,89)) return TBool;
	if (inName==HX_("TClass",44,37,80,71)) return TClass_dyn();
	if (inName==HX_("TEnum",75,51,98,8b)) return TEnum_dyn();
	if (inName==HX_("TFloat",a8,84,be,2b)) return TFloat;
	if (inName==HX_("TFunction",8c,db,3a,25)) return TFunction;
	if (inName==HX_("TInt",fb,b0,bd,37)) return TInt;
	if (inName==HX_("TNull",fb,84,90,91)) return TNull;
	if (inName==HX_("TObject",33,ea,de,ee)) return TObject;
	if (inName==HX_("TUnknown",96,bd,59,73)) return TUnknown;
	return super::__Field(inName,inCallProp);
}

static ::String ValueType_obj_sStaticFields[] = {
	HX_("TNull",fb,84,90,91),
	HX_("TInt",fb,b0,bd,37),
	HX_("TFloat",a8,84,be,2b),
	HX_("TBool",9e,6a,9d,89),
	HX_("TObject",33,ea,de,ee),
	HX_("TFunction",8c,db,3a,25),
	HX_("TClass",44,37,80,71),
	HX_("TEnum",75,51,98,8b),
	HX_("TUnknown",96,bd,59,73),
	::String(null())
};

static void ValueType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ValueType_obj::TBool,"TBool");
	HX_MARK_MEMBER_NAME(ValueType_obj::TFloat,"TFloat");
	HX_MARK_MEMBER_NAME(ValueType_obj::TFunction,"TFunction");
	HX_MARK_MEMBER_NAME(ValueType_obj::TInt,"TInt");
	HX_MARK_MEMBER_NAME(ValueType_obj::TNull,"TNull");
	HX_MARK_MEMBER_NAME(ValueType_obj::TObject,"TObject");
	HX_MARK_MEMBER_NAME(ValueType_obj::TUnknown,"TUnknown");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ValueType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValueType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ValueType_obj::TBool,"TBool");
	HX_VISIT_MEMBER_NAME(ValueType_obj::TFloat,"TFloat");
	HX_VISIT_MEMBER_NAME(ValueType_obj::TFunction,"TFunction");
	HX_VISIT_MEMBER_NAME(ValueType_obj::TInt,"TInt");
	HX_VISIT_MEMBER_NAME(ValueType_obj::TNull,"TNull");
	HX_VISIT_MEMBER_NAME(ValueType_obj::TObject,"TObject");
	HX_VISIT_MEMBER_NAME(ValueType_obj::TUnknown,"TUnknown");
};
#endif

hx::Class ValueType_obj::__mClass;

Dynamic __Create_ValueType_obj() { return new ValueType_obj; }

void ValueType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("ValueType","\xab","\x8a","\x60","\x3b"), hx::TCanCast< ValueType_obj >,ValueType_obj_sStaticFields,0,
	&__Create_ValueType_obj, &__Create,
	&super::__SGetClass(), &CreateValueType_obj, ValueType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , ValueType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ValueType_obj::__GetStatic;
}

void ValueType_obj::__boot()
{
TBool = hx::CreateEnum< ValueType_obj >(HX_HCSTRING("TBool","\x9e","\x6a","\x9d","\x89"),3,0);
TFloat = hx::CreateEnum< ValueType_obj >(HX_HCSTRING("TFloat","\xa8","\x84","\xbe","\x2b"),2,0);
TFunction = hx::CreateEnum< ValueType_obj >(HX_HCSTRING("TFunction","\x8c","\xdb","\x3a","\x25"),5,0);
TInt = hx::CreateEnum< ValueType_obj >(HX_HCSTRING("TInt","\xfb","\xb0","\xbd","\x37"),1,0);
TNull = hx::CreateEnum< ValueType_obj >(HX_HCSTRING("TNull","\xfb","\x84","\x90","\x91"),0,0);
TObject = hx::CreateEnum< ValueType_obj >(HX_HCSTRING("TObject","\x33","\xea","\xde","\xee"),4,0);
TUnknown = hx::CreateEnum< ValueType_obj >(HX_HCSTRING("TUnknown","\x96","\xbd","\x59","\x73"),8,0);
}


