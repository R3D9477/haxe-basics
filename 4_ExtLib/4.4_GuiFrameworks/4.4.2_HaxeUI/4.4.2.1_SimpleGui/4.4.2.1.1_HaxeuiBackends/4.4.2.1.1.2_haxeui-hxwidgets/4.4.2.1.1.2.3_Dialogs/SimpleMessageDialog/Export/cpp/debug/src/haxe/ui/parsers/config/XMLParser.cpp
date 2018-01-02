// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d2fef082fc19f057_7_new,"haxe.ui.parsers.config.XMLParser","new",0x8dc00d48,"haxe.ui.parsers.config.XMLParser.new","haxe/ui/parsers/config/XMLParser.hx",7,0xff4a22a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d2fef082fc19f057_10_parse,"haxe.ui.parsers.config.XMLParser","parse",0xabf8d71b,"haxe.ui.parsers.config.XMLParser.parse","haxe/ui/parsers/config/XMLParser.hx",10,0xff4a22a8)
HX_LOCAL_STACK_FRAME(_hx_pos_d2fef082fc19f057_21_parseAddionalConfig,"haxe.ui.parsers.config.XMLParser","parseAddionalConfig",0x26782bcf,"haxe.ui.parsers.config.XMLParser.parseAddionalConfig","haxe/ui/parsers/config/XMLParser.hx",21,0xff4a22a8)
namespace haxe{
namespace ui{
namespace parsers{
namespace config{

void XMLParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d2fef082fc19f057_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic XMLParser_obj::__CreateEmpty() { return new XMLParser_obj; }

void *XMLParser_obj::_hx_vtable = 0;

Dynamic XMLParser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< XMLParser_obj > _hx_result = new XMLParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool XMLParser_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0cafecba) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0cafecba;
	} else {
		return inClassId==(int)0x5bdd951d;
	}
}

 ::haxe::ui::util::GenericConfig XMLParser_obj::parse(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_d2fef082fc19f057_10_parse)
HXLINE(  11)		 ::haxe::ui::util::GenericConfig config =  ::haxe::ui::util::GenericConfig_obj::__alloc( HX_CTX );
HXLINE(  13)		 ::Xml xml = ::Xml_obj::parse(data)->firstElement();
HXLINE(  14)		{
HXLINE(  14)			 ::Dynamic el = xml->elements();
HXDLIN(  14)			while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  14)				 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  15)				this->parseAddionalConfig(el1,config);
            			}
            		}
HXLINE(  18)		return config;
            	}


void XMLParser_obj::parseAddionalConfig( ::Xml node, ::haxe::ui::util::GenericConfig parent){
            	HX_STACKFRAME(&_hx_pos_d2fef082fc19f057_21_parseAddionalConfig)
HXLINE(  22)		if ((node->nodeType != ::Xml_obj::Element)) {
HXLINE(  22)			HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + node->nodeType));
            		}
HXDLIN(  22)		 ::haxe::ui::util::GenericConfig group = parent->addSection(node->nodeName);
HXLINE(  23)		{
HXLINE(  23)			 ::Dynamic attr = node->attributes();
HXDLIN(  23)			while(( (bool)(attr->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  23)				::String attr1 = ( (::String)(attr->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  24)				::Dynamic this1 = group->values;
HXDLIN(  24)				( ( ::haxe::ds::StringMap)(this1) )->set(attr1,node->get(attr1));
            			}
            		}
HXLINE(  26)		{
HXLINE(  26)			 ::Dynamic el = node->elements();
HXDLIN(  26)			while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  26)				 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  27)				this->parseAddionalConfig(el1,group);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(XMLParser_obj,parseAddionalConfig,(void))


hx::ObjectPtr< XMLParser_obj > XMLParser_obj::__new() {
	hx::ObjectPtr< XMLParser_obj > __this = new XMLParser_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< XMLParser_obj > XMLParser_obj::__alloc(hx::Ctx *_hx_ctx) {
	XMLParser_obj *__this = (XMLParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(XMLParser_obj), false, "haxe.ui.parsers.config.XMLParser"));
	*(void **)__this = XMLParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

XMLParser_obj::XMLParser_obj()
{
}

hx::Val XMLParser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return hx::Val( parse_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"parseAddionalConfig") ) { return hx::Val( parseAddionalConfig_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *XMLParser_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *XMLParser_obj_sStaticStorageInfo = 0;
#endif

static ::String XMLParser_obj_sMemberFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("parseAddionalConfig","\xe7","\x9e","\xdd","\x2e"),
	::String(null()) };

static void XMLParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XMLParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void XMLParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XMLParser_obj::__mClass,"__mClass");
};

#endif

hx::Class XMLParser_obj::__mClass;

void XMLParser_obj::__register()
{
	hx::Object *dummy = new XMLParser_obj;
	XMLParser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.config.XMLParser","\x56","\x09","\x56","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = XMLParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(XMLParser_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< XMLParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = XMLParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XMLParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XMLParser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace config
