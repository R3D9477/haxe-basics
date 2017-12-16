// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_Module
#include <haxe/ui/parsers/modules/Module.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleAnimationEntry
#include <haxe/ui/parsers/modules/ModuleAnimationEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleComponentEntry
#include <haxe/ui/parsers/modules/ModuleComponentEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModulePluginEntry
#include <haxe/ui/parsers/modules/ModulePluginEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModulePreloadEntry
#include <haxe/ui/parsers/modules/ModulePreloadEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModulePropertyEntry
#include <haxe/ui/parsers/modules/ModulePropertyEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleResourceEntry
#include <haxe/ui/parsers/modules/ModuleResourceEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleScriptletEntry
#include <haxe/ui/parsers/modules/ModuleScriptletEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_de4ffa9275aae28e_14_new,"haxe.ui.parsers.modules.Module","new",0xa4d36991,"haxe.ui.parsers.modules.Module.new","haxe/ui/parsers/modules/Module.hx",14,0xa34fcf1d)
HX_LOCAL_STACK_FRAME(_hx_pos_de4ffa9275aae28e_25_validate,"haxe.ui.parsers.modules.Module","validate",0xe5b645c5,"haxe.ui.parsers.modules.Module.validate","haxe/ui/parsers/modules/Module.hx",25,0xa34fcf1d)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void Module_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_de4ffa9275aae28e_14_new)
HXLINE(  15)		this->resourceEntries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  16)		this->componentEntries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  17)		this->scriptletEntries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  18)		this->themeEntries =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  19)		this->plugins = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  20)		this->properties = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  21)		this->animations = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  22)		this->preload = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic Module_obj::__CreateEmpty() { return new Module_obj; }

void *Module_obj::_hx_vtable = 0;

Dynamic Module_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Module_obj > _hx_result = new Module_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Module_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x03091f21;
}

void Module_obj::validate(){
            	HX_STACKFRAME(&_hx_pos_de4ffa9275aae28e_25_validate)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,validate,(void))


hx::ObjectPtr< Module_obj > Module_obj::__new() {
	hx::ObjectPtr< Module_obj > __this = new Module_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Module_obj > Module_obj::__alloc(hx::Ctx *_hx_ctx) {
	Module_obj *__this = (Module_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Module_obj), true, "haxe.ui.parsers.modules.Module"));
	*(void **)__this = Module_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Module_obj::Module_obj()
{
}

void Module_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Module);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(resourceEntries,"resourceEntries");
	HX_MARK_MEMBER_NAME(componentEntries,"componentEntries");
	HX_MARK_MEMBER_NAME(scriptletEntries,"scriptletEntries");
	HX_MARK_MEMBER_NAME(themeEntries,"themeEntries");
	HX_MARK_MEMBER_NAME(plugins,"plugins");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(preload,"preload");
	HX_MARK_END_CLASS();
}

void Module_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(resourceEntries,"resourceEntries");
	HX_VISIT_MEMBER_NAME(componentEntries,"componentEntries");
	HX_VISIT_MEMBER_NAME(scriptletEntries,"scriptletEntries");
	HX_VISIT_MEMBER_NAME(themeEntries,"themeEntries");
	HX_VISIT_MEMBER_NAME(plugins,"plugins");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(preload,"preload");
}

hx::Val Module_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"plugins") ) { return hx::Val( plugins ); }
		if (HX_FIELD_EQ(inName,"preload") ) { return hx::Val( preload ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return hx::Val( validate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return hx::Val( properties ); }
		if (HX_FIELD_EQ(inName,"animations") ) { return hx::Val( animations ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"themeEntries") ) { return hx::Val( themeEntries ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resourceEntries") ) { return hx::Val( resourceEntries ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"componentEntries") ) { return hx::Val( componentEntries ); }
		if (HX_FIELD_EQ(inName,"scriptletEntries") ) { return hx::Val( scriptletEntries ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Module_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"plugins") ) { plugins=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preload") ) { preload=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"themeEntries") ) { themeEntries=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resourceEntries") ) { resourceEntries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"componentEntries") ) { componentEntries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scriptletEntries") ) { scriptletEntries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Module_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("resourceEntries","\x22","\x4e","\xab","\xef"));
	outFields->push(HX_HCSTRING("componentEntries","\x13","\xa6","\xf8","\x9c"));
	outFields->push(HX_HCSTRING("scriptletEntries","\x80","\x74","\xd1","\x17"));
	outFields->push(HX_HCSTRING("themeEntries","\x47","\x9a","\xdb","\xaa"));
	outFields->push(HX_HCSTRING("plugins","\x60","\xd2","\x35","\x02"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"));
	outFields->push(HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Module_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Module_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Module_obj,resourceEntries),HX_HCSTRING("resourceEntries","\x22","\x4e","\xab","\xef")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Module_obj,componentEntries),HX_HCSTRING("componentEntries","\x13","\xa6","\xf8","\x9c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Module_obj,scriptletEntries),HX_HCSTRING("scriptletEntries","\x80","\x74","\xd1","\x17")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Module_obj,themeEntries),HX_HCSTRING("themeEntries","\x47","\x9a","\xdb","\xaa")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Module_obj,plugins),HX_HCSTRING("plugins","\x60","\xd2","\x35","\x02")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Module_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Module_obj,animations),HX_HCSTRING("animations","\xef","\x34","\x1c","\x83")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Module_obj,preload),HX_HCSTRING("preload","\xc9","\x47","\x43","\x35")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Module_obj_sStaticStorageInfo = 0;
#endif

static ::String Module_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("resourceEntries","\x22","\x4e","\xab","\xef"),
	HX_HCSTRING("componentEntries","\x13","\xa6","\xf8","\x9c"),
	HX_HCSTRING("scriptletEntries","\x80","\x74","\xd1","\x17"),
	HX_HCSTRING("themeEntries","\x47","\x9a","\xdb","\xaa"),
	HX_HCSTRING("plugins","\x60","\xd2","\x35","\x02"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"),
	HX_HCSTRING("preload","\xc9","\x47","\x43","\x35"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	::String(null()) };

static void Module_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Module_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Module_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Module_obj::__mClass,"__mClass");
};

#endif

hx::Class Module_obj::__mClass;

void Module_obj::__register()
{
	hx::Object *dummy = new Module_obj;
	Module_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.Module","\x1f","\x4d","\x81","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Module_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Module_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Module_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Module_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Module_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Module_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
