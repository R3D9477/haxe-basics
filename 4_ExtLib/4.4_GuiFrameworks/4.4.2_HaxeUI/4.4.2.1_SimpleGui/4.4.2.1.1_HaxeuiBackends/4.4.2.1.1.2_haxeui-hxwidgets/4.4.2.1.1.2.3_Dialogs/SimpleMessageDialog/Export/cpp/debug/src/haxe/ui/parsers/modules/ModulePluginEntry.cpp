// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModulePluginEntry
#include <haxe/ui/parsers/modules/ModulePluginEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b3d3a0f1d39f8172_83_new,"haxe.ui.parsers.modules.ModulePluginEntry","new",0x9c2a76d2,"haxe.ui.parsers.modules.ModulePluginEntry.new","haxe/ui/parsers/modules/Module.hx",83,0xa34fcf1d)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ModulePluginEntry_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b3d3a0f1d39f8172_83_new)
HXDLIN(  83)		this->config =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ModulePluginEntry_obj::__CreateEmpty() { return new ModulePluginEntry_obj; }

void *ModulePluginEntry_obj::_hx_vtable = 0;

Dynamic ModulePluginEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModulePluginEntry_obj > _hx_result = new ModulePluginEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModulePluginEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c9dace6;
}


hx::ObjectPtr< ModulePluginEntry_obj > ModulePluginEntry_obj::__new() {
	hx::ObjectPtr< ModulePluginEntry_obj > __this = new ModulePluginEntry_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ModulePluginEntry_obj > ModulePluginEntry_obj::__alloc(hx::Ctx *_hx_ctx) {
	ModulePluginEntry_obj *__this = (ModulePluginEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ModulePluginEntry_obj), true, "haxe.ui.parsers.modules.ModulePluginEntry"));
	*(void **)__this = ModulePluginEntry_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ModulePluginEntry_obj::ModulePluginEntry_obj()
{
}

void ModulePluginEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModulePluginEntry);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(condition,"condition");
	HX_MARK_END_CLASS();
}

void ModulePluginEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(condition,"condition");
}

hx::Val ModulePluginEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return hx::Val( config ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return hx::Val( className ); }
		if (HX_FIELD_EQ(inName,"condition") ) { return hx::Val( condition ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ModulePluginEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"condition") ) { condition=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModulePluginEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ModulePluginEntry_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ModulePluginEntry_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(ModulePluginEntry_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ModulePluginEntry_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsString,(int)offsetof(ModulePluginEntry_obj,condition),HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ModulePluginEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String ModulePluginEntry_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("condition","\x9b","\xe9","\x33","\xfc"),
	::String(null()) };

static void ModulePluginEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModulePluginEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModulePluginEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModulePluginEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class ModulePluginEntry_obj::__mClass;

void ModulePluginEntry_obj::__register()
{
	hx::Object *dummy = new ModulePluginEntry_obj;
	ModulePluginEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ModulePluginEntry","\xe0","\x65","\x16","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModulePluginEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ModulePluginEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModulePluginEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModulePluginEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModulePluginEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModulePluginEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
