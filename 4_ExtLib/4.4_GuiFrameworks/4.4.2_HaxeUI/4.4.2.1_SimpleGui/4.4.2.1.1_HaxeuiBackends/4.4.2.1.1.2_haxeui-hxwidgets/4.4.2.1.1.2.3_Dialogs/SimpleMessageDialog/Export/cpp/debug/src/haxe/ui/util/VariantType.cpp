// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Unit
#include <haxe/ui/styles/Unit.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
namespace haxe{
namespace ui{
namespace util{

::haxe::ui::util::VariantType VariantType_obj::_hx_Bool(bool s)
{
	return hx::CreateEnum< VariantType_obj >(HX_("_hx_Bool",9a,b0,49,f8),4,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::DataSource( ::haxe::ui::data::DataSource s)
{
	return hx::CreateEnum< VariantType_obj >(HX_("DataSource",c5,7a,84,14),5,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::_hx_Float(Float s)
{
	return hx::CreateEnum< VariantType_obj >(HX_("_hx_Float",2c,7b,cf,93),1,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::_hx_Int(int s)
{
	return hx::CreateEnum< VariantType_obj >(HX_("_hx_Int",7f,3e,ad,5a),0,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::String(::String s)
{
	return hx::CreateEnum< VariantType_obj >(HX_("String",f1,9c,c4,45),3,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::Unit( ::haxe::ui::styles::Unit s)
{
	return hx::CreateEnum< VariantType_obj >(HX_("Unit",a4,f6,82,38),2,1)->_hx_init(0,s);
}

bool VariantType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Bool",4a,b0,f4,2b)) { outValue = VariantType_obj::_hx_Bool_dyn(); return true; }
	if (inName==HX_("DataSource",c5,7a,84,14)) { outValue = VariantType_obj::DataSource_dyn(); return true; }
	if (inName==HX_("Float",7c,35,c4,95)) { outValue = VariantType_obj::_hx_Float_dyn(); return true; }
	if (inName==HX_("Int",cf,c4,37,00)) { outValue = VariantType_obj::_hx_Int_dyn(); return true; }
	if (inName==HX_("String",f1,9c,c4,45)) { outValue = VariantType_obj::String_dyn(); return true; }
	if (inName==HX_("Unit",a4,f6,82,38)) { outValue = VariantType_obj::Unit_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(VariantType_obj)

int VariantType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Bool",4a,b0,f4,2b)) return 4;
	if (inName==HX_("DataSource",c5,7a,84,14)) return 5;
	if (inName==HX_("Float",7c,35,c4,95)) return 1;
	if (inName==HX_("Int",cf,c4,37,00)) return 0;
	if (inName==HX_("String",f1,9c,c4,45)) return 3;
	if (inName==HX_("Unit",a4,f6,82,38)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,_hx_Bool,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,DataSource,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,_hx_Float,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,_hx_Int,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,String,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,Unit,return)

int VariantType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Bool",4a,b0,f4,2b)) return 1;
	if (inName==HX_("DataSource",c5,7a,84,14)) return 1;
	if (inName==HX_("Float",7c,35,c4,95)) return 1;
	if (inName==HX_("Int",cf,c4,37,00)) return 1;
	if (inName==HX_("String",f1,9c,c4,45)) return 1;
	if (inName==HX_("Unit",a4,f6,82,38)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val VariantType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Bool",4a,b0,f4,2b)) return _hx_Bool_dyn();
	if (inName==HX_("DataSource",c5,7a,84,14)) return DataSource_dyn();
	if (inName==HX_("Float",7c,35,c4,95)) return _hx_Float_dyn();
	if (inName==HX_("Int",cf,c4,37,00)) return _hx_Int_dyn();
	if (inName==HX_("String",f1,9c,c4,45)) return String_dyn();
	if (inName==HX_("Unit",a4,f6,82,38)) return Unit_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String VariantType_obj_sStaticFields[] = {
	HX_("Int",cf,c4,37,00),
	HX_("Float",7c,35,c4,95),
	HX_("Unit",a4,f6,82,38),
	HX_("String",f1,9c,c4,45),
	HX_("Bool",4a,b0,f4,2b),
	HX_("DataSource",c5,7a,84,14),
	::String(null())
};

static void VariantType_obj_sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void VariantType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VariantType_obj::__mClass,"__mClass");
};
#endif

hx::Class VariantType_obj::__mClass;

Dynamic __Create_VariantType_obj() { return new VariantType_obj; }

void VariantType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("haxe.ui.util.VariantType","\x65","\x1a","\x43","\xde"), hx::TCanCast< VariantType_obj >,VariantType_obj_sStaticFields,0,
	&__Create_VariantType_obj, &__Create,
	&super::__SGetClass(), &CreateVariantType_obj, VariantType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , VariantType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &VariantType_obj::__GetStatic;
}

void VariantType_obj::__boot()
{
}


} // end namespace haxe
} // end namespace ui
} // end namespace util
