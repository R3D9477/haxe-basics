// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_CssClass
#include <haxe/ui/styles/CssClass.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c723d29dfcf72f54_46_new,"haxe.ui.styles.CssClass","new",0x7fae6701,"haxe.ui.styles.CssClass.new","haxe/ui/styles/Defs.hx",46,0xeb11fd55)
namespace haxe{
namespace ui{
namespace styles{

void CssClass_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c723d29dfcf72f54_46_new)
            	}

Dynamic CssClass_obj::__CreateEmpty() { return new CssClass_obj; }

void *CssClass_obj::_hx_vtable = 0;

Dynamic CssClass_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CssClass_obj > _hx_result = new CssClass_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CssClass_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cdb8671;
}


CssClass_obj::CssClass_obj()
{
}

void CssClass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CssClass);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(pseudoClass,"pseudoClass");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void CssClass_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(pseudoClass,"pseudoClass");
	HX_VISIT_MEMBER_NAME(id,"id");
}

hx::Val CssClass_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return hx::Val( node ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return hx::Val( className ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pseudoClass") ) { return hx::Val( pseudoClass ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CssClass_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::haxe::ui::styles::CssClass >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pseudoClass") ) { pseudoClass=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CssClass_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("pseudoClass","\xda","\xb3","\x94","\x9b"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CssClass_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::styles::CssClass*/ ,(int)offsetof(CssClass_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsString,(int)offsetof(CssClass_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{hx::fsString,(int)offsetof(CssClass_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsString,(int)offsetof(CssClass_obj,pseudoClass),HX_HCSTRING("pseudoClass","\xda","\xb3","\x94","\x9b")},
	{hx::fsString,(int)offsetof(CssClass_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CssClass_obj_sStaticStorageInfo = 0;
#endif

static ::String CssClass_obj_sMemberFields[] = {
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("pseudoClass","\xda","\xb3","\x94","\x9b"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	::String(null()) };

static void CssClass_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CssClass_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CssClass_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CssClass_obj::__mClass,"__mClass");
};

#endif

hx::Class CssClass_obj::__mClass;

void CssClass_obj::__register()
{
	hx::Object *dummy = new CssClass_obj;
	CssClass_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.styles.CssClass","\x8f","\xd2","\xd4","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CssClass_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CssClass_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CssClass_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CssClass_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CssClass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CssClass_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
