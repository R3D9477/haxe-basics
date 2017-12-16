// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_parsers_modules_ModulePreloadEntry
#include <haxe/ui/parsers/modules/ModulePreloadEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2b3dce8ae26aed31_129_new,"haxe.ui.parsers.modules.ModulePreloadEntry","new",0x6c9fa89a,"haxe.ui.parsers.modules.ModulePreloadEntry.new","haxe/ui/parsers/modules/Module.hx",129,0xa34fcf1d)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ModulePreloadEntry_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2b3dce8ae26aed31_129_new)
            	}

Dynamic ModulePreloadEntry_obj::__CreateEmpty() { return new ModulePreloadEntry_obj; }

void *ModulePreloadEntry_obj::_hx_vtable = 0;

Dynamic ModulePreloadEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModulePreloadEntry_obj > _hx_result = new ModulePreloadEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModulePreloadEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x762dcf72;
}


ModulePreloadEntry_obj::ModulePreloadEntry_obj()
{
}

void ModulePreloadEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModulePreloadEntry);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void ModulePreloadEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(id,"id");
}

hx::Val ModulePreloadEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ModulePreloadEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModulePreloadEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ModulePreloadEntry_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ModulePreloadEntry_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(ModulePreloadEntry_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ModulePreloadEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String ModulePreloadEntry_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	::String(null()) };

static void ModulePreloadEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModulePreloadEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModulePreloadEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModulePreloadEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class ModulePreloadEntry_obj::__mClass;

void ModulePreloadEntry_obj::__register()
{
	hx::Object *dummy = new ModulePreloadEntry_obj;
	ModulePreloadEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ModulePreloadEntry","\xa8","\x13","\x0d","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModulePreloadEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ModulePreloadEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModulePreloadEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModulePreloadEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModulePreloadEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModulePreloadEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
