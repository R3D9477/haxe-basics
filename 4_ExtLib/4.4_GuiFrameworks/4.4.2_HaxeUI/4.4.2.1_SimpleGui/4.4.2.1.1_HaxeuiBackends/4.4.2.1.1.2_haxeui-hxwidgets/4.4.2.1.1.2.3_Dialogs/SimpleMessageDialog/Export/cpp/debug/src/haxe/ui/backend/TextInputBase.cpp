// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputBase
#include <haxe/ui/backend/TextInputBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c6fa3b35afccffa1_9_new,"haxe.ui.backend.TextInputBase","new",0xa13eee74,"haxe.ui.backend.TextInputBase.new","haxe/ui/backend/TextInputBase.hx",9,0xd841841d)
namespace haxe{
namespace ui{
namespace backend{

void TextInputBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c6fa3b35afccffa1_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic TextInputBase_obj::__CreateEmpty() { return new TextInputBase_obj; }

void *TextInputBase_obj::_hx_vtable = 0;

Dynamic TextInputBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextInputBase_obj > _hx_result = new TextInputBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextInputBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x43899dcc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x43899dcc;
	} else {
		return inClassId==(int)0x621753b8;
	}
}


TextInputBase_obj::TextInputBase_obj()
{
}

hx::Val TextInputBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_password") ) { return hx::Val( _password ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hscrollPos") ) { return hx::Val( _hscrollPos ); }
		if (HX_FIELD_EQ(inName,"_vscrollPos") ) { return hx::Val( _vscrollPos ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextInputBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_password") ) { _password=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hscrollPos") ) { _hscrollPos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vscrollPos") ) { _vscrollPos=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextInputBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_password","\x7a","\x1a","\x66","\x90"));
	outFields->push(HX_HCSTRING("_hscrollPos","\x3e","\x83","\xd1","\x2e"));
	outFields->push(HX_HCSTRING("_vscrollPos","\x70","\x11","\xe4","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextInputBase_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(TextInputBase_obj,_password),HX_HCSTRING("_password","\x7a","\x1a","\x66","\x90")},
	{hx::fsFloat,(int)offsetof(TextInputBase_obj,_hscrollPos),HX_HCSTRING("_hscrollPos","\x3e","\x83","\xd1","\x2e")},
	{hx::fsFloat,(int)offsetof(TextInputBase_obj,_vscrollPos),HX_HCSTRING("_vscrollPos","\x70","\x11","\xe4","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextInputBase_obj_sStaticStorageInfo = 0;
#endif

static ::String TextInputBase_obj_sMemberFields[] = {
	HX_HCSTRING("_password","\x7a","\x1a","\x66","\x90"),
	HX_HCSTRING("_hscrollPos","\x3e","\x83","\xd1","\x2e"),
	HX_HCSTRING("_vscrollPos","\x70","\x11","\xe4","\xb2"),
	::String(null()) };

static void TextInputBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextInputBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextInputBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextInputBase_obj::__mClass,"__mClass");
};

#endif

hx::Class TextInputBase_obj::__mClass;

void TextInputBase_obj::__register()
{
	hx::Object *dummy = new TextInputBase_obj;
	TextInputBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.backend.TextInputBase","\x82","\xe4","\xa9","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextInputBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextInputBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextInputBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextInputBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextInputBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextInputBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
