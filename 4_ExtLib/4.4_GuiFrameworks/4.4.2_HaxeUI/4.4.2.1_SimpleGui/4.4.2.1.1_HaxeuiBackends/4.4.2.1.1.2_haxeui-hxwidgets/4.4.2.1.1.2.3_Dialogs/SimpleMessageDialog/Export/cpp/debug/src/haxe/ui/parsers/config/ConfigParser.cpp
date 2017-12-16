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
#ifndef INCLUDED_haxe_ui_parsers_config_ConfigParser
#include <haxe/ui/parsers/config/ConfigParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_config_XMLParser
#include <haxe/ui/parsers/config/XMLParser.h>
#endif
#ifndef INCLUDED_haxe_ui_util_GenericConfig
#include <haxe/ui/util/GenericConfig.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ca08644b7c914983_8_new,"haxe.ui.parsers.config.ConfigParser","new",0x74797773,"haxe.ui.parsers.config.ConfigParser.new","haxe/ui/parsers/config/ConfigParser.hx",8,0x803537dd)
HX_LOCAL_STACK_FRAME(_hx_pos_ca08644b7c914983_13_parse,"haxe.ui.parsers.config.ConfigParser","parse",0xc3816206,"haxe.ui.parsers.config.ConfigParser.parse","haxe/ui/parsers/config/ConfigParser.hx",13,0x803537dd)
HX_LOCAL_STACK_FRAME(_hx_pos_ca08644b7c914983_16_get,"haxe.ui.parsers.config.ConfigParser","get",0x747427a9,"haxe.ui.parsers.config.ConfigParser.get","haxe/ui/parsers/config/ConfigParser.hx",16,0x803537dd)
HX_LOCAL_STACK_FRAME(_hx_pos_ca08644b7c914983_33_defaultParsers,"haxe.ui.parsers.config.ConfigParser","defaultParsers",0xbef3dbc0,"haxe.ui.parsers.config.ConfigParser.defaultParsers","haxe/ui/parsers/config/ConfigParser.hx",33,0x803537dd)
HX_LOCAL_STACK_FRAME(_hx_pos_ca08644b7c914983_38_register,"haxe.ui.parsers.config.ConfigParser","register",0x68647a70,"haxe.ui.parsers.config.ConfigParser.register","haxe/ui/parsers/config/ConfigParser.hx",38,0x803537dd)
namespace haxe{
namespace ui{
namespace parsers{
namespace config{

void ConfigParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ca08644b7c914983_8_new)
            	}

Dynamic ConfigParser_obj::__CreateEmpty() { return new ConfigParser_obj; }

void *ConfigParser_obj::_hx_vtable = 0;

Dynamic ConfigParser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConfigParser_obj > _hx_result = new ConfigParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConfigParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5bdd951d;
}

 ::haxe::ui::util::GenericConfig ConfigParser_obj::parse(::String data){
            	HX_STACKFRAME(&_hx_pos_ca08644b7c914983_13_parse)
HXDLIN(  13)		HX_STACK_DO_THROW(HX_("Config parser not implemented!",6f,75,2f,b3));
HXDLIN(  13)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConfigParser_obj,parse,return )

 ::haxe::ds::StringMap ConfigParser_obj::_parsers;

 ::haxe::ui::parsers::config::ConfigParser ConfigParser_obj::get(::String extension){
            	HX_STACKFRAME(&_hx_pos_ca08644b7c914983_16_get)
HXLINE(  17)		::haxe::ui::parsers::config::ConfigParser_obj::defaultParsers();
HXLINE(  19)		hx::Class cls = ::haxe::ui::parsers::config::ConfigParser_obj::_parsers->get(extension).StaticCast< hx::Class >();
HXLINE(  20)		if (hx::IsNull( cls )) {
HXLINE(  21)			return null();
            		}
HXLINE(  24)		 ::haxe::ui::parsers::config::ConfigParser instance = ( ( ::haxe::ui::parsers::config::ConfigParser)(::Type_obj::createInstance(cls,::cpp::VirtualArray_obj::__new(0))) );
HXLINE(  25)		if (hx::IsNull( instance )) {
HXLINE(  26)			HX_STACK_DO_THROW(((HX_("Could not create config parser instance \"",72,f9,1e,cd) + ::Std_obj::string(cls)) + HX_("\"",22,00,00,00)));
            		}
HXLINE(  29)		return instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConfigParser_obj,get,return )

void ConfigParser_obj::defaultParsers(){
            	HX_STACKFRAME(&_hx_pos_ca08644b7c914983_33_defaultParsers)
HXDLIN(  33)		if (hx::IsNull( ::haxe::ui::parsers::config::ConfigParser_obj::_parsers )) {
HXLINE(  34)			::haxe::ui::parsers::config::ConfigParser_obj::_hx_register(HX_("xml",d7,6d,5b,00),hx::ClassOf< ::haxe::ui::parsers::config::XMLParser >());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ConfigParser_obj,defaultParsers,(void))

void ConfigParser_obj::_hx_register(::String extension,hx::Class cls){
            	HX_GC_STACKFRAME(&_hx_pos_ca08644b7c914983_38_register)
HXLINE(  39)		if (hx::IsNull( ::haxe::ui::parsers::config::ConfigParser_obj::_parsers )) {
HXLINE(  40)			::haxe::ui::parsers::config::ConfigParser_obj::_parsers =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  42)		::haxe::ui::parsers::config::ConfigParser_obj::_parsers->set(extension,cls);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConfigParser_obj,_hx_register,(void))


hx::ObjectPtr< ConfigParser_obj > ConfigParser_obj::__new() {
	hx::ObjectPtr< ConfigParser_obj > __this = new ConfigParser_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ConfigParser_obj > ConfigParser_obj::__alloc(hx::Ctx *_hx_ctx) {
	ConfigParser_obj *__this = (ConfigParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ConfigParser_obj), false, "haxe.ui.parsers.config.ConfigParser"));
	*(void **)__this = ConfigParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ConfigParser_obj::ConfigParser_obj()
{
}

hx::Val ConfigParser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return hx::Val( parse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ConfigParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

bool ConfigParser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_parsers") ) { _parsers=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ConfigParser_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ConfigParser_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &ConfigParser_obj::_parsers,HX_HCSTRING("_parsers","\x35","\x00","\xb9","\x23")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ConfigParser_obj_sMemberFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null()) };

static void ConfigParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConfigParser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ConfigParser_obj::_parsers,"_parsers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConfigParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConfigParser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ConfigParser_obj::_parsers,"_parsers");
};

#endif

hx::Class ConfigParser_obj::__mClass;

static ::String ConfigParser_obj_sStaticFields[] = {
	HX_HCSTRING("_parsers","\x35","\x00","\xb9","\x23"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("defaultParsers","\xf3","\xff","\x40","\x19"),
	HX_HCSTRING("register","\x63","\xa6","\x9f","\xd0"),
	::String(null())
};

void ConfigParser_obj::__register()
{
	hx::Object *dummy = new ConfigParser_obj;
	ConfigParser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.config.ConfigParser","\x01","\x42","\x0e","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConfigParser_obj::__GetStatic;
	__mClass->mSetStaticField = &ConfigParser_obj::__SetStatic;
	__mClass->mMarkFunc = ConfigParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ConfigParser_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ConfigParser_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConfigParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConfigParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConfigParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConfigParser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace config
