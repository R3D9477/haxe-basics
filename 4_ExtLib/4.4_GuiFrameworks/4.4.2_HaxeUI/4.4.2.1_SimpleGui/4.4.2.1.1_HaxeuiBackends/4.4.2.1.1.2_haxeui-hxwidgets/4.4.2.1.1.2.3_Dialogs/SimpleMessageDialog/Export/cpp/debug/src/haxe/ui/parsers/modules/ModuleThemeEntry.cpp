// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleThemeEntry
#include <haxe/ui/parsers/modules/ModuleThemeEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleThemeStyleEntry
#include <haxe/ui/parsers/modules/ModuleThemeStyleEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9047560f166f5855_64_new,"haxe.ui.parsers.modules.ModuleThemeEntry","new",0xffd30c9a,"haxe.ui.parsers.modules.ModuleThemeEntry.new","haxe/ui/parsers/modules/Module.hx",64,0xa34fcf1d)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ModuleThemeEntry_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9047560f166f5855_64_new)
HXDLIN(  64)		this->styles = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic ModuleThemeEntry_obj::__CreateEmpty() { return new ModuleThemeEntry_obj; }

void *ModuleThemeEntry_obj::_hx_vtable = 0;

Dynamic ModuleThemeEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModuleThemeEntry_obj > _hx_result = new ModuleThemeEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModuleThemeEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17a889c6;
}


hx::ObjectPtr< ModuleThemeEntry_obj > ModuleThemeEntry_obj::__new() {
	hx::ObjectPtr< ModuleThemeEntry_obj > __this = new ModuleThemeEntry_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ModuleThemeEntry_obj > ModuleThemeEntry_obj::__alloc(hx::Ctx *_hx_ctx) {
	ModuleThemeEntry_obj *__this = (ModuleThemeEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ModuleThemeEntry_obj), true, "haxe.ui.parsers.modules.ModuleThemeEntry"));
	*(void **)__this = ModuleThemeEntry_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ModuleThemeEntry_obj::ModuleThemeEntry_obj()
{
}

void ModuleThemeEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModuleThemeEntry);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(styles,"styles");
	HX_MARK_END_CLASS();
}

void ModuleThemeEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(styles,"styles");
}

hx::Val ModuleThemeEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"styles") ) { return hx::Val( styles ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ModuleThemeEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"styles") ) { styles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModuleThemeEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("styles","\x22","\xe6","\xd2","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ModuleThemeEntry_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ModuleThemeEntry_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(ModuleThemeEntry_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ModuleThemeEntry_obj,styles),HX_HCSTRING("styles","\x22","\xe6","\xd2","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ModuleThemeEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String ModuleThemeEntry_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("styles","\x22","\xe6","\xd2","\x15"),
	::String(null()) };

static void ModuleThemeEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModuleThemeEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModuleThemeEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModuleThemeEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class ModuleThemeEntry_obj::__mClass;

void ModuleThemeEntry_obj::__register()
{
	hx::Object *dummy = new ModuleThemeEntry_obj;
	ModuleThemeEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ModuleThemeEntry","\xa8","\x77","\xbe","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModuleThemeEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ModuleThemeEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModuleThemeEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModuleThemeEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModuleThemeEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModuleThemeEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
