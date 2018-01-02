// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_JSONParser
#include <haxe/ui/parsers/modules/JSONParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_Module
#include <haxe/ui/parsers/modules/Module.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleParser
#include <haxe/ui/parsers/modules/ModuleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ObjectParser
#include <haxe/ui/parsers/modules/ObjectParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_XMLParser
#include <haxe/ui/parsers/modules/XMLParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_32d1a25a3616a901_6_new,"haxe.ui.parsers.modules.ModuleParser","new",0x99c12750,"haxe.ui.parsers.modules.ModuleParser.new","haxe/ui/parsers/modules/ModuleParser.hx",6,0x01b238be)
HX_LOCAL_STACK_FRAME(_hx_pos_32d1a25a3616a901_10_parse,"haxe.ui.parsers.modules.ModuleParser","parse",0x8dfa8323,"haxe.ui.parsers.modules.ModuleParser.parse","haxe/ui/parsers/modules/ModuleParser.hx",10,0x01b238be)
HX_LOCAL_STACK_FRAME(_hx_pos_32d1a25a3616a901_13_get,"haxe.ui.parsers.modules.ModuleParser","get",0x99bbd786,"haxe.ui.parsers.modules.ModuleParser.get","haxe/ui/parsers/modules/ModuleParser.hx",13,0x01b238be)
HX_LOCAL_STACK_FRAME(_hx_pos_32d1a25a3616a901_30_defaultParsers,"haxe.ui.parsers.modules.ModuleParser","defaultParsers",0xbf3e2f03,"haxe.ui.parsers.modules.ModuleParser.defaultParsers","haxe/ui/parsers/modules/ModuleParser.hx",30,0x01b238be)
HX_LOCAL_STACK_FRAME(_hx_pos_32d1a25a3616a901_40_register,"haxe.ui.parsers.modules.ModuleParser","register",0x92c12973,"haxe.ui.parsers.modules.ModuleParser.register","haxe/ui/parsers/modules/ModuleParser.hx",40,0x01b238be)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ModuleParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_32d1a25a3616a901_6_new)
            	}

Dynamic ModuleParser_obj::__CreateEmpty() { return new ModuleParser_obj; }

void *ModuleParser_obj::_hx_vtable = 0;

Dynamic ModuleParser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModuleParser_obj > _hx_result = new ModuleParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModuleParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x078bbee0;
}

 ::haxe::ui::parsers::modules::Module ModuleParser_obj::parse(::String data){
            	HX_STACKFRAME(&_hx_pos_32d1a25a3616a901_10_parse)
HXDLIN(  10)		HX_STACK_DO_THROW(HX_("Module parser not implemented!",59,41,bb,2a));
HXDLIN(  10)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ModuleParser_obj,parse,return )

 ::haxe::ds::StringMap ModuleParser_obj::_parsers;

 ::haxe::ui::parsers::modules::ModuleParser ModuleParser_obj::get(::String extension){
            	HX_STACKFRAME(&_hx_pos_32d1a25a3616a901_13_get)
HXLINE(  14)		::haxe::ui::parsers::modules::ModuleParser_obj::defaultParsers();
HXLINE(  16)		hx::Class cls = ::haxe::ui::parsers::modules::ModuleParser_obj::_parsers->get(extension).StaticCast< hx::Class >();
HXLINE(  17)		if (hx::IsNull( cls )) {
HXLINE(  18)			return null();
            		}
HXLINE(  21)		 ::haxe::ui::parsers::modules::ModuleParser instance = ( ( ::haxe::ui::parsers::modules::ModuleParser)(::Type_obj::createInstance(cls,::cpp::VirtualArray_obj::__new(0))) );
HXLINE(  22)		if (hx::IsNull( instance )) {
HXLINE(  23)			HX_STACK_DO_THROW(((HX_("Could not create module parser instance \"",dc,99,8f,ee) + ::Std_obj::string(cls)) + HX_("\"",22,00,00,00)));
            		}
HXLINE(  26)		return instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ModuleParser_obj,get,return )

void ModuleParser_obj::defaultParsers(){
            	HX_STACKFRAME(&_hx_pos_32d1a25a3616a901_30_defaultParsers)
HXDLIN(  30)		if (hx::IsNull( ::haxe::ui::parsers::modules::ModuleParser_obj::_parsers )) {
HXLINE(  31)			::haxe::ui::parsers::modules::ModuleParser_obj::_hx_register(HX_("xml",d7,6d,5b,00),hx::ClassOf< ::haxe::ui::parsers::modules::XMLParser >());
HXLINE(  32)			::haxe::ui::parsers::modules::ModuleParser_obj::_hx_register(HX_("json",28,42,68,46),hx::ClassOf< ::haxe::ui::parsers::modules::JSONParser >());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ModuleParser_obj,defaultParsers,(void))

void ModuleParser_obj::_hx_register(::String extension,hx::Class cls){
            	HX_GC_STACKFRAME(&_hx_pos_32d1a25a3616a901_40_register)
HXLINE(  41)		if (hx::IsNull( ::haxe::ui::parsers::modules::ModuleParser_obj::_parsers )) {
HXLINE(  42)			::haxe::ui::parsers::modules::ModuleParser_obj::_parsers =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  44)		::haxe::ui::parsers::modules::ModuleParser_obj::_parsers->set(extension,cls);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ModuleParser_obj,_hx_register,(void))


hx::ObjectPtr< ModuleParser_obj > ModuleParser_obj::__new() {
	hx::ObjectPtr< ModuleParser_obj > __this = new ModuleParser_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ModuleParser_obj > ModuleParser_obj::__alloc(hx::Ctx *_hx_ctx) {
	ModuleParser_obj *__this = (ModuleParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ModuleParser_obj), false, "haxe.ui.parsers.modules.ModuleParser"));
	*(void **)__this = ModuleParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ModuleParser_obj::ModuleParser_obj()
{
}

hx::Val ModuleParser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return hx::Val( parse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ModuleParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_parsers") ) { outValue = ( _parsers ); return true; }
		if (HX_FIELD_EQ(inName,"register") ) { outValue = _hx_register_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultParsers") ) { outValue = defaultParsers_dyn(); return true; }
	}
	return false;
}

bool ModuleParser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_parsers") ) { _parsers=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ModuleParser_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ModuleParser_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &ModuleParser_obj::_parsers,HX_HCSTRING("_parsers","\x35","\x00","\xb9","\x23")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ModuleParser_obj_sMemberFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null()) };

static void ModuleParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModuleParser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ModuleParser_obj::_parsers,"_parsers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModuleParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModuleParser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ModuleParser_obj::_parsers,"_parsers");
};

#endif

hx::Class ModuleParser_obj::__mClass;

static ::String ModuleParser_obj_sStaticFields[] = {
	HX_HCSTRING("_parsers","\x35","\x00","\xb9","\x23"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("defaultParsers","\xf3","\xff","\x40","\x19"),
	HX_HCSTRING("register","\x63","\xa6","\x9f","\xd0"),
	::String(null())
};

void ModuleParser_obj::__register()
{
	hx::Object *dummy = new ModuleParser_obj;
	ModuleParser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ModuleParser","\x5e","\x7f","\x2f","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ModuleParser_obj::__GetStatic;
	__mClass->mSetStaticField = &ModuleParser_obj::__SetStatic;
	__mClass->mMarkFunc = ModuleParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ModuleParser_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ModuleParser_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModuleParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModuleParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModuleParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModuleParser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
