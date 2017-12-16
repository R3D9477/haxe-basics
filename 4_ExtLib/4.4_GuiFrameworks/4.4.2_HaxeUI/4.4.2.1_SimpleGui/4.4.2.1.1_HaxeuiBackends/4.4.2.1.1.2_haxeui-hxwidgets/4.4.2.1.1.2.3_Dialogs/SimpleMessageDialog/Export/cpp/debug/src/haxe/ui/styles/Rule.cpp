// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_CssClass
#include <haxe/ui/styles/CssClass.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Rule
#include <haxe/ui/styles/Rule.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_35b18640b2b9e87d_11_new,"haxe.ui.styles.Rule","new",0x36233908,"haxe.ui.styles.Rule.new","haxe/ui/styles/Engine.hx",11,0x28b8b461)
namespace haxe{
namespace ui{
namespace styles{

void Rule_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_35b18640b2b9e87d_11_new)
            	}

Dynamic Rule_obj::__CreateEmpty() { return new Rule_obj; }

void *Rule_obj::_hx_vtable = 0;

Dynamic Rule_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Rule_obj > _hx_result = new Rule_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Rule_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4c6aeff8;
}


Rule_obj::Rule_obj()
{
}

void Rule_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rule);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void Rule_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(priority,"priority");
	HX_VISIT_MEMBER_NAME(s,"s");
}

hx::Val Rule_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"c") ) { return hx::Val( c ); }
		if (HX_FIELD_EQ(inName,"s") ) { return hx::Val( s ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return hx::Val( priority ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Rule_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast<  ::haxe::ui::styles::CssClass >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast<  ::haxe::ui::styles::Style >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rule_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb"));
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Rule_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Rule_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::haxe::ui::styles::CssClass*/ ,(int)offsetof(Rule_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Rule_obj,priority),HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb")},
	{hx::fsObject /*::haxe::ui::styles::Style*/ ,(int)offsetof(Rule_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Rule_obj_sStaticStorageInfo = 0;
#endif

static ::String Rule_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb"),
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	::String(null()) };

static void Rule_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rule_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Rule_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rule_obj::__mClass,"__mClass");
};

#endif

hx::Class Rule_obj::__mClass;

void Rule_obj::__register()
{
	hx::Object *dummy = new Rule_obj;
	Rule_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.styles.Rule","\x16","\x55","\x48","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Rule_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Rule_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rule_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Rule_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rule_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rule_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
